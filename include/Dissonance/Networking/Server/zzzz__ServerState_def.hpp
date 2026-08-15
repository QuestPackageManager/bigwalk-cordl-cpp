#pragma once
// IWYU pragma private; include "Dissonance/Networking/Server/ServerState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ServerState)
// Forward declare root types
namespace Dissonance::Networking::Server {
struct ServerState;
}
// Write type traits
MARK_VAL_T(::Dissonance::Networking::Server::ServerState);
DEFINE_IL2CPP_CLASS(::Dissonance::Networking::Server::ServerState, "Dissonance.Networking.Server", "ServerState");
// Dependencies 
namespace Dissonance::Networking::Server {
// Is value type: true
// CS Name: Dissonance.Networking.Server.ServerState
struct CORDL_TYPE ServerState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ServerState_Unwrapped
enum struct __ServerState_Unwrapped : int32_t {
__E_Ok = static_cast<int32_t>(0x0),
__E_Error = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ServerState_Unwrapped () const noexcept {
return static_cast<__ServerState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ServerState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ServerState(int32_t  value__) noexcept;

/// @brief Field Error value: I32(1)
static ::Dissonance::Networking::Server::ServerState const Error;

/// @brief Field Ok value: I32(0)
static ::Dissonance::Networking::Server::ServerState const Ok;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16897};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Networking::Server::ServerState, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Networking::Server::ServerState) == 0x4, "Size mismatch!");

} // namespace end def Dissonance::Networking::Server
