#pragma once
// IWYU pragma private; include "Rewired/MultiBoolValue.hpp"
#include "Rewired/zzzz__MultiBoolValue_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::MultiBoolValue::MultiBoolValue(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::MultiBoolValue::MultiBoolValue()   {
}
constexpr ::Rewired::MultiBoolValue  Rewired::MultiBoolValue::Off{static_cast<int32_t>(0x0)};
constexpr ::Rewired::MultiBoolValue  Rewired::MultiBoolValue::On{static_cast<int32_t>(0x1)};
constexpr ::Rewired::MultiBoolValue  Rewired::MultiBoolValue::Mixed{static_cast<int32_t>(0x2)};
