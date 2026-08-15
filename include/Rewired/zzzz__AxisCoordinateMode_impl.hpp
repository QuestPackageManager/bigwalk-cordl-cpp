#pragma once
// IWYU pragma private; include "Rewired/AxisCoordinateMode.hpp"
#include "Rewired/zzzz__AxisCoordinateMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::AxisCoordinateMode::AxisCoordinateMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::AxisCoordinateMode::AxisCoordinateMode()   {
}
constexpr ::Rewired::AxisCoordinateMode  Rewired::AxisCoordinateMode::Absolute{static_cast<int32_t>(0x0)};
constexpr ::Rewired::AxisCoordinateMode  Rewired::AxisCoordinateMode::Relative{static_cast<int32_t>(0x1)};
