#pragma once
// IWYU pragma private; include "Rewired/AxisSensitivity2DType.hpp"
#include "Rewired/zzzz__AxisSensitivity2DType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::AxisSensitivity2DType::AxisSensitivity2DType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::AxisSensitivity2DType::AxisSensitivity2DType()   {
}
constexpr ::Rewired::AxisSensitivity2DType  Rewired::AxisSensitivity2DType::Radial{static_cast<int32_t>(0x0)};
constexpr ::Rewired::AxisSensitivity2DType  Rewired::AxisSensitivity2DType::Axial{static_cast<int32_t>(0x1)};
