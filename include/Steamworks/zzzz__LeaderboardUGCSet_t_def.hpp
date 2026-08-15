#pragma once
// IWYU pragma private; include "Steamworks/LeaderboardUGCSet_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__EResult_def.hpp"
#include "Steamworks/zzzz__SteamLeaderboard_t_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LeaderboardUGCSet_t)
// Forward declare root types
namespace Steamworks {
struct LeaderboardUGCSet_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::LeaderboardUGCSet_t);
DEFINE_IL2CPP_CLASS(::Steamworks::LeaderboardUGCSet_t, "Steamworks", "LeaderboardUGCSet_t");
// Dependencies Steamworks.EResult, Steamworks.SteamLeaderboard_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.LeaderboardUGCSet_t
#pragma pack(push, 8)
struct CORDL_TYPE LeaderboardUGCSet_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LeaderboardUGCSet_t() ;

// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: None }, CppParam { name: "m_hSteamLeaderboard", ty: "::Steamworks::SteamLeaderboard_t", modifiers: "", def_value: None }]
constexpr LeaderboardUGCSet_t(::Steamworks::EResult  m_eResult, ::Steamworks::SteamLeaderboard_t  m_hSteamLeaderboard) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16225};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x457)};

/// @brief Field m_eResult, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::EResult  m_eResult;

/// @brief Field m_hSteamLeaderboard, offset: 0x8, size: 0x8, def value: None
 ::Steamworks::SteamLeaderboard_t  m_hSteamLeaderboard;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::LeaderboardUGCSet_t, m_eResult) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::LeaderboardUGCSet_t, m_hSteamLeaderboard) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Steamworks::LeaderboardUGCSet_t) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
