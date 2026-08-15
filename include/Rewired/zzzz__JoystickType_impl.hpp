#pragma once
// IWYU pragma private; include "Rewired/JoystickType.hpp"
#include "Rewired/zzzz__JoystickType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::JoystickType::JoystickType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::JoystickType::JoystickType()   {
}
constexpr ::Rewired::JoystickType  Rewired::JoystickType::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Rewired::JoystickType  Rewired::JoystickType::Gamepad{static_cast<int32_t>(0x1)};
constexpr ::Rewired::JoystickType  Rewired::JoystickType::DualAnalogGamepad{static_cast<int32_t>(0x2)};
constexpr ::Rewired::JoystickType  Rewired::JoystickType::SingleAnalogGamepad{static_cast<int32_t>(0x3)};
constexpr ::Rewired::JoystickType  Rewired::JoystickType::DigitalGamepad{static_cast<int32_t>(0x4)};
constexpr ::Rewired::JoystickType  Rewired::JoystickType::Joystick{static_cast<int32_t>(0xa)};
constexpr ::Rewired::JoystickType  Rewired::JoystickType::AnalogJoystick{static_cast<int32_t>(0xb)};
constexpr ::Rewired::JoystickType  Rewired::JoystickType::DigitalJoystick{static_cast<int32_t>(0xc)};
constexpr ::Rewired::JoystickType  Rewired::JoystickType::Throttle{static_cast<int32_t>(0x14)};
constexpr ::Rewired::JoystickType  Rewired::JoystickType::HOTAS{static_cast<int32_t>(0x15)};
constexpr ::Rewired::JoystickType  Rewired::JoystickType::FlightYoke{static_cast<int32_t>(0x16)};
constexpr ::Rewired::JoystickType  Rewired::JoystickType::FlightPedals{static_cast<int32_t>(0x17)};
constexpr ::Rewired::JoystickType  Rewired::JoystickType::ThrottleQuadrant{static_cast<int32_t>(0x18)};
constexpr ::Rewired::JoystickType  Rewired::JoystickType::TrimWheel{static_cast<int32_t>(0x19)};
constexpr ::Rewired::JoystickType  Rewired::JoystickType::DrivingWheel{static_cast<int32_t>(0x28)};
constexpr ::Rewired::JoystickType  Rewired::JoystickType::Pedals{static_cast<int32_t>(0x29)};
constexpr ::Rewired::JoystickType  Rewired::JoystickType::GearShifter{static_cast<int32_t>(0x2a)};
constexpr ::Rewired::JoystickType  Rewired::JoystickType::Guitar{static_cast<int32_t>(0x32)};
constexpr ::Rewired::JoystickType  Rewired::JoystickType::Drums{static_cast<int32_t>(0x33)};
constexpr ::Rewired::JoystickType  Rewired::JoystickType::DancePad{static_cast<int32_t>(0x46)};
constexpr ::Rewired::JoystickType  Rewired::JoystickType::Paddle{static_cast<int32_t>(0x50)};
constexpr ::Rewired::JoystickType  Rewired::JoystickType::Spinner{static_cast<int32_t>(0x51)};
constexpr ::Rewired::JoystickType  Rewired::JoystickType::Trackball{static_cast<int32_t>(0x52)};
constexpr ::Rewired::JoystickType  Rewired::JoystickType::Gun{static_cast<int32_t>(0x53)};
constexpr ::Rewired::JoystickType  Rewired::JoystickType::RemoteControl{static_cast<int32_t>(0x64)};
constexpr ::Rewired::JoystickType  Rewired::JoystickType::PointingDevice{static_cast<int32_t>(0x65)};
constexpr ::Rewired::JoystickType  Rewired::JoystickType::ShipController{static_cast<int32_t>(0x78)};
constexpr ::Rewired::JoystickType  Rewired::JoystickType::TrainController{static_cast<int32_t>(0x79)};
constexpr ::Rewired::JoystickType  Rewired::JoystickType::HelicopterController{static_cast<int32_t>(0x7a)};
constexpr ::Rewired::JoystickType  Rewired::JoystickType::FootController{static_cast<int32_t>(0x7b)};
constexpr ::Rewired::JoystickType  Rewired::JoystickType::ControlPanel{static_cast<int32_t>(0x8c)};
constexpr ::Rewired::JoystickType  Rewired::JoystickType::Keypad{static_cast<int32_t>(0x8d)};
constexpr ::Rewired::JoystickType  Rewired::JoystickType::VRController{static_cast<int32_t>(0x96)};
