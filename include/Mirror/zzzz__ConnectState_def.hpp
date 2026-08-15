#pragma once
// IWYU pragma private; include "Mirror/ConnectState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectState)
// Forward declare root types
namespace Mirror {
struct ConnectState;
}
// Write type traits
MARK_VAL_T(::Mirror::ConnectState);
DEFINE_IL2CPP_CLASS(::Mirror::ConnectState, "Mirror", "ConnectState");
// Dependencies 
namespace Mirror {
// Is value type: true
// CS Name: Mirror.ConnectState
struct CORDL_TYPE ConnectState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ConnectState_Unwrapped
enum struct __ConnectState_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Connecting = static_cast<int32_t>(0x1),
__E_Connected = static_cast<int32_t>(0x2),
__E_Disconnecting = static_cast<int32_t>(0x3),
__E_Disconnected = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConnectState_Unwrapped () const noexcept {
return static_cast<__ConnectState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ConnectState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ConnectState(int32_t  value__) noexcept;

/// @brief Field Connected value: I32(2)
static ::Mirror::ConnectState const Connected;

/// @brief Field Connecting value: I32(1)
static ::Mirror::ConnectState const Connecting;

/// @brief Field Disconnected value: I32(4)
static ::Mirror::ConnectState const Disconnected;

/// @brief Field Disconnecting value: I32(3)
static ::Mirror::ConnectState const Disconnecting;

/// @brief Field None value: I32(0)
static ::Mirror::ConnectState const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18302};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::ConnectState, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Mirror::ConnectState) == 0x4, "Size mismatch!");

} // namespace end def Mirror
