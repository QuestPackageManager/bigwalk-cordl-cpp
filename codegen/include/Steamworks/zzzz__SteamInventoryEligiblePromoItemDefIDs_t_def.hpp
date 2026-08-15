#pragma once
// IWYU pragma private; include "Steamworks/SteamInventoryEligiblePromoItemDefIDs_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__EResult_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamInventoryEligiblePromoItemDefIDs_t)
// Forward declare root types
namespace Steamworks {
struct SteamInventoryEligiblePromoItemDefIDs_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamInventoryEligiblePromoItemDefIDs_t);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamInventoryEligiblePromoItemDefIDs_t, "Steamworks", "SteamInventoryEligiblePromoItemDefIDs_t");
// Dependencies Steamworks.CSteamID, Steamworks.EResult
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamInventoryEligiblePromoItemDefIDs_t
#pragma pack(push, 8)
struct CORDL_TYPE SteamInventoryEligiblePromoItemDefIDs_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SteamInventoryEligiblePromoItemDefIDs_t() ;

// Ctor Parameters [CppParam { name: "m_result", ty: "::Steamworks::EResult", modifiers: "", def_value: None }, CppParam { name: "m_steamID", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }, CppParam { name: "m_numEligiblePromoItemDefs", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_bCachedData", ty: "bool", modifiers: "", def_value: None }]
constexpr SteamInventoryEligiblePromoItemDefIDs_t(::Steamworks::EResult  m_result, ::Steamworks::CSteamID  m_steamID, int32_t  m_numEligiblePromoItemDefs, bool  m_bCachedData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16101};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x125f)};

/// @brief Field m_result, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::EResult  m_result;

/// @brief Field m_steamID, offset: 0x4, size: 0x8, def value: None
 ::Steamworks::CSteamID  m_steamID;

/// @brief Field m_numEligiblePromoItemDefs, offset: 0xc, size: 0x4, def value: None
 int32_t  m_numEligiblePromoItemDefs;

/// @brief Field m_bCachedData, offset: 0x10, size: 0x1, def value: None
 bool  m_bCachedData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamInventoryEligiblePromoItemDefIDs_t, m_result) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamInventoryEligiblePromoItemDefIDs_t, m_steamID) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamInventoryEligiblePromoItemDefIDs_t, m_numEligiblePromoItemDefs) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamInventoryEligiblePromoItemDefIDs_t, m_bCachedData) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamInventoryEligiblePromoItemDefIDs_t) == 0x14, "Size mismatch!");

} // namespace end def Steamworks
