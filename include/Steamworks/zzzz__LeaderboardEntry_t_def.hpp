#pragma once
// IWYU pragma private; include "Steamworks/LeaderboardEntry_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__UGCHandle_t_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LeaderboardEntry_t)
// Forward declare root types
namespace Steamworks {
struct LeaderboardEntry_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::LeaderboardEntry_t);
DEFINE_IL2CPP_CLASS(::Steamworks::LeaderboardEntry_t, "Steamworks", "LeaderboardEntry_t");
// Dependencies Steamworks.CSteamID, Steamworks.UGCHandle_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.LeaderboardEntry_t
#pragma pack(push, 8)
struct CORDL_TYPE LeaderboardEntry_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LeaderboardEntry_t() ;

// Ctor Parameters [CppParam { name: "m_steamIDUser", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }, CppParam { name: "m_nGlobalRank", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_nScore", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_cDetails", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_hUGC", ty: "::Steamworks::UGCHandle_t", modifiers: "", def_value: None }]
constexpr LeaderboardEntry_t(::Steamworks::CSteamID  m_steamIDUser, int32_t  m_nGlobalRank, int32_t  m_nScore, int32_t  m_cDetails, ::Steamworks::UGCHandle_t  m_hUGC) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16353};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_steamIDUser, offset: 0x0, size: 0x8, def value: None
 ::Steamworks::CSteamID  m_steamIDUser;

/// @brief Field m_nGlobalRank, offset: 0x8, size: 0x4, def value: None
 int32_t  m_nGlobalRank;

/// @brief Field m_nScore, offset: 0xc, size: 0x4, def value: None
 int32_t  m_nScore;

/// @brief Field m_cDetails, offset: 0x10, size: 0x4, def value: None
 int32_t  m_cDetails;

/// @brief Field m_hUGC, offset: 0x18, size: 0x8, def value: None
 ::Steamworks::UGCHandle_t  m_hUGC;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::LeaderboardEntry_t, m_steamIDUser) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::LeaderboardEntry_t, m_nGlobalRank) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::LeaderboardEntry_t, m_nScore) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Steamworks::LeaderboardEntry_t, m_cDetails) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::LeaderboardEntry_t, m_hUGC) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Steamworks::LeaderboardEntry_t) == 0x20, "Size mismatch!");

} // namespace end def Steamworks
