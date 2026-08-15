#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Friends/FriendsStatus.hpp"
#include "Epic/OnlineServices/Friends/zzzz__FriendsStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Friends::FriendsStatus::FriendsStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Friends::FriendsStatus::FriendsStatus()   {
}
constexpr ::Epic::OnlineServices::Friends::FriendsStatus  Epic::OnlineServices::Friends::FriendsStatus::NotFriends{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::Friends::FriendsStatus  Epic::OnlineServices::Friends::FriendsStatus::InviteSent{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::Friends::FriendsStatus  Epic::OnlineServices::Friends::FriendsStatus::InviteReceived{static_cast<int32_t>(0x2)};
constexpr ::Epic::OnlineServices::Friends::FriendsStatus  Epic::OnlineServices::Friends::FriendsStatus::Friends{static_cast<int32_t>(0x3)};
