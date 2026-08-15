#pragma once
// IWYU pragma private; include "Shipmate/Porting/EStorageType.hpp"
#include "Shipmate/Porting/zzzz__EStorageType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Shipmate::Porting::EStorageType::EStorageType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::EStorageType::EStorageType()   {
}
constexpr ::Shipmate::Porting::EStorageType  Shipmate::Porting::EStorageType::DEVICE_CACHE{static_cast<int32_t>(0x0)};
constexpr ::Shipmate::Porting::EStorageType  Shipmate::Porting::EStorageType::CLOUD{static_cast<int32_t>(0x1)};
