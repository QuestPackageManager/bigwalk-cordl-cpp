#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/DualShock4MotorType.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualShock4MotorType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ControllerExtensions::DualShock4MotorType::DualShock4MotorType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ControllerExtensions::DualShock4MotorType::DualShock4MotorType()   {
}
constexpr ::Rewired::ControllerExtensions::DualShock4MotorType  Rewired::ControllerExtensions::DualShock4MotorType::LeftMotor{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ControllerExtensions::DualShock4MotorType  Rewired::ControllerExtensions::DualShock4MotorType::StrongMotor{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ControllerExtensions::DualShock4MotorType  Rewired::ControllerExtensions::DualShock4MotorType::RightMotor{static_cast<int32_t>(0x1)};
constexpr ::Rewired::ControllerExtensions::DualShock4MotorType  Rewired::ControllerExtensions::DualShock4MotorType::WeakMotor{static_cast<int32_t>(0x1)};
