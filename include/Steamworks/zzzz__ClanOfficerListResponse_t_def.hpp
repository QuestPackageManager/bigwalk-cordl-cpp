#pragma once
// IWYU pragma private; include "Steamworks/ClanOfficerListResponse_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ClanOfficerListResponse_t)
// Forward declare root types
namespace Steamworks {
struct ClanOfficerListResponse_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::ClanOfficerListResponse_t);
DEFINE_IL2CPP_CLASS(::Steamworks::ClanOfficerListResponse_t, "Steamworks", "ClanOfficerListResponse_t");
// Dependencies Steamworks.CSteamID
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ClanOfficerListResponse_t
#pragma pack(push, 8)
struct CORDL_TYPE ClanOfficerListResponse_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ClanOfficerListResponse_t() ;

// Ctor Parameters [CppParam { name: "m_steamIDClan", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }, CppParam { name: "m_cOfficers", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_bSuccess", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr ClanOfficerListResponse_t(::Steamworks::CSteamID  m_steamIDClan, int32_t  m_cOfficers, uint8_t  m_bSuccess) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16039};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x14f)};

/// @brief Field m_steamIDClan, offset: 0x0, size: 0x8, def value: None
 ::Steamworks::CSteamID  m_steamIDClan;

/// @brief Field m_cOfficers, offset: 0x8, size: 0x4, def value: None
 int32_t  m_cOfficers;

/// @brief Field m_bSuccess, offset: 0xc, size: 0x1, def value: None
 uint8_t  m_bSuccess;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::ClanOfficerListResponse_t, m_steamIDClan) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ClanOfficerListResponse_t, m_cOfficers) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ClanOfficerListResponse_t, m_bSuccess) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ClanOfficerListResponse_t) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
