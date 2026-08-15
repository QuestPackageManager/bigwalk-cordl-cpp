#pragma once
// IWYU pragma private; include "Steamworks/LeaderboardFindResult_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__SteamLeaderboard_t_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LeaderboardFindResult_t)
// Forward declare root types
namespace Steamworks {
struct LeaderboardFindResult_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::LeaderboardFindResult_t);
DEFINE_IL2CPP_CLASS(::Steamworks::LeaderboardFindResult_t, "Steamworks", "LeaderboardFindResult_t");
// Dependencies Steamworks.SteamLeaderboard_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.LeaderboardFindResult_t
#pragma pack(push, 8)
struct CORDL_TYPE LeaderboardFindResult_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LeaderboardFindResult_t() ;

// Ctor Parameters [CppParam { name: "m_hSteamLeaderboard", ty: "::Steamworks::SteamLeaderboard_t", modifiers: "", def_value: None }, CppParam { name: "m_bLeaderboardFound", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr LeaderboardFindResult_t(::Steamworks::SteamLeaderboard_t  m_hSteamLeaderboard, uint8_t  m_bLeaderboardFound) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16218};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x450)};

/// @brief Field m_hSteamLeaderboard, offset: 0x0, size: 0x8, def value: None
 ::Steamworks::SteamLeaderboard_t  m_hSteamLeaderboard;

/// @brief Field m_bLeaderboardFound, offset: 0x8, size: 0x1, def value: None
 uint8_t  m_bLeaderboardFound;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::LeaderboardFindResult_t, m_hSteamLeaderboard) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::LeaderboardFindResult_t, m_bLeaderboardFound) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Steamworks::LeaderboardFindResult_t) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
