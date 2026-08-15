#pragma once
// IWYU pragma private; include "Dissonance/Networking/ConnectionStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectionStatus)
// Forward declare root types
namespace Dissonance::Networking {
struct ConnectionStatus;
}
// Write type traits
MARK_VAL_T(::Dissonance::Networking::ConnectionStatus);
DEFINE_IL2CPP_CLASS(::Dissonance::Networking::ConnectionStatus, "Dissonance.Networking", "ConnectionStatus");
// Dependencies 
namespace Dissonance::Networking {
// Is value type: true
// CS Name: Dissonance.Networking.ConnectionStatus
struct CORDL_TYPE ConnectionStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ConnectionStatus_Unwrapped
enum struct __ConnectionStatus_Unwrapped : int32_t {
__E_Disconnected = static_cast<int32_t>(0x0),
__E_Degraded = static_cast<int32_t>(0x1),
__E_Connected = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConnectionStatus_Unwrapped () const noexcept {
return static_cast<__ConnectionStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ConnectionStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ConnectionStatus(int32_t  value__) noexcept;

/// @brief Field Connected value: I32(2)
static ::Dissonance::Networking::ConnectionStatus const Connected;

/// @brief Field Degraded value: I32(1)
static ::Dissonance::Networking::ConnectionStatus const Degraded;

/// @brief Field Disconnected value: I32(0)
static ::Dissonance::Networking::ConnectionStatus const Disconnected;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16882};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Networking::ConnectionStatus, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Networking::ConnectionStatus) == 0x4, "Size mismatch!");

} // namespace end def Dissonance::Networking
