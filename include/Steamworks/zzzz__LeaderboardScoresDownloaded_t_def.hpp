#pragma once
// IWYU pragma private; include "Steamworks/LeaderboardScoresDownloaded_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__SteamLeaderboardEntries_t_def.hpp"
#include "Steamworks/zzzz__SteamLeaderboard_t_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LeaderboardScoresDownloaded_t)
// Forward declare root types
namespace Steamworks {
struct LeaderboardScoresDownloaded_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::LeaderboardScoresDownloaded_t);
DEFINE_IL2CPP_CLASS(::Steamworks::LeaderboardScoresDownloaded_t, "Steamworks", "LeaderboardScoresDownloaded_t");
// Dependencies Steamworks.SteamLeaderboardEntries_t, Steamworks.SteamLeaderboard_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.LeaderboardScoresDownloaded_t
#pragma pack(push, 8)
struct CORDL_TYPE LeaderboardScoresDownloaded_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LeaderboardScoresDownloaded_t() ;

// Ctor Parameters [CppParam { name: "m_hSteamLeaderboard", ty: "::Steamworks::SteamLeaderboard_t", modifiers: "", def_value: None }, CppParam { name: "m_hSteamLeaderboardEntries", ty: "::Steamworks::SteamLeaderboardEntries_t", modifiers: "", def_value: None }, CppParam { name: "m_cEntryCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LeaderboardScoresDownloaded_t(::Steamworks::SteamLeaderboard_t  m_hSteamLeaderboard, ::Steamworks::SteamLeaderboardEntries_t  m_hSteamLeaderboardEntries, int32_t  m_cEntryCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16219};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x451)};

/// @brief Field m_hSteamLeaderboard, offset: 0x0, size: 0x8, def value: None
 ::Steamworks::SteamLeaderboard_t  m_hSteamLeaderboard;

/// @brief Field m_hSteamLeaderboardEntries, offset: 0x8, size: 0x8, def value: None
 ::Steamworks::SteamLeaderboardEntries_t  m_hSteamLeaderboardEntries;

/// @brief Field m_cEntryCount, offset: 0x10, size: 0x4, def value: None
 int32_t  m_cEntryCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::LeaderboardScoresDownloaded_t, m_hSteamLeaderboard) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::LeaderboardScoresDownloaded_t, m_hSteamLeaderboardEntries) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::LeaderboardScoresDownloaded_t, m_cEntryCount) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Steamworks::LeaderboardScoresDownloaded_t) == 0x18, "Size mismatch!");

} // namespace end def Steamworks
