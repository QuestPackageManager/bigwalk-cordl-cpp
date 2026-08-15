#pragma once
// IWYU pragma private; include "Rewired/Platforms/XboxOne/XboxOneGamepadMotorType.hpp"
#include "Rewired/Platforms/XboxOne/zzzz__XboxOneGamepadMotorType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType::XboxOneGamepadMotorType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType::XboxOneGamepadMotorType()   {
}
constexpr ::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType  Rewired::Platforms::XboxOne::XboxOneGamepadMotorType::LeftMotor{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType  Rewired::Platforms::XboxOne::XboxOneGamepadMotorType::RightMotor{static_cast<int32_t>(0x1)};
constexpr ::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType  Rewired::Platforms::XboxOne::XboxOneGamepadMotorType::LeftTriggerMotor{static_cast<int32_t>(0x2)};
constexpr ::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType  Rewired::Platforms::XboxOne::XboxOneGamepadMotorType::RightTriggerMotor{static_cast<int32_t>(0x3)};
