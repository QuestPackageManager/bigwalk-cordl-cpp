#pragma once
// IWYU pragma private; include "Steamworks/EInputSourceMode.hpp"
#include "Steamworks/zzzz__EInputSourceMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EInputSourceMode::EInputSourceMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EInputSourceMode::EInputSourceMode()   {
}
constexpr ::Steamworks::EInputSourceMode  Steamworks::EInputSourceMode::k_EInputSourceMode_None{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EInputSourceMode  Steamworks::EInputSourceMode::k_EInputSourceMode_Dpad{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EInputSourceMode  Steamworks::EInputSourceMode::k_EInputSourceMode_Buttons{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EInputSourceMode  Steamworks::EInputSourceMode::k_EInputSourceMode_FourButtons{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::EInputSourceMode  Steamworks::EInputSourceMode::k_EInputSourceMode_AbsoluteMouse{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::EInputSourceMode  Steamworks::EInputSourceMode::k_EInputSourceMode_RelativeMouse{static_cast<int32_t>(0x5)};
constexpr ::Steamworks::EInputSourceMode  Steamworks::EInputSourceMode::k_EInputSourceMode_JoystickMove{static_cast<int32_t>(0x6)};
constexpr ::Steamworks::EInputSourceMode  Steamworks::EInputSourceMode::k_EInputSourceMode_JoystickMouse{static_cast<int32_t>(0x7)};
constexpr ::Steamworks::EInputSourceMode  Steamworks::EInputSourceMode::k_EInputSourceMode_JoystickCamera{static_cast<int32_t>(0x8)};
constexpr ::Steamworks::EInputSourceMode  Steamworks::EInputSourceMode::k_EInputSourceMode_ScrollWheel{static_cast<int32_t>(0x9)};
constexpr ::Steamworks::EInputSourceMode  Steamworks::EInputSourceMode::k_EInputSourceMode_Trigger{static_cast<int32_t>(0xa)};
constexpr ::Steamworks::EInputSourceMode  Steamworks::EInputSourceMode::k_EInputSourceMode_TouchMenu{static_cast<int32_t>(0xb)};
constexpr ::Steamworks::EInputSourceMode  Steamworks::EInputSourceMode::k_EInputSourceMode_MouseJoystick{static_cast<int32_t>(0xc)};
constexpr ::Steamworks::EInputSourceMode  Steamworks::EInputSourceMode::k_EInputSourceMode_MouseRegion{static_cast<int32_t>(0xd)};
constexpr ::Steamworks::EInputSourceMode  Steamworks::EInputSourceMode::k_EInputSourceMode_RadialMenu{static_cast<int32_t>(0xe)};
constexpr ::Steamworks::EInputSourceMode  Steamworks::EInputSourceMode::k_EInputSourceMode_SingleButton{static_cast<int32_t>(0xf)};
constexpr ::Steamworks::EInputSourceMode  Steamworks::EInputSourceMode::k_EInputSourceMode_Switches{static_cast<int32_t>(0x10)};
