#pragma once
// IWYU pragma private; include "Shipmate/Porting/EFileEntryType.hpp"
#include "Shipmate/Porting/zzzz__EFileEntryType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Shipmate::Porting::EFileEntryType::EFileEntryType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::EFileEntryType::EFileEntryType()   {
}
constexpr ::Shipmate::Porting::EFileEntryType  Shipmate::Porting::EFileEntryType::File{static_cast<int32_t>(0x0)};
constexpr ::Shipmate::Porting::EFileEntryType  Shipmate::Porting::EFileEntryType::Folder{static_cast<int32_t>(0x1)};
