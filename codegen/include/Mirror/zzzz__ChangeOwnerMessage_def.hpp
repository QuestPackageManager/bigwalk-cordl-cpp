#pragma once
// IWYU pragma private; include "Mirror/ChangeOwnerMessage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ChangeOwnerMessage)
namespace Mirror {
class NetworkMessage;
}
// Forward declare root types
namespace Mirror {
struct ChangeOwnerMessage;
}
// Write type traits
MARK_VAL_T(::Mirror::ChangeOwnerMessage);
DEFINE_IL2CPP_CLASS(::Mirror::ChangeOwnerMessage, "Mirror", "ChangeOwnerMessage");
// Dependencies 
namespace Mirror {
// Is value type: true
// CS Name: Mirror.ChangeOwnerMessage
struct CORDL_TYPE ChangeOwnerMessage {
public:
// Declarations
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr operator  ::Mirror::NetworkMessage*() ;

/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* i___Mirror__NetworkMessage() ;

// Ctor Parameters []
// @brief default ctor
constexpr ChangeOwnerMessage() ;

// Ctor Parameters [CppParam { name: "netId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "isOwner", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isLocalPlayer", ty: "bool", modifiers: "", def_value: None }]
constexpr ChangeOwnerMessage(uint32_t  netId, bool  isOwner, bool  isLocalPlayer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18287};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field netId, offset: 0x0, size: 0x4, def value: None
 uint32_t  netId;

/// @brief Field isOwner, offset: 0x4, size: 0x1, def value: None
 bool  isOwner;

/// @brief Field isLocalPlayer, offset: 0x5, size: 0x1, def value: None
 bool  isLocalPlayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::ChangeOwnerMessage, netId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::ChangeOwnerMessage, isOwner) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Mirror::ChangeOwnerMessage, isLocalPlayer) == 0x5, "Offset mismatch!");

static_assert(sizeof(::Mirror::ChangeOwnerMessage) == 0x8, "Size mismatch!");

} // namespace end def Mirror
