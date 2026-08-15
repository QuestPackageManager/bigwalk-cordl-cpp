#pragma once
// IWYU pragma private; include "Steamworks/FriendsIsFollowing_t.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__FriendsIsFollowing_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_steamID", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bIsFollowing", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::FriendsIsFollowing_t::FriendsIsFollowing_t(::Steamworks::EResult  m_eResult, ::Steamworks::CSteamID  m_steamID, bool  m_bIsFollowing) noexcept  {
this->m_eResult = m_eResult;
this->m_steamID = m_steamID;
this->m_bIsFollowing = m_bIsFollowing;
}
// Ctor Parameters []
constexpr ::Steamworks::FriendsIsFollowing_t::FriendsIsFollowing_t()   {
}
