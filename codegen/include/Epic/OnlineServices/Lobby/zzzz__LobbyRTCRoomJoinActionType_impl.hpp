#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyRTCRoomJoinActionType.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyRTCRoomJoinActionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType::LobbyRTCRoomJoinActionType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType::LobbyRTCRoomJoinActionType()   {
}
constexpr ::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType  Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType::AutomaticJoin{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType  Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType::ManualJoin{static_cast<int32_t>(0x1)};
