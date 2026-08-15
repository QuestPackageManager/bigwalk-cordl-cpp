#pragma once
// IWYU pragma private; include "Mirror/NetworkPingMessage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(NetworkPingMessage)
namespace Mirror {
class NetworkMessage;
}
// Forward declare root types
namespace Mirror {
struct NetworkPingMessage;
}
// Write type traits
MARK_VAL_T(::Mirror::NetworkPingMessage);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkPingMessage, "Mirror", "NetworkPingMessage");
// Dependencies 
namespace Mirror {
// Is value type: true
// CS Name: Mirror.NetworkPingMessage
struct CORDL_TYPE NetworkPingMessage {
public:
// Declarations
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr operator  ::Mirror::NetworkMessage*() ;

/// @brief Method .ctor, addr 0x181517da0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(double_t  value) ;

/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* i___Mirror__NetworkMessage() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkPingMessage() ;

// Ctor Parameters [CppParam { name: "clientTime", ty: "double_t", modifiers: "", def_value: None }]
constexpr NetworkPingMessage(double_t  clientTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18293};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field clientTime, offset: 0x0, size: 0x8, def value: None
 double_t  clientTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::NetworkPingMessage, clientTime) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Mirror::NetworkPingMessage) == 0x8, "Size mismatch!");

} // namespace end def Mirror
