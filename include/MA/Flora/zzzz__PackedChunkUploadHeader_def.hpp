#pragma once
// IWYU pragma private; include "MA/Flora/PackedChunkUploadHeader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PackedChunkUploadHeader)
namespace MA::Flora {
struct ChunkIndex;
}
// Forward declare root types
namespace MA::Flora {
struct PackedChunkUploadHeader;
}
// Write type traits
MARK_VAL_T(::MA::Flora::PackedChunkUploadHeader);
DEFINE_IL2CPP_CLASS(::MA::Flora::PackedChunkUploadHeader, "MA.Flora", "PackedChunkUploadHeader");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.PackedChunkUploadHeader
struct CORDL_TYPE PackedChunkUploadHeader {
public:
// Declarations
/// @brief Method .ctor, addr 0x1814546b0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::MA::Flora::ChunkIndex  chunk) ;

// Ctor Parameters []
// @brief default ctor
constexpr PackedChunkUploadHeader() ;

// Ctor Parameters [CppParam { name: "batchDomainIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "packedStartCount", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr PackedChunkUploadHeader(uint32_t  batchDomainIndex, uint32_t  packedStartCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12917};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field batchDomainIndex, offset: 0x0, size: 0x4, def value: None
 uint32_t  batchDomainIndex;

/// @brief Field packedStartCount, offset: 0x4, size: 0x4, def value: None
 uint32_t  packedStartCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::PackedChunkUploadHeader, batchDomainIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::PackedChunkUploadHeader, packedStartCount) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::PackedChunkUploadHeader) == 0x8, "Size mismatch!");

} // namespace end def MA::Flora
