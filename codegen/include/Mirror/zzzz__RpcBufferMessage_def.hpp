#pragma once
// IWYU pragma private; include "Mirror/RpcBufferMessage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArraySegment_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RpcBufferMessage)
namespace Mirror {
class NetworkMessage;
}
// Forward declare root types
namespace Mirror {
struct RpcBufferMessage;
}
// Write type traits
MARK_VAL_T(::Mirror::RpcBufferMessage);
DEFINE_IL2CPP_CLASS(::Mirror::RpcBufferMessage, "Mirror", "RpcBufferMessage");
// Dependencies System.ArraySegment`1<T>
namespace Mirror {
// Is value type: true
// CS Name: Mirror.RpcBufferMessage
struct CORDL_TYPE RpcBufferMessage {
public:
// Declarations
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr operator  ::Mirror::NetworkMessage*() ;

/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* i___Mirror__NetworkMessage() ;

// Ctor Parameters []
// @brief default ctor
constexpr RpcBufferMessage() ;

// Ctor Parameters [CppParam { name: "payload", ty: "::System::ArraySegment_1<uint8_t>", modifiers: "", def_value: None }]
constexpr RpcBufferMessage(::System::ArraySegment_1<uint8_t>  payload) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18285};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field payload, offset: 0x0, size: 0x10, def value: None
 ::System::ArraySegment_1<uint8_t>  payload;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::RpcBufferMessage, payload) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Mirror::RpcBufferMessage) == 0x10, "Size mismatch!");

} // namespace end def Mirror
