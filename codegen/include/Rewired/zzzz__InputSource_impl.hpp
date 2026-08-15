#pragma once
// IWYU pragma private; include "Rewired/InputSource.hpp"
#include "Rewired/zzzz__InputSource_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::InputSource::InputSource(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::InputSource::InputSource()   {
}
constexpr ::Rewired::InputSource  Rewired::InputSource::None{static_cast<int32_t>(0x0)};
constexpr ::Rewired::InputSource  Rewired::InputSource::DirectInput{static_cast<int32_t>(0x1)};
constexpr ::Rewired::InputSource  Rewired::InputSource::XInput{static_cast<int32_t>(0x2)};
constexpr ::Rewired::InputSource  Rewired::InputSource::OSX{static_cast<int32_t>(0x3)};
constexpr ::Rewired::InputSource  Rewired::InputSource::Fallback{static_cast<int32_t>(0x4)};
constexpr ::Rewired::InputSource  Rewired::InputSource::RawInput{static_cast<int32_t>(0x5)};
constexpr ::Rewired::InputSource  Rewired::InputSource::Fallback_PreConfigured{static_cast<int32_t>(0x6)};
constexpr ::Rewired::InputSource  Rewired::InputSource::Linux{static_cast<int32_t>(0x7)};
constexpr ::Rewired::InputSource  Rewired::InputSource::WindowsUWP{static_cast<int32_t>(0x8)};
constexpr ::Rewired::InputSource  Rewired::InputSource::WebGL{static_cast<int32_t>(0x9)};
constexpr ::Rewired::InputSource  Rewired::InputSource::Steam{static_cast<int32_t>(0x12)};
constexpr ::Rewired::InputSource  Rewired::InputSource::SDL2{static_cast<int32_t>(0x13)};
constexpr ::Rewired::InputSource  Rewired::InputSource::Ouya{static_cast<int32_t>(0x14)};
constexpr ::Rewired::InputSource  Rewired::InputSource::XboxOne{static_cast<int32_t>(0x15)};
constexpr ::Rewired::InputSource  Rewired::InputSource::PS4{static_cast<int32_t>(0x16)};
constexpr ::Rewired::InputSource  Rewired::InputSource::NintendoSwitch{static_cast<int32_t>(0x18)};
constexpr ::Rewired::InputSource  Rewired::InputSource::GameCoreXboxOne{static_cast<int32_t>(0x1a)};
constexpr ::Rewired::InputSource  Rewired::InputSource::GameCoreScarlett{static_cast<int32_t>(0x1b)};
constexpr ::Rewired::InputSource  Rewired::InputSource::PS5{static_cast<int32_t>(0x1c)};
constexpr ::Rewired::InputSource  Rewired::InputSource::AppleGameController{static_cast<int32_t>(0x1d)};
constexpr ::Rewired::InputSource  Rewired::InputSource::WindowsGamingInput{static_cast<int32_t>(0x1e)};
constexpr ::Rewired::InputSource  Rewired::InputSource::NintendoSwitch2{static_cast<int32_t>(0x1f)};
constexpr ::Rewired::InputSource  Rewired::InputSource::InternalDriver{static_cast<int32_t>(0x31)};
constexpr ::Rewired::InputSource  Rewired::InputSource::UnityKeyboardAndMouse{static_cast<int32_t>(0x32)};
constexpr ::Rewired::InputSource  Rewired::InputSource::Custom{static_cast<int32_t>(0x64)};
