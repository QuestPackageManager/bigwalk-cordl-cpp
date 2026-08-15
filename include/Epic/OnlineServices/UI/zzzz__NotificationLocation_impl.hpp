#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/NotificationLocation.hpp"
#include "Epic/OnlineServices/UI/zzzz__NotificationLocation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::UI::NotificationLocation::NotificationLocation(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UI::NotificationLocation::NotificationLocation()   {
}
constexpr ::Epic::OnlineServices::UI::NotificationLocation  Epic::OnlineServices::UI::NotificationLocation::TopLeft{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::UI::NotificationLocation  Epic::OnlineServices::UI::NotificationLocation::TopRight{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::UI::NotificationLocation  Epic::OnlineServices::UI::NotificationLocation::BottomLeft{static_cast<int32_t>(0x2)};
constexpr ::Epic::OnlineServices::UI::NotificationLocation  Epic::OnlineServices::UI::NotificationLocation::BottomRight{static_cast<int32_t>(0x3)};
