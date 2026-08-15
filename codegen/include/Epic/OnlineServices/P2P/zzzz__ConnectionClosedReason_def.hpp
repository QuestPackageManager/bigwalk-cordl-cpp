#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/ConnectionClosedReason.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectionClosedReason)
// Forward declare root types
namespace Epic::OnlineServices::P2P {
struct ConnectionClosedReason;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::P2P::ConnectionClosedReason);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::P2P::ConnectionClosedReason, "Epic.OnlineServices.P2P", "ConnectionClosedReason");
// Dependencies 
namespace Epic::OnlineServices::P2P {
// Is value type: true
// CS Name: Epic.OnlineServices.P2P.ConnectionClosedReason
struct CORDL_TYPE ConnectionClosedReason {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ConnectionClosedReason_Unwrapped
enum struct __ConnectionClosedReason_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_ClosedByLocalUser = static_cast<int32_t>(0x1),
__E_ClosedByPeer = static_cast<int32_t>(0x2),
__E_TimedOut = static_cast<int32_t>(0x3),
__E_TooManyConnections = static_cast<int32_t>(0x4),
__E_InvalidMessage = static_cast<int32_t>(0x5),
__E_InvalidData = static_cast<int32_t>(0x6),
__E_ConnectionFailed = static_cast<int32_t>(0x7),
__E_ConnectionClosed = static_cast<int32_t>(0x8),
__E_NegotiationFailed = static_cast<int32_t>(0x9),
__E_UnexpectedError = static_cast<int32_t>(0xa),
__E_ConnectionIgnored = static_cast<int32_t>(0xb),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConnectionClosedReason_Unwrapped () const noexcept {
return static_cast<__ConnectionClosedReason_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ConnectionClosedReason() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ConnectionClosedReason(int32_t  value__) noexcept;

/// @brief Field ClosedByLocalUser value: I32(1)
static ::Epic::OnlineServices::P2P::ConnectionClosedReason const ClosedByLocalUser;

/// @brief Field ClosedByPeer value: I32(2)
static ::Epic::OnlineServices::P2P::ConnectionClosedReason const ClosedByPeer;

/// @brief Field ConnectionClosed value: I32(8)
static ::Epic::OnlineServices::P2P::ConnectionClosedReason const ConnectionClosed;

/// @brief Field ConnectionFailed value: I32(7)
static ::Epic::OnlineServices::P2P::ConnectionClosedReason const ConnectionFailed;

/// @brief Field ConnectionIgnored value: I32(11)
static ::Epic::OnlineServices::P2P::ConnectionClosedReason const ConnectionIgnored;

/// @brief Field InvalidData value: I32(6)
static ::Epic::OnlineServices::P2P::ConnectionClosedReason const InvalidData;

/// @brief Field InvalidMessage value: I32(5)
static ::Epic::OnlineServices::P2P::ConnectionClosedReason const InvalidMessage;

/// @brief Field NegotiationFailed value: I32(9)
static ::Epic::OnlineServices::P2P::ConnectionClosedReason const NegotiationFailed;

/// @brief Field TimedOut value: I32(3)
static ::Epic::OnlineServices::P2P::ConnectionClosedReason const TimedOut;

/// @brief Field TooManyConnections value: I32(4)
static ::Epic::OnlineServices::P2P::ConnectionClosedReason const TooManyConnections;

/// @brief Field UnexpectedError value: I32(10)
static ::Epic::OnlineServices::P2P::ConnectionClosedReason const UnexpectedError;

/// @brief Field Unknown value: I32(0)
static ::Epic::OnlineServices::P2P::ConnectionClosedReason const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9547};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::P2P::ConnectionClosedReason, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::P2P::ConnectionClosedReason) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::P2P
