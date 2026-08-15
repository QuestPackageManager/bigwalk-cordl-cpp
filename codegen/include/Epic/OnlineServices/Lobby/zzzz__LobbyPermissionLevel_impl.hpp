#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyPermissionLevel.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyPermissionLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::LobbyPermissionLevel::LobbyPermissionLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::LobbyPermissionLevel::LobbyPermissionLevel()   {
}
constexpr ::Epic::OnlineServices::Lobby::LobbyPermissionLevel  Epic::OnlineServices::Lobby::LobbyPermissionLevel::Publicadvertised{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::Lobby::LobbyPermissionLevel  Epic::OnlineServices::Lobby::LobbyPermissionLevel::Joinviapresence{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::Lobby::LobbyPermissionLevel  Epic::OnlineServices::Lobby::LobbyPermissionLevel::Inviteonly{static_cast<int32_t>(0x2)};
