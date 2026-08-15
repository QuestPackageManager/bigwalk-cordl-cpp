#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyMemberStatus.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyMemberStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::LobbyMemberStatus::LobbyMemberStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::LobbyMemberStatus::LobbyMemberStatus()   {
}
constexpr ::Epic::OnlineServices::Lobby::LobbyMemberStatus  Epic::OnlineServices::Lobby::LobbyMemberStatus::Joined{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::Lobby::LobbyMemberStatus  Epic::OnlineServices::Lobby::LobbyMemberStatus::Left{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::Lobby::LobbyMemberStatus  Epic::OnlineServices::Lobby::LobbyMemberStatus::Disconnected{static_cast<int32_t>(0x2)};
constexpr ::Epic::OnlineServices::Lobby::LobbyMemberStatus  Epic::OnlineServices::Lobby::LobbyMemberStatus::Kicked{static_cast<int32_t>(0x3)};
constexpr ::Epic::OnlineServices::Lobby::LobbyMemberStatus  Epic::OnlineServices::Lobby::LobbyMemberStatus::Promoted{static_cast<int32_t>(0x4)};
constexpr ::Epic::OnlineServices::Lobby::LobbyMemberStatus  Epic::OnlineServices::Lobby::LobbyMemberStatus::Closed{static_cast<int32_t>(0x5)};
