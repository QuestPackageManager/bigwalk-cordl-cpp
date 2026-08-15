#pragma once
// IWYU pragma private; include "MA/Flora/IndirectDrawChunk.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IndirectDrawChunk)
namespace MA::Flora {
struct ArchetypeIndex;
}
namespace MA::Flora {
struct CullingChunkIndex;
}
// Forward declare root types
namespace MA::Flora {
struct IndirectDrawChunk;
}
// Write type traits
MARK_VAL_T(::MA::Flora::IndirectDrawChunk);
DEFINE_IL2CPP_CLASS(::MA::Flora::IndirectDrawChunk, "MA.Flora", "IndirectDrawChunk");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.IndirectDrawChunk
struct CORDL_TYPE IndirectDrawChunk {
public:
// Declarations
/// @brief Method .ctor, addr 0x1814cdb70, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::MA::Flora::ArchetypeIndex  archetype, ::MA::Flora::CullingChunkIndex  chunk, uint8_t  splitMask, uint8_t  stateFlags, uint32_t  lightmapPartitionIndex) ;

// Ctor Parameters []
// @brief default ctor
constexpr IndirectDrawChunk() ;

// Ctor Parameters [CppParam { name: "packedChunkAndSplit", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "packedArchetypeAndState", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "lightmapPartitionIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "reserved", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr IndirectDrawChunk(uint32_t  packedChunkAndSplit, uint32_t  packedArchetypeAndState, uint32_t  lightmapPartitionIndex, uint32_t  reserved) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13192};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field packedChunkAndSplit, offset: 0x0, size: 0x4, def value: None
 uint32_t  packedChunkAndSplit;

/// @brief Field packedArchetypeAndState, offset: 0x4, size: 0x4, def value: None
 uint32_t  packedArchetypeAndState;

/// @brief Field lightmapPartitionIndex, offset: 0x8, size: 0x4, def value: None
 uint32_t  lightmapPartitionIndex;

/// @brief Field reserved, offset: 0xc, size: 0x4, def value: None
 uint32_t  reserved;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::IndirectDrawChunk, packedChunkAndSplit) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectDrawChunk, packedArchetypeAndState) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectDrawChunk, lightmapPartitionIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectDrawChunk, reserved) == 0xc, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::IndirectDrawChunk) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
