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
    [[nodiscard]] float speedMultiplier() const { return mSpeedOn ? mSpeedMul.load() : 1.0f; }

  private:
    ll::mod::NativeMod &mSelf;
    std::atomic<bool> mJumpOn{true};
    std::atomic<float> mJumpMul{1.8f};
    std::atomic<bool> mSpeedOn{false}; // experimental: off by default
    std::atomic<float> mSpeedMul{1.5f};
    bool mJumpRegistered = false;
    bool mSpeedRegistered = false;
};

} // namespace trucos
