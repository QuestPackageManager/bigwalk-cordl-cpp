#pragma once
// IWYU pragma private; include "Steamworks/LeaderboardEntry_t.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__UGCHandle_t_impl.hpp"
#include "Steamworks/zzzz__LeaderboardEntry_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_steamIDUser", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nGlobalRank", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nScore", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_cDetails", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_hUGC", ty: "::Steamworks::UGCHandle_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::LeaderboardEntry_t::LeaderboardEntry_t(::Steamworks::CSteamID  m_steamIDUser, int32_t  m_nGlobalRank, int32_t  m_nScore, int32_t  m_cDetails, ::Steamworks::UGCHandle_t  m_hUGC) noexcept  {
this->m_steamIDUser = m_steamIDUser;
this->m_nGlobalRank = m_nGlobalRank;
this->m_nScore = m_nScore;
this->m_cDetails = m_cDetails;
this->m_hUGC = m_hUGC;
}
// Ctor Parameters []
constexpr ::Steamworks::LeaderboardEntry_t::LeaderboardEntry_t()   {
}
