#pragma once
// IWYU pragma private; include "Rewired/AxisRange.hpp"
#include "Rewired/zzzz__AxisRange_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::AxisRange::AxisRange(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::AxisRange::AxisRange()   {
}
constexpr ::Rewired::AxisRange  Rewired::AxisRange::Full{static_cast<int32_t>(0x0)};
constexpr ::Rewired::AxisRange  Rewired::AxisRange::Positive{static_cast<int32_t>(0x1)};
constexpr ::Rewired::AxisRange  Rewired::AxisRange::Negative{static_cast<int32_t>(0x2)};
