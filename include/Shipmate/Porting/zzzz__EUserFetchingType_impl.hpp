#pragma once
// IWYU pragma private; include "Shipmate/Porting/EUserFetchingType.hpp"
#include "Shipmate/Porting/zzzz__EUserFetchingType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Shipmate::Porting::EUserFetchingType::EUserFetchingType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::EUserFetchingType::EUserFetchingType()   {
}
constexpr ::Shipmate::Porting::EUserFetchingType  Shipmate::Porting::EUserFetchingType::Persistent{static_cast<int32_t>(0x0)};
constexpr ::Shipmate::Porting::EUserFetchingType  Shipmate::Porting::EUserFetchingType::First{static_cast<int32_t>(0x1)};
constexpr ::Shipmate::Porting::EUserFetchingType  Shipmate::Porting::EUserFetchingType::Prompt{static_cast<int32_t>(0x2)};
