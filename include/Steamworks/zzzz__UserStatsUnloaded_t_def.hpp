#pragma once
// IWYU pragma private; include "Steamworks/UserStatsUnloaded_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UserStatsUnloaded_t)
// Forward declare root types
namespace Steamworks {
struct UserStatsUnloaded_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::UserStatsUnloaded_t);
DEFINE_IL2CPP_CLASS(::Steamworks::UserStatsUnloaded_t, "Steamworks", "UserStatsUnloaded_t");
// Dependencies Steamworks.CSteamID
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.UserStatsUnloaded_t
#pragma pack(push, 8)
struct CORDL_TYPE UserStatsUnloaded_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr UserStatsUnloaded_t() ;

// Ctor Parameters [CppParam { name: "m_steamIDUser", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }]
constexpr UserStatsUnloaded_t(::Steamworks::CSteamID  m_steamIDUser) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16222};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x454)};

/// @brief Field m_steamIDUser, offset: 0x0, size: 0x8, def value: None
 ::Steamworks::CSteamID  m_steamIDUser;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::UserStatsUnloaded_t, m_steamIDUser) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::UserStatsUnloaded_t) == 0x8, "Size mismatch!");

} // namespace end def Steamworks
