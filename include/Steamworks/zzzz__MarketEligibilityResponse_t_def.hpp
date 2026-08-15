#pragma once
// IWYU pragma private; include "Steamworks/MarketEligibilityResponse_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__EMarketNotAllowedReasonFlags_def.hpp"
#include "Steamworks/zzzz__RTime32_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MarketEligibilityResponse_t)
// Forward declare root types
namespace Steamworks {
struct MarketEligibilityResponse_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::MarketEligibilityResponse_t);
DEFINE_IL2CPP_CLASS(::Steamworks::MarketEligibilityResponse_t, "Steamworks", "MarketEligibilityResponse_t");
// Dependencies Steamworks.EMarketNotAllowedReasonFlags, Steamworks.RTime32
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.MarketEligibilityResponse_t
#pragma pack(push, 8)
struct CORDL_TYPE MarketEligibilityResponse_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MarketEligibilityResponse_t() ;

// Ctor Parameters [CppParam { name: "m_bAllowed", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_eNotAllowedReason", ty: "::Steamworks::EMarketNotAllowedReasonFlags", modifiers: "", def_value: None }, CppParam { name: "m_rtAllowedAtTime", ty: "::Steamworks::RTime32", modifiers: "", def_value: None }, CppParam { name: "m_cdaySteamGuardRequiredDays", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_cdayNewDeviceCooldown", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MarketEligibilityResponse_t(bool  m_bAllowed, ::Steamworks::EMarketNotAllowedReasonFlags  m_eNotAllowedReason, ::Steamworks::RTime32  m_rtAllowedAtTime, int32_t  m_cdaySteamGuardRequiredDays, int32_t  m_cdayNewDeviceCooldown) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16213};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0xa6)};

/// @brief Field m_bAllowed, offset: 0x0, size: 0x1, def value: None
 bool  m_bAllowed;

/// @brief Field m_eNotAllowedReason, offset: 0x4, size: 0x4, def value: None
 ::Steamworks::EMarketNotAllowedReasonFlags  m_eNotAllowedReason;

/// @brief Field m_rtAllowedAtTime, offset: 0x8, size: 0x4, def value: None
 ::Steamworks::RTime32  m_rtAllowedAtTime;

/// @brief Field m_cdaySteamGuardRequiredDays, offset: 0xc, size: 0x4, def value: None
 int32_t  m_cdaySteamGuardRequiredDays;

/// @brief Field m_cdayNewDeviceCooldown, offset: 0x10, size: 0x4, def value: None
 int32_t  m_cdayNewDeviceCooldown;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::MarketEligibilityResponse_t, m_bAllowed) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::MarketEligibilityResponse_t, m_eNotAllowedReason) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Steamworks::MarketEligibilityResponse_t, m_rtAllowedAtTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::MarketEligibilityResponse_t, m_cdaySteamGuardRequiredDays) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Steamworks::MarketEligibilityResponse_t, m_cdayNewDeviceCooldown) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Steamworks::MarketEligibilityResponse_t) == 0x14, "Size mismatch!");

} // namespace end def Steamworks
