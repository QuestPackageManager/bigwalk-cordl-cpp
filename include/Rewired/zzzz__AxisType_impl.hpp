#pragma once
// IWYU pragma private; include "Rewired/AxisType.hpp"
#include "Rewired/zzzz__AxisType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::AxisType::AxisType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::AxisType::AxisType()   {
}
constexpr ::Rewired::AxisType  Rewired::AxisType::None{static_cast<int32_t>(0x0)};
constexpr ::Rewired::AxisType  Rewired::AxisType::Normal{static_cast<int32_t>(0x1)};
constexpr ::Rewired::AxisType  Rewired::AxisType::Split{static_cast<int32_t>(0x2)};
