#pragma once
// IWYU pragma private; include "Steamworks/GSGameplayStats_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__EResult_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GSGameplayStats_t)
// Forward declare root types
namespace Steamworks {
struct GSGameplayStats_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::GSGameplayStats_t);
DEFINE_IL2CPP_CLASS(::Steamworks::GSGameplayStats_t, "Steamworks", "GSGameplayStats_t");
// Dependencies Steamworks.EResult
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.GSGameplayStats_t
#pragma pack(push, 8)
struct CORDL_TYPE GSGameplayStats_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GSGameplayStats_t() ;

// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: None }, CppParam { name: "m_nRank", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_unTotalConnects", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_unTotalMinutesPlayed", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr GSGameplayStats_t(::Steamworks::EResult  m_eResult, int32_t  m_nRank, uint32_t  m_unTotalConnects, uint32_t  m_unTotalMinutesPlayed) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16061};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0xcf)};

/// @brief Field m_eResult, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::EResult  m_eResult;

/// @brief Field m_nRank, offset: 0x4, size: 0x4, def value: None
 int32_t  m_nRank;

/// @brief Field m_unTotalConnects, offset: 0x8, size: 0x4, def value: None
 uint32_t  m_unTotalConnects;

/// @brief Field m_unTotalMinutesPlayed, offset: 0xc, size: 0x4, def value: None
 uint32_t  m_unTotalMinutesPlayed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::GSGameplayStats_t, m_eResult) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GSGameplayStats_t, m_nRank) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GSGameplayStats_t, m_unTotalConnects) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GSGameplayStats_t, m_unTotalMinutesPlayed) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Steamworks::GSGameplayStats_t) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
