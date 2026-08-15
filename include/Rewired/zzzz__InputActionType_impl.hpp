#pragma once
// IWYU pragma private; include "Rewired/InputActionType.hpp"
#include "Rewired/zzzz__InputActionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::InputActionType::InputActionType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::InputActionType::InputActionType()   {
}
constexpr ::Rewired::InputActionType  Rewired::InputActionType::Axis{static_cast<int32_t>(0x0)};
constexpr ::Rewired::InputActionType  Rewired::InputActionType::Button{static_cast<int32_t>(0x1)};
