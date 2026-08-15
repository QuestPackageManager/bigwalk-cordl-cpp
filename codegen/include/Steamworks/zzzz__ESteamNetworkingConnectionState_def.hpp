#pragma once
// IWYU pragma private; include "Steamworks/ESteamNetworkingConnectionState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ESteamNetworkingConnectionState)
// Forward declare root types
namespace Steamworks {
struct ESteamNetworkingConnectionState;
}
// Write type traits
MARK_VAL_T(::Steamworks::ESteamNetworkingConnectionState);
DEFINE_IL2CPP_CLASS(::Steamworks::ESteamNetworkingConnectionState, "Steamworks", "ESteamNetworkingConnectionState");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ESteamNetworkingConnectionState
struct CORDL_TYPE ESteamNetworkingConnectionState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ESteamNetworkingConnectionState_Unwrapped
enum struct __ESteamNetworkingConnectionState_Unwrapped : int32_t {
__E_k_ESteamNetworkingConnectionState_None = static_cast<int32_t>(0x0),
__E_k_ESteamNetworkingConnectionState_Connecting = static_cast<int32_t>(0x1),
__E_k_ESteamNetworkingConnectionState_FindingRoute = static_cast<int32_t>(0x2),
__E_k_ESteamNetworkingConnectionState_Connected = static_cast<int32_t>(0x3),
__E_k_ESteamNetworkingConnectionState_ClosedByPeer = static_cast<int32_t>(0x4),
__E_k_ESteamNetworkingConnectionState_ProblemDetectedLocally = static_cast<int32_t>(0x5),
__E_k_ESteamNetworkingConnectionState_FinWait = static_cast<int32_t>(0xffffffff),
__E_k_ESteamNetworkingConnectionState_Linger = static_cast<int32_t>(0xfffffffe),
__E_k_ESteamNetworkingConnectionState_Dead = static_cast<int32_t>(0xfffffffd),
__E_k_ESteamNetworkingConnectionState__Force32Bit = static_cast<int32_t>(0x7fffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ESteamNetworkingConnectionState_Unwrapped () const noexcept {
return static_cast<__ESteamNetworkingConnectionState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ESteamNetworkingConnectionState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ESteamNetworkingConnectionState(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16335};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ESteamNetworkingConnectionState_ClosedByPeer value: I32(4)
static ::Steamworks::ESteamNetworkingConnectionState const k_ESteamNetworkingConnectionState_ClosedByPeer;

/// @brief Field k_ESteamNetworkingConnectionState_Connected value: I32(3)
static ::Steamworks::ESteamNetworkingConnectionState const k_ESteamNetworkingConnectionState_Connected;

/// @brief Field k_ESteamNetworkingConnectionState_Connecting value: I32(1)
static ::Steamworks::ESteamNetworkingConnectionState const k_ESteamNetworkingConnectionState_Connecting;

/// @brief Field k_ESteamNetworkingConnectionState_Dead value: I32(-3)
static ::Steamworks::ESteamNetworkingConnectionState const k_ESteamNetworkingConnectionState_Dead;

/// @brief Field k_ESteamNetworkingConnectionState_FinWait value: I32(-1)
static ::Steamworks::ESteamNetworkingConnectionState const k_ESteamNetworkingConnectionState_FinWait;

/// @brief Field k_ESteamNetworkingConnectionState_FindingRoute value: I32(2)
static ::Steamworks::ESteamNetworkingConnectionState const k_ESteamNetworkingConnectionState_FindingRoute;

/// @brief Field k_ESteamNetworkingConnectionState_Linger value: I32(-2)
static ::Steamworks::ESteamNetworkingConnectionState const k_ESteamNetworkingConnectionState_Linger;

/// @brief Field k_ESteamNetworkingConnectionState_None value: I32(0)
static ::Steamworks::ESteamNetworkingConnectionState const k_ESteamNetworkingConnectionState_None;

/// @brief Field k_ESteamNetworkingConnectionState_ProblemDetectedLocally value: I32(5)
static ::Steamworks::ESteamNetworkingConnectionState const k_ESteamNetworkingConnectionState_ProblemDetectedLocally;

/// @brief Field k_ESteamNetworkingConnectionState__Force32Bit value: I32(2147483647)
static ::Steamworks::ESteamNetworkingConnectionState const k_ESteamNetworkingConnectionState__Force32Bit;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ESteamNetworkingConnectionState, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ESteamNetworkingConnectionState) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
