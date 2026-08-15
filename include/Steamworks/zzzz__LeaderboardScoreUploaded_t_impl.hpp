#pragma once
// IWYU pragma private; include "Steamworks/LeaderboardScoreUploaded_t.hpp"
#include "Steamworks/zzzz__SteamLeaderboard_t_impl.hpp"
#include "Steamworks/zzzz__LeaderboardScoreUploaded_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_bSuccess", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_hSteamLeaderboard", ty: "::Steamworks::SteamLeaderboard_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nScore", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bScoreChanged", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nGlobalRankNew", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nGlobalRankPrevious", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::LeaderboardScoreUploaded_t::LeaderboardScoreUploaded_t(uint8_t  m_bSuccess, ::Steamworks::SteamLeaderboard_t  m_hSteamLeaderboard, int32_t  m_nScore, uint8_t  m_bScoreChanged, int32_t  m_nGlobalRankNew, int32_t  m_nGlobalRankPrevious) noexcept  {
this->m_bSuccess = m_bSuccess;
this->m_hSteamLeaderboard = m_hSteamLeaderboard;
this->m_nScore = m_nScore;
this->m_bScoreChanged = m_bScoreChanged;
this->m_nGlobalRankNew = m_nGlobalRankNew;
this->m_nGlobalRankPrevious = m_nGlobalRankPrevious;
}
// Ctor Parameters []
constexpr ::Steamworks::LeaderboardScoreUploaded_t::LeaderboardScoreUploaded_t()   {
}
