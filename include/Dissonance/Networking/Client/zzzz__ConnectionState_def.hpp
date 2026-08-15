#pragma once
// IWYU pragma private; include "Dissonance/Networking/Client/ConnectionState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectionState)
// Forward declare root types
namespace Dissonance::Networking::Client {
struct ConnectionState;
}
// Write type traits
MARK_VAL_T(::Dissonance::Networking::Client::ConnectionState);
DEFINE_IL2CPP_CLASS(::Dissonance::Networking::Client::ConnectionState, "Dissonance.Networking.Client", "ConnectionState");
// Dependencies 
namespace Dissonance::Networking::Client {
// Is value type: true
// CS Name: Dissonance.Networking.Client.ConnectionState
struct CORDL_TYPE ConnectionState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ConnectionState_Unwrapped
enum struct __ConnectionState_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Negotiating = static_cast<int32_t>(0x1),
__E_Connected = static_cast<int32_t>(0x2),
__E_Disconnected = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConnectionState_Unwrapped () const noexcept {
return static_cast<__ConnectionState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ConnectionState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ConnectionState(int32_t  value__) noexcept;

/// @brief Field Connected value: I32(2)
static ::Dissonance::Networking::Client::ConnectionState const Connected;

/// @brief Field Disconnected value: I32(3)
static ::Dissonance::Networking::Client::ConnectionState const Disconnected;

/// @brief Field Negotiating value: I32(1)
static ::Dissonance::Networking::Client::ConnectionState const Negotiating;

/// @brief Field None value: I32(0)
static ::Dissonance::Networking::Client::ConnectionState const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16906};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Networking::Client::ConnectionState, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Networking::Client::ConnectionState) == 0x4, "Size mismatch!");

} // namespace end def Dissonance::Networking::Client
