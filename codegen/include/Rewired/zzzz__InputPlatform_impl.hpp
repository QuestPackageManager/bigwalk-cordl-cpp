#pragma once
// IWYU pragma private; include "Rewired/InputPlatform.hpp"
#include "Rewired/zzzz__InputPlatform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::InputPlatform::InputPlatform(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::InputPlatform::InputPlatform()   {
}
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::WindowsDirectInput{static_cast<int32_t>(0x1)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::WindowsRawInput{static_cast<int32_t>(0x2)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::WindowsXInput{static_cast<int32_t>(0x3)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::WindowsFallback{static_cast<int32_t>(0x4)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::WindowsUWP{static_cast<int32_t>(0x5)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::WindowsUWPFallback{static_cast<int32_t>(0x6)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::WindowsWGI{static_cast<int32_t>(0x7)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::OSXNative{static_cast<int32_t>(0x8)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::OSXFallback{static_cast<int32_t>(0x9)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::LinuxNative{static_cast<int32_t>(0xa)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::LinuxFallback{static_cast<int32_t>(0xb)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::LinuxFallback_PreConfigured{static_cast<int32_t>(0xc)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::AndroidFallback{static_cast<int32_t>(0xd)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::AmazonFireTVFallback{static_cast<int32_t>(0xe)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::RazerForgeTVFallback{static_cast<int32_t>(0xf)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::iOSFallback{static_cast<int32_t>(0x10)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::WindowsPhone8Fallback{static_cast<int32_t>(0x11)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::BlackberryFallback{static_cast<int32_t>(0x12)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::PS3Fallback{static_cast<int32_t>(0x13)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::PS4Fallback{static_cast<int32_t>(0x14)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::PSMFallback{static_cast<int32_t>(0x15)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::PSVitaFallback{static_cast<int32_t>(0x16)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::XBox360Fallback{static_cast<int32_t>(0x17)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::XBoxOneFallback{static_cast<int32_t>(0x18)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::WiiFallback{static_cast<int32_t>(0x19)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::WiiUFallback{static_cast<int32_t>(0x1a)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::Fallback{static_cast<int32_t>(0x1b)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::Ouya{static_cast<int32_t>(0x1c)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::XboxOne{static_cast<int32_t>(0x1d)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::GameCore{static_cast<int32_t>(0x1e)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::PS4{static_cast<int32_t>(0x1f)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::PS5{static_cast<int32_t>(0x20)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::NintendoSwitch{static_cast<int32_t>(0x21)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::NintendoSwitchFallback{static_cast<int32_t>(0x22)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::NintendoSwitch2{static_cast<int32_t>(0x23)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::Custom{static_cast<int32_t>(0x24)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::InternalDriver{static_cast<int32_t>(0x25)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::SDL2{static_cast<int32_t>(0x26)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::SDL2Windows{static_cast<int32_t>(0x27)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::SDL2OSX{static_cast<int32_t>(0x28)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::SDL2Linux{static_cast<int32_t>(0x29)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::Steam{static_cast<int32_t>(0x2a)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::WebGL{static_cast<int32_t>(0x2b)};
constexpr ::Rewired::InputPlatform  Rewired::InputPlatform::AppleGameController{static_cast<int32_t>(0x2c)};
