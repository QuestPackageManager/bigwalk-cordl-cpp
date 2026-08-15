#pragma once
// IWYU pragma private; include "Steamworks/GameLobbyJoinRequested_t.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__GameLobbyJoinRequested_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_steamIDLobby", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_steamIDFriend", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::GameLobbyJoinRequested_t::GameLobbyJoinRequested_t(::Steamworks::CSteamID  m_steamIDLobby, ::Steamworks::CSteamID  m_steamIDFriend) noexcept  {
this->m_steamIDLobby = m_steamIDLobby;
this->m_steamIDFriend = m_steamIDFriend;
}
// Ctor Parameters []
constexpr ::Steamworks::GameLobbyJoinRequested_t::GameLobbyJoinRequested_t()   {
}
