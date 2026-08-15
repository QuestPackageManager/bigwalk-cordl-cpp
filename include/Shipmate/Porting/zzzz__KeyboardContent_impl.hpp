#pragma once
// IWYU pragma private; include "Shipmate/Porting/KeyboardContent.hpp"
#include "Shipmate/Porting/zzzz__KeyboardContent_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Shipmate::Porting::KeyboardContent::KeyboardContent(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::KeyboardContent::KeyboardContent()   {
}
constexpr ::Shipmate::Porting::KeyboardContent  Shipmate::Porting::KeyboardContent::AlphaNumeric{static_cast<int32_t>(0x0)};
constexpr ::Shipmate::Porting::KeyboardContent  Shipmate::Porting::KeyboardContent::Numeric{static_cast<int32_t>(0x1)};
constexpr ::Shipmate::Porting::KeyboardContent  Shipmate::Porting::KeyboardContent::Alpha{static_cast<int32_t>(0x2)};
