#pragma once
// IWYU pragma private; include "Steamworks/LeaderboardScoresDownloaded_t.hpp"
#include "Steamworks/zzzz__SteamLeaderboardEntries_t_impl.hpp"
#include "Steamworks/zzzz__SteamLeaderboard_t_impl.hpp"
#include "Steamworks/zzzz__LeaderboardScoresDownloaded_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_hSteamLeaderboard", ty: "::Steamworks::SteamLeaderboard_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_hSteamLeaderboardEntries", ty: "::Steamworks::SteamLeaderboardEntries_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_cEntryCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::LeaderboardScoresDownloaded_t::LeaderboardScoresDownloaded_t(::Steamworks::SteamLeaderboard_t  m_hSteamLeaderboard, ::Steamworks::SteamLeaderboardEntries_t  m_hSteamLeaderboardEntries, int32_t  m_cEntryCount) noexcept  {
this->m_hSteamLeaderboard = m_hSteamLeaderboard;
this->m_hSteamLeaderboardEntries = m_hSteamLeaderboardEntries;
this->m_cEntryCount = m_cEntryCount;
}
// Ctor Parameters []
constexpr ::Steamworks::LeaderboardScoresDownloaded_t::LeaderboardScoresDownloaded_t()   {
}
