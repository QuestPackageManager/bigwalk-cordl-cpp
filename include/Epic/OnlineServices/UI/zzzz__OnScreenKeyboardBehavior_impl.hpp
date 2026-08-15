#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/OnScreenKeyboardBehavior.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnScreenKeyboardBehavior_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::UI::OnScreenKeyboardBehavior::OnScreenKeyboardBehavior(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UI::OnScreenKeyboardBehavior::OnScreenKeyboardBehavior()   {
}
constexpr ::Epic::OnlineServices::UI::OnScreenKeyboardBehavior  Epic::OnlineServices::UI::OnScreenKeyboardBehavior::None{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::UI::OnScreenKeyboardBehavior  Epic::OnlineServices::UI::OnScreenKeyboardBehavior::Notification{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::UI::OnScreenKeyboardBehavior  Epic::OnlineServices::UI::OnScreenKeyboardBehavior::Native{static_cast<int32_t>(0x2)};
