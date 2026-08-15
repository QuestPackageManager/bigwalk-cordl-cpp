#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/OnlineSessionPermissionLevel.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnlineSessionPermissionLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel::OnlineSessionPermissionLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel::OnlineSessionPermissionLevel()   {
}
constexpr ::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel  Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel::PublicAdvertised{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel  Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel::JoinViaPresence{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel  Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel::InviteOnly{static_cast<int32_t>(0x2)};
