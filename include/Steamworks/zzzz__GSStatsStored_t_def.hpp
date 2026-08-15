#pragma once
// IWYU pragma private; include "Steamworks/GSStatsStored_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__EResult_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GSStatsStored_t)
// Forward declare root types
namespace Steamworks {
struct GSStatsStored_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::GSStatsStored_t);
DEFINE_IL2CPP_CLASS(::Steamworks::GSStatsStored_t, "Steamworks", "GSStatsStored_t");
// Dependencies Steamworks.CSteamID, Steamworks.EResult
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.GSStatsStored_t
#pragma pack(push, 4)
struct CORDL_TYPE GSStatsStored_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GSStatsStored_t() ;

// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: None }, CppParam { name: "m_steamIDUser", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }]
constexpr GSStatsStored_t(::Steamworks::EResult  m_eResult, ::Steamworks::CSteamID  m_steamIDUser) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16067};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x709)};

/// @brief Field m_eResult, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::EResult  m_eResult;

/// @brief Field m_steamIDUser, offset: 0x4, size: 0x8, def value: None
 ::Steamworks::CSteamID  m_steamIDUser;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::GSStatsStored_t, m_eResult) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GSStatsStored_t, m_steamIDUser) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::GSStatsStored_t) == 0xc, "Size mismatch!");

} // namespace end def Steamworks
