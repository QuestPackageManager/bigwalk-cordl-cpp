#pragma once
// IWYU pragma private; include "Shipmate/Porting/AuthTypes.hpp"
#include "Shipmate/Porting/zzzz__AuthTypes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Shipmate::Porting::AuthTypes::AuthTypes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::AuthTypes::AuthTypes()   {
}
constexpr ::Shipmate::Porting::AuthTypes  Shipmate::Porting::AuthTypes::None{static_cast<int32_t>(0xffffffff)};
constexpr ::Shipmate::Porting::AuthTypes  Shipmate::Porting::AuthTypes::Steam{static_cast<int32_t>(0x0)};
constexpr ::Shipmate::Porting::AuthTypes  Shipmate::Porting::AuthTypes::Epic{static_cast<int32_t>(0x1)};
constexpr ::Shipmate::Porting::AuthTypes  Shipmate::Porting::AuthTypes::Switch{static_cast<int32_t>(0x2)};
constexpr ::Shipmate::Porting::AuthTypes  Shipmate::Porting::AuthTypes::GameCore{static_cast<int32_t>(0x3)};
constexpr ::Shipmate::Porting::AuthTypes  Shipmate::Porting::AuthTypes::PS4{static_cast<int32_t>(0x4)};
constexpr ::Shipmate::Porting::AuthTypes  Shipmate::Porting::AuthTypes::PS5{static_cast<int32_t>(0x5)};
