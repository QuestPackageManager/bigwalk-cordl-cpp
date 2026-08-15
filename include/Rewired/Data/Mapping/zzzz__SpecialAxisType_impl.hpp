#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/SpecialAxisType.hpp"
#include "Rewired/Data/Mapping/zzzz__SpecialAxisType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Data::Mapping::SpecialAxisType::SpecialAxisType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Data::Mapping::SpecialAxisType::SpecialAxisType()   {
}
constexpr ::Rewired::Data::Mapping::SpecialAxisType  Rewired::Data::Mapping::SpecialAxisType::None{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Data::Mapping::SpecialAxisType  Rewired::Data::Mapping::SpecialAxisType::Throttle{static_cast<int32_t>(0x1)};
