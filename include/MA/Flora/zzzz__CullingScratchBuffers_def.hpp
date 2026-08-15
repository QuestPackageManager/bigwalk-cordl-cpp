#pragma once
// IWYU pragma private; include "MA/Flora/CullingScratchBuffers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__CullingChunkIndex_def.hpp"
#include "MA/Flora/zzzz__CullingLayoutCounts_def.hpp"
#include "MA/Flora/zzzz__DrawVisibilityMask_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CullingScratchBuffers)
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
// Forward declare root types
namespace MA::Flora {
class CullingScratchBuffers;
}
// Write type traits
MARK_REF_T(::MA::Flora::CullingScratchBuffers*);
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingScratchBuffers*, "MA.Flora", "CullingScratchBuffers");
// Dependencies MA.Flora.CullingChunkIndex, MA.Flora.CullingLayoutCounts, MA.Flora.DrawVisibilityMask, System.Object, Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.CullingScratchBuffers
class CORDL_TYPE CullingScratchBuffers : public ::System::Object {
public:
// Declarations
/// @brief Field ChunkVisibility, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_ChunkVisibility, put=__cordl_internal_set_ChunkVisibility)) ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>  ChunkVisibility;

/// @brief Field ExactCounts, offset 0x130, size 0x10 
 __declspec(property(get=__cordl_internal_get_ExactCounts, put=__cordl_internal_set_ExactCounts)) ::Unity::Collections::NativeArray_1<::MA::Flora::CullingLayoutCounts>  ExactCounts;

/// @brief Field OrderedVisibleChunkLightmapPartitions, offset 0x160, size 0x10 
 __declspec(property(get=__cordl_internal_get_OrderedVisibleChunkLightmapPartitions, put=__cordl_internal_set_OrderedVisibleChunkLightmapPartitions)) ::Unity::Collections::NativeArray_1<int32_t>  OrderedVisibleChunkLightmapPartitions;

/// @brief Field OrderedVisibleChunkSourceIndices, offset 0x150, size 0x10 
 __declspec(property(get=__cordl_internal_get_OrderedVisibleChunkSourceIndices, put=__cordl_internal_set_OrderedVisibleChunkSourceIndices)) ::Unity::Collections::NativeArray_1<int32_t>  OrderedVisibleChunkSourceIndices;

/// @brief Field OrderedVisibleChunks, offset 0x140, size 0x10 
 __declspec(property(get=__cordl_internal_get_OrderedVisibleChunks, put=__cordl_internal_set_OrderedVisibleChunks)) ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  OrderedVisibleChunks;

/// @brief Field RangeCommandCounts, offset 0x100, size 0x10 
 __declspec(property(get=__cordl_internal_get_RangeCommandCounts, put=__cordl_internal_set_RangeCommandCounts)) ::Unity::Collections::NativeArray_1<int32_t>  RangeCommandCounts;

/// @brief Field RangeCommandOffsets, offset 0x110, size 0x10 
 __declspec(property(get=__cordl_internal_get_RangeCommandOffsets, put=__cordl_internal_set_RangeCommandOffsets)) ::Unity::Collections::NativeArray_1<int32_t>  RangeCommandOffsets;

/// @brief Field ReducedCounts, offset 0x120, size 0x10 
 __declspec(property(get=__cordl_internal_get_ReducedCounts, put=__cordl_internal_set_ReducedCounts)) ::Unity::Collections::NativeArray_1<::MA::Flora::CullingLayoutCounts>  ReducedCounts;

/// @brief Field TemplateChunkStateFlags, offset 0xa0, size 0x10 
 __declspec(property(get=__cordl_internal_get_TemplateChunkStateFlags, put=__cordl_internal_set_TemplateChunkStateFlags)) ::Unity::Collections::NativeArray_1<uint8_t>  TemplateChunkStateFlags;

/// @brief Field TemplateChunkWriteCursors, offset 0x170, size 0x10 
 __declspec(property(get=__cordl_internal_get_TemplateChunkWriteCursors, put=__cordl_internal_set_TemplateChunkWriteCursors)) ::Unity::Collections::NativeArray_1<int32_t>  TemplateChunkWriteCursors;

/// @brief Field TemplateDrawBinOffsets, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get_TemplateDrawBinOffsets, put=__cordl_internal_set_TemplateDrawBinOffsets)) ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawBinOffsets;

/// @brief Field TemplateDrawChunkCounts, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_TemplateDrawChunkCounts, put=__cordl_internal_set_TemplateDrawChunkCounts)) ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawChunkCounts;

/// @brief Field TemplateDrawChunkOffsets, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_TemplateDrawChunkOffsets, put=__cordl_internal_set_TemplateDrawChunkOffsets)) ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawChunkOffsets;

/// @brief Field TemplateDrawCommandCounts, offset 0xd0, size 0x10 
 __declspec(property(get=__cordl_internal_get_TemplateDrawCommandCounts, put=__cordl_internal_set_TemplateDrawCommandCounts)) ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawCommandCounts;

/// @brief Field TemplateDrawCommandOffsets, offset 0x70, size 0x10 
 __declspec(property(get=__cordl_internal_get_TemplateDrawCommandOffsets, put=__cordl_internal_set_TemplateDrawCommandOffsets)) ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawCommandOffsets;

/// @brief Field TemplateDrawInstanceCounts, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_TemplateDrawInstanceCounts, put=__cordl_internal_set_TemplateDrawInstanceCounts)) ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawInstanceCounts;

/// @brief Field TemplateEmittedStateFlags, offset 0xc0, size 0x10 
 __declspec(property(get=__cordl_internal_get_TemplateEmittedStateFlags, put=__cordl_internal_set_TemplateEmittedStateFlags)) ::Unity::Collections::NativeArray_1<uint8_t>  TemplateEmittedStateFlags;

/// @brief Field TemplateLightmapIndices, offset 0xe0, size 0x10 
 __declspec(property(get=__cordl_internal_get_TemplateLightmapIndices, put=__cordl_internal_set_TemplateLightmapIndices)) ::Unity::Collections::NativeArray_1<int32_t>  TemplateLightmapIndices;

/// @brief Field TemplateLightmapPartitionCounts, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get_TemplateLightmapPartitionCounts, put=__cordl_internal_set_TemplateLightmapPartitionCounts)) ::Unity::Collections::NativeArray_1<int32_t>  TemplateLightmapPartitionCounts;

/// @brief Field TemplateLightmapVisibleInstanceCounts, offset 0xf0, size 0x10 
 __declspec(property(get=__cordl_internal_get_TemplateLightmapVisibleInstanceCounts, put=__cordl_internal_set_TemplateLightmapVisibleInstanceCounts)) ::Unity::Collections::NativeArray_1<int32_t>  TemplateLightmapVisibleInstanceCounts;

/// @brief Field TemplateStateMasks, offset 0xb0, size 0x10 
 __declspec(property(get=__cordl_internal_get_TemplateStateMasks, put=__cordl_internal_set_TemplateStateMasks)) ::Unity::Collections::NativeArray_1<uint8_t>  TemplateStateMasks;

/// @brief Field TemplateVisibilityMasks, offset 0x90, size 0x10 
 __declspec(property(get=__cordl_internal_get_TemplateVisibilityMasks, put=__cordl_internal_set_TemplateVisibilityMasks)) ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>  TemplateVisibilityMasks;

/// @brief Field TemplateVisibleInstanceOffsets, offset 0x80, size 0x10 
 __declspec(property(get=__cordl_internal_get_TemplateVisibleInstanceOffsets, put=__cordl_internal_set_TemplateVisibleInstanceOffsets)) ::Unity::Collections::NativeArray_1<int32_t>  TemplateVisibleInstanceOffsets;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x1814b1fe0, size 0x140, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method EnsureCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void EnsureCapacity(::by_ref<::Unity::Collections::NativeArray_1<T>>  array, int32_t  requiredLength) ;

/// @brief Method EnsureCapacity, addr 0x1814b2120, size 0x1e0, virtual false, abstract: false, final false
inline void EnsureCapacity(int32_t  maxChunkCount, int32_t  maxTemplateCount, int32_t  visibleChunkCount, int32_t  drawRangeCount, int32_t  templateDrawCommandStride) ;

static inline ::MA::Flora::CullingScratchBuffers* New_ctor() ;

/// @brief Method SafeDispose, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void SafeDispose(::by_ref<::Unity::Collections::NativeArray_1<T>>  array) ;

constexpr ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask> const& __cordl_internal_get_ChunkVisibility() const;

constexpr ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>& __cordl_internal_get_ChunkVisibility() ;

constexpr ::Unity::Collections::NativeArray_1<::MA::Flora::CullingLayoutCounts> const& __cordl_internal_get_ExactCounts() const;

constexpr ::Unity::Collections::NativeArray_1<::MA::Flora::CullingLayoutCounts>& __cordl_internal_get_ExactCounts() ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_OrderedVisibleChunkLightmapPartitions() const;

constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_OrderedVisibleChunkLightmapPartitions() ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_OrderedVisibleChunkSourceIndices() const;

constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_OrderedVisibleChunkSourceIndices() ;

constexpr ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex> const& __cordl_internal_get_OrderedVisibleChunks() const;

constexpr ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>& __cordl_internal_get_OrderedVisibleChunks() ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_RangeCommandCounts() const;

constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_RangeCommandCounts() ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_RangeCommandOffsets() const;

constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_RangeCommandOffsets() ;

constexpr ::Unity::Collections::NativeArray_1<::MA::Flora::CullingLayoutCounts> const& __cordl_internal_get_ReducedCounts() const;

constexpr ::Unity::Collections::NativeArray_1<::MA::Flora::CullingLayoutCounts>& __cordl_internal_get_ReducedCounts() ;

constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __cordl_internal_get_TemplateChunkStateFlags() const;

constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __cordl_internal_get_TemplateChunkStateFlags() ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_TemplateChunkWriteCursors() const;

constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_TemplateChunkWriteCursors() ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_TemplateDrawBinOffsets() const;

constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_TemplateDrawBinOffsets() ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_TemplateDrawChunkCounts() const;

constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_TemplateDrawChunkCounts() ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_TemplateDrawChunkOffsets() const;

constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_TemplateDrawChunkOffsets() ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_TemplateDrawCommandCounts() const;

constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_TemplateDrawCommandCounts() ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_TemplateDrawCommandOffsets() const;

constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_TemplateDrawCommandOffsets() ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_TemplateDrawInstanceCounts() const;

constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_TemplateDrawInstanceCounts() ;

constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __cordl_internal_get_TemplateEmittedStateFlags() const;

constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __cordl_internal_get_TemplateEmittedStateFlags() ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_TemplateLightmapIndices() const;

constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_TemplateLightmapIndices() ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_TemplateLightmapPartitionCounts() const;

constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_TemplateLightmapPartitionCounts() ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_TemplateLightmapVisibleInstanceCounts() const;

constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_TemplateLightmapVisibleInstanceCounts() ;

constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __cordl_internal_get_TemplateStateMasks() const;

constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __cordl_internal_get_TemplateStateMasks() ;

constexpr ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask> const& __cordl_internal_get_TemplateVisibilityMasks() const;

constexpr ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>& __cordl_internal_get_TemplateVisibilityMasks() ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_TemplateVisibleInstanceOffsets() const;

constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_TemplateVisibleInstanceOffsets() ;

constexpr void __cordl_internal_set_ChunkVisibility(::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>  value) ;

constexpr void __cordl_internal_set_ExactCounts(::Unity::Collections::NativeArray_1<::MA::Flora::CullingLayoutCounts>  value) ;

constexpr void __cordl_internal_set_OrderedVisibleChunkLightmapPartitions(::Unity::Collections::NativeArray_1<int32_t>  value) ;

constexpr void __cordl_internal_set_OrderedVisibleChunkSourceIndices(::Unity::Collections::NativeArray_1<int32_t>  value) ;

constexpr void __cordl_internal_set_OrderedVisibleChunks(::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  value) ;

constexpr void __cordl_internal_set_RangeCommandCounts(::Unity::Collections::NativeArray_1<int32_t>  value) ;

constexpr void __cordl_internal_set_RangeCommandOffsets(::Unity::Collections::NativeArray_1<int32_t>  value) ;

constexpr void __cordl_internal_set_ReducedCounts(::Unity::Collections::NativeArray_1<::MA::Flora::CullingLayoutCounts>  value) ;

constexpr void __cordl_internal_set_TemplateChunkStateFlags(::Unity::Collections::NativeArray_1<uint8_t>  value) ;

constexpr void __cordl_internal_set_TemplateChunkWriteCursors(::Unity::Collections::NativeArray_1<int32_t>  value) ;

constexpr void __cordl_internal_set_TemplateDrawBinOffsets(::Unity::Collections::NativeArray_1<int32_t>  value) ;

constexpr void __cordl_internal_set_TemplateDrawChunkCounts(::Unity::Collections::NativeArray_1<int32_t>  value) ;

constexpr void __cordl_internal_set_TemplateDrawChunkOffsets(::Unity::Collections::NativeArray_1<int32_t>  value) ;

constexpr void __cordl_internal_set_TemplateDrawCommandCounts(::Unity::Collections::NativeArray_1<int32_t>  value) ;

constexpr void __cordl_internal_set_TemplateDrawCommandOffsets(::Unity::Collections::NativeArray_1<int32_t>  value) ;

constexpr void __cordl_internal_set_TemplateDrawInstanceCounts(::Unity::Collections::NativeArray_1<int32_t>  value) ;

constexpr void __cordl_internal_set_TemplateEmittedStateFlags(::Unity::Collections::NativeArray_1<uint8_t>  value) ;

constexpr void __cordl_internal_set_TemplateLightmapIndices(::Unity::Collections::NativeArray_1<int32_t>  value) ;

constexpr void __cordl_internal_set_TemplateLightmapPartitionCounts(::Unity::Collections::NativeArray_1<int32_t>  value) ;

constexpr void __cordl_internal_set_TemplateLightmapVisibleInstanceCounts(::Unity::Collections::NativeArray_1<int32_t>  value) ;

constexpr void __cordl_internal_set_TemplateStateMasks(::Unity::Collections::NativeArray_1<uint8_t>  value) ;

constexpr void __cordl_internal_set_TemplateVisibilityMasks(::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>  value) ;

constexpr void __cordl_internal_set_TemplateVisibleInstanceOffsets(::Unity::Collections::NativeArray_1<int32_t>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CullingScratchBuffers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CullingScratchBuffers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CullingScratchBuffers(CullingScratchBuffers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CullingScratchBuffers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CullingScratchBuffers(CullingScratchBuffers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13168};

/// @brief Field ChunkVisibility, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>  ___ChunkVisibility;

/// @brief Field TemplateDrawChunkCounts, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ___TemplateDrawChunkCounts;

/// @brief Field TemplateDrawChunkOffsets, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ___TemplateDrawChunkOffsets;

/// @brief Field TemplateDrawInstanceCounts, offset: 0x40, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ___TemplateDrawInstanceCounts;

/// @brief Field TemplateLightmapPartitionCounts, offset: 0x50, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ___TemplateLightmapPartitionCounts;

/// @brief Field TemplateDrawBinOffsets, offset: 0x60, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ___TemplateDrawBinOffsets;

/// @brief Field TemplateDrawCommandOffsets, offset: 0x70, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ___TemplateDrawCommandOffsets;

/// @brief Field TemplateVisibleInstanceOffsets, offset: 0x80, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ___TemplateVisibleInstanceOffsets;

/// @brief Field TemplateVisibilityMasks, offset: 0x90, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>  ___TemplateVisibilityMasks;

/// @brief Field TemplateChunkStateFlags, offset: 0xa0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  ___TemplateChunkStateFlags;

/// @brief Field TemplateStateMasks, offset: 0xb0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  ___TemplateStateMasks;

/// @brief Field TemplateEmittedStateFlags, offset: 0xc0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  ___TemplateEmittedStateFlags;

/// @brief Field TemplateDrawCommandCounts, offset: 0xd0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ___TemplateDrawCommandCounts;

/// @brief Field TemplateLightmapIndices, offset: 0xe0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ___TemplateLightmapIndices;

/// @brief Field TemplateLightmapVisibleInstanceCounts, offset: 0xf0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ___TemplateLightmapVisibleInstanceCounts;

/// @brief Field RangeCommandCounts, offset: 0x100, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ___RangeCommandCounts;

/// @brief Field RangeCommandOffsets, offset: 0x110, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ___RangeCommandOffsets;

/// @brief Field ReducedCounts, offset: 0x120, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::CullingLayoutCounts>  ___ReducedCounts;

/// @brief Field ExactCounts, offset: 0x130, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::CullingLayoutCounts>  ___ExactCounts;

/// @brief Field OrderedVisibleChunks, offset: 0x140, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  ___OrderedVisibleChunks;

/// @brief Field OrderedVisibleChunkSourceIndices, offset: 0x150, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ___OrderedVisibleChunkSourceIndices;

/// @brief Field OrderedVisibleChunkLightmapPartitions, offset: 0x160, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ___OrderedVisibleChunkLightmapPartitions;

/// @brief Field TemplateChunkWriteCursors, offset: 0x170, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ___TemplateChunkWriteCursors;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingScratchBuffers, ___ChunkVisibility) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingScratchBuffers, ___TemplateDrawChunkCounts) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingScratchBuffers, ___TemplateDrawChunkOffsets) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingScratchBuffers, ___TemplateDrawInstanceCounts) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingScratchBuffers, ___TemplateLightmapPartitionCounts) == 0x50, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingScratchBuffers, ___TemplateDrawBinOffsets) == 0x60, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingScratchBuffers, ___TemplateDrawCommandOffsets) == 0x70, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingScratchBuffers, ___TemplateVisibleInstanceOffsets) == 0x80, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingScratchBuffers, ___TemplateVisibilityMasks) == 0x90, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingScratchBuffers, ___TemplateChunkStateFlags) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingScratchBuffers, ___TemplateStateMasks) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingScratchBuffers, ___TemplateEmittedStateFlags) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingScratchBuffers, ___TemplateDrawCommandCounts) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingScratchBuffers, ___TemplateLightmapIndices) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingScratchBuffers, ___TemplateLightmapVisibleInstanceCounts) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingScratchBuffers, ___RangeCommandCounts) == 0x100, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingScratchBuffers, ___RangeCommandOffsets) == 0x110, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingScratchBuffers, ___ReducedCounts) == 0x120, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingScratchBuffers, ___ExactCounts) == 0x130, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingScratchBuffers, ___OrderedVisibleChunks) == 0x140, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingScratchBuffers, ___OrderedVisibleChunkSourceIndices) == 0x150, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingScratchBuffers, ___OrderedVisibleChunkLightmapPartitions) == 0x160, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingScratchBuffers, ___TemplateChunkWriteCursors) == 0x170, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingScratchBuffers) == 0x180, "Size mismatch!");

} // namespace end def MA::Flora
