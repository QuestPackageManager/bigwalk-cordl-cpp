#pragma once
// IWYU pragma private; include "Steamworks/EMarketNotAllowedReasonFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EMarketNotAllowedReasonFlags)
// Forward declare root types
namespace Steamworks {
struct EMarketNotAllowedReasonFlags;
}
// Write type traits
MARK_VAL_T(::Steamworks::EMarketNotAllowedReasonFlags);
DEFINE_IL2CPP_CLASS(::Steamworks::EMarketNotAllowedReasonFlags, "Steamworks", "EMarketNotAllowedReasonFlags");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EMarketNotAllowedReasonFlags
struct CORDL_TYPE EMarketNotAllowedReasonFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EMarketNotAllowedReasonFlags_Unwrapped
enum struct __EMarketNotAllowedReasonFlags_Unwrapped : int32_t {
__E_k_EMarketNotAllowedReason_None = static_cast<int32_t>(0x0),
__E_k_EMarketNotAllowedReason_TemporaryFailure = static_cast<int32_t>(0x1),
__E_k_EMarketNotAllowedReason_AccountDisabled = static_cast<int32_t>(0x2),
__E_k_EMarketNotAllowedReason_AccountLockedDown = static_cast<int32_t>(0x4),
__E_k_EMarketNotAllowedReason_AccountLimited = static_cast<int32_t>(0x8),
__E_k_EMarketNotAllowedReason_TradeBanned = static_cast<int32_t>(0x10),
__E_k_EMarketNotAllowedReason_AccountNotTrusted = static_cast<int32_t>(0x20),
__E_k_EMarketNotAllowedReason_SteamGuardNotEnabled = static_cast<int32_t>(0x40),
__E_k_EMarketNotAllowedReason_SteamGuardOnlyRecentlyEnabled = static_cast<int32_t>(0x80),
__E_k_EMarketNotAllowedReason_RecentPasswordReset = static_cast<int32_t>(0x100),
__E_k_EMarketNotAllowedReason_NewPaymentMethod = static_cast<int32_t>(0x200),
__E_k_EMarketNotAllowedReason_InvalidCookie = static_cast<int32_t>(0x400),
__E_k_EMarketNotAllowedReason_UsingNewDevice = static_cast<int32_t>(0x800),
__E_k_EMarketNotAllowedReason_RecentSelfRefund = static_cast<int32_t>(0x1000),
__E_k_EMarketNotAllowedReason_NewPaymentMethodCannotBeVerified = static_cast<int32_t>(0x2000),
__E_k_EMarketNotAllowedReason_NoRecentPurchases = static_cast<int32_t>(0x4000),
__E_k_EMarketNotAllowedReason_AcceptedWalletGift = static_cast<int32_t>(0x8000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EMarketNotAllowedReasonFlags_Unwrapped () const noexcept {
return static_cast<__EMarketNotAllowedReasonFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EMarketNotAllowedReasonFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EMarketNotAllowedReasonFlags(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16322};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EMarketNotAllowedReason_AcceptedWalletGift value: I32(32768)
static ::Steamworks::EMarketNotAllowedReasonFlags const k_EMarketNotAllowedReason_AcceptedWalletGift;

/// @brief Field k_EMarketNotAllowedReason_AccountDisabled value: I32(2)
static ::Steamworks::EMarketNotAllowedReasonFlags const k_EMarketNotAllowedReason_AccountDisabled;

/// @brief Field k_EMarketNotAllowedReason_AccountLimited value: I32(8)
static ::Steamworks::EMarketNotAllowedReasonFlags const k_EMarketNotAllowedReason_AccountLimited;

/// @brief Field k_EMarketNotAllowedReason_AccountLockedDown value: I32(4)
static ::Steamworks::EMarketNotAllowedReasonFlags const k_EMarketNotAllowedReason_AccountLockedDown;

/// @brief Field k_EMarketNotAllowedReason_AccountNotTrusted value: I32(32)
static ::Steamworks::EMarketNotAllowedReasonFlags const k_EMarketNotAllowedReason_AccountNotTrusted;

/// @brief Field k_EMarketNotAllowedReason_InvalidCookie value: I32(1024)
static ::Steamworks::EMarketNotAllowedReasonFlags const k_EMarketNotAllowedReason_InvalidCookie;

/// @brief Field k_EMarketNotAllowedReason_NewPaymentMethod value: I32(512)
static ::Steamworks::EMarketNotAllowedReasonFlags const k_EMarketNotAllowedReason_NewPaymentMethod;

/// @brief Field k_EMarketNotAllowedReason_NewPaymentMethodCannotBeVerified value: I32(8192)
static ::Steamworks::EMarketNotAllowedReasonFlags const k_EMarketNotAllowedReason_NewPaymentMethodCannotBeVerified;

/// @brief Field k_EMarketNotAllowedReason_NoRecentPurchases value: I32(16384)
static ::Steamworks::EMarketNotAllowedReasonFlags const k_EMarketNotAllowedReason_NoRecentPurchases;

/// @brief Field k_EMarketNotAllowedReason_None value: I32(0)
static ::Steamworks::EMarketNotAllowedReasonFlags const k_EMarketNotAllowedReason_None;

/// @brief Field k_EMarketNotAllowedReason_RecentPasswordReset value: I32(256)
static ::Steamworks::EMarketNotAllowedReasonFlags const k_EMarketNotAllowedReason_RecentPasswordReset;

/// @brief Field k_EMarketNotAllowedReason_RecentSelfRefund value: I32(4096)
static ::Steamworks::EMarketNotAllowedReasonFlags const k_EMarketNotAllowedReason_RecentSelfRefund;

/// @brief Field k_EMarketNotAllowedReason_SteamGuardNotEnabled value: I32(64)
static ::Steamworks::EMarketNotAllowedReasonFlags const k_EMarketNotAllowedReason_SteamGuardNotEnabled;

/// @brief Field k_EMarketNotAllowedReason_SteamGuardOnlyRecentlyEnabled value: I32(128)
static ::Steamworks::EMarketNotAllowedReasonFlags const k_EMarketNotAllowedReason_SteamGuardOnlyRecentlyEnabled;

/// @brief Field k_EMarketNotAllowedReason_TemporaryFailure value: I32(1)
static ::Steamworks::EMarketNotAllowedReasonFlags const k_EMarketNotAllowedReason_TemporaryFailure;

/// @brief Field k_EMarketNotAllowedReason_TradeBanned value: I32(16)
static ::Steamworks::EMarketNotAllowedReasonFlags const k_EMarketNotAllowedReason_TradeBanned;

/// @brief Field k_EMarketNotAllowedReason_UsingNewDevice value: I32(2048)
static ::Steamworks::EMarketNotAllowedReasonFlags const k_EMarketNotAllowedReason_UsingNewDevice;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EMarketNotAllowedReasonFlags, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EMarketNotAllowedReasonFlags) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
