#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/AuthTokenType.hpp"
#include "Epic/OnlineServices/Auth/zzzz__AuthTokenType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Auth::AuthTokenType::AuthTokenType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Auth::AuthTokenType::AuthTokenType()   {
}
constexpr ::Epic::OnlineServices::Auth::AuthTokenType  Epic::OnlineServices::Auth::AuthTokenType::Client{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::Auth::AuthTokenType  Epic::OnlineServices::Auth::AuthTokenType::User{static_cast<int32_t>(0x1)};
