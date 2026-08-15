#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/AuthScopeFlags.hpp"
#include "Epic/OnlineServices/Auth/zzzz__AuthScopeFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Auth::AuthScopeFlags::AuthScopeFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Auth::AuthScopeFlags::AuthScopeFlags()   {
}
constexpr ::Epic::OnlineServices::Auth::AuthScopeFlags  Epic::OnlineServices::Auth::AuthScopeFlags::NoFlags{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::Auth::AuthScopeFlags  Epic::OnlineServices::Auth::AuthScopeFlags::BasicProfile{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::Auth::AuthScopeFlags  Epic::OnlineServices::Auth::AuthScopeFlags::FriendsList{static_cast<int32_t>(0x2)};
constexpr ::Epic::OnlineServices::Auth::AuthScopeFlags  Epic::OnlineServices::Auth::AuthScopeFlags::Presence{static_cast<int32_t>(0x4)};
constexpr ::Epic::OnlineServices::Auth::AuthScopeFlags  Epic::OnlineServices::Auth::AuthScopeFlags::FriendsManagement{static_cast<int32_t>(0x8)};
constexpr ::Epic::OnlineServices::Auth::AuthScopeFlags  Epic::OnlineServices::Auth::AuthScopeFlags::Email{static_cast<int32_t>(0x10)};
constexpr ::Epic::OnlineServices::Auth::AuthScopeFlags  Epic::OnlineServices::Auth::AuthScopeFlags::Country{static_cast<int32_t>(0x20)};
