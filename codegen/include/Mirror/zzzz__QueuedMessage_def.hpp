#pragma once
// IWYU pragma private; include "Mirror/QueuedMessage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueuedMessage)
// Forward declare root types
namespace Mirror {
struct QueuedMessage;
}
// Write type traits
MARK_VAL_T(::Mirror::QueuedMessage);
DEFINE_IL2CPP_CLASS(::Mirror::QueuedMessage, "Mirror", "QueuedMessage");
// Dependencies 
namespace Mirror {
// Is value type: true
// CS Name: Mirror.QueuedMessage
struct CORDL_TYPE QueuedMessage {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr QueuedMessage() ;

// Ctor Parameters [CppParam { name: "connectionId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bytes", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "time", ty: "double_t", modifiers: "", def_value: None }]
constexpr QueuedMessage(int32_t  connectionId, ::ArrayW<uint8_t>  bytes, double_t  time) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19029};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field connectionId, offset: 0x0, size: 0x4, def value: None
 int32_t  connectionId;

/// @brief Field bytes, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<uint8_t>  bytes;

/// @brief Field time, offset: 0x10, size: 0x8, def value: None
 double_t  time;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::QueuedMessage, connectionId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::QueuedMessage, bytes) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mirror::QueuedMessage, time) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Mirror::QueuedMessage) == 0x18, "Size mismatch!");

} // namespace end def Mirror
