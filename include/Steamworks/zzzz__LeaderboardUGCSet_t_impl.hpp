#pragma once
// IWYU pragma private; include "Steamworks/LeaderboardUGCSet_t.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__SteamLeaderboard_t_impl.hpp"
#include "Steamworks/zzzz__LeaderboardUGCSet_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_hSteamLeaderboard", ty: "::Steamworks::SteamLeaderboard_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::LeaderboardUGCSet_t::LeaderboardUGCSet_t(::Steamworks::EResult  m_eResult, ::Steamworks::SteamLeaderboard_t  m_hSteamLeaderboard) noexcept  {
this->m_eResult = m_eResult;
this->m_hSteamLeaderboard = m_hSteamLeaderboard;
}
// Ctor Parameters []
constexpr ::Steamworks::LeaderboardUGCSet_t::LeaderboardUGCSet_t()   {
}
