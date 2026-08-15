#pragma once
// IWYU pragma private; include "Mirror/RpcMessage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArraySegment_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RpcMessage)
namespace Mirror {
class NetworkMessage;
}
// Forward declare root types
namespace Mirror {
struct RpcMessage;
}
// Write type traits
MARK_VAL_T(::Mirror::RpcMessage);
DEFINE_IL2CPP_CLASS(::Mirror::RpcMessage, "Mirror", "RpcMessage");
// Dependencies System.ArraySegment`1<T>
namespace Mirror {
// Is value type: true
// CS Name: Mirror.RpcMessage
struct CORDL_TYPE RpcMessage {
public:
// Declarations
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr operator  ::Mirror::NetworkMessage*() ;

/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* i___Mirror__NetworkMessage() ;

// Ctor Parameters []
// @brief default ctor
constexpr RpcMessage() ;

// Ctor Parameters [CppParam { name: "netId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "componentIndex", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "functionHash", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "payload", ty: "::System::ArraySegment_1<uint8_t>", modifiers: "", def_value: None }]
constexpr RpcMessage(uint32_t  netId, uint8_t  componentIndex, uint16_t  functionHash, ::System::ArraySegment_1<uint8_t>  payload) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18284};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field netId, offset: 0x0, size: 0x4, def value: None
 uint32_t  netId;

/// @brief Field componentIndex, offset: 0x4, size: 0x1, def value: None
 uint8_t  componentIndex;

/// @brief Field functionHash, offset: 0x6, size: 0x2, def value: None
 uint16_t  functionHash;

/// @brief Field payload, offset: 0x8, size: 0x10, def value: None
 ::System::ArraySegment_1<uint8_t>  payload;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::RpcMessage, netId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::RpcMessage, componentIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Mirror::RpcMessage, functionHash) == 0x6, "Offset mismatch!");

static_assert(offsetof(::Mirror::RpcMessage, payload) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Mirror::RpcMessage) == 0x18, "Size mismatch!");

} // namespace end def Mirror
