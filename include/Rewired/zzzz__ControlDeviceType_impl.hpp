#pragma once
// IWYU pragma private; include "Rewired/ControlDeviceType.hpp"
#include "Rewired/zzzz__ControlDeviceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ControlDeviceType::ControlDeviceType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ControlDeviceType::ControlDeviceType()   {
}
constexpr ::Rewired::ControlDeviceType  Rewired::ControlDeviceType::Keyboard{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ControlDeviceType  Rewired::ControlDeviceType::Mouse{static_cast<int32_t>(0x1)};
constexpr ::Rewired::ControlDeviceType  Rewired::ControlDeviceType::Joystick{static_cast<int32_t>(0x2)};
constexpr ::Rewired::ControlDeviceType  Rewired::ControlDeviceType::Gamepad{static_cast<int32_t>(0x3)};
constexpr ::Rewired::ControlDeviceType  Rewired::ControlDeviceType::ArcadeStick{static_cast<int32_t>(0x4)};
constexpr ::Rewired::ControlDeviceType  Rewired::ControlDeviceType::DancePad{static_cast<int32_t>(0x5)};
constexpr ::Rewired::ControlDeviceType  Rewired::ControlDeviceType::DrumKit{static_cast<int32_t>(0x6)};
constexpr ::Rewired::ControlDeviceType  Rewired::ControlDeviceType::Flight{static_cast<int32_t>(0x7)};
constexpr ::Rewired::ControlDeviceType  Rewired::ControlDeviceType::Throttle{static_cast<int32_t>(0x8)};
constexpr ::Rewired::ControlDeviceType  Rewired::ControlDeviceType::Guitar{static_cast<int32_t>(0x9)};
constexpr ::Rewired::ControlDeviceType  Rewired::ControlDeviceType::Wheel{static_cast<int32_t>(0xa)};
constexpr ::Rewired::ControlDeviceType  Rewired::ControlDeviceType::Paddle{static_cast<int32_t>(0xb)};
constexpr ::Rewired::ControlDeviceType  Rewired::ControlDeviceType::Custom{static_cast<int32_t>(0x63)};
constexpr ::Rewired::ControlDeviceType  Rewired::ControlDeviceType::Unknown{static_cast<int32_t>(0x64)};
