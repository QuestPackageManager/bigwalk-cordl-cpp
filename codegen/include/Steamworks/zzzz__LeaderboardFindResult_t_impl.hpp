#pragma once
// IWYU pragma private; include "Steamworks/LeaderboardFindResult_t.hpp"
#include "Steamworks/zzzz__SteamLeaderboard_t_impl.hpp"
#include "Steamworks/zzzz__LeaderboardFindResult_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_hSteamLeaderboard", ty: "::Steamworks::SteamLeaderboard_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bLeaderboardFound", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::LeaderboardFindResult_t::LeaderboardFindResult_t(::Steamworks::SteamLeaderboard_t  m_hSteamLeaderboard, uint8_t  m_bLeaderboardFound) noexcept  {
this->m_hSteamLeaderboard = m_hSteamLeaderboard;
this->m_bLeaderboardFound = m_bLeaderboardFound;
}
// Ctor Parameters []
constexpr ::Steamworks::LeaderboardFindResult_t::LeaderboardFindResult_t()   {
}
