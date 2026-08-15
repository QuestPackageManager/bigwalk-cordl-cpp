#pragma once
// IWYU pragma private; include "Steamworks/LobbyEnter_t.hpp"
#include "Steamworks/zzzz__LobbyEnter_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_ulSteamIDLobby", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_rgfChatPermissions", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bLocked", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EChatRoomEnterResponse", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::LobbyEnter_t::LobbyEnter_t(uint64_t  m_ulSteamIDLobby, uint32_t  m_rgfChatPermissions, bool  m_bLocked, uint32_t  m_EChatRoomEnterResponse) noexcept  {
this->m_ulSteamIDLobby = m_ulSteamIDLobby;
this->m_rgfChatPermissions = m_rgfChatPermissions;
this->m_bLocked = m_bLocked;
this->m_EChatRoomEnterResponse = m_EChatRoomEnterResponse;
}
// Ctor Parameters []
constexpr ::Steamworks::LobbyEnter_t::LobbyEnter_t()   {
}
