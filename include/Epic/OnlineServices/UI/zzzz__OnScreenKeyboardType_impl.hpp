#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/OnScreenKeyboardType.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnScreenKeyboardType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::UI::OnScreenKeyboardType::OnScreenKeyboardType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UI::OnScreenKeyboardType::OnScreenKeyboardType()   {
}
constexpr ::Epic::OnlineServices::UI::OnScreenKeyboardType  Epic::OnlineServices::UI::OnScreenKeyboardType::None{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::UI::OnScreenKeyboardType  Epic::OnlineServices::UI::OnScreenKeyboardType::Default{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::UI::OnScreenKeyboardType  Epic::OnlineServices::UI::OnScreenKeyboardType::Text{static_cast<int32_t>(0x2)};
constexpr ::Epic::OnlineServices::UI::OnScreenKeyboardType  Epic::OnlineServices::UI::OnScreenKeyboardType::TelephoneNumber{static_cast<int32_t>(0x3)};
constexpr ::Epic::OnlineServices::UI::OnScreenKeyboardType  Epic::OnlineServices::UI::OnScreenKeyboardType::Url{static_cast<int32_t>(0x4)};
constexpr ::Epic::OnlineServices::UI::OnScreenKeyboardType  Epic::OnlineServices::UI::OnScreenKeyboardType::Email{static_cast<int32_t>(0x5)};
constexpr ::Epic::OnlineServices::UI::OnScreenKeyboardType  Epic::OnlineServices::UI::OnScreenKeyboardType::Numeric{static_cast<int32_t>(0x6)};
constexpr ::Epic::OnlineServices::UI::OnScreenKeyboardType  Epic::OnlineServices::UI::OnScreenKeyboardType::Decimal{static_cast<int32_t>(0x7)};
constexpr ::Epic::OnlineServices::UI::OnScreenKeyboardType  Epic::OnlineServices::UI::OnScreenKeyboardType::Search{static_cast<int32_t>(0x8)};
