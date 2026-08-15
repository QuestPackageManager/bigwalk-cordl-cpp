#pragma once
// IWYU pragma private; include "Steamworks/EHTMLKeyModifiers.hpp"
#include "Steamworks/zzzz__EHTMLKeyModifiers_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EHTMLKeyModifiers::EHTMLKeyModifiers(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EHTMLKeyModifiers::EHTMLKeyModifiers()   {
}
constexpr ::Steamworks::EHTMLKeyModifiers  Steamworks::EHTMLKeyModifiers::k_eHTMLKeyModifier_None{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EHTMLKeyModifiers  Steamworks::EHTMLKeyModifiers::k_eHTMLKeyModifier_AltDown{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EHTMLKeyModifiers  Steamworks::EHTMLKeyModifiers::k_eHTMLKeyModifier_CtrlDown{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EHTMLKeyModifiers  Steamworks::EHTMLKeyModifiers::k_eHTMLKeyModifier_ShiftDown{static_cast<int32_t>(0x4)};
