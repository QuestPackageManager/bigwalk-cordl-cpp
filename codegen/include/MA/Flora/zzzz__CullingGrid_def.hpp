#pragma once
// IWYU pragma private; include "MA/Flora/CullingGrid.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__AABB_def.hpp"
#include "MA/Flora/zzzz__ArchetypeIndex_def.hpp"
#include "MA/Flora/zzzz__BatchDomainIndex_def.hpp"
#include "MA/Flora/zzzz__BlockData_def.hpp"
#include "MA/Flora/zzzz__BlockIndex_def.hpp"
#include "MA/Flora/zzzz__BlockLocation_def.hpp"
#include "MA/Flora/zzzz__CellBucketIndex_def.hpp"
#include "MA/Flora/zzzz__CellBucketKey_def.hpp"
#include "MA/Flora/zzzz__CellIndex_def.hpp"
#include "MA/Flora/zzzz__CellLocation_def.hpp"
#include "MA/Flora/zzzz__CullingChunkIndex_def.hpp"
#include "MA/Flora/zzzz__CullingChunkUpdatePacket_def.hpp"
#include "MA/Flora/zzzz__FloraInstanceHandle_def.hpp"
#include "MA/Flora/zzzz__FrustumSIMDPacket_def.hpp"
#include "MA/Flora/zzzz__GraphicsBufferRef_def.hpp"
#include "MA/Flora/zzzz__InstanceBuffer_def.hpp"
#include "MA/Flora/zzzz__InstanceManager_def.hpp"
#include "MA/Flora/zzzz__InstanceTag_def.hpp"
#include "MA/Flora/zzzz__NativeBitSet_def.hpp"
#include "MA/Flora/zzzz__NativeBufferArray_1_def.hpp"
#include "MA/Flora/zzzz__NativeDataReference_1_def.hpp"
#include "MA/Flora/zzzz__PackedCullingChunkBatch_def.hpp"
#include "MA/Flora/zzzz__TemplateManager_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Unity/Mathematics/zzzz__int2_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CullingGrid)
namespace MA::Flora {
struct AABB;
}
namespace MA::Flora {
struct ArchetypeIndex;
}
namespace MA::Flora {
struct BatchDomainIndex;
}
namespace MA::Flora {
struct BlockIndex;
}
namespace MA::Flora {
struct BlockLocation;
}
namespace MA::Flora {
struct CellBucketIndex;
}
namespace MA::Flora {
struct CellIndex;
}
namespace MA::Flora {
struct CellLocation;
}
namespace MA::Flora {
struct ChunkIndex;
}
namespace MA::Flora {
struct CullingChunkIndex;
}
namespace MA::Flora {
struct CullingFlagChannel;
}
namespace MA::Flora {
struct CullingGrid_BuildChunkFlags;
}
namespace MA::Flora {
struct CullingGrid_BuildChunkUpdatePackets;
}
namespace MA::Flora {
struct CullingGrid_BuildIndirectOffsets;
}
namespace MA::Flora {
struct CullingGrid_InstanceBatchInCullingChunk;
}
namespace MA::Flora {
struct CullingGrid_SourceFilterMode;
}
namespace MA::Flora {
struct CullingGrid_TestCellsBoxJob;
}
namespace MA::Flora {
struct CullingGrid_TestCellsSphereJob;
}
namespace MA::Flora {
struct CullingGrid_TestSelectionPlanesJob;
}
namespace MA::Flora {
struct FloraInstanceFilter;
}
namespace MA::Flora {
struct FloraInstanceHandle;
}
namespace MA::Flora {
struct FloraInstanceTypeMask;
}
namespace MA::Flora {
class FloraRuntimeResources;
}
namespace MA::Flora {
struct GraphicsBufferRef;
}
namespace MA::Flora {
struct InstanceContext;
}
namespace MA::Flora {
struct InstanceInChunk;
}
namespace MA::Flora {
struct InstanceTag;
}
namespace MA::Flora {
struct NativeBitSet;
}
namespace MA::Flora {
template<typename T>
struct NativeBufferArray_1;
}
namespace MA::Flora {
struct PackedCullingChunkBatch;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeList_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeParallelHashSet_1;
}
namespace Unity::Jobs {
class IJobParallelFor;
}
namespace Unity::Jobs {
class IJob;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct int3;
}
namespace Unity::Mathematics {
struct int4;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
struct BoundingSphere;
}
namespace UnityEngine {
struct EntityId;
}
namespace UnityEngine {
struct Plane;
}
// Forward declare root types
namespace MA::Flora {
struct CullingGrid_SourceFilterMode;
}
namespace MA::Flora {
struct CullingGrid;
}
namespace MA::Flora {
struct CullingGrid_BuildChunkFlags;
}
namespace MA::Flora {
struct CullingGrid_BuildChunkUpdatePackets;
}
namespace MA::Flora {
struct CullingGrid_BuildIndirectOffsets;
}
namespace MA::Flora {
struct CullingGrid_InstanceBatchInCullingChunk;
}
namespace MA::Flora {
struct CullingGrid_TestCellsBoxJob;
}
namespace MA::Flora {
struct CullingGrid_TestCellsSphereJob;
}
namespace MA::Flora {
struct CullingGrid_TestSelectionPlanesJob;
}
// Write type traits
MARK_VAL_T(::MA::Flora::CullingGrid_SourceFilterMode);
MARK_VAL_T(::MA::Flora::CullingGrid);
MARK_VAL_T(::MA::Flora::CullingGrid_BuildChunkFlags);
MARK_VAL_T(::MA::Flora::CullingGrid_BuildChunkUpdatePackets);
MARK_VAL_T(::MA::Flora::CullingGrid_BuildIndirectOffsets);
MARK_VAL_T(::MA::Flora::CullingGrid_InstanceBatchInCullingChunk);
MARK_VAL_T(::MA::Flora::CullingGrid_TestCellsBoxJob);
MARK_VAL_T(::MA::Flora::CullingGrid_TestCellsSphereJob);
MARK_VAL_T(::MA::Flora::CullingGrid_TestSelectionPlanesJob);
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingGrid_SourceFilterMode, "MA.Flora", "CullingGrid/SourceFilterMode");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingGrid, "MA.Flora", "CullingGrid");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingGrid_BuildChunkFlags, "MA.Flora", "CullingGrid/BuildChunkFlags");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingGrid_BuildChunkUpdatePackets, "MA.Flora", "CullingGrid/BuildChunkUpdatePackets");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingGrid_BuildIndirectOffsets, "MA.Flora", "CullingGrid/BuildIndirectOffsets");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingGrid_InstanceBatchInCullingChunk, "MA.Flora", "CullingGrid/InstanceBatchInCullingChunk");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingGrid_TestCellsBoxJob, "MA.Flora", "CullingGrid/TestCellsBoxJob");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingGrid_TestCellsSphereJob, "MA.Flora", "CullingGrid/TestCellsSphereJob");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingGrid_TestSelectionPlanesJob, "MA.Flora", "CullingGrid/TestSelectionPlanesJob");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingGrid/SourceFilterMode
struct CORDL_TYPE CullingGrid_SourceFilterMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __CullingGrid_SourceFilterMode_Unwrapped
enum struct __CullingGrid_SourceFilterMode_Unwrapped : uint8_t {
__E_None = static_cast<uint8_t>(0x0u),
__E_AuthoringOnly = static_cast<uint8_t>(0x1u),
__E_IdentityOnly = static_cast<uint8_t>(0x2u),
__E_RenderOnly = static_cast<uint8_t>(0x3u),
__E_AuthoringAndIdentity = static_cast<uint8_t>(0x4u),
__E_AuthoringAndRender = static_cast<uint8_t>(0x5u),
__E_General = static_cast<uint8_t>(0x6u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CullingGrid_SourceFilterMode_Unwrapped () const noexcept {
return static_cast<__CullingGrid_SourceFilterMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CullingGrid_SourceFilterMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr CullingGrid_SourceFilterMode(uint8_t  value__) noexcept;

/// @brief Field AuthoringAndIdentity value: U8(4)
static ::MA::Flora::CullingGrid_SourceFilterMode const AuthoringAndIdentity;

/// @brief Field AuthoringAndRender value: U8(5)
static ::MA::Flora::CullingGrid_SourceFilterMode const AuthoringAndRender;

/// @brief Field AuthoringOnly value: U8(1)
static ::MA::Flora::CullingGrid_SourceFilterMode const AuthoringOnly;

/// @brief Field General value: U8(6)
static ::MA::Flora::CullingGrid_SourceFilterMode const General;

/// @brief Field IdentityOnly value: U8(2)
static ::MA::Flora::CullingGrid_SourceFilterMode const IdentityOnly;

/// @brief Field None value: U8(0)
static ::MA::Flora::CullingGrid_SourceFilterMode const None;

/// @brief Field RenderOnly value: U8(3)
static ::MA::Flora::CullingGrid_SourceFilterMode const RenderOnly;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13091};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingGrid_SourceFilterMode, value__) == 0x1, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingGrid_SourceFilterMode) == 0x1, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.AABB, MA.Flora.ArchetypeIndex, MA.Flora.BlockLocation, MA.Flora.CullingChunkIndex, MA.Flora.FloraInstanceHandle, MA.Flora.FrustumSIMDPacket, MA.Flora.InstanceTag, MA.Flora.NativeBitSet, MA.Flora.NativeBufferArray`1<T>, Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingGrid/TestSelectionPlanesJob
struct CORDL_TYPE CullingGrid_TestSelectionPlanesJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0x1814ae510, size 0x6b0, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr CullingGrid_TestSelectionPlanesJob() ;

// Ctor Parameters [CppParam { name: "IncludeTags", ty: "::MA::Flora::InstanceTag", modifiers: "", def_value: None }, CppParam { name: "ExcludeTags", ty: "::MA::Flora::InstanceTag", modifiers: "", def_value: None }, CppParam { name: "FrustumPackets", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::FrustumSIMDPacket>", modifiers: "", def_value: None }, CppParam { name: "ActiveBlocks", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "BlockLocations", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::BlockLocation>", modifiers: "", def_value: None }, CppParam { name: "ActiveCells", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "CullingChunks", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "ChunkArchetypes", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>", modifiers: "", def_value: None }, CppParam { name: "ChunkCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "InstanceAABBs", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::AABB>", modifiers: "", def_value: None }, CppParam { name: "InstanceHandles", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>", modifiers: "", def_value: None }, CppParam { name: "Result", ty: "::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>", modifiers: "", def_value: None }]
constexpr CullingGrid_TestSelectionPlanesJob(::MA::Flora::InstanceTag  IncludeTags, ::MA::Flora::InstanceTag  ExcludeTags, ::Unity::Collections::NativeArray_1<::MA::Flora::FrustumSIMDPacket>  FrustumPackets, ::MA::Flora::NativeBitSet  ActiveBlocks, ::Unity::Collections::NativeArray_1<::MA::Flora::BlockLocation>  BlockLocations, ::MA::Flora::NativeBitSet  ActiveCells, ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>  CullingChunks, ::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>  ChunkArchetypes, ::Unity::Collections::NativeArray_1<int32_t>  ChunkCounts, ::Unity::Collections::NativeArray_1<::MA::Flora::AABB>  InstanceAABBs, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  InstanceHandles, ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>  Result) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13092};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field IncludeTags, offset: 0x0, size: 0x4, def value: None
 ::MA::Flora::InstanceTag  IncludeTags;

/// @brief Field ExcludeTags, offset: 0x4, size: 0x4, def value: None
 ::MA::Flora::InstanceTag  ExcludeTags;

/// @brief Field FrustumPackets, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::FrustumSIMDPacket>  FrustumPackets;

/// @brief Field ActiveBlocks, offset: 0x18, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  ActiveBlocks;

/// @brief Field BlockLocations, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::BlockLocation>  BlockLocations;

/// @brief Field ActiveCells, offset: 0x30, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  ActiveCells;

/// @brief Field CullingChunks, offset: 0x38, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>  CullingChunks;

/// @brief Field ChunkArchetypes, offset: 0x48, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>  ChunkArchetypes;

/// @brief Field ChunkCounts, offset: 0x58, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ChunkCounts;

/// @brief Field InstanceAABBs, offset: 0x68, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::AABB>  InstanceAABBs;

/// @brief Field InstanceHandles, offset: 0x78, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  InstanceHandles;

/// @brief Field Result, offset: 0x88, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>  Result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingGrid_TestSelectionPlanesJob, IncludeTags) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_TestSelectionPlanesJob, ExcludeTags) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_TestSelectionPlanesJob, FrustumPackets) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_TestSelectionPlanesJob, ActiveBlocks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_TestSelectionPlanesJob, BlockLocations) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_TestSelectionPlanesJob, ActiveCells) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_TestSelectionPlanesJob, CullingChunks) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_TestSelectionPlanesJob, ChunkArchetypes) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_TestSelectionPlanesJob, ChunkCounts) == 0x58, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_TestSelectionPlanesJob, InstanceAABBs) == 0x68, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_TestSelectionPlanesJob, InstanceHandles) == 0x78, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_TestSelectionPlanesJob, Result) == 0x88, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingGrid_TestSelectionPlanesJob) == 0x90, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.BlockLocation, MA.Flora.CullingChunkIndex, MA.Flora.NativeBitSet, MA.Flora.NativeBufferArray`1<T>, Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, UnityEngine.BoundingSphere
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingGrid/TestCellsSphereJob
struct CORDL_TYPE CullingGrid_TestCellsSphereJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0x1814adec0, size 0x650, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr CullingGrid_TestCellsSphereJob() ;

// Ctor Parameters [CppParam { name: "Sphere", ty: "::UnityEngine::BoundingSphere", modifiers: "", def_value: None }, CppParam { name: "ActiveBlocks", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "BlockLocations", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::BlockLocation>", modifiers: "", def_value: None }, CppParam { name: "ActiveCells", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "CullingChunks", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "IntersectingChunks", ty: "::Unity::Collections::NativeList_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: None }]
constexpr CullingGrid_TestCellsSphereJob(::UnityEngine::BoundingSphere  Sphere, ::MA::Flora::NativeBitSet  ActiveBlocks, ::Unity::Collections::NativeArray_1<::MA::Flora::BlockLocation>  BlockLocations, ::MA::Flora::NativeBitSet  ActiveCells, ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>  CullingChunks, ::Unity::Collections::NativeList_1<::MA::Flora::CullingChunkIndex>  IntersectingChunks) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13093};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field Sphere, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::BoundingSphere  Sphere;

/// @brief Field ActiveBlocks, offset: 0x10, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  ActiveBlocks;

/// @brief Field BlockLocations, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::BlockLocation>  BlockLocations;

/// @brief Field ActiveCells, offset: 0x28, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  ActiveCells;

/// @brief Field CullingChunks, offset: 0x30, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>  CullingChunks;

/// @brief Field IntersectingChunks, offset: 0x40, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::MA::Flora::CullingChunkIndex>  IntersectingChunks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingGrid_TestCellsSphereJob, Sphere) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_TestCellsSphereJob, ActiveBlocks) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_TestCellsSphereJob, BlockLocations) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_TestCellsSphereJob, ActiveCells) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_TestCellsSphereJob, CullingChunks) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_TestCellsSphereJob, IntersectingChunks) == 0x40, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingGrid_TestCellsSphereJob) == 0x48, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.AABB, MA.Flora.BlockLocation, MA.Flora.CullingChunkIndex, MA.Flora.NativeBitSet, MA.Flora.NativeBufferArray`1<T>, Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingGrid/TestCellsBoxJob
struct CORDL_TYPE CullingGrid_TestCellsBoxJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0x1814ad960, size 0x560, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr CullingGrid_TestCellsBoxJob() ;

// Ctor Parameters [CppParam { name: "TestAABB", ty: "::MA::Flora::AABB", modifiers: "", def_value: None }, CppParam { name: "ActiveBlocks", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "BlockLocations", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::BlockLocation>", modifiers: "", def_value: None }, CppParam { name: "ActiveCells", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "CullingChunks", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "OverlappingChunks", ty: "::Unity::Collections::NativeList_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: None }]
constexpr CullingGrid_TestCellsBoxJob(::MA::Flora::AABB  TestAABB, ::MA::Flora::NativeBitSet  ActiveBlocks, ::Unity::Collections::NativeArray_1<::MA::Flora::BlockLocation>  BlockLocations, ::MA::Flora::NativeBitSet  ActiveCells, ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>  CullingChunks, ::Unity::Collections::NativeList_1<::MA::Flora::CullingChunkIndex>  OverlappingChunks) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13094};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field TestAABB, offset: 0x0, size: 0x20, def value: None
 ::MA::Flora::AABB  TestAABB;

/// @brief Field ActiveBlocks, offset: 0x20, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  ActiveBlocks;

/// @brief Field BlockLocations, offset: 0x28, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::BlockLocation>  BlockLocations;

/// @brief Field ActiveCells, offset: 0x38, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  ActiveCells;

/// @brief Field CullingChunks, offset: 0x40, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>  CullingChunks;

/// @brief Field OverlappingChunks, offset: 0x50, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::MA::Flora::CullingChunkIndex>  OverlappingChunks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingGrid_TestCellsBoxJob, TestAABB) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_TestCellsBoxJob, ActiveBlocks) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_TestCellsBoxJob, BlockLocations) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_TestCellsBoxJob, ActiveCells) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_TestCellsBoxJob, CullingChunks) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_TestCellsBoxJob, OverlappingChunks) == 0x50, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingGrid_TestCellsBoxJob) == 0x58, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.CullingChunkIndex, Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingGrid/BuildChunkFlags
struct CORDL_TYPE CullingGrid_BuildChunkFlags {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0x18149c1e0, size 0x160, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr CullingGrid_BuildChunkFlags() ;

// Ctor Parameters [CppParam { name: "Chunks", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "ChunkCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "ChunkInstanceIndices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "InstanceFlippedWinding", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "InstanceHasMovedThisFrame", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "InstanceHasMovedLastFrame", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "ChunkCPUFlags", ty: "::Unity::Collections::NativeArray_1<uint64_t>", modifiers: "", def_value: None }, CppParam { name: "ChunkGPUFlags", ty: "::Unity::Collections::NativeArray_1<uint64_t>", modifiers: "", def_value: None }]
constexpr CullingGrid_BuildChunkFlags(::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  Chunks, ::Unity::Collections::NativeArray_1<int32_t>  ChunkCounts, ::Unity::Collections::NativeArray_1<int32_t>  ChunkInstanceIndices, ::Unity::Collections::NativeArray_1<uint8_t>  InstanceFlippedWinding, ::Unity::Collections::NativeArray_1<uint8_t>  InstanceHasMovedThisFrame, ::Unity::Collections::NativeArray_1<uint8_t>  InstanceHasMovedLastFrame, ::Unity::Collections::NativeArray_1<uint64_t>  ChunkCPUFlags, ::Unity::Collections::NativeArray_1<uint64_t>  ChunkGPUFlags) noexcept;

/// @brief Field BatchSize offset 0xffffffff size 0x4
static constexpr int32_t  BatchSize{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13095};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field Chunks, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  Chunks;

/// @brief Field ChunkCounts, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ChunkCounts;

/// @brief Field ChunkInstanceIndices, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ChunkInstanceIndices;

/// @brief Field InstanceFlippedWinding, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  InstanceFlippedWinding;

/// @brief Field InstanceHasMovedThisFrame, offset: 0x40, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  InstanceHasMovedThisFrame;

/// @brief Field InstanceHasMovedLastFrame, offset: 0x50, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  InstanceHasMovedLastFrame;

/// @brief Field ChunkCPUFlags, offset: 0x60, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint64_t>  ChunkCPUFlags;

/// @brief Field ChunkGPUFlags, offset: 0x70, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint64_t>  ChunkGPUFlags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingGrid_BuildChunkFlags, Chunks) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_BuildChunkFlags, ChunkCounts) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_BuildChunkFlags, ChunkInstanceIndices) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_BuildChunkFlags, InstanceFlippedWinding) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_BuildChunkFlags, InstanceHasMovedThisFrame) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_BuildChunkFlags, InstanceHasMovedLastFrame) == 0x50, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_BuildChunkFlags, ChunkCPUFlags) == 0x60, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_BuildChunkFlags, ChunkGPUFlags) == 0x70, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingGrid_BuildChunkFlags) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.ArchetypeIndex, MA.Flora.BatchDomainIndex, MA.Flora.CellIndex, MA.Flora.CullingChunkIndex, MA.Flora.CullingChunkUpdatePacket, MA.Flora.PackedCullingChunkBatch, Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingGrid/BuildChunkUpdatePackets
struct CORDL_TYPE CullingGrid_BuildChunkUpdatePackets {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0x18149c340, size 0x80, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr CullingGrid_BuildChunkUpdatePackets() ;

// Ctor Parameters [CppParam { name: "Chunks", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "ChunkCells", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CellIndex>", modifiers: "", def_value: None }, CppParam { name: "ChunkArchetypes", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>", modifiers: "", def_value: None }, CppParam { name: "ChunkBatchDomains", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::BatchDomainIndex>", modifiers: "", def_value: None }, CppParam { name: "ChunkBatches", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::PackedCullingChunkBatch>", modifiers: "", def_value: None }, CppParam { name: "ChunkUpdatePackets", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkUpdatePacket>", modifiers: "", def_value: None }]
constexpr CullingGrid_BuildChunkUpdatePackets(::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  Chunks, ::Unity::Collections::NativeArray_1<::MA::Flora::CellIndex>  ChunkCells, ::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>  ChunkArchetypes, ::Unity::Collections::NativeArray_1<::MA::Flora::BatchDomainIndex>  ChunkBatchDomains, ::Unity::Collections::NativeArray_1<::MA::Flora::PackedCullingChunkBatch>  ChunkBatches, ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkUpdatePacket>  ChunkUpdatePackets) noexcept;

/// @brief Field BatchSize offset 0xffffffff size 0x4
static constexpr int32_t  BatchSize{static_cast<int32_t>(0x40)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13096};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field Chunks, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  Chunks;

/// @brief Field ChunkCells, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::CellIndex>  ChunkCells;

/// @brief Field ChunkArchetypes, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>  ChunkArchetypes;

/// @brief Field ChunkBatchDomains, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::BatchDomainIndex>  ChunkBatchDomains;

/// @brief Field ChunkBatches, offset: 0x40, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::PackedCullingChunkBatch>  ChunkBatches;

/// @brief Field ChunkUpdatePackets, offset: 0x50, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkUpdatePacket>  ChunkUpdatePackets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingGrid_BuildChunkUpdatePackets, Chunks) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_BuildChunkUpdatePackets, ChunkCells) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_BuildChunkUpdatePackets, ChunkArchetypes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_BuildChunkUpdatePackets, ChunkBatchDomains) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_BuildChunkUpdatePackets, ChunkBatches) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_BuildChunkUpdatePackets, ChunkUpdatePackets) == 0x50, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingGrid_BuildChunkUpdatePackets) == 0x60, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.CullingChunkIndex, Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingGrid/BuildIndirectOffsets
struct CORDL_TYPE CullingGrid_BuildIndirectOffsets {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0x18149c3c0, size 0x140, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr CullingGrid_BuildIndirectOffsets() ;

// Ctor Parameters [CppParam { name: "IndirectChunks", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "ChunkCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "ChunkIndirectPageIndex", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "InstanceIndices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "PersistentIndirectOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "ScatterIndirectOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
constexpr CullingGrid_BuildIndirectOffsets(::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  IndirectChunks, ::Unity::Collections::NativeArray_1<int32_t>  ChunkCounts, ::Unity::Collections::NativeArray_1<int32_t>  ChunkIndirectPageIndex, ::Unity::Collections::NativeArray_1<int32_t>  InstanceIndices, ::Unity::Collections::NativeArray_1<int32_t>  PersistentIndirectOffsets, ::Unity::Collections::NativeArray_1<int32_t>  ScatterIndirectOffsets) noexcept;

/// @brief Field BatchSize offset 0xffffffff size 0x4
static constexpr int32_t  BatchSize{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13097};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field IndirectChunks, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  IndirectChunks;

/// @brief Field ChunkCounts, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ChunkCounts;

/// @brief Field ChunkIndirectPageIndex, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ChunkIndirectPageIndex;

/// @brief Field InstanceIndices, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  InstanceIndices;

/// @brief Field PersistentIndirectOffsets, offset: 0x40, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  PersistentIndirectOffsets;

/// @brief Field ScatterIndirectOffsets, offset: 0x50, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ScatterIndirectOffsets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingGrid_BuildIndirectOffsets, IndirectChunks) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_BuildIndirectOffsets, ChunkCounts) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_BuildIndirectOffsets, ChunkIndirectPageIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_BuildIndirectOffsets, InstanceIndices) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_BuildIndirectOffsets, PersistentIndirectOffsets) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_BuildIndirectOffsets, ScatterIndirectOffsets) == 0x50, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingGrid_BuildIndirectOffsets) == 0x60, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.CullingChunkIndex
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingGrid/InstanceBatchInCullingChunk
struct CORDL_TYPE CullingGrid_InstanceBatchInCullingChunk {
public:
// Declarations
/// @brief Method get_Empty, addr 0x1802e7410, size 0x10, virtual false, abstract: false, final false
static inline ::MA::Flora::CullingGrid_InstanceBatchInCullingChunk get_Empty() ;

// Ctor Parameters []
// @brief default ctor
constexpr CullingGrid_InstanceBatchInCullingChunk() ;

// Ctor Parameters [CppParam { name: "Chunk", ty: "::MA::Flora::CullingChunkIndex", modifiers: "", def_value: None }, CppParam { name: "Start", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CullingGrid_InstanceBatchInCullingChunk(::MA::Flora::CullingChunkIndex  Chunk, int32_t  Start, int32_t  Count) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13098};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field Chunk, offset: 0x0, size: 0x4, def value: None
 ::MA::Flora::CullingChunkIndex  Chunk;

/// @brief Field Start, offset: 0x4, size: 0x4, def value: None
 int32_t  Start;

/// @brief Field Count, offset: 0x8, size: 0x4, def value: None
 int32_t  Count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingGrid_InstanceBatchInCullingChunk, Chunk) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_InstanceBatchInCullingChunk, Start) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid_InstanceBatchInCullingChunk, Count) == 0x8, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingGrid_InstanceBatchInCullingChunk) == 0xc, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.ArchetypeIndex, MA.Flora.BatchDomainIndex, MA.Flora.BlockData, MA.Flora.BlockIndex, MA.Flora.BlockLocation, MA.Flora.CellBucketIndex, MA.Flora.CellBucketKey, MA.Flora.CellIndex, MA.Flora.CellLocation, MA.Flora.CullingChunkIndex, MA.Flora.CullingChunkUpdatePacket, MA.Flora.GraphicsBufferRef, MA.Flora.InstanceBuffer, MA.Flora.InstanceManager, MA.Flora.NativeBitSet, MA.Flora.NativeBufferArray`1<T>, MA.Flora.NativeDataReference`1<T>, MA.Flora.PackedCullingChunkBatch, MA.Flora.TemplateManager, Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, Unity.Collections.NativeParallelHashMap`2<TKey, TValue>, Unity.Jobs.JobHandle, Unity.Mathematics.int2, Unity.Mathematics.int3, Unity.Profiling.ProfilerMarker
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingGrid
struct CORDL_TYPE CullingGrid {
public:
// Declarations
using BuildChunkFlags = ::MA::Flora::CullingGrid_BuildChunkFlags;

using BuildChunkUpdatePackets = ::MA::Flora::CullingGrid_BuildChunkUpdatePackets;

using BuildIndirectOffsets = ::MA::Flora::CullingGrid_BuildIndirectOffsets;

using InstanceBatchInCullingChunk = ::MA::Flora::CullingGrid_InstanceBatchInCullingChunk;

using SourceFilterMode = ::MA::Flora::CullingGrid_SourceFilterMode;

using TestCellsBoxJob = ::MA::Flora::CullingGrid_TestCellsBoxJob;

using TestCellsSphereJob = ::MA::Flora::CullingGrid_TestCellsSphereJob;

using TestSelectionPlanesJob = ::MA::Flora::CullingGrid_TestSelectionPlanesJob;

 __declspec(property(get=get_AllocatedChunkCount)) int32_t  AllocatedChunkCount;

 __declspec(property(get=get_BlockAllocated)) ::MA::Flora::NativeBitSet  BlockAllocated;

 __declspec(property(get=get_BlockDataBuffer)) ::MA::Flora::GraphicsBufferRef  BlockDataBuffer;

 __declspec(property(get=get_BlockLocations)) ::Unity::Collections::NativeArray_1<::MA::Flora::BlockLocation>  BlockLocations;

 __declspec(property(get=get_CellAllocated)) ::MA::Flora::NativeBitSet  CellAllocated;

 __declspec(property(get=get_CellChunks)) ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>  CellChunks;

 __declspec(property(get=get_CellInstanceCount)) ::Unity::Collections::NativeArray_1<int32_t>  CellInstanceCount;

 __declspec(property(get=get_ChunkAllocated)) ::MA::Flora::NativeBitSet  ChunkAllocated;

 __declspec(property(get=get_ChunkArchetypes)) ::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>  ChunkArchetypes;

 __declspec(property(get=get_ChunkAttributeBuffer)) ::MA::Flora::GraphicsBufferRef  ChunkAttributeBuffer;

 __declspec(property(get=get_ChunkBatchBuffer)) ::MA::Flora::GraphicsBufferRef  ChunkBatchBuffer;

 __declspec(property(get=get_ChunkCellBuffer)) ::MA::Flora::GraphicsBufferRef  ChunkCellBuffer;

 __declspec(property(get=get_ChunkCells)) ::Unity::Collections::NativeArray_1<::MA::Flora::CellIndex>  ChunkCells;

 __declspec(property(get=get_ChunkCount)) ::Unity::Collections::NativeArray_1<int32_t>  ChunkCount;

 __declspec(property(get=get_ChunkFlagBuffer)) ::MA::Flora::GraphicsBufferRef  ChunkFlagBuffer;

 __declspec(property(get=get_ChunkFlags)) ::Unity::Collections::NativeArray_1<uint64_t>  ChunkFlags;

 __declspec(property(get=get_ChunkInfoBuffer)) ::MA::Flora::GraphicsBufferRef  ChunkInfoBuffer;

 __declspec(property(get=get_ChunkInstanceIndices)) ::Unity::Collections::NativeArray_1<int32_t>  ChunkInstanceIndices;

/// @brief Field DispatchUploadsMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DispatchUploadsMarker, put=setStaticF_DispatchUploadsMarker)) ::Unity::Profiling::ProfilerMarker  DispatchUploadsMarker;

 __declspec(property(get=get_FrameVersion)) uint32_t  FrameVersion;

 __declspec(property(get=get_IndirectOffsetBuffer)) ::MA::Flora::GraphicsBufferRef  IndirectOffsetBuffer;

/// @brief Field MaxCellCoord, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_MaxCellCoord, put=setStaticF_MaxCellCoord)) ::Unity::Mathematics::int3  MaxCellCoord;

/// @brief Field MinCellCoord, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_MinCellCoord, put=setStaticF_MinCellCoord)) ::Unity::Mathematics::int3  MinCellCoord;

/// @brief Field ScheduleUploadsMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ScheduleUploadsMarker, put=setStaticF_ScheduleUploadsMarker)) ::Unity::Profiling::ProfilerMarker  ScheduleUploadsMarker;

 __declspec(property(get=get_Self)) ::MA::Flora::CullingGrid*  Self;

/// @brief Field UpdateInstancesMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UpdateInstancesMarker, put=setStaticF_UpdateInstancesMarker)) ::Unity::Profiling::ProfilerMarker  UpdateInstancesMarker;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method AddInstances, addr 0x18149cd70, size 0x3e0, virtual false, abstract: false, final false
inline void AddInstances(::MA::Flora::ArchetypeIndex  archetype, int32_t  instanceOffset, int32_t  instanceCount) ;

/// @brief Method AddInstancesToBucket, addr 0x18149caf0, size 0x100, virtual false, abstract: false, final false
inline void AddInstancesToBucket(::MA::Flora::ArchetypeIndex  archetype, ::MA::Flora::CellIndex  cell, int32_t  instanceOffset, int32_t  count) ;

/// @brief Method AddInstancesToBucket, addr 0x18149cbf0, size 0x40, virtual false, abstract: false, final false
inline void AddInstancesToBucket(::MA::Flora::CellBucketIndex  bucket, int32_t  instanceCount) ;

/// @brief Method AddInstancesToChunk, addr 0x18149cc30, size 0x140, virtual false, abstract: false, final false
inline void AddInstancesToChunk(::MA::Flora::CellBucketIndex  bucket, ::MA::Flora::CullingChunkIndex  chunk, int32_t  instanceOffset, int32_t  count) ;

/// @brief Method AllocateChunk, addr 0x18149d150, size 0x290, virtual false, abstract: false, final false
inline ::MA::Flora::CullingChunkIndex AllocateChunk() ;

/// @brief Method AllocateIndirectPage, addr 0x18149d3e0, size 0xb0, virtual false, abstract: false, final false
inline int32_t AllocateIndirectPage(::MA::Flora::CullingChunkIndex  chunk) ;

/// @brief Method BucketAddChunk, addr 0x18149d570, size 0x1a0, virtual false, abstract: false, final false
inline void BucketAddChunk(::MA::Flora::CellBucketIndex  bucket, ::MA::Flora::CullingChunkIndex  chunk) ;

/// @brief Method BucketAddChunkToFreeSlots, addr 0x18149d490, size 0xe0, virtual false, abstract: false, final false
inline void BucketAddChunkToFreeSlots(::MA::Flora::CellBucketIndex  bucket, ::MA::Flora::CullingChunkIndex  chunk) ;

/// @brief Method BucketRemoveChunk, addr 0x18149d810, size 0x1c0, virtual false, abstract: false, final false
inline void BucketRemoveChunk(::MA::Flora::CellBucketIndex  bucket, ::MA::Flora::CullingChunkIndex  chunk) ;

/// @brief Method BucketRemoveChunkWithFreeSlots, addr 0x18149d710, size 0x100, virtual false, abstract: false, final false
inline void BucketRemoveChunkWithFreeSlots(::MA::Flora::CellBucketIndex  bucket, ::MA::Flora::CullingChunkIndex  chunk) ;

/// @brief Method CellAddChunk, addr 0x18149d9d0, size 0xe0, virtual false, abstract: false, final false
inline void CellAddChunk(::MA::Flora::CellIndex  cell, ::MA::Flora::CullingChunkIndex  chunk) ;

/// @brief Method CellLevelForSize, addr 0x18149dab0, size 0x20, virtual false, abstract: false, final false
static inline int32_t CellLevelForSize(float_t  size) ;

/// @brief Method CellRemoveChunk, addr 0x18149dad0, size 0x140, virtual false, abstract: false, final false
inline void CellRemoveChunk(::MA::Flora::CellIndex  cell, ::MA::Flora::CullingChunkIndex  chunk) ;

/// @brief Method CellSizeForLevel, addr 0x18149dc10, size 0x20, virtual false, abstract: false, final false
static inline float_t CellSizeForLevel(int32_t  level) ;

/// @brief Method CellToBlock, addr 0x18149dc30, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 CellToBlock(::Unity::Mathematics::int4  cell) ;

/// @brief Method ChunkHasMatchingBoxInstance, addr 0x18149dff0, size 0x330, virtual false, abstract: false, final false
inline bool ChunkHasMatchingBoxInstance(::MA::Flora::CullingChunkIndex  chunk, ::MA::Flora::AABB  testAABB, ::MA::Flora::FloraInstanceFilter  filter, ::MA::Flora::CullingGrid_SourceFilterMode  filterMode) ;

/// @brief Method ChunkHasMatchingBoxInstance, addr 0x18149dc60, size 0x390, virtual false, abstract: false, final false
inline bool ChunkHasMatchingBoxInstance(::MA::Flora::CullingChunkIndex  chunk, ::MA::Flora::AABB  testAABB, ::Unity::Collections::NativeParallelHashSet_1<::UnityEngine::EntityId>  identitySourceIds) ;

/// @brief Method ChunkHasMatchingSphereInstance, addr 0x18149e720, size 0x3c0, virtual false, abstract: false, final false
inline bool ChunkHasMatchingSphereInstance(::MA::Flora::CullingChunkIndex  chunk, ::UnityEngine::BoundingSphere  sphere, ::MA::Flora::FloraInstanceFilter  filter, ::MA::Flora::CullingGrid_SourceFilterMode  filterMode) ;

/// @brief Method ChunkHasMatchingSphereInstance, addr 0x18149e320, size 0x400, virtual false, abstract: false, final false
inline bool ChunkHasMatchingSphereInstance(::MA::Flora::CullingChunkIndex  chunk, ::UnityEngine::BoundingSphere  sphere, ::Unity::Collections::NativeParallelHashSet_1<::UnityEngine::EntityId>  identitySourceIds) ;

/// @brief Method CullInstancesInSelectionPlanes, addr 0x18149eae0, size 0x4f0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle> CullInstancesInSelectionPlanes(::MA::Flora::InstanceTag  includeTags, ::MA::Flora::InstanceTag  excludeTags, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  planes, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method DestroyBlock, addr 0x18149efd0, size 0xd0, virtual false, abstract: false, final false
inline void DestroyBlock(::MA::Flora::BlockIndex  block) ;

/// @brief Method DestroyCell, addr 0x18149f0a0, size 0x150, virtual false, abstract: false, final false
inline void DestroyCell(::MA::Flora::CellIndex  cell) ;

/// @brief Method DispatchUploads, addr 0x18149f1f0, size 0x960, virtual false, abstract: false, final false
inline void DispatchUploads(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method Dispose, addr 0x18149fb50, size 0x340, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method FindCandidateChunksIntersectingBox, addr 0x18149fe90, size 0x2d0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex> FindCandidateChunksIntersectingBox(::MA::Flora::FloraInstanceFilter  filter, ::MA::Flora::AABB  testAABB, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method FindCandidateChunksIntersectingSphere, addr 0x1814a0160, size 0x2b0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex> FindCandidateChunksIntersectingSphere(::MA::Flora::FloraInstanceFilter  filter, ::UnityEngine::BoundingSphere  sphere, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method FindChunksIntersectingBox, addr 0x1814a0900, size 0x2b0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex> FindChunksIntersectingBox(::MA::Flora::FloraInstanceFilter  filter, ::MA::Flora::AABB  testAABB, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method FindChunksIntersectingBox, addr 0x1814a0410, size 0x340, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex> FindChunksIntersectingBox(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  sourceEntityIds, ::MA::Flora::AABB  testAABB, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method FindChunksIntersectingBox, addr 0x1814a0750, size 0x1b0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex> FindChunksIntersectingBox(::MA::Flora::AABB  testAABB, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method FindChunksIntersectingSphere, addr 0x1814a1040, size 0x280, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex> FindChunksIntersectingSphere(::MA::Flora::FloraInstanceFilter  filter, ::UnityEngine::BoundingSphere  sphere, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method FindChunksIntersectingSphere, addr 0x1814a0d40, size 0x300, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex> FindChunksIntersectingSphere(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  sourceEntityIds, ::UnityEngine::BoundingSphere  sphere, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method FindChunksIntersectingSphere, addr 0x1814a0bb0, size 0x190, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex> FindChunksIntersectingSphere(::UnityEngine::BoundingSphere  sphere, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method FindInstancesIntersectingBox, addr 0x1814a1c40, size 0x3f0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> FindInstancesIntersectingBox(::MA::Flora::AABB  testAABB, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method FindInstancesIntersectingBoxMatching, addr 0x1814a17b0, size 0x490, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> FindInstancesIntersectingBoxMatching(::MA::Flora::FloraInstanceFilter  filter, ::MA::Flora::AABB  testAABB, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method FindInstancesIntersectingBoxMatching, addr 0x1814a12c0, size 0x4f0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> FindInstancesIntersectingBoxMatching(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  prefabGameObjectIDs, ::MA::Flora::AABB  testAABB, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method FindInstancesIntersectingSphere, addr 0x1814a2ab0, size 0x440, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> FindInstancesIntersectingSphere(::UnityEngine::BoundingSphere  sphere, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method FindInstancesIntersectingSphereMatching, addr 0x1814a25b0, size 0x500, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> FindInstancesIntersectingSphereMatching(::MA::Flora::FloraInstanceFilter  filter, ::UnityEngine::BoundingSphere  sphere, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method FindInstancesIntersectingSphereMatching, addr 0x1814a2030, size 0x580, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> FindInstancesIntersectingSphereMatching(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  prefabGameObjectIDs, ::UnityEngine::BoundingSphere  sphere, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method FreeCellBucket, addr 0x1814a2ef0, size 0x1d0, virtual false, abstract: false, final false
inline void FreeCellBucket(::MA::Flora::CellBucketIndex  bucket) ;

/// @brief Method FreeIndirectPage, addr 0x1814a30c0, size 0x70, virtual false, abstract: false, final false
inline void FreeIndirectPage(::MA::Flora::CullingChunkIndex  chunk) ;

/// @brief Method GetBatchOffsetForInstance, addr 0x1814a3130, size 0x70, virtual false, abstract: false, final false
static inline int32_t GetBatchOffsetForInstance(int32_t  instanceIndex) ;

/// @brief Method GetChunkBatchDomain, addr 0x1814a31a0, size 0x30, virtual false, abstract: false, final false
inline ::MA::Flora::BatchDomainIndex GetChunkBatchDomain(::MA::Flora::CullingChunkIndex  chunk) ;

/// @brief Method GetChunkFlagChannelRW, addr 0x18149b6e0, size 0x40, virtual false, abstract: false, final false
inline ::by_ref<uint64_t> GetChunkFlagChannelRW(::MA::Flora::CullingChunkIndex  chunk, ::MA::Flora::CullingFlagChannel  channel) ;

/// @brief Method GetChunkWithFreeSlots, addr 0x1814a31d0, size 0xc0, virtual false, abstract: false, final false
inline ::MA::Flora::CullingChunkIndex GetChunkWithFreeSlots(::MA::Flora::CellBucketIndex  bucket) ;

/// @brief Method GetCleanChunk, addr 0x1814a3290, size 0x130, virtual false, abstract: false, final false
inline ::MA::Flora::CullingChunkIndex GetCleanChunk(::MA::Flora::CellBucketIndex  bucket) ;

/// @brief Method GetDataChunkIndexForInstance, addr 0x1814a33c0, size 0x10, virtual false, abstract: false, final false
static inline ::MA::Flora::ChunkIndex GetDataChunkIndexForInstance(int32_t  instanceIndex) ;

/// @brief Method GetDataInstanceInChunkForInstance, addr 0x1814a33d0, size 0x20, virtual false, abstract: false, final false
static inline ::MA::Flora::InstanceInChunk GetDataInstanceInChunkForInstance(int32_t  instanceIndex) ;

/// @brief Method GetFirstInstanceBatchInChunk, addr 0x1814a33f0, size 0x1e0, virtual false, abstract: false, final false
inline ::MA::Flora::CullingGrid_InstanceBatchInCullingChunk GetFirstInstanceBatchInChunk(int32_t  instanceOffset, int32_t  count) ;

/// @brief Method GetInstanceIndicesInChunkRO, addr 0x18149b720, size 0x40, virtual false, abstract: false, final false
inline int32_t* GetInstanceIndicesInChunkRO(::MA::Flora::CullingChunkIndex  chunk, int32_t  indexInChunk, int32_t  count) ;

/// @brief Method GetInstanceIndicesInChunkRW, addr 0x18149b760, size 0x40, virtual false, abstract: false, final false
inline int32_t* GetInstanceIndicesInChunkRW(::MA::Flora::CullingChunkIndex  chunk, int32_t  indexInChunk, int32_t  count) ;

/// @brief Method GetLocationForAABB, addr 0x18149b7a0, size 0x120, virtual false, abstract: false, final false
inline ::MA::Flora::CellLocation GetLocationForAABB(::MA::Flora::AABB  aabb) ;

/// @brief Method GetOrCreateBlock, addr 0x1814a35d0, size 0x2e0, virtual false, abstract: false, final false
inline ::MA::Flora::BlockIndex GetOrCreateBlock(::MA::Flora::BlockLocation  blockLocation) ;

/// @brief Method GetOrCreateCell, addr 0x1814a3b60, size 0x1b0, virtual false, abstract: false, final false
inline ::MA::Flora::CellIndex GetOrCreateCell(::MA::Flora::CellLocation  cellLocation) ;

/// @brief Method GetOrCreateCellBucket, addr 0x1814a38b0, size 0x2b0, virtual false, abstract: false, final false
inline ::MA::Flora::CellBucketIndex GetOrCreateCellBucket(::MA::Flora::ArchetypeIndex  archetype, ::MA::Flora::CellIndex  cell) ;

/// @brief Method GetSourceFilterMode, addr 0x1814a3d10, size 0xc0, virtual false, abstract: false, final false
static inline ::MA::Flora::CullingGrid_SourceFilterMode GetSourceFilterMode(::MA::Flora::FloraInstanceFilter  filter) ;

/// @brief Method GrowBuffersIfNeeded, addr 0x1814a3dd0, size 0x130, virtual false, abstract: false, final false
inline void GrowBuffersIfNeeded() ;

/// @brief Method Initialize, addr 0x1814a3f00, size 0xd20, virtual false, abstract: false, final false
inline void Initialize(::MA::Flora::InstanceContext  instanceContext, ::MA::Flora::FloraRuntimeResources*  resources) ;

/// @brief Method LocalToLevel, addr 0x1814a4c20, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 LocalToLevel(::Unity::Mathematics::int4  location, int32_t  level) ;

/// @brief Method LocationForAABB, addr 0x1814a4c80, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 LocationForAABB(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  extent) ;

/// @brief Method LocationForPosition, addr 0x18149b8c0, size 0x270, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 LocationForPosition(::Unity::Mathematics::float3  position, float_t  size) ;

/// @brief Method LocationPosition, addr 0x18149b390, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 LocationPosition(::Unity::Mathematics::int4  location) ;

/// @brief Method MatchesChunkFilter, addr 0x1814a4d20, size 0xf0, virtual false, abstract: false, final false
inline bool MatchesChunkFilter(::MA::Flora::CullingChunkIndex  chunk, ::MA::Flora::FloraInstanceFilter  filter) ;

/// @brief Method MatchesIdentitySource, addr 0x1814a4e10, size 0xa0, virtual false, abstract: false, final false
inline bool MatchesIdentitySource(::MA::Flora::FloraInstanceHandle  instance, ::UnityEngine::EntityId  identitySourceId) ;

/// @brief Method MatchesIdentitySources, addr 0x1814a4eb0, size 0xe0, virtual false, abstract: false, final false
inline bool MatchesIdentitySources(::MA::Flora::FloraInstanceHandle  instance, ::Unity::Collections::NativeParallelHashSet_1<::UnityEngine::EntityId>  identitySourceIds) ;

/// @brief Method MatchesRenderSource, addr 0x1814a4f90, size 0xa0, virtual false, abstract: false, final false
inline bool MatchesRenderSource(::MA::Flora::FloraInstanceHandle  instance, ::UnityEngine::EntityId  renderSourceId) ;

/// @brief Method MatchesSourceFilter, addr 0x1814a5030, size 0x2d0, virtual false, abstract: false, final false
inline bool MatchesSourceFilter(::MA::Flora::FloraInstanceHandle  instance, ::MA::Flora::FloraInstanceFilter  filter, ::MA::Flora::CullingGrid_SourceFilterMode  mode) ;

/// @brief Method MatchesTypeMask, addr 0x1814a5300, size 0x40, virtual false, abstract: false, final false
static inline bool MatchesTypeMask(::MA::Flora::InstanceTag  archetypeTags, ::MA::Flora::FloraInstanceTypeMask  typeMask) ;

/// @brief Method MaxBlockCellCoord, addr 0x1814a5340, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 MaxBlockCellCoord(::Unity::Mathematics::int4  block) ;

/// @brief Method MinBlockCellCoord, addr 0x1814a5370, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 MinBlockCellCoord(::Unity::Mathematics::int4  block) ;

/// @brief Method RcpCellSizeForLevel, addr 0x1814a5390, size 0x20, virtual false, abstract: false, final false
static inline float_t RcpCellSizeForLevel(int32_t  level) ;

/// @brief Method ReleaseChunk, addr 0x1814a53b0, size 0x160, virtual false, abstract: false, final false
inline void ReleaseChunk(::MA::Flora::CellBucketIndex  bucket, ::MA::Flora::CullingChunkIndex  chunk) ;

/// @brief Method RemapInstanceIndices, addr 0x1814a5510, size 0xc0, virtual false, abstract: false, final false
inline void RemapInstanceIndices(int32_t  baseInstanceIndex, int32_t  srcIndex, int32_t  dstIndex, int32_t  count) ;

/// @brief Method RemoveInstances, addr 0x1814a58d0, size 0xd0, virtual false, abstract: false, final false
inline void RemoveInstances(int32_t  instanceOffset, int32_t  count) ;

/// @brief Method RemoveInstancesFromBucket, addr 0x1814a55d0, size 0x40, virtual false, abstract: false, final false
inline void RemoveInstancesFromBucket(::MA::Flora::CellBucketIndex  bucket, int32_t  instanceCount) ;

/// @brief Method RemoveInstancesFromChunk, addr 0x1814a5610, size 0x270, virtual false, abstract: false, final false
inline void RemoveInstancesFromChunk(::MA::Flora::CellBucketIndex  bucket, ::MA::Flora::CullingGrid_InstanceBatchInCullingChunk  batch) ;

/// @brief Method RemoveInstancesFromChunk, addr 0x1814a5880, size 0x50, virtual false, abstract: false, final false
inline void RemoveInstancesFromChunk(::MA::Flora::CellBucketIndex  bucket, ::MA::Flora::CullingChunkIndex  chunk, int32_t  indexInChunk, int32_t  count) ;

/// @brief Method ScheduleUploads, addr 0x1814a6340, size 0x20, virtual false, abstract: false, final false
inline void ScheduleUploads() ;

/// @brief Method ScheduleUploadsInternal, addr 0x1814a59a0, size 0x9a0, virtual false, abstract: false, final false
inline void ScheduleUploadsInternal() ;

/// @brief Method ScheduleUploadsWithBurst, addr 0x1814a6340, size 0x20, virtual false, abstract: false, final false
static inline void ScheduleUploadsWithBurst(::MA::Flora::CullingGrid*  cullingGrid) ;

/// @brief Method SetBlockDataDirty, addr 0x1814a6360, size 0xe0, virtual false, abstract: false, final false
inline void SetBlockDataDirty(::MA::Flora::BlockIndex  block) ;

/// @brief Method SetChunkAttributesDirty, addr 0x1814a6440, size 0xe0, virtual false, abstract: false, final false
inline void SetChunkAttributesDirty(::MA::Flora::CullingChunkIndex  chunk) ;

/// @brief Method SetChunkCount, addr 0x1814a6520, size 0xa0, virtual false, abstract: false, final false
inline void SetChunkCount(::MA::Flora::CellBucketIndex  bucket, ::MA::Flora::CullingChunkIndex  chunk, int32_t  newCount) ;

/// @brief Method SetChunkFlagsDirty, addr 0x1814a65c0, size 0xe0, virtual false, abstract: false, final false
inline void SetChunkFlagsDirty(::MA::Flora::CullingChunkIndex  chunk) ;

/// @brief Method SetChunkInfoDirty, addr 0x1814a66a0, size 0x100, virtual false, abstract: false, final false
inline void SetChunkInfoDirty(::MA::Flora::CullingChunkIndex  chunk) ;

/// @brief Method TryGetInstanceSourceIds, addr 0x1814a67a0, size 0xd0, virtual false, abstract: false, final false
inline bool TryGetInstanceSourceIds(::MA::Flora::FloraInstanceHandle  instance, ::by_ref<::UnityEngine::EntityId>  identitySourceId, ::by_ref<::UnityEngine::EntityId>  renderSourceId) ;

/// @brief Method UpdateChunkBatch, addr 0x1814a68e0, size 0x240, virtual false, abstract: false, final false
inline ::MA::Flora::PackedCullingChunkBatch UpdateChunkBatch(::MA::Flora::CullingChunkIndex  chunk) ;

/// @brief Method UpdateChunkBatchDomain, addr 0x1814a6870, size 0x70, virtual false, abstract: false, final false
inline void UpdateChunkBatchDomain(::MA::Flora::CullingChunkIndex  chunk, ::MA::Flora::BatchDomainIndex  batchDomainIndex) ;

/// @brief Method UpdateContentVersion, addr 0x1814a6b20, size 0xd0, virtual false, abstract: false, final false
inline void UpdateContentVersion() ;

/// @brief Method UpdateInstances, addr 0x1814a6bf0, size 0x4c0, virtual false, abstract: false, final false
inline void UpdateInstances(::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex>  instanceChunksToUpdate) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_DispatchUploadsMarker() ;

static inline ::Unity::Mathematics::int3 getStaticF_MaxCellCoord() ;

static inline ::Unity::Mathematics::int3 getStaticF_MinCellCoord() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_ScheduleUploadsMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_UpdateInstancesMarker() ;

/// @brief Method get_AllocatedChunkCount, addr 0x1814a71b0, size 0x120, virtual false, abstract: false, final false
inline int32_t get_AllocatedChunkCount() ;

/// @brief Method get_BlockAllocated, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::NativeBitSet get_BlockAllocated() ;

/// @brief Method get_BlockDataBuffer, addr 0x181465d20, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::GraphicsBufferRef get_BlockDataBuffer() ;

/// @brief Method get_BlockLocations, addr 0x181454250, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::BlockLocation> get_BlockLocations() ;

/// @brief Method get_CellAllocated, addr 0x180312ea0, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::NativeBitSet get_CellAllocated() ;

/// @brief Method get_CellChunks, addr 0x1804f6820, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex> get_CellChunks() ;

/// @brief Method get_CellInstanceCount, addr 0x1813fdb10, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<int32_t> get_CellInstanceCount() ;

/// @brief Method get_ChunkAllocated, addr 0x180371830, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::NativeBitSet get_ChunkAllocated() ;

/// @brief Method get_ChunkArchetypes, addr 0x18149bb30, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex> get_ChunkArchetypes() ;

/// @brief Method get_ChunkAttributeBuffer, addr 0x18149bb40, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::GraphicsBufferRef get_ChunkAttributeBuffer() ;

/// @brief Method get_ChunkBatchBuffer, addr 0x18149bb50, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::GraphicsBufferRef get_ChunkBatchBuffer() ;

/// @brief Method get_ChunkCellBuffer, addr 0x181465cf0, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::GraphicsBufferRef get_ChunkCellBuffer() ;

/// @brief Method get_ChunkCells, addr 0x181465d30, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::CellIndex> get_ChunkCells() ;

/// @brief Method get_ChunkCount, addr 0x181465d90, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<int32_t> get_ChunkCount() ;

/// @brief Method get_ChunkFlagBuffer, addr 0x18149bb60, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::GraphicsBufferRef get_ChunkFlagBuffer() ;

/// @brief Method get_ChunkFlags, addr 0x18149bb70, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<uint64_t> get_ChunkFlags() ;

/// @brief Method get_ChunkInfoBuffer, addr 0x18149bb80, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::GraphicsBufferRef get_ChunkInfoBuffer() ;

/// @brief Method get_ChunkInstanceIndices, addr 0x18149bb90, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<int32_t> get_ChunkInstanceIndices() ;

/// @brief Method get_FrameVersion, addr 0x1814a72d0, size 0xd0, virtual false, abstract: false, final false
inline uint32_t get_FrameVersion() ;

/// @brief Method get_IndirectOffsetBuffer, addr 0x18149bba0, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::GraphicsBufferRef get_IndirectOffsetBuffer() ;

/// @brief Method get_Self, addr 0x1802e0ba0, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::CullingGrid* get_Self() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

static inline void setStaticF_DispatchUploadsMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_MaxCellCoord(::Unity::Mathematics::int3  value) ;

static inline void setStaticF_MinCellCoord(::Unity::Mathematics::int3  value) ;

static inline void setStaticF_ScheduleUploadsMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_UpdateInstancesMarker(::Unity::Profiling::ProfilerMarker  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CullingGrid() ;

// Ctor Parameters [CppParam { name: "m_InstanceManager", ty: "::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>", modifiers: "", def_value: None }, CppParam { name: "m_InstanceBuffer", ty: "::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceBuffer>", modifiers: "", def_value: None }, CppParam { name: "m_TemplateManager", ty: "::MA::Flora::NativeDataReference_1<::MA::Flora::TemplateManager>", modifiers: "", def_value: None }, CppParam { name: "m_RcpCellSizes", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "m_NextBlockIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_BlockAllocated", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_BlockDataDirty", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_FreeBlocks", ty: "::Unity::Collections::NativeList_1<::MA::Flora::BlockIndex>", modifiers: "", def_value: None }, CppParam { name: "m_BlockHash", ty: "::Unity::Collections::NativeParallelHashMap_2<::MA::Flora::BlockLocation,::MA::Flora::BlockIndex>", modifiers: "", def_value: None }, CppParam { name: "m_BlockLocations", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::BlockLocation>", modifiers: "", def_value: None }, CppParam { name: "m_BlockData", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::BlockData>", modifiers: "", def_value: None }, CppParam { name: "m_CachedBlockIndex", ty: "::MA::Flora::BlockIndex", modifiers: "", def_value: None }, CppParam { name: "m_CachedBlockLocation", ty: "::MA::Flora::BlockLocation", modifiers: "", def_value: None }, CppParam { name: "m_CellAllocated", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_CellHeadersDirty", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_CellChunks", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "m_CellInstanceCount", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_CachedCellIndex", ty: "::MA::Flora::CellIndex", modifiers: "", def_value: None }, CppParam { name: "m_CachedCellLocation", ty: "::MA::Flora::CellLocation", modifiers: "", def_value: None }, CppParam { name: "m_NextBucketIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_BucketAllocated", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_FreeBuckets", ty: "::Unity::Collections::NativeList_1<::MA::Flora::CellBucketIndex>", modifiers: "", def_value: None }, CppParam { name: "m_BucketHash", ty: "::Unity::Collections::NativeParallelHashMap_2<::MA::Flora::CellBucketKey,::MA::Flora::CellBucketIndex>", modifiers: "", def_value: None }, CppParam { name: "m_BucketCells", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CellIndex>", modifiers: "", def_value: None }, CppParam { name: "m_BucketArchetypes", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>", modifiers: "", def_value: None }, CppParam { name: "m_BucketLodCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_BucketChunks", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "m_BucketChunksWithFreeSlots", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "m_CachedBucketIndex", ty: "::MA::Flora::CellBucketIndex", modifiers: "", def_value: None }, CppParam { name: "m_CachedBucketKey", ty: "::MA::Flora::CellBucketKey", modifiers: "", def_value: None }, CppParam { name: "m_NextCullingChunkIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ChunkAllocated", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_ChunkDynamic", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_ChunkUncullable", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_ChunkInfoDirty", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_ChunkFlagsDirty", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_ChunkAttributesDirty", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_FreeChunks", ty: "::Unity::Collections::NativeList_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "m_ChunkBucket", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CellBucketIndex>", modifiers: "", def_value: None }, CppParam { name: "m_ChunkCount", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_ChunkCell", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CellIndex>", modifiers: "", def_value: None }, CppParam { name: "m_ChunkArchetype", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>", modifiers: "", def_value: None }, CppParam { name: "m_ChunkBatch", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::PackedCullingChunkBatch>", modifiers: "", def_value: None }, CppParam { name: "m_ChunkBatchDomain", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::BatchDomainIndex>", modifiers: "", def_value: None }, CppParam { name: "m_ChunkFlags", ty: "::Unity::Collections::NativeArray_1<uint64_t>", modifiers: "", def_value: None }, CppParam { name: "m_ChunkIndirectPageIndex", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_ChunkIndexInCellList", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_ChunkIndexInTemplateList", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_ChunkIndexInBucketList", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_ChunkIndexInBucketFreeSlotList", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_ChunkInstanceIndices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_IndirectInstanceOffsets", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_FreeIndirectInstancePages", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_ContentVersion", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_ContentVersionApplied", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_ContentVersionScheduled", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_BlockDataBuffer", ty: "::MA::Flora::GraphicsBufferRef", modifiers: "", def_value: None }, CppParam { name: "m_ChunkCellBuffer", ty: "::MA::Flora::GraphicsBufferRef", modifiers: "", def_value: None }, CppParam { name: "m_ChunkInfoBuffer", ty: "::MA::Flora::GraphicsBufferRef", modifiers: "", def_value: None }, CppParam { name: "m_ChunkFlagBuffer", ty: "::MA::Flora::GraphicsBufferRef", modifiers: "", def_value: None }, CppParam { name: "m_ChunkBatchBuffer", ty: "::MA::Flora::GraphicsBufferRef", modifiers: "", def_value: None }, CppParam { name: "m_ChunkAttributeBuffer", ty: "::MA::Flora::GraphicsBufferRef", modifiers: "", def_value: None }, CppParam { name: "m_IndirectOffsetBuffer", ty: "::MA::Flora::GraphicsBufferRef", modifiers: "", def_value: None }, CppParam { name: "m_PreDispatchHandle", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: None }, CppParam { name: "m_PendingBlockIndexUpdates", ty: "::Unity::Collections::NativeList_1<::MA::Flora::BlockIndex>", modifiers: "", def_value: None }, CppParam { name: "m_PendingBlockDataUpdates", ty: "::Unity::Collections::NativeList_1<::MA::Flora::BlockData>", modifiers: "", def_value: None }, CppParam { name: "m_PendingChunkUpdatePackets", ty: "::Unity::Collections::NativeList_1<::MA::Flora::CullingChunkUpdatePacket>", modifiers: "", def_value: None }, CppParam { name: "m_PendingChunkFlagIndices", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_PendingChunkFlagUpdates", ty: "::Unity::Collections::NativeList_1<uint64_t>", modifiers: "", def_value: None }, CppParam { name: "m_PendingChunkAttributesUpdates", ty: "::Unity::Collections::NativeList_1<::Unity::Mathematics::int2>", modifiers: "", def_value: None }, CppParam { name: "m_QueuedIndirectChunks", ty: "::Unity::Collections::NativeList_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "m_PendingIndirectPageUpdates", ty: "::Unity::Collections::NativeList_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "m_PendingIndirectOffsetUpdates", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: None }]
constexpr CullingGrid(::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>  m_InstanceManager, ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceBuffer>  m_InstanceBuffer, ::MA::Flora::NativeDataReference_1<::MA::Flora::TemplateManager>  m_TemplateManager, ::Unity::Collections::NativeArray_1<float_t>  m_RcpCellSizes, int32_t  m_NextBlockIndex, ::MA::Flora::NativeBitSet  m_BlockAllocated, ::MA::Flora::NativeBitSet  m_BlockDataDirty, ::Unity::Collections::NativeList_1<::MA::Flora::BlockIndex>  m_FreeBlocks, ::Unity::Collections::NativeParallelHashMap_2<::MA::Flora::BlockLocation,::MA::Flora::BlockIndex>  m_BlockHash, ::Unity::Collections::NativeArray_1<::MA::Flora::BlockLocation>  m_BlockLocations, ::Unity::Collections::NativeArray_1<::MA::Flora::BlockData>  m_BlockData, ::MA::Flora::BlockIndex  m_CachedBlockIndex, ::MA::Flora::BlockLocation  m_CachedBlockLocation, ::MA::Flora::NativeBitSet  m_CellAllocated, ::MA::Flora::NativeBitSet  m_CellHeadersDirty, ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>  m_CellChunks, ::Unity::Collections::NativeArray_1<int32_t>  m_CellInstanceCount, ::MA::Flora::CellIndex  m_CachedCellIndex, ::MA::Flora::CellLocation  m_CachedCellLocation, int32_t  m_NextBucketIndex, ::MA::Flora::NativeBitSet  m_BucketAllocated, ::Unity::Collections::NativeList_1<::MA::Flora::CellBucketIndex>  m_FreeBuckets, ::Unity::Collections::NativeParallelHashMap_2<::MA::Flora::CellBucketKey,::MA::Flora::CellBucketIndex>  m_BucketHash, ::Unity::Collections::NativeArray_1<::MA::Flora::CellIndex>  m_BucketCells, ::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>  m_BucketArchetypes, ::Unity::Collections::NativeArray_1<int32_t>  m_BucketLodCounts, ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>  m_BucketChunks, ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>  m_BucketChunksWithFreeSlots, ::MA::Flora::CellBucketIndex  m_CachedBucketIndex, ::MA::Flora::CellBucketKey  m_CachedBucketKey, int32_t  m_NextCullingChunkIndex, ::MA::Flora::NativeBitSet  m_ChunkAllocated, ::MA::Flora::NativeBitSet  m_ChunkDynamic, ::MA::Flora::NativeBitSet  m_ChunkUncullable, ::MA::Flora::NativeBitSet  m_ChunkInfoDirty, ::MA::Flora::NativeBitSet  m_ChunkFlagsDirty, ::MA::Flora::NativeBitSet  m_ChunkAttributesDirty, ::Unity::Collections::NativeList_1<::MA::Flora::CullingChunkIndex>  m_FreeChunks, ::Unity::Collections::NativeArray_1<::MA::Flora::CellBucketIndex>  m_ChunkBucket, ::Unity::Collections::NativeArray_1<int32_t>  m_ChunkCount, ::Unity::Collections::NativeArray_1<::MA::Flora::CellIndex>  m_ChunkCell, ::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>  m_ChunkArchetype, ::Unity::Collections::NativeArray_1<::MA::Flora::PackedCullingChunkBatch>  m_ChunkBatch, ::Unity::Collections::NativeArray_1<::MA::Flora::BatchDomainIndex>  m_ChunkBatchDomain, ::Unity::Collections::NativeArray_1<uint64_t>  m_ChunkFlags, ::Unity::Collections::NativeArray_1<int32_t>  m_ChunkIndirectPageIndex, ::Unity::Collections::NativeArray_1<int32_t>  m_ChunkIndexInCellList, ::Unity::Collections::NativeArray_1<int32_t>  m_ChunkIndexInTemplateList, ::Unity::Collections::NativeArray_1<int32_t>  m_ChunkIndexInBucketList, ::Unity::Collections::NativeArray_1<int32_t>  m_ChunkIndexInBucketFreeSlotList, ::Unity::Collections::NativeArray_1<int32_t>  m_ChunkInstanceIndices, ::Unity::Collections::NativeList_1<int32_t>  m_IndirectInstanceOffsets, ::Unity::Collections::NativeList_1<int32_t>  m_FreeIndirectInstancePages, uint32_t  m_ContentVersion, uint32_t  m_ContentVersionApplied, uint32_t  m_ContentVersionScheduled, ::MA::Flora::GraphicsBufferRef  m_BlockDataBuffer, ::MA::Flora::GraphicsBufferRef  m_ChunkCellBuffer, ::MA::Flora::GraphicsBufferRef  m_ChunkInfoBuffer, ::MA::Flora::GraphicsBufferRef  m_ChunkFlagBuffer, ::MA::Flora::GraphicsBufferRef  m_ChunkBatchBuffer, ::MA::Flora::GraphicsBufferRef  m_ChunkAttributeBuffer, ::MA::Flora::GraphicsBufferRef  m_IndirectOffsetBuffer, ::Unity::Jobs::JobHandle  m_PreDispatchHandle, ::Unity::Collections::NativeList_1<::MA::Flora::BlockIndex>  m_PendingBlockIndexUpdates, ::Unity::Collections::NativeList_1<::MA::Flora::BlockData>  m_PendingBlockDataUpdates, ::Unity::Collections::NativeList_1<::MA::Flora::CullingChunkUpdatePacket>  m_PendingChunkUpdatePackets, ::Unity::Collections::NativeList_1<int32_t>  m_PendingChunkFlagIndices, ::Unity::Collections::NativeList_1<uint64_t>  m_PendingChunkFlagUpdates, ::Unity::Collections::NativeList_1<::Unity::Mathematics::int2>  m_PendingChunkAttributesUpdates, ::Unity::Collections::NativeList_1<::MA::Flora::CullingChunkIndex>  m_QueuedIndirectChunks, ::Unity::Collections::NativeList_1<uint32_t>  m_PendingIndirectPageUpdates, ::Unity::Collections::NativeList_1<int32_t>  m_PendingIndirectOffsetUpdates) noexcept;

/// @brief Field BlockCellUlongCount offset 0xffffffff size 0x4
static constexpr int32_t  BlockCellUlongCount{static_cast<int32_t>(0x8)};

/// @brief Field BlockDim offset 0xffffffff size 0x4
static constexpr int32_t  BlockDim{static_cast<int32_t>(0x8)};

/// @brief Field BlockDimLog2 offset 0xffffffff size 0x4
static constexpr int32_t  BlockDimLog2{static_cast<int32_t>(0x3)};

/// @brief Field CellIndexInBlockMask offset 0xffffffff size 0x4
static constexpr int32_t  CellIndexInBlockMask{static_cast<int32_t>(0x1ff)};

/// @brief Field CellsPerBlock offset 0xffffffff size 0x4
static constexpr int32_t  CellsPerBlock{static_cast<int32_t>(0x200)};

/// @brief Field ChunkCapacity offset 0xffffffff size 0x4
static constexpr int32_t  ChunkCapacity{static_cast<int32_t>(0x40)};

/// @brief Field IndirectPageMask offset 0xffffffff size 0x4
static constexpr int32_t  IndirectPageMask{static_cast<int32_t>(0x3f)};

/// @brief Field IndirectPageShift offset 0xffffffff size 0x4
static constexpr int32_t  IndirectPageShift{static_cast<int32_t>(0x6)};

/// @brief Field IndirectPageSize offset 0xffffffff size 0x4
static constexpr int32_t  IndirectPageSize{static_cast<int32_t>(0x40)};

/// @brief Field InitialBlockCapacity offset 0xffffffff size 0x4
static constexpr int32_t  InitialBlockCapacity{static_cast<int32_t>(0x40)};

/// @brief Field InitialBucketCapacity offset 0xffffffff size 0x4
static constexpr int32_t  InitialBucketCapacity{static_cast<int32_t>(0x40)};

/// @brief Field InitialCellCapacity offset 0xffffffff size 0x4
static constexpr int32_t  InitialCellCapacity{static_cast<int32_t>(0x8000)};

/// @brief Field InitialCellInstanceCapacity offset 0xffffffff size 0x4
static constexpr int32_t  InitialCellInstanceCapacity{static_cast<int32_t>(0x4000)};

/// @brief Field InitialCullingChunkCapacity offset 0xffffffff size 0x4
static constexpr int32_t  InitialCullingChunkCapacity{static_cast<int32_t>(0x100)};

/// @brief Field InitialIndirectInstanceCapacity offset 0xffffffff size 0x4
static constexpr int32_t  InitialIndirectInstanceCapacity{static_cast<int32_t>(0x4000)};

/// @brief Field InitialInstanceBatchCapacity offset 0xffffffff size 0x4
static constexpr int32_t  InitialInstanceBatchCapacity{static_cast<int32_t>(0x100)};

/// @brief Field InitialInstanceIndexCapacity offset 0xffffffff size 0x4
static constexpr int32_t  InitialInstanceIndexCapacity{static_cast<int32_t>(0x200)};

/// @brief Field MaxBlockLevel offset 0xffffffff size 0x4
static constexpr int32_t  MaxBlockLevel{static_cast<int32_t>(0xf)};

/// @brief Field MaxBlockSize offset 0xffffffff size 0x4
static constexpr float_t  MaxBlockSize{static_cast<float_t>(65536.0f)};

/// @brief Field MaxCellLevel offset 0xffffffff size 0x4
static constexpr int32_t  MaxCellLevel{static_cast<int32_t>(0xc)};

/// @brief Field MaxCellSize offset 0xffffffff size 0x4
static constexpr float_t  MaxCellSize{static_cast<float_t>(8192.0f)};

/// @brief Field MinBlockLevel offset 0xffffffff size 0x4
static constexpr int32_t  MinBlockLevel{static_cast<int32_t>(0x7)};

/// @brief Field MinBlockSize offset 0xffffffff size 0x4
static constexpr float_t  MinBlockSize{static_cast<float_t>(256.0f)};

/// @brief Field MinCellLevel offset 0xffffffff size 0x4
static constexpr int32_t  MinCellLevel{static_cast<int32_t>(0x4)};

/// @brief Field MinCellSize offset 0xffffffff size 0x4
static constexpr float_t  MinCellSize{static_cast<float_t>(32.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13099};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2f0};

/// @brief Field m_InstanceManager, offset: 0x0, size: 0x8, def value: None
 ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>  m_InstanceManager;

/// @brief Field m_InstanceBuffer, offset: 0x8, size: 0x8, def value: None
 ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceBuffer>  m_InstanceBuffer;

/// @brief Field m_TemplateManager, offset: 0x10, size: 0x8, def value: None
 ::MA::Flora::NativeDataReference_1<::MA::Flora::TemplateManager>  m_TemplateManager;

/// @brief Field m_RcpCellSizes, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<float_t>  m_RcpCellSizes;

/// @brief Field m_NextBlockIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  m_NextBlockIndex;

/// @brief Field m_BlockAllocated, offset: 0x30, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_BlockAllocated;

/// @brief Field m_BlockDataDirty, offset: 0x38, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_BlockDataDirty;

/// @brief Field m_FreeBlocks, offset: 0x40, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::MA::Flora::BlockIndex>  m_FreeBlocks;

/// @brief Field m_BlockHash, offset: 0x48, size: 0x10, def value: None
 ::Unity::Collections::NativeParallelHashMap_2<::MA::Flora::BlockLocation,::MA::Flora::BlockIndex>  m_BlockHash;

/// @brief Field m_BlockLocations, offset: 0x58, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::BlockLocation>  m_BlockLocations;

/// @brief Field m_BlockData, offset: 0x68, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::BlockData>  m_BlockData;

/// @brief Field m_CachedBlockIndex, offset: 0x78, size: 0x4, def value: None
 ::MA::Flora::BlockIndex  m_CachedBlockIndex;

/// @brief Field m_CachedBlockLocation, offset: 0x7c, size: 0x10, def value: None
 ::MA::Flora::BlockLocation  m_CachedBlockLocation;

/// @brief Field m_CellAllocated, offset: 0x90, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_CellAllocated;

/// @brief Field m_CellHeadersDirty, offset: 0x98, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_CellHeadersDirty;

/// @brief Field m_CellChunks, offset: 0xa0, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>  m_CellChunks;

/// @brief Field m_CellInstanceCount, offset: 0xb0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  m_CellInstanceCount;

/// @brief Field m_CachedCellIndex, offset: 0xc0, size: 0x4, def value: None
 ::MA::Flora::CellIndex  m_CachedCellIndex;

/// @brief Field m_CachedCellLocation, offset: 0xc4, size: 0x10, def value: None
 ::MA::Flora::CellLocation  m_CachedCellLocation;

/// @brief Field m_NextBucketIndex, offset: 0xd4, size: 0x4, def value: None
 int32_t  m_NextBucketIndex;

/// @brief Field m_BucketAllocated, offset: 0xd8, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_BucketAllocated;

/// @brief Field m_FreeBuckets, offset: 0xe0, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::MA::Flora::CellBucketIndex>  m_FreeBuckets;

/// @brief Field m_BucketHash, offset: 0xe8, size: 0x10, def value: None
 ::Unity::Collections::NativeParallelHashMap_2<::MA::Flora::CellBucketKey,::MA::Flora::CellBucketIndex>  m_BucketHash;

/// @brief Field m_BucketCells, offset: 0xf8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::CellIndex>  m_BucketCells;

/// @brief Field m_BucketArchetypes, offset: 0x108, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>  m_BucketArchetypes;

/// @brief Field m_BucketLodCounts, offset: 0x118, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  m_BucketLodCounts;

/// @brief Field m_BucketChunks, offset: 0x128, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>  m_BucketChunks;

/// @brief Field m_BucketChunksWithFreeSlots, offset: 0x138, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>  m_BucketChunksWithFreeSlots;

/// @brief Field m_CachedBucketIndex, offset: 0x148, size: 0x4, def value: None
 ::MA::Flora::CellBucketIndex  m_CachedBucketIndex;

/// @brief Field m_CachedBucketKey, offset: 0x14c, size: 0x8, def value: None
 ::MA::Flora::CellBucketKey  m_CachedBucketKey;

/// @brief Field m_NextCullingChunkIndex, offset: 0x154, size: 0x4, def value: None
 int32_t  m_NextCullingChunkIndex;

/// @brief Field m_ChunkAllocated, offset: 0x158, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_ChunkAllocated;

/// @brief Field m_ChunkDynamic, offset: 0x160, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_ChunkDynamic;

/// @brief Field m_ChunkUncullable, offset: 0x168, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_ChunkUncullable;

/// @brief Field m_ChunkInfoDirty, offset: 0x170, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_ChunkInfoDirty;

/// @brief Field m_ChunkFlagsDirty, offset: 0x178, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_ChunkFlagsDirty;

/// @brief Field m_ChunkAttributesDirty, offset: 0x180, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_ChunkAttributesDirty;

/// @brief Field m_FreeChunks, offset: 0x188, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::MA::Flora::CullingChunkIndex>  m_FreeChunks;

/// @brief Field m_ChunkBucket, offset: 0x190, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::CellBucketIndex>  m_ChunkBucket;

/// @brief Field m_ChunkCount, offset: 0x1a0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  m_ChunkCount;

/// @brief Field m_ChunkCell, offset: 0x1b0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::CellIndex>  m_ChunkCell;

/// @brief Field m_ChunkArchetype, offset: 0x1c0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>  m_ChunkArchetype;

/// @brief Field m_ChunkBatch, offset: 0x1d0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::PackedCullingChunkBatch>  m_ChunkBatch;

/// @brief Field m_ChunkBatchDomain, offset: 0x1e0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::BatchDomainIndex>  m_ChunkBatchDomain;

/// @brief Field m_ChunkFlags, offset: 0x1f0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint64_t>  m_ChunkFlags;

/// @brief Field m_ChunkIndirectPageIndex, offset: 0x200, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  m_ChunkIndirectPageIndex;

/// @brief Field m_ChunkIndexInCellList, offset: 0x210, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  m_ChunkIndexInCellList;

/// @brief Field m_ChunkIndexInTemplateList, offset: 0x220, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  m_ChunkIndexInTemplateList;

/// @brief Field m_ChunkIndexInBucketList, offset: 0x230, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  m_ChunkIndexInBucketList;

/// @brief Field m_ChunkIndexInBucketFreeSlotList, offset: 0x240, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  m_ChunkIndexInBucketFreeSlotList;

/// @brief Field m_ChunkInstanceIndices, offset: 0x250, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  m_ChunkInstanceIndices;

/// @brief Field m_IndirectInstanceOffsets, offset: 0x260, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<int32_t>  m_IndirectInstanceOffsets;

/// @brief Field m_FreeIndirectInstancePages, offset: 0x268, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<int32_t>  m_FreeIndirectInstancePages;

/// @brief Field m_ContentVersion, offset: 0x270, size: 0x4, def value: None
 uint32_t  m_ContentVersion;

/// @brief Field m_ContentVersionApplied, offset: 0x274, size: 0x4, def value: None
 uint32_t  m_ContentVersionApplied;

/// @brief Field m_ContentVersionScheduled, offset: 0x278, size: 0x4, def value: None
 uint32_t  m_ContentVersionScheduled;

/// @brief Field m_BlockDataBuffer, offset: 0x27c, size: 0x4, def value: None
 ::MA::Flora::GraphicsBufferRef  m_BlockDataBuffer;

/// @brief Field m_ChunkCellBuffer, offset: 0x280, size: 0x4, def value: None
 ::MA::Flora::GraphicsBufferRef  m_ChunkCellBuffer;

/// @brief Field m_ChunkInfoBuffer, offset: 0x284, size: 0x4, def value: None
 ::MA::Flora::GraphicsBufferRef  m_ChunkInfoBuffer;

/// @brief Field m_ChunkFlagBuffer, offset: 0x288, size: 0x4, def value: None
 ::MA::Flora::GraphicsBufferRef  m_ChunkFlagBuffer;

/// @brief Field m_ChunkBatchBuffer, offset: 0x28c, size: 0x4, def value: None
 ::MA::Flora::GraphicsBufferRef  m_ChunkBatchBuffer;

/// @brief Field m_ChunkAttributeBuffer, offset: 0x290, size: 0x4, def value: None
 ::MA::Flora::GraphicsBufferRef  m_ChunkAttributeBuffer;

/// @brief Field m_IndirectOffsetBuffer, offset: 0x294, size: 0x4, def value: None
 ::MA::Flora::GraphicsBufferRef  m_IndirectOffsetBuffer;

/// @brief Field m_PreDispatchHandle, offset: 0x298, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  m_PreDispatchHandle;

/// @brief Field m_PendingBlockIndexUpdates, offset: 0x2a8, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::MA::Flora::BlockIndex>  m_PendingBlockIndexUpdates;

/// @brief Field m_PendingBlockDataUpdates, offset: 0x2b0, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::MA::Flora::BlockData>  m_PendingBlockDataUpdates;

/// @brief Field m_PendingChunkUpdatePackets, offset: 0x2b8, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::MA::Flora::CullingChunkUpdatePacket>  m_PendingChunkUpdatePackets;

/// @brief Field m_PendingChunkFlagIndices, offset: 0x2c0, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<int32_t>  m_PendingChunkFlagIndices;

/// @brief Field m_PendingChunkFlagUpdates, offset: 0x2c8, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<uint64_t>  m_PendingChunkFlagUpdates;

/// @brief Field m_PendingChunkAttributesUpdates, offset: 0x2d0, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::Unity::Mathematics::int2>  m_PendingChunkAttributesUpdates;

/// @brief Field m_QueuedIndirectChunks, offset: 0x2d8, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::MA::Flora::CullingChunkIndex>  m_QueuedIndirectChunks;

/// @brief Field m_PendingIndirectPageUpdates, offset: 0x2e0, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<uint32_t>  m_PendingIndirectPageUpdates;

/// @brief Field m_PendingIndirectOffsetUpdates, offset: 0x2e8, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<int32_t>  m_PendingIndirectOffsetUpdates;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingGrid, m_InstanceManager) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_InstanceBuffer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_TemplateManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_RcpCellSizes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_NextBlockIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_BlockAllocated) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_BlockDataDirty) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_FreeBlocks) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_BlockHash) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_BlockLocations) == 0x58, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_BlockData) == 0x68, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_CachedBlockIndex) == 0x78, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_CachedBlockLocation) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_CellAllocated) == 0x90, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_CellHeadersDirty) == 0x98, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_CellChunks) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_CellInstanceCount) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_CachedCellIndex) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_CachedCellLocation) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_NextBucketIndex) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_BucketAllocated) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_FreeBuckets) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_BucketHash) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_BucketCells) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_BucketArchetypes) == 0x108, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_BucketLodCounts) == 0x118, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_BucketChunks) == 0x128, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_BucketChunksWithFreeSlots) == 0x138, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_CachedBucketIndex) == 0x148, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_CachedBucketKey) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_NextCullingChunkIndex) == 0x154, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_ChunkAllocated) == 0x158, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_ChunkDynamic) == 0x160, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_ChunkUncullable) == 0x168, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_ChunkInfoDirty) == 0x170, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_ChunkFlagsDirty) == 0x178, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_ChunkAttributesDirty) == 0x180, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_FreeChunks) == 0x188, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_ChunkBucket) == 0x190, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_ChunkCount) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_ChunkCell) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_ChunkArchetype) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_ChunkBatch) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_ChunkBatchDomain) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_ChunkFlags) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_ChunkIndirectPageIndex) == 0x200, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_ChunkIndexInCellList) == 0x210, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_ChunkIndexInTemplateList) == 0x220, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_ChunkIndexInBucketList) == 0x230, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_ChunkIndexInBucketFreeSlotList) == 0x240, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_ChunkInstanceIndices) == 0x250, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_IndirectInstanceOffsets) == 0x260, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_FreeIndirectInstancePages) == 0x268, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_ContentVersion) == 0x270, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_ContentVersionApplied) == 0x274, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_ContentVersionScheduled) == 0x278, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_BlockDataBuffer) == 0x27c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_ChunkCellBuffer) == 0x280, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_ChunkInfoBuffer) == 0x284, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_ChunkFlagBuffer) == 0x288, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_ChunkBatchBuffer) == 0x28c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_ChunkAttributeBuffer) == 0x290, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_IndirectOffsetBuffer) == 0x294, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_PreDispatchHandle) == 0x298, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_PendingBlockIndexUpdates) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_PendingBlockDataUpdates) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_PendingChunkUpdatePackets) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_PendingChunkFlagIndices) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_PendingChunkFlagUpdates) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_PendingChunkAttributesUpdates) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_QueuedIndirectChunks) == 0x2d8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_PendingIndirectPageUpdates) == 0x2e0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGrid, m_PendingIndirectOffsetUpdates) == 0x2e8, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingGrid) == 0x2f0, "Size mismatch!");

} // namespace end def MA::Flora
