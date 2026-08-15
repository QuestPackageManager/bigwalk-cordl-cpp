#pragma once
// IWYU pragma private; include "Steamworks/FriendRichPresenceUpdate_t.hpp"
#include "Steamworks/zzzz__AppId_t_impl.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__FriendRichPresenceUpdate_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_steamIDFriend", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nAppID", ty: "::Steamworks::AppId_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::FriendRichPresenceUpdate_t::FriendRichPresenceUpdate_t(::Steamworks::CSteamID  m_steamIDFriend, ::Steamworks::AppId_t  m_nAppID) noexcept  {
this->m_steamIDFriend = m_steamIDFriend;
this->m_nAppID = m_nAppID;
}
// Ctor Parameters []
constexpr ::Steamworks::FriendRichPresenceUpdate_t::FriendRichPresenceUpdate_t()   {
}
