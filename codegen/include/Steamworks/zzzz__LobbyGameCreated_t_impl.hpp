#pragma once
// IWYU pragma private; include "Steamworks/LobbyGameCreated_t.hpp"
#include "Steamworks/zzzz__LobbyGameCreated_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_ulSteamIDLobby", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ulSteamIDGameServer", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_unIP", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_usPort", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::LobbyGameCreated_t::LobbyGameCreated_t(uint64_t  m_ulSteamIDLobby, uint64_t  m_ulSteamIDGameServer, uint32_t  m_unIP, uint16_t  m_usPort) noexcept  {
this->m_ulSteamIDLobby = m_ulSteamIDLobby;
this->m_ulSteamIDGameServer = m_ulSteamIDGameServer;
this->m_unIP = m_unIP;
this->m_usPort = m_usPort;
}
// Ctor Parameters []
constexpr ::Steamworks::LobbyGameCreated_t::LobbyGameCreated_t()   {
}
