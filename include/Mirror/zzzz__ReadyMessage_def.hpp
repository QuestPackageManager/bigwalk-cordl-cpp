#pragma once
// IWYU pragma private; include "Mirror/ReadyMessage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ReadyMessage)
namespace Mirror {
class NetworkMessage;
}
// Forward declare root types
namespace Mirror {
struct ReadyMessage;
}
// Write type traits
MARK_VAL_T(::Mirror::ReadyMessage);
DEFINE_IL2CPP_CLASS(::Mirror::ReadyMessage, "Mirror", "ReadyMessage");
// Dependencies 
namespace Mirror {
// Is value type: true
// CS Name: Mirror.ReadyMessage
#pragma pack(push, 0)
struct CORDL_TYPE ReadyMessage {
public:
// Declarations
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr operator  ::Mirror::NetworkMessage*() ;

/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* i___Mirror__NetworkMessage() ;

// Ctor Parameters []
// @brief default ctor
constexpr ReadyMessage() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18278};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Mirror::ReadyMessage) == 0x1, "Size mismatch!");

} // namespace end def Mirror
