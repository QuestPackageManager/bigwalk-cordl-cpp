#pragma once
// IWYU pragma private; include "Steamworks/GameConnectedChatLeave_t.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__GameConnectedChatLeave_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_steamIDClanChat", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_steamIDUser", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bKicked", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bDropped", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::GameConnectedChatLeave_t::GameConnectedChatLeave_t(::Steamworks::CSteamID  m_steamIDClanChat, ::Steamworks::CSteamID  m_steamIDUser, bool  m_bKicked, bool  m_bDropped) noexcept  {
this->m_steamIDClanChat = m_steamIDClanChat;
this->m_steamIDUser = m_steamIDUser;
this->m_bKicked = m_bKicked;
this->m_bDropped = m_bDropped;
}
// Ctor Parameters []
constexpr ::Steamworks::GameConnectedChatLeave_t::GameConnectedChatLeave_t()   {
}
