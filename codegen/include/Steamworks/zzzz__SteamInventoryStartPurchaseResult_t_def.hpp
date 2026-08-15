#pragma once
// IWYU pragma private; include "Steamworks/SteamInventoryStartPurchaseResult_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__EResult_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamInventoryStartPurchaseResult_t)
// Forward declare root types
namespace Steamworks {
struct SteamInventoryStartPurchaseResult_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamInventoryStartPurchaseResult_t);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamInventoryStartPurchaseResult_t, "Steamworks", "SteamInventoryStartPurchaseResult_t");
// Dependencies Steamworks.EResult
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamInventoryStartPurchaseResult_t
#pragma pack(push, 8)
struct CORDL_TYPE SteamInventoryStartPurchaseResult_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SteamInventoryStartPurchaseResult_t() ;

// Ctor Parameters [CppParam { name: "m_result", ty: "::Steamworks::EResult", modifiers: "", def_value: None }, CppParam { name: "m_ulOrderID", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_ulTransID", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr SteamInventoryStartPurchaseResult_t(::Steamworks::EResult  m_result, uint64_t  m_ulOrderID, uint64_t  m_ulTransID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16102};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x1260)};

/// @brief Field m_result, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::EResult  m_result;

/// @brief Field m_ulOrderID, offset: 0x8, size: 0x8, def value: None
 uint64_t  m_ulOrderID;

/// @brief Field m_ulTransID, offset: 0x10, size: 0x8, def value: None
 uint64_t  m_ulTransID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamInventoryStartPurchaseResult_t, m_result) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamInventoryStartPurchaseResult_t, m_ulOrderID) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamInventoryStartPurchaseResult_t, m_ulTransID) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamInventoryStartPurchaseResult_t) == 0x18, "Size mismatch!");

} // namespace end def Steamworks
