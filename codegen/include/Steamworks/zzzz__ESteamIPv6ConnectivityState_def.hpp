#pragma once
// IWYU pragma private; include "Steamworks/ESteamIPv6ConnectivityState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ESteamIPv6ConnectivityState)
// Forward declare root types
namespace Steamworks {
struct ESteamIPv6ConnectivityState;
}
// Write type traits
MARK_VAL_T(::Steamworks::ESteamIPv6ConnectivityState);
DEFINE_IL2CPP_CLASS(::Steamworks::ESteamIPv6ConnectivityState, "Steamworks", "ESteamIPv6ConnectivityState");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ESteamIPv6ConnectivityState
struct CORDL_TYPE ESteamIPv6ConnectivityState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ESteamIPv6ConnectivityState_Unwrapped
enum struct __ESteamIPv6ConnectivityState_Unwrapped : int32_t {
__E_k_ESteamIPv6ConnectivityState_Unknown = static_cast<int32_t>(0x0),
__E_k_ESteamIPv6ConnectivityState_Good = static_cast<int32_t>(0x1),
__E_k_ESteamIPv6ConnectivityState_Bad = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ESteamIPv6ConnectivityState_Unwrapped () const noexcept {
return static_cast<__ESteamIPv6ConnectivityState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ESteamIPv6ConnectivityState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ESteamIPv6ConnectivityState(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16329};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ESteamIPv6ConnectivityState_Bad value: I32(2)
static ::Steamworks::ESteamIPv6ConnectivityState const k_ESteamIPv6ConnectivityState_Bad;

/// @brief Field k_ESteamIPv6ConnectivityState_Good value: I32(1)
static ::Steamworks::ESteamIPv6ConnectivityState const k_ESteamIPv6ConnectivityState_Good;

/// @brief Field k_ESteamIPv6ConnectivityState_Unknown value: I32(0)
static ::Steamworks::ESteamIPv6ConnectivityState const k_ESteamIPv6ConnectivityState_Unknown;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ESteamIPv6ConnectivityState, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ESteamIPv6ConnectivityState) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
