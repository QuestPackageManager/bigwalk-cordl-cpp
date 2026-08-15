#pragma once
// IWYU pragma private; include "Steamworks/FriendGameInfo_t.hpp"
#include "Steamworks/zzzz__CGameID_impl.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__FriendGameInfo_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_gameID", ty: "::Steamworks::CGameID", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_unGameIP", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_usGamePort", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_usQueryPort", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_steamIDLobby", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::FriendGameInfo_t::FriendGameInfo_t(::Steamworks::CGameID  m_gameID, uint32_t  m_unGameIP, uint16_t  m_usGamePort, uint16_t  m_usQueryPort, ::Steamworks::CSteamID  m_steamIDLobby) noexcept  {
this->m_gameID = m_gameID;
this->m_unGameIP = m_unGameIP;
this->m_usGamePort = m_usGamePort;
this->m_usQueryPort = m_usQueryPort;
this->m_steamIDLobby = m_steamIDLobby;
}
// Ctor Parameters []
constexpr ::Steamworks::FriendGameInfo_t::FriendGameInfo_t()   {
}
