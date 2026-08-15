#pragma once
// IWYU pragma private; include "Steamworks/LobbyKicked_t.hpp"
#include "Steamworks/zzzz__LobbyKicked_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_ulSteamIDLobby", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ulSteamIDAdmin", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bKickedDueToDisconnect", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::LobbyKicked_t::LobbyKicked_t(uint64_t  m_ulSteamIDLobby, uint64_t  m_ulSteamIDAdmin, uint8_t  m_bKickedDueToDisconnect) noexcept  {
this->m_ulSteamIDLobby = m_ulSteamIDLobby;
this->m_ulSteamIDAdmin = m_ulSteamIDAdmin;
this->m_bKickedDueToDisconnect = m_bKickedDueToDisconnect;
}
// Ctor Parameters []
constexpr ::Steamworks::LobbyKicked_t::LobbyKicked_t()   {
}
