#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/AxisDirection.hpp"
#include "Rewired/Data/Mapping/zzzz__AxisDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Data::Mapping::AxisDirection::AxisDirection(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Data::Mapping::AxisDirection::AxisDirection()   {
}
constexpr ::Rewired::Data::Mapping::AxisDirection  Rewired::Data::Mapping::AxisDirection::Vertical{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Data::Mapping::AxisDirection  Rewired::Data::Mapping::AxisDirection::Horizontal{static_cast<int32_t>(0x1)};
