#pragma once
// IWYU pragma private; include "Shipmate/Porting/VirtualKeyboardShowType.hpp"
#include "Shipmate/Porting/zzzz__VirtualKeyboardShowType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Shipmate::Porting::VirtualKeyboardShowType::VirtualKeyboardShowType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::VirtualKeyboardShowType::VirtualKeyboardShowType()   {
}
constexpr ::Shipmate::Porting::VirtualKeyboardShowType  Shipmate::Porting::VirtualKeyboardShowType::Default{static_cast<int32_t>(0x0)};
constexpr ::Shipmate::Porting::VirtualKeyboardShowType  Shipmate::Porting::VirtualKeyboardShowType::Password{static_cast<int32_t>(0x1)};
