#pragma once
// IWYU pragma private; include "MA/Flora/NativeBufferArrayMetadata.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeBufferArrayMetadata)
namespace MA::Flora {
struct NativeBufferHeader;
}
// Forward declare root types
namespace MA::Flora {
struct NativeBufferArrayMetadata;
}
// Write type traits
MARK_VAL_T(::MA::Flora::NativeBufferArrayMetadata);
DEFINE_IL2CPP_CLASS(::MA::Flora::NativeBufferArrayMetadata, "MA.Flora", "NativeBufferArrayMetadata");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.NativeBufferArrayMetadata
struct CORDL_TYPE NativeBufferArrayMetadata {
public:
// Declarations
/// @brief Method GetNativeBufferHeader, addr 0x181460520, size 0x20, virtual false, abstract: false, final false
inline ::MA::Flora::NativeBufferHeader* GetNativeBufferHeader(int32_t  index, int32_t  elementSize) ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeBufferArrayMetadata() ;

// Ctor Parameters [CppParam { name: "Buffer", ty: "uint8_t*", modifiers: "", def_value: None }, CppParam { name: "ElementSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "InlineCapacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Capacity", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NativeBufferArrayMetadata(uint8_t*  Buffer, int32_t  ElementSize, int32_t  InlineCapacity, int32_t  Length, int32_t  Capacity) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12876};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Buffer, offset: 0x0, size: 0x8, def value: None
 uint8_t*  Buffer;

/// @brief Field ElementSize, offset: 0x8, size: 0x4, def value: None
 int32_t  ElementSize;

/// @brief Field InlineCapacity, offset: 0xc, size: 0x4, def value: None
 int32_t  InlineCapacity;

/// @brief Field Length, offset: 0x10, size: 0x4, def value: None
 int32_t  Length;

/// @brief Field Capacity, offset: 0x14, size: 0x4, def value: None
 int32_t  Capacity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::NativeBufferArrayMetadata, Buffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::NativeBufferArrayMetadata, ElementSize) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::NativeBufferArrayMetadata, InlineCapacity) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::NativeBufferArrayMetadata, Length) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::NativeBufferArrayMetadata, Capacity) == 0x14, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::NativeBufferArrayMetadata) == 0x18, "Size mismatch!");

} // namespace end def MA::Flora
