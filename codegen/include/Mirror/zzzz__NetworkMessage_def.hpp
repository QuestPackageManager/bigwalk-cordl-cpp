#pragma once
// IWYU pragma private; include "Mirror/NetworkMessage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(NetworkMessage)
// Forward declare root types
namespace Mirror {
class NetworkMessage;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkMessage*);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkMessage*, "Mirror", "NetworkMessage");
// Dependencies 
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkMessage
class CORDL_TYPE NetworkMessage {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "NetworkMessage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkMessage(NetworkMessage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18328};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mirror
