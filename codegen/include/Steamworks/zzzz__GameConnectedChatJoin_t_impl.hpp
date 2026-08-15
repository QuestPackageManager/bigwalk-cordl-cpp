#pragma once
// IWYU pragma private; include "Steamworks/GameConnectedChatJoin_t.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__GameConnectedChatJoin_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_steamIDClanChat", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_steamIDUser", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::GameConnectedChatJoin_t::GameConnectedChatJoin_t(::Steamworks::CSteamID  m_steamIDClanChat, ::Steamworks::CSteamID  m_steamIDUser) noexcept  {
this->m_steamIDClanChat = m_steamIDClanChat;
this->m_steamIDUser = m_steamIDUser;
}
// Ctor Parameters []
constexpr ::Steamworks::GameConnectedChatJoin_t::GameConnectedChatJoin_t()   {
}
