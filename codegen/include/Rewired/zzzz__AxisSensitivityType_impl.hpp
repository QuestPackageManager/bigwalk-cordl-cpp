#pragma once
// IWYU pragma private; include "Rewired/AxisSensitivityType.hpp"
#include "Rewired/zzzz__AxisSensitivityType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::AxisSensitivityType::AxisSensitivityType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::AxisSensitivityType::AxisSensitivityType()   {
}
constexpr ::Rewired::AxisSensitivityType  Rewired::AxisSensitivityType::Multiplier{static_cast<int32_t>(0x0)};
constexpr ::Rewired::AxisSensitivityType  Rewired::AxisSensitivityType::Power{static_cast<int32_t>(0x1)};
constexpr ::Rewired::AxisSensitivityType  Rewired::AxisSensitivityType::Curve{static_cast<int32_t>(0x2)};
