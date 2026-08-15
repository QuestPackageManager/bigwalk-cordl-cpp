#pragma once
// IWYU pragma private; include "Steamworks/ESNetSocketState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ESNetSocketState)
// Forward declare root types
namespace Steamworks {
struct ESNetSocketState;
}
// Write type traits
MARK_VAL_T(::Steamworks::ESNetSocketState);
DEFINE_IL2CPP_CLASS(::Steamworks::ESNetSocketState, "Steamworks", "ESNetSocketState");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ESNetSocketState
struct CORDL_TYPE ESNetSocketState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ESNetSocketState_Unwrapped
enum struct __ESNetSocketState_Unwrapped : int32_t {
__E_k_ESNetSocketStateInvalid = static_cast<int32_t>(0x0),
__E_k_ESNetSocketStateConnected = static_cast<int32_t>(0x1),
__E_k_ESNetSocketStateInitiated = static_cast<int32_t>(0xa),
__E_k_ESNetSocketStateLocalCandidatesFound = static_cast<int32_t>(0xb),
__E_k_ESNetSocketStateReceivedRemoteCandidates = static_cast<int32_t>(0xc),
__E_k_ESNetSocketStateChallengeHandshake = static_cast<int32_t>(0xf),
__E_k_ESNetSocketStateDisconnecting = static_cast<int32_t>(0x15),
__E_k_ESNetSocketStateLocalDisconnect = static_cast<int32_t>(0x16),
__E_k_ESNetSocketStateTimeoutDuringConnect = static_cast<int32_t>(0x17),
__E_k_ESNetSocketStateRemoteEndDisconnected = static_cast<int32_t>(0x18),
__E_k_ESNetSocketStateConnectionBroken = static_cast<int32_t>(0x19),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ESNetSocketState_Unwrapped () const noexcept {
return static_cast<__ESNetSocketState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ESNetSocketState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ESNetSocketState(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16274};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ESNetSocketStateChallengeHandshake value: I32(15)
static ::Steamworks::ESNetSocketState const k_ESNetSocketStateChallengeHandshake;

/// @brief Field k_ESNetSocketStateConnected value: I32(1)
static ::Steamworks::ESNetSocketState const k_ESNetSocketStateConnected;

/// @brief Field k_ESNetSocketStateConnectionBroken value: I32(25)
static ::Steamworks::ESNetSocketState const k_ESNetSocketStateConnectionBroken;

/// @brief Field k_ESNetSocketStateDisconnecting value: I32(21)
static ::Steamworks::ESNetSocketState const k_ESNetSocketStateDisconnecting;

/// @brief Field k_ESNetSocketStateInitiated value: I32(10)
static ::Steamworks::ESNetSocketState const k_ESNetSocketStateInitiated;

/// @brief Field k_ESNetSocketStateInvalid value: I32(0)
static ::Steamworks::ESNetSocketState const k_ESNetSocketStateInvalid;

/// @brief Field k_ESNetSocketStateLocalCandidatesFound value: I32(11)
static ::Steamworks::ESNetSocketState const k_ESNetSocketStateLocalCandidatesFound;

/// @brief Field k_ESNetSocketStateLocalDisconnect value: I32(22)
static ::Steamworks::ESNetSocketState const k_ESNetSocketStateLocalDisconnect;

/// @brief Field k_ESNetSocketStateReceivedRemoteCandidates value: I32(12)
static ::Steamworks::ESNetSocketState const k_ESNetSocketStateReceivedRemoteCandidates;

/// @brief Field k_ESNetSocketStateRemoteEndDisconnected value: I32(24)
static ::Steamworks::ESNetSocketState const k_ESNetSocketStateRemoteEndDisconnected;

/// @brief Field k_ESNetSocketStateTimeoutDuringConnect value: I32(23)
static ::Steamworks::ESNetSocketState const k_ESNetSocketStateTimeoutDuringConnect;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ESNetSocketState, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ESNetSocketState) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
