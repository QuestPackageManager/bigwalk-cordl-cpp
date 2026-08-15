#pragma once
// IWYU pragma private; include "Steamworks/GameConnectedFriendChatMsg_t.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__GameConnectedFriendChatMsg_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_steamIDUser", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_iMessageID", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::GameConnectedFriendChatMsg_t::GameConnectedFriendChatMsg_t(::Steamworks::CSteamID  m_steamIDUser, int32_t  m_iMessageID) noexcept  {
this->m_steamIDUser = m_steamIDUser;
this->m_iMessageID = m_iMessageID;
}
// Ctor Parameters []
constexpr ::Steamworks::GameConnectedFriendChatMsg_t::GameConnectedFriendChatMsg_t()   {
}
