#include "mod/TrucosMod.h"
#include "mod/PackTrace.h"

#include <cstdlib>
#include <string>

#include <pl/Mod.hpp>
#include <pl/ModMenu.hpp>
#include <pl/memory/Hook.hpp>
#include <pl/memory/Signature.hpp>

namespace trucos {

namespace {

constexpr const char *kJumpId = "trucos_jump";
constexpr const char *kGhostId = "trucos_ghost";
constexpr const char *kProbeId = "trucos_probe_a";
constexpr const char *kTraceId = "trucos_packtrace";

// Minecraft 1.26.60.04 (arm64-v8a), libminecraftpe.so. Each signature is a unique match.
// Jump: tested in game, works.
constexpr const char *kJumpSignature = "A1 00 00 36 A8 99 99 52 88 C9 A7 72 00 01 27 1E C0 03 5F D6";
// Ghost collision / shadow: Actor vtable slot 35 (`ldr x8,[x0,#0x230]; ldr s0,[x8,#0x18]; ret`).
// Tested in game: enlarges the shadow and the invisible collision of entities (no extra damage).
constexpr const char *kGhostSignature = "08 18 41 F9 00 19 40 BD C0 03 5F D6 08 A4 49 39";
// Probe A: Actor vtable slot 113 (`ldr x8,[x0,#0x238]; ldr s0,[x8,#4]; ret`). Unknown effect.
constexpr const char *kProbeSignature = "08 1C 41 F9 00 05 40 BD C0 03 5F D6 28 1C 41 F9";

using JumpFn = float (*)(void *, bool);
using SpeedFn = float (*)(void *);
JumpFn gOrigJump = nullptr;
SpeedFn gOrigGhost = nullptr;
SpeedFn gOrigProbe = nullptr;

float jumpDetour(void *self, bool flag) {
    const float v = gOrigJump ? gOrigJump(self, flag) : 0.42f;
    return v * TrucosMod::instance().jumpMultiplier();
}

float ghostDetour(void *self) {
    const float v = gOrigGhost ? gOrigGhost(self) : 0.1f;
    return v * TrucosMod::instance().ghostMultiplier();
}

float probeDetour(void *self) {
    const float v = gOrigProbe ? gOrigProbe(self) : 0.1f;
    return v * TrucosMod::instance().probeMultiplier();
}

// Returns true if the hook was installed.
bool installHook(const char *sig, void *detour, void **orig, uintptr_t &addrOut) {
    addrOut = pl::memory::resolveSignature(sig, "libminecraftpe.so");
    if (addrOut == 0)
        return false;
    return pl::memory::hook(reinterpret_cast<pl::memory::FuncPtr>(addrOut),
                            reinterpret_cast<pl::memory::FuncPtr>(detour),
                            reinterpret_cast<pl::memory::FuncPtr *>(orig)) == 0;
}

} // namespace

TrucosMod &TrucosMod::instance() {
    static TrucosMod impl;
    return impl;
}

TrucosMod::TrucosMod() : mSelf(*ll::mod::NativeMod::current()) {}

bool TrucosMod::load() {
    getSelf().getLogger().info("Trucos loaded (target: 1.26.60.04 y 1.26.62.01)");
    return true;
}

bool TrucosMod::enable() {
    auto &log = getSelf().getLogger();

    uintptr_t jumpAddr = 0, ghostAddr = 0, probeAddr = 0;
    const bool jumpHooked =
        installHook(kJumpSignature, reinterpret_cast<void *>(&jumpDetour),
                    reinterpret_cast<void **>(&gOrigJump), jumpAddr);
    const bool ghostHooked =
        installHook(kGhostSignature, reinterpret_cast<void *>(&ghostDetour),
                    reinterpret_cast<void **>(&gOrigGhost), ghostAddr);
    const bool probeHooked =
        installHook(kProbeSignature, reinterpret_cast<void *>(&probeDetour),
                    reinterpret_cast<void **>(&gOrigProbe), probeAddr);
    const int traceHooked = PackTrace::install();
    log.info("packtrace: {} de {} funciones enganchadas", traceHooked, PackTrace::totalCount());
    log.info("jump hook: {} ({:#x})", jumpHooked ? "OK" : "FALLO", jumpAddr);
    log.info("ghost hook: {} ({:#x})", ghostHooked ? "OK" : "FALLO", ghostAddr);
    log.info("probe A hook: {} ({:#x})", probeHooked ? "OK" : "FALLO", probeAddr);

    mJumpRegistered =
        pl::modmenu::ModuleBuilder(kJumpId, "Salto alto")
            .description(std::string("Multiplica la fuerza de salto. Enganche: ") +
                         (jumpHooked ? "OK" : "NO ENCONTRADO (version distinta de 1.26.60.04?)"))
            .defaultEnabled(true)
            .onToggle([this](std::string_view, bool on) { mJumpOn = on; })
            .config("multiplier", "Multiplicador de salto", pl::modmenu::ConfigType::SliderFloat,
                    "1.8", "1.0", "6.0")
            .onConfigChanged([this](std::string_view, std::string_view key, std::string_view value) {
                if (key == "multiplier") {
                    const float v = std::strtof(std::string(value).c_str(), nullptr);
                    if (v >= 0.5f && v <= 10.0f)
                        mJumpMul = v;
                }
            })
            .registerModule();

    mGhostRegistered =
        pl::modmenu::ModuleBuilder(kGhostId, "Colision fantasma")
            .description(std::string("Agranda la sombra y la colision invisible de las entidades "
                                     "(no cambia el dano). Enganche: ") +
                         (ghostHooked ? "OK" : "NO ENCONTRADO"))
            .defaultEnabled(false)
            .onToggle([this](std::string_view, bool on) { mGhostOn = on; })
            .config("multiplier", "Tamano", pl::modmenu::ConfigType::SliderFloat, "1.5", "0.5",
                    "4.0")
            .onConfigChanged([this](std::string_view, std::string_view key, std::string_view value) {
                if (key == "multiplier") {
                    const float v = std::strtof(std::string(value).c_str(), nullptr);
                    if (v >= 0.2f && v <= 6.0f)
                        mGhostMul = v;
                }
            })
            .registerModule();

    mProbeRegistered =
        pl::modmenu::ModuleBuilder(kProbeId, "Sondeo A (velocidad?)")
            .description(std::string("EXPERIMENTAL: no se sabe que hace. Activalo y dime que "
                                     "cambia (velocidad, camara, tamano...). Enganche: ") +
                         (probeHooked ? "OK" : "NO ENCONTRADO"))
            .defaultEnabled(false)
            .onToggle([this](std::string_view, bool on) { mProbeOn = on; })
            .config("multiplier", "Multiplicador", pl::modmenu::ConfigType::SliderFloat, "1.5",
                    "0.5", "4.0")
            .onConfigChanged([this](std::string_view, std::string_view key, std::string_view value) {
                if (key == "multiplier") {
                    const float v = std::strtof(std::string(value).c_str(), nullptr);
                    if (v >= 0.2f && v <= 6.0f)
                        mProbeMul = v;
                }
            })
            .registerModule();

    mTraceRegistered =
        pl::modmenu::ModuleBuilder(kTraceId, "Rastreo de packs")
            .description(std::string("Anota que funciones del juego de packs se llaman. Activalo, "
                                     "pulsa Activar/Desactivar en un pack, y desactivalo. Resultado en "
                                     "Android/media/org.levimc.launcher/trucos_packtrace.txt. "
                                     "Enganchadas: ") +
                         std::to_string(traceHooked) + "/" + std::to_string(PackTrace::totalCount()))
            .defaultEnabled(false)
            .onToggle([](std::string_view, bool on) { PackTrace::setEnabled(on); })
            .registerModule();

    if (!mJumpRegistered || !mGhostRegistered || !mProbeRegistered)
        log.error("No se pudo registrar algun modulo en el Mod Menu");
    return true;
}

bool TrucosMod::disable() {
    // Hooks stay installed; with the toggles off both detours are pass-through.
    mJumpOn = false;
    mGhostOn = false;
    mProbeOn = false;
    if (mJumpRegistered) {
        pl::modmenu::unregisterModule(kJumpId);
        mJumpRegistered = false;
    }
    if (mGhostRegistered) {
        pl::modmenu::unregisterModule(kGhostId);
        mGhostRegistered = false;
    }
    PackTrace::setEnabled(false);
    if (mTraceRegistered) {
        pl::modmenu::unregisterModule(kTraceId);
        mTraceRegistered = false;
    }
    if (mProbeRegistered) {
        pl::modmenu::unregisterModule(kProbeId);
        mProbeRegistered = false;
    }
    return true;
}

bool TrucosMod::unload() { return true; }

} // namespace trucos
