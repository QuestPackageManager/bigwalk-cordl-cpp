#pragma once
// IWYU pragma private; include "Rewired/ControllerSubType.hpp"
#include "Rewired/zzzz__ControllerSubType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ControllerSubType::ControllerSubType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ControllerSubType::ControllerSubType()   {
}
constexpr ::Rewired::ControllerSubType  Rewired::ControllerSubType::None{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ControllerSubType  Rewired::ControllerSubType::Gamepad{static_cast<int32_t>(0x1)};
constexpr ::Rewired::ControllerSubType  Rewired::ControllerSubType::Guitar{static_cast<int32_t>(0x2)};
