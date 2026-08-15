#pragma once
// IWYU pragma private; include "Steamworks/GSClientKick_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__EDenyReason_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GSClientKick_t)
// Forward declare root types
namespace Steamworks {
struct GSClientKick_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::GSClientKick_t);
DEFINE_IL2CPP_CLASS(::Steamworks::GSClientKick_t, "Steamworks", "GSClientKick_t");
// Dependencies Steamworks.CSteamID, Steamworks.EDenyReason
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.GSClientKick_t
#pragma pack(push, 4)
struct CORDL_TYPE GSClientKick_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GSClientKick_t() ;

// Ctor Parameters [CppParam { name: "m_SteamID", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }, CppParam { name: "m_eDenyReason", ty: "::Steamworks::EDenyReason", modifiers: "", def_value: None }]
constexpr GSClientKick_t(::Steamworks::CSteamID  m_SteamID, ::Steamworks::EDenyReason  m_eDenyReason) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16058};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0xcb)};

/// @brief Field m_SteamID, offset: 0x0, size: 0x8, def value: None
 ::Steamworks::CSteamID  m_SteamID;

/// @brief Field m_eDenyReason, offset: 0x8, size: 0x4, def value: None
 ::Steamworks::EDenyReason  m_eDenyReason;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::GSClientKick_t, m_SteamID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GSClientKick_t, m_eDenyReason) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Steamworks::GSClientKick_t) == 0xc, "Size mismatch!");

} // namespace end def Steamworks
