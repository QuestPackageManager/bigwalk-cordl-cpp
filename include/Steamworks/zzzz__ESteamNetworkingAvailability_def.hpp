#pragma once
// IWYU pragma private; include "Steamworks/ESteamNetworkingAvailability.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ESteamNetworkingAvailability)
// Forward declare root types
namespace Steamworks {
struct ESteamNetworkingAvailability;
}
// Write type traits
MARK_VAL_T(::Steamworks::ESteamNetworkingAvailability);
DEFINE_IL2CPP_CLASS(::Steamworks::ESteamNetworkingAvailability, "Steamworks", "ESteamNetworkingAvailability");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ESteamNetworkingAvailability
struct CORDL_TYPE ESteamNetworkingAvailability {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ESteamNetworkingAvailability_Unwrapped
enum struct __ESteamNetworkingAvailability_Unwrapped : int32_t {
__E_k_ESteamNetworkingAvailability_CannotTry = static_cast<int32_t>(0xffffff9a),
__E_k_ESteamNetworkingAvailability_Failed = static_cast<int32_t>(0xffffff9b),
__E_k_ESteamNetworkingAvailability_Previously = static_cast<int32_t>(0xffffff9c),
__E_k_ESteamNetworkingAvailability_Retrying = static_cast<int32_t>(0xfffffff6),
__E_k_ESteamNetworkingAvailability_NeverTried = static_cast<int32_t>(0x1),
__E_k_ESteamNetworkingAvailability_Waiting = static_cast<int32_t>(0x2),
__E_k_ESteamNetworkingAvailability_Attempting = static_cast<int32_t>(0x3),
__E_k_ESteamNetworkingAvailability_Current = static_cast<int32_t>(0x64),
__E_k_ESteamNetworkingAvailability_Unknown = static_cast<int32_t>(0x0),
__E_k_ESteamNetworkingAvailability__Force32bit = static_cast<int32_t>(0x7fffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ESteamNetworkingAvailability_Unwrapped () const noexcept {
return static_cast<__ESteamNetworkingAvailability_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ESteamNetworkingAvailability() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ESteamNetworkingAvailability(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16332};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ESteamNetworkingAvailability_Attempting value: I32(3)
static ::Steamworks::ESteamNetworkingAvailability const k_ESteamNetworkingAvailability_Attempting;

/// @brief Field k_ESteamNetworkingAvailability_CannotTry value: I32(-102)
static ::Steamworks::ESteamNetworkingAvailability const k_ESteamNetworkingAvailability_CannotTry;

/// @brief Field k_ESteamNetworkingAvailability_Current value: I32(100)
static ::Steamworks::ESteamNetworkingAvailability const k_ESteamNetworkingAvailability_Current;

/// @brief Field k_ESteamNetworkingAvailability_Failed value: I32(-101)
static ::Steamworks::ESteamNetworkingAvailability const k_ESteamNetworkingAvailability_Failed;

/// @brief Field k_ESteamNetworkingAvailability_NeverTried value: I32(1)
static ::Steamworks::ESteamNetworkingAvailability const k_ESteamNetworkingAvailability_NeverTried;

/// @brief Field k_ESteamNetworkingAvailability_Previously value: I32(-100)
static ::Steamworks::ESteamNetworkingAvailability const k_ESteamNetworkingAvailability_Previously;

/// @brief Field k_ESteamNetworkingAvailability_Retrying value: I32(-10)
static ::Steamworks::ESteamNetworkingAvailability const k_ESteamNetworkingAvailability_Retrying;

/// @brief Field k_ESteamNetworkingAvailability_Unknown value: I32(0)
static ::Steamworks::ESteamNetworkingAvailability const k_ESteamNetworkingAvailability_Unknown;

/// @brief Field k_ESteamNetworkingAvailability_Waiting value: I32(2)
static ::Steamworks::ESteamNetworkingAvailability const k_ESteamNetworkingAvailability_Waiting;

/// @brief Field k_ESteamNetworkingAvailability__Force32bit value: I32(2147483647)
static ::Steamworks::ESteamNetworkingAvailability const k_ESteamNetworkingAvailability__Force32bit;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ESteamNetworkingAvailability, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ESteamNetworkingAvailability) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
