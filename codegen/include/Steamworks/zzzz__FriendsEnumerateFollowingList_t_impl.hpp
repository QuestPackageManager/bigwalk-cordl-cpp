#pragma once
// IWYU pragma private; include "Steamworks/FriendsEnumerateFollowingList_t.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__FriendsEnumerateFollowingList_t_def.hpp"
#include "Steamworks/zzzz__CSteamID_def.hpp"
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_rgSteamID", ty: "::ArrayW<::Steamworks::CSteamID>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nResultsReturned", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nTotalResultCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::FriendsEnumerateFollowingList_t::FriendsEnumerateFollowingList_t(::Steamworks::EResult  m_eResult, ::ArrayW<::Steamworks::CSteamID>  m_rgSteamID, int32_t  m_nResultsReturned, int32_t  m_nTotalResultCount) noexcept  {
this->m_eResult = m_eResult;
this->m_rgSteamID = m_rgSteamID;
this->m_nResultsReturned = m_nResultsReturned;
this->m_nTotalResultCount = m_nTotalResultCount;
}
// Ctor Parameters []
constexpr ::Steamworks::FriendsEnumerateFollowingList_t::FriendsEnumerateFollowingList_t()   {
}
