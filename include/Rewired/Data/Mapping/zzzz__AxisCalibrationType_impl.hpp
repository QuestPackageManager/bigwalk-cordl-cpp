#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/AxisCalibrationType.hpp"
#include "Rewired/Data/Mapping/zzzz__AxisCalibrationType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Data::Mapping::AxisCalibrationType::AxisCalibrationType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Data::Mapping::AxisCalibrationType::AxisCalibrationType()   {
}
constexpr ::Rewired::Data::Mapping::AxisCalibrationType  Rewired::Data::Mapping::AxisCalibrationType::Default{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Data::Mapping::AxisCalibrationType  Rewired::Data::Mapping::AxisCalibrationType::Uncalibrated{static_cast<int32_t>(0x1)};
constexpr ::Rewired::Data::Mapping::AxisCalibrationType  Rewired::Data::Mapping::AxisCalibrationType::Custom{static_cast<int32_t>(0x2)};
