#pragma once
// IWYU pragma private; include "Epic/OnlineServices/LoginStatus.hpp"
#include "Epic/OnlineServices/zzzz__LoginStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::LoginStatus::LoginStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::LoginStatus::LoginStatus()   {
}
constexpr ::Epic::OnlineServices::LoginStatus  Epic::OnlineServices::LoginStatus::NotLoggedIn{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::LoginStatus  Epic::OnlineServices::LoginStatus::UsingLocalProfile{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::LoginStatus  Epic::OnlineServices::LoginStatus::LoggedIn{static_cast<int32_t>(0x2)};
