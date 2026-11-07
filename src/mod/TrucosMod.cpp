#include "mod/TrucosMod.h"

#include <cstdlib>
#include <string>

#include <pl/Mod.hpp>
#include <pl/ModMenu.hpp>
#include <pl/memory/Hook.hpp>
#include <pl/memory/Signature.hpp>

namespace trucos {

namespace {

constexpr const char *kJumpId = "trucos_jump";
constexpr const char *kSpeedId = "trucos_speed";

// Minecraft 1.26.60.04 (arm64-v8a), libminecraftpe.so. Each signature is a unique match.
// Jump: tested in game, works.
constexpr const char *kJumpSignature = "A1 00 00 36 A8 99 99 52 88 C9 A7 72 00 01 27 1E C0 03 5F D6";
// Speed: EXPERIMENTAL candidate. Mob vtable slot 35: `ldr x8,[x0,#0x230]; ldr s0,[x8,#0x18]; ret`.
constexpr const char *kSpeedSignature = "08 18 41 F9 00 19 40 BD C0 03 5F D6 08 A4 49 39";

using JumpFn = float (*)(void *, bool);
using SpeedFn = float (*)(void *);
JumpFn gOrigJump = nullptr;
SpeedFn gOrigSpeed = nullptr;

float jumpDetour(void *self, bool flag) {
    const float v = gOrigJump ? gOrigJump(self, flag) : 0.42f;
    return v * TrucosMod::instance().jumpMultiplier();
}

float speedDetour(void *self) {
    const float v = gOrigSpeed ? gOrigSpeed(self) : 0.1f;
    return v * TrucosMod::instance().speedMultiplier();
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
    getSelf().getLogger().info("Trucos loaded (target: 1.26.60.04)");
    return true;
}

bool TrucosMod::enable() {
    auto &log = getSelf().getLogger();

    uintptr_t jumpAddr = 0, speedAddr = 0;
    const bool jumpHooked =
        installHook(kJumpSignature, reinterpret_cast<void *>(&jumpDetour),
                    reinterpret_cast<void **>(&gOrigJump), jumpAddr);
    const bool speedHooked =
        installHook(kSpeedSignature, reinterpret_cast<void *>(&speedDetour),
                    reinterpret_cast<void **>(&gOrigSpeed), speedAddr);
    log.info("jump hook: {} ({:#x})", jumpHooked ? "OK" : "FALLO", jumpAddr);
    log.info("speed hook: {} ({:#x})", speedHooked ? "OK" : "FALLO", speedAddr);

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

    mSpeedRegistered =
        pl::modmenu::ModuleBuilder(kSpeedId, "Velocidad (prueba)")
            .description(std::string("EXPERIMENTAL: multiplica la velocidad que devuelve Mob. "
                                     "Puede afectar a otros mobs. Enganche: ") +
                         (speedHooked ? "OK" : "NO ENCONTRADO"))
            .defaultEnabled(false)
            .onToggle([this](std::string_view, bool on) { mSpeedOn = on; })
            .config("multiplier", "Multiplicador de velocidad",
                    pl::modmenu::ConfigType::SliderFloat, "1.5", "0.5", "4.0")
            .onConfigChanged([this](std::string_view, std::string_view key, std::string_view value) {
                if (key == "multiplier") {
                    const float v = std::strtof(std::string(value).c_str(), nullptr);
                    if (v >= 0.2f && v <= 6.0f)
                        mSpeedMul = v;
                }
            })
            .registerModule();

    if (!mJumpRegistered || !mSpeedRegistered)
        log.error("No se pudo registrar algun modulo en el Mod Menu");
    return true;
}

bool TrucosMod::disable() {
    // Hooks stay installed; with the toggles off both detours are pass-through.
    mJumpOn = false;
    mSpeedOn = false;
    if (mJumpRegistered) {
        pl::modmenu::unregisterModule(kJumpId);
        mJumpRegistered = false;
    }
    if (mSpeedRegistered) {
        pl::modmenu::unregisterModule(kSpeedId);
        mSpeedRegistered = false;
    }
    return true;
}

bool TrucosMod::unload() { return true; }

} // namespace trucos
