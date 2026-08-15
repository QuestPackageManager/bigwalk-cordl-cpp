#pragma once
// IWYU pragma private; include "Steamworks/GameConnectedClanChatMsg_t.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__GameConnectedClanChatMsg_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_steamIDClanChat", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_steamIDUser", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_iMessageID", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::GameConnectedClanChatMsg_t::GameConnectedClanChatMsg_t(::Steamworks::CSteamID  m_steamIDClanChat, ::Steamworks::CSteamID  m_steamIDUser, int32_t  m_iMessageID) noexcept  {
this->m_steamIDClanChat = m_steamIDClanChat;
this->m_steamIDUser = m_steamIDUser;
this->m_iMessageID = m_iMessageID;
}
// Ctor Parameters []
constexpr ::Steamworks::GameConnectedClanChatMsg_t::GameConnectedClanChatMsg_t()   {
}
