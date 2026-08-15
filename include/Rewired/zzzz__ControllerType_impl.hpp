#pragma once
// IWYU pragma private; include "Rewired/ControllerType.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ControllerType::ControllerType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ControllerType::ControllerType()   {
}
constexpr ::Rewired::ControllerType  Rewired::ControllerType::Keyboard{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ControllerType  Rewired::ControllerType::Mouse{static_cast<int32_t>(0x1)};
constexpr ::Rewired::ControllerType  Rewired::ControllerType::Joystick{static_cast<int32_t>(0x2)};
constexpr ::Rewired::ControllerType  Rewired::ControllerType::Custom{static_cast<int32_t>(0x14)};
