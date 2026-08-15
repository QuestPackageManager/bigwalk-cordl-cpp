#pragma once
// IWYU pragma private; include "MA/Flora/BufferCopyCommand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BufferCopyCommand)
// Forward declare root types
namespace MA::Flora {
struct BufferCopyCommand;
}
// Write type traits
MARK_VAL_T(::MA::Flora::BufferCopyCommand);
DEFINE_IL2CPP_CLASS(::MA::Flora::BufferCopyCommand, "MA.Flora", "BufferCopyCommand");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.BufferCopyCommand
struct CORDL_TYPE BufferCopyCommand {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BufferCopyCommand() ;

// Ctor Parameters [CppParam { name: "srcAddress", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "dstAddress", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "stride", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "count", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr BufferCopyCommand(uint32_t  srcAddress, uint32_t  dstAddress, uint32_t  stride, uint32_t  count) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12919};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field srcAddress, offset: 0x0, size: 0x4, def value: None
 uint32_t  srcAddress;

/// @brief Field dstAddress, offset: 0x4, size: 0x4, def value: None
 uint32_t  dstAddress;

/// @brief Field stride, offset: 0x8, size: 0x4, def value: None
 uint32_t  stride;

/// @brief Field count, offset: 0xc, size: 0x4, def value: None
 uint32_t  count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::BufferCopyCommand, srcAddress) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::BufferCopyCommand, dstAddress) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::BufferCopyCommand, stride) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::BufferCopyCommand, count) == 0xc, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::BufferCopyCommand) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
