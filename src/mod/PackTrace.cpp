// GENERADO: rastreador de llamadas a las clases de packs (Minecraft 1.26.62.01 arm64).
// Solo registra QUE funciones se llaman; no cambia nada. Cada gancho comprueba los primeros
// 16 bytes de la funcion; si no coinciden (otra version) no se engancha.
#include "mod/PackTrace.h"

#include <atomic>
#include <cstdio>
#include <cstdint>
#include <cstring>
#include <ctime>
#include <string>

#include <pl/memory/Hook.hpp>

namespace trucos {
namespace {

struct Entry { const char *name; uint64_t va; const char *sig; };
constexpr int kCount = 71;
const Entry kEntries[kCount] = {
    {"ResourcePackManager[0]", 0xcf51b34, "fd7bbda9f50b00f9f44f02a9fd030091"},
    {"ResourcePackManager[1]", 0xcf51d74, "fd7bbea9f30b00f9fd030091f30300aa"},
    {"ResourcePackManager[2]", 0xcf4e490, "ff0301d1fd7b02a9f31b00f9fd830091"},
    {"ResourcePackManager[3]", 0xcf4e4e4, "fd7bbaa9fc6f01a9fa6702a9f85f03a9"},
    {"ResourcePackManager[4]", 0xcf4e984, "fd7bbaa9fc6f01a9fa6702a9f85f03a9"},
    {"ResourcePackManager[5]", 0xcf4ee84, "ff4302d1fd7b05a9f85f06a9f65707a9"},
    {"ResourcePackManager[6]", 0xcf4f0b8, "ff4302d1fd7b05a9f85f06a9f65707a9"},
    {"ResourcePackManager[7]", 0xcf4f280, "fd7bbaa9fc6f01a9fa6702a9f85f03a9"},
    {"ResourcePackManager[8]", 0xcf4f7bc, "ffc301d1fd7b03a9f72300f9f65705a9"},
    {"ResourcePackManager[9]", 0xcf4f91c, "ff0304d1fd7b0aa9fc6f0ba9fa670ca9"},
    {"ResourcePackRepository[0]", 0xceeb074, "ff0302d1fd7b04a9f72b00f9f65706a9"},
    {"ResourcePackRepository[1]", 0xceeb584, "fd7bbea9f30b00f9fd030091f30300aa"},
    {"ResourcePackRepository[2]", 0xceebf00, "ff0303d1fd7b07a9fa6708a9f85f09a9"},
    {"ResourcePackRepository[4]", 0xceec30c, "ff0302d1fd7b02a9fc6f03a9fa6704a9"},
    {"ResourcePackRepository[5]", 0xceec4c4, "fd7bbaa9fc6f01a9fa6702a9f85f03a9"},
    {"ResourcePackRepository[6]", 0xceec178, "fd7bbaa9fc6f01a9fa6702a9f85f03a9"},
    {"ResourcePackRepository[7]", 0xceec830, "ff4301d1fd7b02a9f65703a9f44f04a9"},
    {"ResourcePackRepository[8]", 0xceec93c, "ff8304d1fd7b0ca9fc6f0da9fa670ea9"},
    {"ResourcePackRepository[9]", 0xceed404, "fd7bbda9f50b00f9f44f02a9fd030091"},
    {"ResourcePackRepository[10]", 0xceeb5d0, "fd7bbaa9fc6f01a9fa6702a9f85f03a9"},
    {"ResourcePackRepository[13]", 0xceebea8, "093840f92a2540a90a2500a9e90000b4"},
    {"ResourcePackRepository[14]", 0xceebed4, "093840f92a2541a90a2500a9e90000b4"},
    {"ResourcePackRepository[15]", 0xceed488, "fd7bbca9f85f01a9f65702a9f44f03a9"},
    {"ResourcePackRepository[16]", 0xceed57c, "ff0307d1fd7b17a9fc6718a9f85f19a9"},
    {"ResourcePackRepository[17]", 0xceed82c, "ffc307d1fd7b19a9fc6f1aa9fa671ba9"},
    {"ResourcePackRepository[18]", 0xceede5c, "fd7bbea9f30b00f9fd030091f30300aa"},
    {"ResourcePackRepository[19]", 0xceedf98, "fd7bbea9f30b00f9fd030091080040f9"},
    {"ResourcePackRepository[20]", 0xceee024, "fd7bbea9f30b00f9fd030091080040f9"},
    {"ResourcePackRepository[21]", 0xceedf04, "ff0301d1fd7b02a9f44f03a9fd830091"},
    {"ResourcePackRepository[22]", 0xceedfcc, "fd7bbea9f44f01a9fd03009128004039"},
    {"ResourcePackRepository[23]", 0xceee058, "fd7bbea9f30b00f9fd030091f30300aa"},
    {"ResourcePackRepository[24]", 0xceee094, "ff0301d1fd7b01a9f65702a9f44f03a9"},
    {"ResourcePackRepository[25]", 0xceee2ec, "ffc300d1fd7b01a9f44f02a9fd430091"},
    {"ResourcePackRepository[26]", 0xceee36c, "ff8301d1fd7b04a9f44f05a9fd030191"},
    {"ResourcePackRepository[27]", 0xceee4b4, "ff8301d1fd7b04a9f44f05a9fd030191"},
    {"ResourcePackRepository[28]", 0xceee5fc, "ff8301d1fd7b04a9f44f05a9fd030191"},
    {"ResourcePackRepository[29]", 0xceee6c0, "ff8301d1fd7b04a9f44f05a9fd030191"},
    {"ResourcePackRepository[30]", 0xceee784, "ff8301d1fd7b04a9f44f05a9fd030191"},
    {"ResourcePackRepository[31]", 0xceee8f4, "ff8301d1fd7b04a9f44f05a9fd030191"},
    {"ResourcePackRepository[32]", 0xceeea64, "ff8301d1fd7b04a9f44f05a9fd030191"},
    {"ResourcePackRepository[33]", 0xceeeb28, "ff0303d1fd7b08a9f85f09a9f6570aa9"},
    {"ResourcePackRepository[34]", 0xceeed34, "ff8301d1fd7b04a9f44f05a9fd030191"},
    {"ResourcePackRepository[35]", 0xceeedf8, "ff8301d1fd7b04a9f44f05a9fd030191"},
    {"ResourcePackRepository[36]", 0xceefe50, "ff4301d1fd7b03a9f44f04a9fdc30091"},
    {"ResourcePackRepository[37]", 0xcef03c8, "ff8301d1fd7b03a9f52300f9f44f05a9"},
    {"ResourcePackRepository[38]", 0xcef04b8, "ff0306d1fd7b13a9fca300f9f85f15a9"},
    {"ResourcePackRepository[39]", 0xcef08c8, "fd7bbda9f50b00f9f44f02a9fd030091"},
    {"ResourcePackRepository[43]", 0xceeef54, "fd7bbaa9fc6f01a9fa6702a9f85f03a9"},
    {"ResourcePackRepository[44]", 0xceef0cc, "fd7bbaa9fc6f01a9fa6702a9f85f03a9"},
    {"ResourcePackRepository[46]", 0xceef248, "fd7bbda9f65701a9f44f02a9fd030091"},
    {"ResourcePackRepository[51]", 0xceef2f4, "fd7bbba9f90b00f9f85f02a9f65703a9"},
    {"ResourcePackRepository[52]", 0xceef538, "fd7bbea9f44f01a9fd030091080040f9"},
    {"ResourcePackRepository[53]", 0xceef574, "fd7bbaa9fc6f01a9fa6702a9f85f03a9"},
    {"ResourcePackRepository[56]", 0xcef0480, "fd7bbea9f44f01a9fd03009108b440f9"},
    {"ResourcePackRepository[57]", 0xceeafac, "fd7bbda9f65701a9f44f02a9fd030091"},
    {"ResourcePackRepository[58]", 0xceeae74, "ff8301d1fd7b02a9f85f03a9f65704a9"},
    {"PackManagerContentSource[0]", 0xa611b70, "fd7bbda9f65701a9f44f02a9fd030091"},
    {"PackManagerContentSource[1]", 0xa611d58, "fd7bbea9f30b00f9fd030091f30300aa"},
    {"PackManagerContentSource[2]", 0xa5a7670, "fd7bbaa9fc6f01a9fa6702a9f85f03a9"},
    {"PackManagerContentSource[3]", 0xa5a7ea8, "ffc302d1fd7b05a9fc6f06a9fa6707a9"},
    {"PackManagerContentSource[8]", 0xa5a8ab8, "ff0303d1fd7b07a9f94300f9f85f09a9"},
    {"PackManagerContentSource[9]", 0xa5a8d0c, "ffc302d1fd7b07a9f85f08a9f65709a9"},
    {"WorldPackManagerContentSource[0]", 0xa611d7c, "fd7bbea9f44f01a9fd030091f30300aa"},
    {"WorldPackManagerContentSource[1]", 0xa611e8c, "fd7bbea9f30b00f9fd030091f30300aa"},
    {"WorldPackManagerContentSource[2]", 0xa5acc4c, "fd7bbaa9fc6f01a9fa6702a9f85f03a9"},
    {"WorldPackManagerContentSource[6]", 0xa5a9d74, "ff0302d1fd7b02a9fb1b00f9fa6704a9"},
    {"WorldPackManagerContentSource[7]", 0xa5a9edc, "ff0302d1fd7b02a9fc6f03a9fa6704a9"},
    {"WorldPackManagerContentSource[8]", 0xa5adbf0, "ff0303d1fd7b07a9fa6708a9f85f09a9"},
    {"WorldPackManagerContentSource[9]", 0xa5adea4, "ff0303d1fd7b07a9fa6708a9f85f09a9"},
    {"PackManagerContentSourceImpl[0]", 0xa5a74e8, "fd7bbea9f44f01a9fd030091145040f9"},
    {"PackManagerContentSourceImpl[1]", 0xa5a75a0, "fd7bbea9f44f01a9fd030091145040f9"},
};
}  // namespace
}  // namespace trucos

extern "C" {
__attribute__((visibility("hidden"))) void *pt_orig[71] = {};
}

namespace trucos {
namespace {

std::atomic<bool> gOn{false};
std::atomic<int> gSeq{0};
std::atomic<uint8_t> gSeen[kCount];
std::atomic<uint32_t> gCount[kCount];
std::atomic<int> gHooked{0};
const char *kLogPath = "/storage/emulated/0/Android/media/org.levimc.launcher/trucos_packtrace.txt";

void appendLine(const std::string &s) {
    FILE *f = std::fopen(kLogPath, "a");
    if (!f)
        return;
    std::fputs(s.c_str(), f);
    std::fputc('\n', f);
    std::fclose(f);
}

uintptr_t findBase() {
    FILE *f = std::fopen("/proc/self/maps", "r");
    if (!f)
        return 0;
    char line[512];
    uintptr_t base = 0;
    while (std::fgets(line, sizeof line, f)) {
        if (std::strstr(line, "libminecraftpe.so")) {
            unsigned long lo = 0, off = 1;
            char perms[8];
            if (std::sscanf(line, "%lx-%*lx %7s %lx", &lo, perms, &off) == 3 && off == 0) {
                base = lo;
                break;
            }
        }
    }
    std::fclose(f);
    return base;
}

bool sigMatches(uintptr_t addr, const char *hex) {
    for (int i = 0; i < 16; i++) {
        unsigned v = 0;
        std::sscanf(hex + 2 * i, "%2x", &v);
        if (reinterpret_cast<const uint8_t *>(addr)[i] != v)
            return false;
    }
    return true;
}

}  // namespace
}  // namespace trucos

extern "C" __attribute__((visibility("hidden"))) void ptLog(int idx) {
    using namespace trucos;
    if (!gOn.load(std::memory_order_relaxed) || idx < 0 || idx >= kCount)
        return;
    gCount[idx].fetch_add(1, std::memory_order_relaxed);
    if (gSeen[idx].exchange(1) == 0) {
        const int n = gSeq.fetch_add(1) + 1;
        appendLine(std::to_string(n) + "  " + kEntries[idx].name + "  va=" +
                   std::to_string(kEntries[idx].va));
    }
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_0() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #0\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 0\n"
        "add x16, x16, :lo12:pt_orig + 0\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_1() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #1\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 8\n"
        "add x16, x16, :lo12:pt_orig + 8\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_2() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #2\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 16\n"
        "add x16, x16, :lo12:pt_orig + 16\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_3() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #3\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 24\n"
        "add x16, x16, :lo12:pt_orig + 24\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_4() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #4\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 32\n"
        "add x16, x16, :lo12:pt_orig + 32\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_5() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #5\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 40\n"
        "add x16, x16, :lo12:pt_orig + 40\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_6() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #6\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 48\n"
        "add x16, x16, :lo12:pt_orig + 48\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_7() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #7\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 56\n"
        "add x16, x16, :lo12:pt_orig + 56\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_8() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #8\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 64\n"
        "add x16, x16, :lo12:pt_orig + 64\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_9() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #9\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 72\n"
        "add x16, x16, :lo12:pt_orig + 72\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_10() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #10\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 80\n"
        "add x16, x16, :lo12:pt_orig + 80\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_11() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #11\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 88\n"
        "add x16, x16, :lo12:pt_orig + 88\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_12() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #12\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 96\n"
        "add x16, x16, :lo12:pt_orig + 96\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_13() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #13\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 104\n"
        "add x16, x16, :lo12:pt_orig + 104\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_14() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #14\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 112\n"
        "add x16, x16, :lo12:pt_orig + 112\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_15() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #15\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 120\n"
        "add x16, x16, :lo12:pt_orig + 120\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_16() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #16\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 128\n"
        "add x16, x16, :lo12:pt_orig + 128\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_17() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #17\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 136\n"
        "add x16, x16, :lo12:pt_orig + 136\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_18() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #18\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 144\n"
        "add x16, x16, :lo12:pt_orig + 144\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_19() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #19\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 152\n"
        "add x16, x16, :lo12:pt_orig + 152\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_20() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #20\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 160\n"
        "add x16, x16, :lo12:pt_orig + 160\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_21() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #21\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 168\n"
        "add x16, x16, :lo12:pt_orig + 168\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_22() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #22\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 176\n"
        "add x16, x16, :lo12:pt_orig + 176\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_23() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #23\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 184\n"
        "add x16, x16, :lo12:pt_orig + 184\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_24() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #24\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 192\n"
        "add x16, x16, :lo12:pt_orig + 192\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_25() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #25\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 200\n"
        "add x16, x16, :lo12:pt_orig + 200\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_26() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #26\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 208\n"
        "add x16, x16, :lo12:pt_orig + 208\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_27() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #27\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 216\n"
        "add x16, x16, :lo12:pt_orig + 216\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_28() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #28\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 224\n"
        "add x16, x16, :lo12:pt_orig + 224\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_29() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #29\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 232\n"
        "add x16, x16, :lo12:pt_orig + 232\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_30() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #30\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 240\n"
        "add x16, x16, :lo12:pt_orig + 240\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_31() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #31\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 248\n"
        "add x16, x16, :lo12:pt_orig + 248\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_32() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #32\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 256\n"
        "add x16, x16, :lo12:pt_orig + 256\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_33() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #33\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 264\n"
        "add x16, x16, :lo12:pt_orig + 264\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_34() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #34\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 272\n"
        "add x16, x16, :lo12:pt_orig + 272\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_35() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #35\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 280\n"
        "add x16, x16, :lo12:pt_orig + 280\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_36() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #36\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 288\n"
        "add x16, x16, :lo12:pt_orig + 288\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_37() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #37\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 296\n"
        "add x16, x16, :lo12:pt_orig + 296\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_38() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #38\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 304\n"
        "add x16, x16, :lo12:pt_orig + 304\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_39() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #39\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 312\n"
        "add x16, x16, :lo12:pt_orig + 312\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_40() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #40\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 320\n"
        "add x16, x16, :lo12:pt_orig + 320\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_41() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #41\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 328\n"
        "add x16, x16, :lo12:pt_orig + 328\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_42() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #42\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 336\n"
        "add x16, x16, :lo12:pt_orig + 336\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_43() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #43\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 344\n"
        "add x16, x16, :lo12:pt_orig + 344\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_44() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #44\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 352\n"
        "add x16, x16, :lo12:pt_orig + 352\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_45() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #45\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 360\n"
        "add x16, x16, :lo12:pt_orig + 360\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_46() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #46\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 368\n"
        "add x16, x16, :lo12:pt_orig + 368\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_47() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #47\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 376\n"
        "add x16, x16, :lo12:pt_orig + 376\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_48() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #48\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 384\n"
        "add x16, x16, :lo12:pt_orig + 384\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_49() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #49\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 392\n"
        "add x16, x16, :lo12:pt_orig + 392\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_50() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #50\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 400\n"
        "add x16, x16, :lo12:pt_orig + 400\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_51() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #51\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 408\n"
        "add x16, x16, :lo12:pt_orig + 408\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_52() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #52\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 416\n"
        "add x16, x16, :lo12:pt_orig + 416\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_53() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #53\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 424\n"
        "add x16, x16, :lo12:pt_orig + 424\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_54() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #54\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 432\n"
        "add x16, x16, :lo12:pt_orig + 432\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_55() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #55\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 440\n"
        "add x16, x16, :lo12:pt_orig + 440\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_56() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #56\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 448\n"
        "add x16, x16, :lo12:pt_orig + 448\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_57() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #57\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 456\n"
        "add x16, x16, :lo12:pt_orig + 456\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_58() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #58\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 464\n"
        "add x16, x16, :lo12:pt_orig + 464\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_59() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #59\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 472\n"
        "add x16, x16, :lo12:pt_orig + 472\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_60() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #60\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 480\n"
        "add x16, x16, :lo12:pt_orig + 480\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_61() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #61\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 488\n"
        "add x16, x16, :lo12:pt_orig + 488\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_62() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #62\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 496\n"
        "add x16, x16, :lo12:pt_orig + 496\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_63() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #63\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 504\n"
        "add x16, x16, :lo12:pt_orig + 504\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_64() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #64\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 512\n"
        "add x16, x16, :lo12:pt_orig + 512\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_65() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #65\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 520\n"
        "add x16, x16, :lo12:pt_orig + 520\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_66() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #66\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 528\n"
        "add x16, x16, :lo12:pt_orig + 528\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_67() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #67\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 536\n"
        "add x16, x16, :lo12:pt_orig + 536\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_68() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #68\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 544\n"
        "add x16, x16, :lo12:pt_orig + 544\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_69() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #69\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 552\n"
        "add x16, x16, :lo12:pt_orig + 552\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

extern "C" __attribute__((naked, visibility("hidden"))) void pt_detour_70() {
    asm volatile(
        "stp x29, x30, [sp, #-0x120]!\n"
        "mov x29, sp\n"
        "stp x0, x1, [sp, #0x10]\n"
        "stp x2, x3, [sp, #0x20]\n"
        "stp x4, x5, [sp, #0x30]\n"
        "stp x6, x7, [sp, #0x40]\n"
        "str x8, [sp, #0x50]\n"
        "stp q0, q1, [sp, #0x60]\n"
        "stp q2, q3, [sp, #0x80]\n"
        "stp q4, q5, [sp, #0xa0]\n"
        "stp q6, q7, [sp, #0xc0]\n"
        "mov w0, #70\n"
        "bl ptLog\n"
        "ldp q6, q7, [sp, #0xc0]\n"
        "ldp q4, q5, [sp, #0xa0]\n"
        "ldp q2, q3, [sp, #0x80]\n"
        "ldp q0, q1, [sp, #0x60]\n"
        "ldr x8, [sp, #0x50]\n"
        "ldp x6, x7, [sp, #0x40]\n"
        "ldp x4, x5, [sp, #0x30]\n"
        "ldp x2, x3, [sp, #0x20]\n"
        "ldp x0, x1, [sp, #0x10]\n"
        "ldp x29, x30, [sp], #0x120\n"
        "adrp x16, pt_orig + 560\n"
        "add x16, x16, :lo12:pt_orig + 560\n"
        "ldr x16, [x16]\n"
        "br x16\n");
}

namespace trucos {

namespace {
using Fn = void (*)();
const Fn kDetours[kCount] = {
    &pt_detour_0,
    &pt_detour_1,
    &pt_detour_2,
    &pt_detour_3,
    &pt_detour_4,
    &pt_detour_5,
    &pt_detour_6,
    &pt_detour_7,
    &pt_detour_8,
    &pt_detour_9,
    &pt_detour_10,
    &pt_detour_11,
    &pt_detour_12,
    &pt_detour_13,
    &pt_detour_14,
    &pt_detour_15,
    &pt_detour_16,
    &pt_detour_17,
    &pt_detour_18,
    &pt_detour_19,
    &pt_detour_20,
    &pt_detour_21,
    &pt_detour_22,
    &pt_detour_23,
    &pt_detour_24,
    &pt_detour_25,
    &pt_detour_26,
    &pt_detour_27,
    &pt_detour_28,
    &pt_detour_29,
    &pt_detour_30,
    &pt_detour_31,
    &pt_detour_32,
    &pt_detour_33,
    &pt_detour_34,
    &pt_detour_35,
    &pt_detour_36,
    &pt_detour_37,
    &pt_detour_38,
    &pt_detour_39,
    &pt_detour_40,
    &pt_detour_41,
    &pt_detour_42,
    &pt_detour_43,
    &pt_detour_44,
    &pt_detour_45,
    &pt_detour_46,
    &pt_detour_47,
    &pt_detour_48,
    &pt_detour_49,
    &pt_detour_50,
    &pt_detour_51,
    &pt_detour_52,
    &pt_detour_53,
    &pt_detour_54,
    &pt_detour_55,
    &pt_detour_56,
    &pt_detour_57,
    &pt_detour_58,
    &pt_detour_59,
    &pt_detour_60,
    &pt_detour_61,
    &pt_detour_62,
    &pt_detour_63,
    &pt_detour_64,
    &pt_detour_65,
    &pt_detour_66,
    &pt_detour_67,
    &pt_detour_68,
    &pt_detour_69,
    &pt_detour_70,
};
}  // namespace

int PackTrace::install() {
    const uintptr_t base = findBase();
    if (base == 0)
        return -1;
    int ok = 0;
    for (int i = 0; i < kCount; i++) {
        const uintptr_t addr = base + kEntries[i].va;
        if (!sigMatches(addr, kEntries[i].sig))
            continue;
        void *orig = nullptr;
        if (pl::memory::hook(reinterpret_cast<pl::memory::FuncPtr>(addr),
                             reinterpret_cast<pl::memory::FuncPtr>(kDetours[i]),
                             reinterpret_cast<pl::memory::FuncPtr *>(&orig)) == 0 &&
            orig) {
            pt_orig[i] = orig;
            ok++;
        }
    }
    gHooked = ok;
    return ok;
}

int PackTrace::hookedCount() { return gHooked.load(); }
int PackTrace::totalCount() { return kCount; }

void PackTrace::setEnabled(bool on) {
    if (on) {
        for (int i = 0; i < kCount; i++) {
            gSeen[i] = 0;
            gCount[i] = 0;
        }
        gSeq = 0;
        appendLine("---- rastreo iniciado ----");
    } else {
        appendLine("---- rastreo detenido; llamadas totales por funcion ----");
        for (int i = 0; i < kCount; i++)
            if (gCount[i] > 0)
                appendLine(std::string(kEntries[i].name) + " x" + std::to_string(gCount[i].load()));
    }
    gOn = on;
}

}  // namespace trucos
