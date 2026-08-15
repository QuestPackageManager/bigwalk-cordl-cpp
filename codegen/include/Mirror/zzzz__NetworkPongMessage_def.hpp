#pragma once
// IWYU pragma private; include "Mirror/NetworkPongMessage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(NetworkPongMessage)
namespace Mirror {
class NetworkMessage;
}
// Forward declare root types
namespace Mirror {
struct NetworkPongMessage;
}
// Write type traits
MARK_VAL_T(::Mirror::NetworkPongMessage);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkPongMessage, "Mirror", "NetworkPongMessage");
// Dependencies 
namespace Mirror {
// Is value type: true
// CS Name: Mirror.NetworkPongMessage
struct CORDL_TYPE NetworkPongMessage {
public:
// Declarations
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr operator  ::Mirror::NetworkMessage*() ;

/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* i___Mirror__NetworkMessage() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkPongMessage() ;

// Ctor Parameters [CppParam { name: "clientTime", ty: "double_t", modifiers: "", def_value: None }]
constexpr NetworkPongMessage(double_t  clientTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18294};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field clientTime, offset: 0x0, size: 0x8, def value: None
 double_t  clientTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::NetworkPongMessage, clientTime) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Mirror::NetworkPongMessage) == 0x8, "Size mismatch!");

} // namespace end def Mirror
