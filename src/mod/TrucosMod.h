#pragma once

#include <atomic>
#include <string_view>

#include <pl/Mod.hpp>

namespace trucos {

class TrucosMod {
  public:
    static TrucosMod &instance();

    TrucosMod();

    [[nodiscard]] ll::mod::NativeMod &getSelf() const { return mSelf; }

    bool load();
    bool enable();
    bool disable();
    bool unload();

    [[nodiscard]] float jumpMultiplier() const { return mJumpOn ? mJumpMul.load() : 1.0f; }
    [[nodiscard]] float ghostMultiplier() const { return mGhostOn ? mGhostMul.load() : 1.0f; }
    [[nodiscard]] float probeMultiplier() const { return mProbeOn ? mProbeMul.load() : 1.0f; }

  private:
    ll::mod::NativeMod &mSelf;
    std::atomic<bool> mJumpOn{true};
    std::atomic<float> mJumpMul{1.8f};
    std::atomic<bool> mGhostOn{false};
    std::atomic<float> mGhostMul{1.5f};
    std::atomic<bool> mProbeOn{false};
    std::atomic<float> mProbeMul{1.5f};
    bool mJumpRegistered = false;
    bool mGhostRegistered = false;
    bool mProbeRegistered = false;
};

} // namespace trucos
