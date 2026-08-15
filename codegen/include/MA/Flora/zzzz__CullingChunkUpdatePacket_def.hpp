#pragma once
// IWYU pragma private; include "MA/Flora/CullingChunkUpdatePacket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CullingChunkUpdatePacket)
namespace MA::Flora {
struct CellIndex;
}
namespace MA::Flora {
struct CullingChunkIndex;
}
namespace MA::Flora {
struct PackedCullingChunkBatch;
}
namespace MA::Flora {
struct PackedCullingChunkInfo;
}
// Forward declare root types
namespace MA::Flora {
struct CullingChunkUpdatePacket;
}
// Write type traits
MARK_VAL_T(::MA::Flora::CullingChunkUpdatePacket);
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingChunkUpdatePacket, "MA.Flora", "CullingChunkUpdatePacket");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingChunkUpdatePacket
struct CORDL_TYPE CullingChunkUpdatePacket {
public:
// Declarations
/// @brief Method Create, addr 0x1814b1610, size 0x20, virtual false, abstract: false, final false
static inline ::MA::Flora::CullingChunkUpdatePacket Create(::MA::Flora::CullingChunkIndex  chunk, ::MA::Flora::CellIndex  cell, ::MA::Flora::PackedCullingChunkBatch  batch, ::MA::Flora::PackedCullingChunkInfo  info) ;

// Ctor Parameters []
// @brief default ctor
constexpr CullingChunkUpdatePacket() ;

// Ctor Parameters [CppParam { name: "chunkIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "cellIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "packedInfo", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "packedBatch", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr CullingChunkUpdatePacket(uint32_t  chunkIndex, uint32_t  cellIndex, uint32_t  packedInfo, uint32_t  packedBatch) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13112};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field chunkIndex, offset: 0x0, size: 0x4, def value: None
 uint32_t  chunkIndex;

/// @brief Field cellIndex, offset: 0x4, size: 0x4, def value: None
 uint32_t  cellIndex;

/// @brief Field packedInfo, offset: 0x8, size: 0x4, def value: None
 uint32_t  packedInfo;

/// @brief Field packedBatch, offset: 0xc, size: 0x4, def value: None
 uint32_t  packedBatch;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingChunkUpdatePacket, chunkIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingChunkUpdatePacket, cellIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingChunkUpdatePacket, packedInfo) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingChunkUpdatePacket, packedBatch) == 0xc, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingChunkUpdatePacket) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
