#pragma once
// IWYU pragma private; include "Mirror/EntityStateMessage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArraySegment_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EntityStateMessage)
namespace Mirror {
class NetworkMessage;
}
// Forward declare root types
namespace Mirror {
struct EntityStateMessage;
}
// Write type traits
MARK_VAL_T(::Mirror::EntityStateMessage);
DEFINE_IL2CPP_CLASS(::Mirror::EntityStateMessage, "Mirror", "EntityStateMessage");
// Dependencies System.ArraySegment`1<T>
namespace Mirror {
// Is value type: true
// CS Name: Mirror.EntityStateMessage
struct CORDL_TYPE EntityStateMessage {
public:
// Declarations
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr operator  ::Mirror::NetworkMessage*() ;

/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* i___Mirror__NetworkMessage() ;

// Ctor Parameters []
// @brief default ctor
constexpr EntityStateMessage() ;

// Ctor Parameters [CppParam { name: "netId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "payload", ty: "::System::ArraySegment_1<uint8_t>", modifiers: "", def_value: None }]
constexpr EntityStateMessage(uint32_t  netId, ::System::ArraySegment_1<uint8_t>  payload) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18292};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field netId, offset: 0x0, size: 0x4, def value: None
 uint32_t  netId;

/// @brief Field payload, offset: 0x8, size: 0x10, def value: None
 ::System::ArraySegment_1<uint8_t>  payload;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::EntityStateMessage, netId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::EntityStateMessage, payload) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Mirror::EntityStateMessage) == 0x18, "Size mismatch!");

} // namespace end def Mirror
