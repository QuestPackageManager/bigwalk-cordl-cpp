#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/HardwareElementSourceTypeWithHat.hpp"
#include "Rewired/Data/Mapping/zzzz__HardwareElementSourceTypeWithHat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Data::Mapping::HardwareElementSourceTypeWithHat::HardwareElementSourceTypeWithHat(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Data::Mapping::HardwareElementSourceTypeWithHat::HardwareElementSourceTypeWithHat()   {
}
constexpr ::Rewired::Data::Mapping::HardwareElementSourceTypeWithHat  Rewired::Data::Mapping::HardwareElementSourceTypeWithHat::Button{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Data::Mapping::HardwareElementSourceTypeWithHat  Rewired::Data::Mapping::HardwareElementSourceTypeWithHat::Axis{static_cast<int32_t>(0x1)};
constexpr ::Rewired::Data::Mapping::HardwareElementSourceTypeWithHat  Rewired::Data::Mapping::HardwareElementSourceTypeWithHat::Hat{static_cast<int32_t>(0x2)};
constexpr ::Rewired::Data::Mapping::HardwareElementSourceTypeWithHat  Rewired::Data::Mapping::HardwareElementSourceTypeWithHat::Key{static_cast<int32_t>(0x3)};
constexpr ::Rewired::Data::Mapping::HardwareElementSourceTypeWithHat  Rewired::Data::Mapping::HardwareElementSourceTypeWithHat::Custom{static_cast<int32_t>(0x64)};
