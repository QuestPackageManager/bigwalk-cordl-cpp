#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/HardwareElementSourceType.hpp"
#include "Rewired/Data/Mapping/zzzz__HardwareElementSourceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Data::Mapping::HardwareElementSourceType::HardwareElementSourceType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Data::Mapping::HardwareElementSourceType::HardwareElementSourceType()   {
}
constexpr ::Rewired::Data::Mapping::HardwareElementSourceType  Rewired::Data::Mapping::HardwareElementSourceType::Button{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Data::Mapping::HardwareElementSourceType  Rewired::Data::Mapping::HardwareElementSourceType::Axis{static_cast<int32_t>(0x1)};
constexpr ::Rewired::Data::Mapping::HardwareElementSourceType  Rewired::Data::Mapping::HardwareElementSourceType::Key{static_cast<int32_t>(0x3)};
constexpr ::Rewired::Data::Mapping::HardwareElementSourceType  Rewired::Data::Mapping::HardwareElementSourceType::Custom{static_cast<int32_t>(0x64)};
