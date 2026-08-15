#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/LoginCredentialType.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LoginCredentialType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Auth::LoginCredentialType::LoginCredentialType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Auth::LoginCredentialType::LoginCredentialType()   {
}
constexpr ::Epic::OnlineServices::Auth::LoginCredentialType  Epic::OnlineServices::Auth::LoginCredentialType::Password{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::Auth::LoginCredentialType  Epic::OnlineServices::Auth::LoginCredentialType::ExchangeCode{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::Auth::LoginCredentialType  Epic::OnlineServices::Auth::LoginCredentialType::PersistentAuth{static_cast<int32_t>(0x2)};
constexpr ::Epic::OnlineServices::Auth::LoginCredentialType  Epic::OnlineServices::Auth::LoginCredentialType::DeviceCode{static_cast<int32_t>(0x3)};
constexpr ::Epic::OnlineServices::Auth::LoginCredentialType  Epic::OnlineServices::Auth::LoginCredentialType::Developer{static_cast<int32_t>(0x4)};
constexpr ::Epic::OnlineServices::Auth::LoginCredentialType  Epic::OnlineServices::Auth::LoginCredentialType::RefreshToken{static_cast<int32_t>(0x5)};
constexpr ::Epic::OnlineServices::Auth::LoginCredentialType  Epic::OnlineServices::Auth::LoginCredentialType::AccountPortal{static_cast<int32_t>(0x6)};
constexpr ::Epic::OnlineServices::Auth::LoginCredentialType  Epic::OnlineServices::Auth::LoginCredentialType::ExternalAuth{static_cast<int32_t>(0x7)};
