#pragma once
// IWYU pragma private; include "Steamworks/EDenyReason.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EDenyReason)
// Forward declare root types
namespace Steamworks {
struct EDenyReason;
}
// Write type traits
MARK_VAL_T(::Steamworks::EDenyReason);
DEFINE_IL2CPP_CLASS(::Steamworks::EDenyReason, "Steamworks", "EDenyReason");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EDenyReason
struct CORDL_TYPE EDenyReason {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EDenyReason_Unwrapped
enum struct __EDenyReason_Unwrapped : int32_t {
__E_k_EDenyInvalid = static_cast<int32_t>(0x0),
__E_k_EDenyInvalidVersion = static_cast<int32_t>(0x1),
__E_k_EDenyGeneric = static_cast<int32_t>(0x2),
__E_k_EDenyNotLoggedOn = static_cast<int32_t>(0x3),
__E_k_EDenyNoLicense = static_cast<int32_t>(0x4),
__E_k_EDenyCheater = static_cast<int32_t>(0x5),
__E_k_EDenyLoggedInElseWhere = static_cast<int32_t>(0x6),
__E_k_EDenyUnknownText = static_cast<int32_t>(0x7),
__E_k_EDenyIncompatibleAnticheat = static_cast<int32_t>(0x8),
__E_k_EDenyMemoryCorruption = static_cast<int32_t>(0x9),
__E_k_EDenyIncompatibleSoftware = static_cast<int32_t>(0xa),
__E_k_EDenySteamConnectionLost = static_cast<int32_t>(0xb),
__E_k_EDenySteamConnectionError = static_cast<int32_t>(0xc),
__E_k_EDenySteamResponseTimedOut = static_cast<int32_t>(0xd),
__E_k_EDenySteamValidationStalled = static_cast<int32_t>(0xe),
__E_k_EDenySteamOwnerLeftGuestUser = static_cast<int32_t>(0xf),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EDenyReason_Unwrapped () const noexcept {
return static_cast<__EDenyReason_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EDenyReason() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EDenyReason(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16312};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EDenyCheater value: I32(5)
static ::Steamworks::EDenyReason const k_EDenyCheater;

/// @brief Field k_EDenyGeneric value: I32(2)
static ::Steamworks::EDenyReason const k_EDenyGeneric;

/// @brief Field k_EDenyIncompatibleAnticheat value: I32(8)
static ::Steamworks::EDenyReason const k_EDenyIncompatibleAnticheat;

/// @brief Field k_EDenyIncompatibleSoftware value: I32(10)
static ::Steamworks::EDenyReason const k_EDenyIncompatibleSoftware;

/// @brief Field k_EDenyInvalid value: I32(0)
static ::Steamworks::EDenyReason const k_EDenyInvalid;

/// @brief Field k_EDenyInvalidVersion value: I32(1)
static ::Steamworks::EDenyReason const k_EDenyInvalidVersion;

/// @brief Field k_EDenyLoggedInElseWhere value: I32(6)
static ::Steamworks::EDenyReason const k_EDenyLoggedInElseWhere;

/// @brief Field k_EDenyMemoryCorruption value: I32(9)
static ::Steamworks::EDenyReason const k_EDenyMemoryCorruption;

/// @brief Field k_EDenyNoLicense value: I32(4)
static ::Steamworks::EDenyReason const k_EDenyNoLicense;

/// @brief Field k_EDenyNotLoggedOn value: I32(3)
static ::Steamworks::EDenyReason const k_EDenyNotLoggedOn;

/// @brief Field k_EDenySteamConnectionError value: I32(12)
static ::Steamworks::EDenyReason const k_EDenySteamConnectionError;

/// @brief Field k_EDenySteamConnectionLost value: I32(11)
static ::Steamworks::EDenyReason const k_EDenySteamConnectionLost;

/// @brief Field k_EDenySteamOwnerLeftGuestUser value: I32(15)
static ::Steamworks::EDenyReason const k_EDenySteamOwnerLeftGuestUser;

/// @brief Field k_EDenySteamResponseTimedOut value: I32(13)
static ::Steamworks::EDenyReason const k_EDenySteamResponseTimedOut;

/// @brief Field k_EDenySteamValidationStalled value: I32(14)
static ::Steamworks::EDenyReason const k_EDenySteamValidationStalled;

/// @brief Field k_EDenyUnknownText value: I32(7)
static ::Steamworks::EDenyReason const k_EDenyUnknownText;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EDenyReason, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EDenyReason) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
