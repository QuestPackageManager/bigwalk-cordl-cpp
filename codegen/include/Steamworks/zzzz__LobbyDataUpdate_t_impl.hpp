#pragma once
// IWYU pragma private; include "Steamworks/LobbyDataUpdate_t.hpp"
#include "Steamworks/zzzz__LobbyDataUpdate_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_ulSteamIDLobby", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ulSteamIDMember", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bSuccess", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::LobbyDataUpdate_t::LobbyDataUpdate_t(uint64_t  m_ulSteamIDLobby, uint64_t  m_ulSteamIDMember, uint8_t  m_bSuccess) noexcept  {
this->m_ulSteamIDLobby = m_ulSteamIDLobby;
this->m_ulSteamIDMember = m_ulSteamIDMember;
this->m_bSuccess = m_bSuccess;
}
// Ctor Parameters []
constexpr ::Steamworks::LobbyDataUpdate_t::LobbyDataUpdate_t()   {
}
