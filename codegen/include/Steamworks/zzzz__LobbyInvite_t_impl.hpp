#pragma once
// IWYU pragma private; include "Steamworks/LobbyInvite_t.hpp"
#include "Steamworks/zzzz__LobbyInvite_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_ulSteamIDUser", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ulSteamIDLobby", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ulGameID", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::LobbyInvite_t::LobbyInvite_t(uint64_t  m_ulSteamIDUser, uint64_t  m_ulSteamIDLobby, uint64_t  m_ulGameID) noexcept  {
this->m_ulSteamIDUser = m_ulSteamIDUser;
this->m_ulSteamIDLobby = m_ulSteamIDLobby;
this->m_ulGameID = m_ulGameID;
}
// Ctor Parameters []
constexpr ::Steamworks::LobbyInvite_t::LobbyInvite_t()   {
}
