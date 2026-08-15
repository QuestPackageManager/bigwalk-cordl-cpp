#pragma once
// IWYU pragma private; include "Steamworks/UserStatsStored_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__EResult_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UserStatsStored_t)
// Forward declare root types
namespace Steamworks {
struct UserStatsStored_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::UserStatsStored_t);
DEFINE_IL2CPP_CLASS(::Steamworks::UserStatsStored_t, "Steamworks", "UserStatsStored_t");
// Dependencies Steamworks.EResult
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.UserStatsStored_t
#pragma pack(push, 8)
struct CORDL_TYPE UserStatsStored_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr UserStatsStored_t() ;

// Ctor Parameters [CppParam { name: "m_nGameID", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: None }]
constexpr UserStatsStored_t(uint64_t  m_nGameID, ::Steamworks::EResult  m_eResult) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16216};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x44e)};

/// @brief Field m_nGameID, offset: 0x0, size: 0x8, def value: None
 uint64_t  m_nGameID;

/// @brief Field m_eResult, offset: 0x8, size: 0x4, def value: None
 ::Steamworks::EResult  m_eResult;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::UserStatsStored_t, m_nGameID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::UserStatsStored_t, m_eResult) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Steamworks::UserStatsStored_t) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
