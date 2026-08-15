#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/HatDirection.hpp"
#include "Rewired/Data/Mapping/zzzz__HatDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Data::Mapping::HatDirection::HatDirection(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Data::Mapping::HatDirection::HatDirection()   {
}
constexpr ::Rewired::Data::Mapping::HatDirection  Rewired::Data::Mapping::HatDirection::Up{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Data::Mapping::HatDirection  Rewired::Data::Mapping::HatDirection::Right{static_cast<int32_t>(0x1)};
constexpr ::Rewired::Data::Mapping::HatDirection  Rewired::Data::Mapping::HatDirection::Down{static_cast<int32_t>(0x2)};
constexpr ::Rewired::Data::Mapping::HatDirection  Rewired::Data::Mapping::HatDirection::Left{static_cast<int32_t>(0x3)};
constexpr ::Rewired::Data::Mapping::HatDirection  Rewired::Data::Mapping::HatDirection::UpRight{static_cast<int32_t>(0x4)};
constexpr ::Rewired::Data::Mapping::HatDirection  Rewired::Data::Mapping::HatDirection::DownRight{static_cast<int32_t>(0x5)};
constexpr ::Rewired::Data::Mapping::HatDirection  Rewired::Data::Mapping::HatDirection::DownLeft{static_cast<int32_t>(0x6)};
constexpr ::Rewired::Data::Mapping::HatDirection  Rewired::Data::Mapping::HatDirection::UpLeft{static_cast<int32_t>(0x7)};
