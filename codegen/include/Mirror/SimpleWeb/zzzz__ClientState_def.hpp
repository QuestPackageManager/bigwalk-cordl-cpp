#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/ClientState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ClientState)
// Forward declare root types
namespace Mirror::SimpleWeb {
struct ClientState;
}
// Write type traits
MARK_VAL_T(::Mirror::SimpleWeb::ClientState);
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::ClientState, "Mirror.SimpleWeb", "ClientState");
// Dependencies 
namespace Mirror::SimpleWeb {
// Is value type: true
// CS Name: Mirror.SimpleWeb.ClientState
struct CORDL_TYPE ClientState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ClientState_Unwrapped
enum struct __ClientState_Unwrapped : int32_t {
__E_NotConnected = static_cast<int32_t>(0x0),
__E_Connecting = static_cast<int32_t>(0x1),
__E_Connected = static_cast<int32_t>(0x2),
__E_Disconnecting = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ClientState_Unwrapped () const noexcept {
return static_cast<__ClientState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ClientState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ClientState(int32_t  value__) noexcept;

/// @brief Field Connected value: I32(2)
static ::Mirror::SimpleWeb::ClientState const Connected;

/// @brief Field Connecting value: I32(1)
static ::Mirror::SimpleWeb::ClientState const Connecting;

/// @brief Field Disconnecting value: I32(3)
static ::Mirror::SimpleWeb::ClientState const Disconnecting;

/// @brief Field NotConnected value: I32(0)
static ::Mirror::SimpleWeb::ClientState const NotConnected;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20510};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SimpleWeb::ClientState, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Mirror::SimpleWeb::ClientState) == 0x4, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb
