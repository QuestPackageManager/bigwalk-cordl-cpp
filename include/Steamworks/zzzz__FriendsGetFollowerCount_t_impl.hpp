#pragma once
// IWYU pragma private; include "Steamworks/FriendsGetFollowerCount_t.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__FriendsGetFollowerCount_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_steamID", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::FriendsGetFollowerCount_t::FriendsGetFollowerCount_t(::Steamworks::EResult  m_eResult, ::Steamworks::CSteamID  m_steamID, int32_t  m_nCount) noexcept  {
this->m_eResult = m_eResult;
this->m_steamID = m_steamID;
this->m_nCount = m_nCount;
}
// Ctor Parameters []
constexpr ::Steamworks::FriendsGetFollowerCount_t::FriendsGetFollowerCount_t()   {
}
