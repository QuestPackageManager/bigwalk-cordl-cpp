#pragma once
// IWYU pragma private; include "Mirror/ObjectSpawnStartedMessage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ObjectSpawnStartedMessage)
namespace Mirror {
class NetworkMessage;
}
// Forward declare root types
namespace Mirror {
struct ObjectSpawnStartedMessage;
}
// Write type traits
MARK_VAL_T(::Mirror::ObjectSpawnStartedMessage);
DEFINE_IL2CPP_CLASS(::Mirror::ObjectSpawnStartedMessage, "Mirror", "ObjectSpawnStartedMessage");
// Dependencies 
namespace Mirror {
// Is value type: true
// CS Name: Mirror.ObjectSpawnStartedMessage
#pragma pack(push, 0)
struct CORDL_TYPE ObjectSpawnStartedMessage {
public:
// Declarations
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr operator  ::Mirror::NetworkMessage*() ;

/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* i___Mirror__NetworkMessage() ;

// Ctor Parameters []
// @brief default ctor
constexpr ObjectSpawnStartedMessage() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18288};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Mirror::ObjectSpawnStartedMessage) == 0x1, "Size mismatch!");

} // namespace end def Mirror
