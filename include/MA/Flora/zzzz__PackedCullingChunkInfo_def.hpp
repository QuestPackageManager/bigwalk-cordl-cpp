#pragma once
// IWYU pragma private; include "MA/Flora/PackedCullingChunkInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PackedCullingChunkInfo)
namespace MA::Flora {
struct ArchetypeIndex;
}
namespace MA::Flora {
struct BatchDomainIndex;
}
// Forward declare root types
namespace MA::Flora {
struct PackedCullingChunkInfo;
}
// Write type traits
MARK_VAL_T(::MA::Flora::PackedCullingChunkInfo);
DEFINE_IL2CPP_CLASS(::MA::Flora::PackedCullingChunkInfo, "MA.Flora", "PackedCullingChunkInfo");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.PackedCullingChunkInfo
struct CORDL_TYPE PackedCullingChunkInfo {
public:
// Declarations
/// @brief Method Create, addr 0x1814c0890, size 0x10, virtual false, abstract: false, final false
static inline ::MA::Flora::PackedCullingChunkInfo Create(::MA::Flora::ArchetypeIndex  archetypeIndex, ::MA::Flora::BatchDomainIndex  batchDomainIndex) ;

// Ctor Parameters []
// @brief default ctor
constexpr PackedCullingChunkInfo() ;

// Ctor Parameters [CppParam { name: "data", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr PackedCullingChunkInfo(uint32_t  data) noexcept;

/// @brief Field ArchetypeIndexBits offset 0xffffffff size 0x4
static constexpr int32_t  ArchetypeIndexBits{static_cast<int32_t>(0x14)};

/// @brief Field ArchetypeIndexShift offset 0xffffffff size 0x4
static constexpr int32_t  ArchetypeIndexShift{static_cast<int32_t>(0xc)};

/// @brief Field BatchDomainIndexBits offset 0xffffffff size 0x4
static constexpr int32_t  BatchDomainIndexBits{static_cast<int32_t>(0xc)};

/// @brief Field BatchDomainIndexMask offset 0xffffffff size 0x4
static constexpr int32_t  BatchDomainIndexMask{static_cast<int32_t>(0xfff)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13109};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field data, offset: 0x0, size: 0x4, def value: None
 uint32_t  data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::PackedCullingChunkInfo, data) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::PackedCullingChunkInfo) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
