#pragma once
// IWYU pragma private; include "Steamworks/GSClientGroupStatus_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GSClientGroupStatus_t)
// Forward declare root types
namespace Steamworks {
struct GSClientGroupStatus_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::GSClientGroupStatus_t);
DEFINE_IL2CPP_CLASS(::Steamworks::GSClientGroupStatus_t, "Steamworks", "GSClientGroupStatus_t");
// Dependencies Steamworks.CSteamID
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.GSClientGroupStatus_t
#pragma pack(push, 1)
struct CORDL_TYPE GSClientGroupStatus_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GSClientGroupStatus_t() ;

// Ctor Parameters [CppParam { name: "m_SteamIDUser", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }, CppParam { name: "m_SteamIDGroup", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }, CppParam { name: "m_bMember", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_bOfficer", ty: "bool", modifiers: "", def_value: None }]
constexpr GSClientGroupStatus_t(::Steamworks::CSteamID  m_SteamIDUser, ::Steamworks::CSteamID  m_SteamIDGroup, bool  m_bMember, bool  m_bOfficer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16062};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x12};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0xd0)};

/// @brief Field m_SteamIDUser, offset: 0x0, size: 0x8, def value: None
 ::Steamworks::CSteamID  m_SteamIDUser;

/// @brief Field m_SteamIDGroup, offset: 0x8, size: 0x8, def value: None
 ::Steamworks::CSteamID  m_SteamIDGroup;

/// @brief Field m_bMember, offset: 0x10, size: 0x1, def value: None
 bool  m_bMember;

/// @brief Field m_bOfficer, offset: 0x11, size: 0x1, def value: None
 bool  m_bOfficer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::GSClientGroupStatus_t, m_SteamIDUser) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GSClientGroupStatus_t, m_SteamIDGroup) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GSClientGroupStatus_t, m_bMember) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GSClientGroupStatus_t, m_bOfficer) == 0x11, "Offset mismatch!");

static_assert(sizeof(::Steamworks::GSClientGroupStatus_t) == 0x12, "Size mismatch!");

} // namespace end def Steamworks
