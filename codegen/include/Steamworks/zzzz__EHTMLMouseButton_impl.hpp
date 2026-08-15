#pragma once
// IWYU pragma private; include "Steamworks/EHTMLMouseButton.hpp"
#include "Steamworks/zzzz__EHTMLMouseButton_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EHTMLMouseButton::EHTMLMouseButton(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EHTMLMouseButton::EHTMLMouseButton()   {
}
constexpr ::Steamworks::EHTMLMouseButton  Steamworks::EHTMLMouseButton::eHTMLMouseButton_Left{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EHTMLMouseButton  Steamworks::EHTMLMouseButton::eHTMLMouseButton_Right{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EHTMLMouseButton  Steamworks::EHTMLMouseButton::eHTMLMouseButton_Middle{static_cast<int32_t>(0x2)};
