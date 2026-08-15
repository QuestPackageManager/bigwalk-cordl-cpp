#pragma once
// IWYU pragma private; include "Steamworks/LeaderboardScoreUploaded_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__SteamLeaderboard_t_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LeaderboardScoreUploaded_t)
// Forward declare root types
namespace Steamworks {
struct LeaderboardScoreUploaded_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::LeaderboardScoreUploaded_t);
DEFINE_IL2CPP_CLASS(::Steamworks::LeaderboardScoreUploaded_t, "Steamworks", "LeaderboardScoreUploaded_t");
// Dependencies Steamworks.SteamLeaderboard_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.LeaderboardScoreUploaded_t
#pragma pack(push, 8)
struct CORDL_TYPE LeaderboardScoreUploaded_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LeaderboardScoreUploaded_t() ;

// Ctor Parameters [CppParam { name: "m_bSuccess", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_hSteamLeaderboard", ty: "::Steamworks::SteamLeaderboard_t", modifiers: "", def_value: None }, CppParam { name: "m_nScore", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_bScoreChanged", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_nGlobalRankNew", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_nGlobalRankPrevious", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LeaderboardScoreUploaded_t(uint8_t  m_bSuccess, ::Steamworks::SteamLeaderboard_t  m_hSteamLeaderboard, int32_t  m_nScore, uint8_t  m_bScoreChanged, int32_t  m_nGlobalRankNew, int32_t  m_nGlobalRankPrevious) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16220};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x452)};

/// @brief Field m_bSuccess, offset: 0x0, size: 0x1, def value: None
 uint8_t  m_bSuccess;

/// @brief Field m_hSteamLeaderboard, offset: 0x8, size: 0x8, def value: None
 ::Steamworks::SteamLeaderboard_t  m_hSteamLeaderboard;

/// @brief Field m_nScore, offset: 0x10, size: 0x4, def value: None
 int32_t  m_nScore;

/// @brief Field m_bScoreChanged, offset: 0x14, size: 0x1, def value: None
 uint8_t  m_bScoreChanged;

/// @brief Field m_nGlobalRankNew, offset: 0x18, size: 0x4, def value: None
 int32_t  m_nGlobalRankNew;

/// @brief Field m_nGlobalRankPrevious, offset: 0x1c, size: 0x4, def value: None
 int32_t  m_nGlobalRankPrevious;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::LeaderboardScoreUploaded_t, m_bSuccess) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::LeaderboardScoreUploaded_t, m_hSteamLeaderboard) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::LeaderboardScoreUploaded_t, m_nScore) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::LeaderboardScoreUploaded_t, m_bScoreChanged) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Steamworks::LeaderboardScoreUploaded_t, m_nGlobalRankNew) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Steamworks::LeaderboardScoreUploaded_t, m_nGlobalRankPrevious) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Steamworks::LeaderboardScoreUploaded_t) == 0x20, "Size mismatch!");

} // namespace end def Steamworks
