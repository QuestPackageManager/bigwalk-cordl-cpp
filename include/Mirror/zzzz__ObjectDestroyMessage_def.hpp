#pragma once
// IWYU pragma private; include "Mirror/ObjectDestroyMessage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectDestroyMessage)
namespace Mirror {
class NetworkMessage;
}
// Forward declare root types
namespace Mirror {
struct ObjectDestroyMessage;
}
// Write type traits
MARK_VAL_T(::Mirror::ObjectDestroyMessage);
DEFINE_IL2CPP_CLASS(::Mirror::ObjectDestroyMessage, "Mirror", "ObjectDestroyMessage");
// Dependencies 
namespace Mirror {
// Is value type: true
// CS Name: Mirror.ObjectDestroyMessage
struct CORDL_TYPE ObjectDestroyMessage {
public:
// Declarations
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr operator  ::Mirror::NetworkMessage*() ;

/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* i___Mirror__NetworkMessage() ;

// Ctor Parameters []
// @brief default ctor
constexpr ObjectDestroyMessage() ;

// Ctor Parameters [CppParam { name: "netId", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr ObjectDestroyMessage(uint32_t  netId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18290};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field netId, offset: 0x0, size: 0x4, def value: None
 uint32_t  netId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::ObjectDestroyMessage, netId) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Mirror::ObjectDestroyMessage) == 0x4, "Size mismatch!");

} // namespace end def Mirror
