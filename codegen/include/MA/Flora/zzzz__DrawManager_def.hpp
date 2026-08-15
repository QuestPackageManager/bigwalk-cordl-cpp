#pragma once
// IWYU pragma private; include "MA/Flora/DrawManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__CullingChunkIndex_def.hpp"
#include "MA/Flora/zzzz__DrawBatchIndex_def.hpp"
#include "MA/Flora/zzzz__DrawBatchKey_def.hpp"
#include "MA/Flora/zzzz__DrawBatch_def.hpp"
#include "MA/Flora/zzzz__DrawRangeIndex_def.hpp"
#include "MA/Flora/zzzz__DrawRangeKey_def.hpp"
#include "MA/Flora/zzzz__NativeBitSet_def.hpp"
#include "MA/Flora/zzzz__NativeBufferArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawManager)
namespace MA::Flora {
struct BatchDomainIndex;
}
namespace MA::Flora {
struct CullingChunkIndex;
}
namespace MA::Flora {
struct DrawBatchIndex;
}
namespace MA::Flora {
struct DrawBatch;
}
namespace MA::Flora {
struct DrawDescriptor;
}
namespace MA::Flora {
struct DrawManager_AddChunksToDrawsJob;
}
namespace MA::Flora {
struct DrawManager_RebuildDrawBatchIndices;
}
namespace MA::Flora {
struct DrawRangeIndex;
}
namespace MA::Flora {
struct DrawRangeKey;
}
namespace MA::Flora {
struct NativeBitSet;
}
namespace MA::Flora {
template<typename T>
struct NativeBufferArray_1;
}
namespace MA::Flora {
struct TemplateIndex;
}
namespace MA::Flora {
struct TemplateOptions;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Jobs {
class IJob;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace MA::Flora {
struct DrawManager;
}
namespace MA::Flora {
struct DrawManager_AddChunksToDrawsJob;
}
namespace MA::Flora {
struct DrawManager_RebuildDrawBatchIndices;
}
// Write type traits
MARK_VAL_T(::MA::Flora::DrawManager);
MARK_VAL_T(::MA::Flora::DrawManager_AddChunksToDrawsJob);
MARK_VAL_T(::MA::Flora::DrawManager_RebuildDrawBatchIndices);
DEFINE_IL2CPP_CLASS(::MA::Flora::DrawManager, "MA.Flora", "DrawManager");
DEFINE_IL2CPP_CLASS(::MA::Flora::DrawManager_AddChunksToDrawsJob, "MA.Flora", "DrawManager/AddChunksToDrawsJob");
DEFINE_IL2CPP_CLASS(::MA::Flora::DrawManager_RebuildDrawBatchIndices, "MA.Flora", "DrawManager/RebuildDrawBatchIndices");
// Dependencies MA.Flora.CullingChunkIndex, MA.Flora.DrawBatchIndex, MA.Flora.NativeBufferArray`1<T>, Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.DrawManager/AddChunksToDrawsJob
struct CORDL_TYPE DrawManager_AddChunksToDrawsJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0x1814af0a0, size 0xe0, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr DrawManager_AddChunksToDrawsJob() ;

// Ctor Parameters [CppParam { name: "DrawIDs", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: None }, CppParam { name: "ChunksToAdd", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "DrawChunks", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: None }]
constexpr DrawManager_AddChunksToDrawsJob(::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatchIndex>  DrawIDs, ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  ChunksToAdd, ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>  DrawChunks) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13186};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field DrawIDs, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatchIndex>  DrawIDs;

/// @brief Field ChunksToAdd, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  ChunksToAdd;

/// @brief Field DrawChunks, offset: 0x20, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>  DrawChunks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::DrawManager_AddChunksToDrawsJob, DrawIDs) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawManager_AddChunksToDrawsJob, ChunksToAdd) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawManager_AddChunksToDrawsJob, DrawChunks) == 0x20, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::DrawManager_AddChunksToDrawsJob) == 0x30, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.DrawBatch, MA.Flora.DrawBatchIndex, MA.Flora.NativeBitSet, MA.Flora.NativeBufferArray`1<T>, Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.DrawManager/RebuildDrawBatchIndices
struct CORDL_TYPE DrawManager_RebuildDrawBatchIndices {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0x1814c0940, size 0x1d0, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr DrawManager_RebuildDrawBatchIndices() ;

// Ctor Parameters [CppParam { name: "Draws", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "DrawBatches", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatch>", modifiers: "", def_value: None }, CppParam { name: "DrawsByRange", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: None }]
constexpr DrawManager_RebuildDrawBatchIndices(::MA::Flora::NativeBitSet  Draws, ::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatch>  DrawBatches, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  DrawsByRange) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13187};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field Draws, offset: 0x0, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  Draws;

/// @brief Field DrawBatches, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatch>  DrawBatches;

/// @brief Field DrawsByRange, offset: 0x18, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  DrawsByRange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::DrawManager_RebuildDrawBatchIndices, Draws) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawManager_RebuildDrawBatchIndices, DrawBatches) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawManager_RebuildDrawBatchIndices, DrawsByRange) == 0x18, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::DrawManager_RebuildDrawBatchIndices) == 0x28, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.CullingChunkIndex, MA.Flora.DrawBatch, MA.Flora.DrawBatchIndex, MA.Flora.DrawBatchKey, MA.Flora.DrawRangeIndex, MA.Flora.DrawRangeKey, MA.Flora.NativeBitSet, MA.Flora.NativeBufferArray`1<T>, Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, Unity.Collections.NativeParallelHashMap`2<TKey, TValue>, Unity.Mathematics.float4x4
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.DrawManager
struct CORDL_TYPE DrawManager {
public:
// Declarations
using AddChunksToDrawsJob = ::MA::Flora::DrawManager_AddChunksToDrawsJob;

using RebuildDrawBatchIndices = ::MA::Flora::DrawManager_RebuildDrawBatchIndices;

 __declspec(property(get=get_DrawBatchChunks)) ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>  DrawBatchChunks;

 __declspec(property(get=get_DrawBatchCount)) int32_t  DrawBatchCount;

 __declspec(property(get=get_DrawBatchIndices)) ::MA::Flora::NativeBitSet  DrawBatchIndices;

 __declspec(property(get=get_DrawBatchRangeIndices)) ::Unity::Collections::NativeArray_1<::MA::Flora::DrawRangeIndex>  DrawBatchRangeIndices;

 __declspec(property(get=get_DrawBatches)) ::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatch>  DrawBatches;

 __declspec(property(get=get_DrawRangeBatches)) ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  DrawRangeBatches;

 __declspec(property(get=get_DrawRangeCount)) int32_t  DrawRangeCount;

 __declspec(property(get=get_DrawRangeIndices)) ::MA::Flora::NativeBitSet  DrawRangeIndices;

 __declspec(property(get=get_DrawRangeKeys)) ::Unity::Collections::NativeArray_1<::MA::Flora::DrawRangeKey>  DrawRangeKeys;

/// @brief Field MaterialBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MaterialBuffer, put=setStaticF_MaterialBuffer)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  MaterialBuffer;

 __declspec(property(get=get_NeedsRebuild)) bool  NeedsRebuild;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method AddCullingChunks, addr 0x1814bab70, size 0x80, virtual false, abstract: false, final false
inline void AddCullingChunks(::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatchIndex>  drawIds, ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  chunksToAdd) ;

/// @brief Method AddCullingChunks, addr 0x1814babf0, size 0xf0, virtual false, abstract: false, final false
inline void AddCullingChunks(::MA::Flora::DrawBatchIndex  drawIndex, ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  chunksToAdd) ;

/// @brief Method BuildDrawDescriptors, addr 0x1814bace0, size 0x860, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::DrawDescriptor> BuildDrawDescriptors(::MA::Flora::TemplateIndex  _cordl_template, ::UnityEngine::GameObject*  representativeRenderSource, ::MA::Flora::TemplateOptions  templateOptions, int32_t  lodIndex, ::UnityEngine::Renderer*  renderer, ::UnityEngine::Material*  detailBillboardMaterial, ::MA::Flora::BatchDomainIndex  batchDomainIndex, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method ClearCullingChunks, addr 0x1814bb540, size 0xb0, virtual false, abstract: false, final false
inline void ClearCullingChunks(::MA::Flora::DrawBatchIndex  drawIndex) ;

/// @brief Method ContainsDraw, addr 0x1814bb5f0, size 0x20, virtual false, abstract: false, final false
inline bool ContainsDraw(::MA::Flora::DrawBatchIndex  drawIndex) ;

/// @brief Method Dispose, addr 0x1814bb610, size 0xc0, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method EnsureDrawBatchHashCapacity, addr 0x1814bb6d0, size 0x60, virtual false, abstract: false, final false
inline void EnsureDrawBatchHashCapacity(int32_t  additionalEntries) ;

/// @brief Method GetOrCreateDrawRangeIndex, addr 0x1814bb730, size 0x150, virtual false, abstract: false, final false
inline ::MA::Flora::DrawRangeIndex GetOrCreateDrawRangeIndex(::by_ref<::MA::Flora::DrawRangeKey>  rangeKey) ;

/// @brief Method Initialize, addr 0x1814bb880, size 0x350, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method Rebuild, addr 0x1814bbbd0, size 0x80, virtual false, abstract: false, final false
inline void Rebuild() ;

/// @brief Method RegisterDraw, addr 0x1814bbd60, size 0x400, virtual false, abstract: false, final false
inline ::MA::Flora::DrawBatchIndex RegisterDraw(::by_ref<::MA::Flora::DrawDescriptor>  descriptor) ;

/// @brief Method RegisterDrawDescriptors, addr 0x1814bbc50, size 0x110, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatchIndex> RegisterDrawDescriptors(::Unity::Collections::NativeArray_1<::MA::Flora::DrawDescriptor>  descriptors, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method RegisterDraws, addr 0x1814bc160, size 0x220, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatchIndex> RegisterDraws(::MA::Flora::TemplateIndex  _cordl_template, ::UnityEngine::GameObject*  representativeRenderSource, ::MA::Flora::TemplateOptions  templateOptions, int32_t  lodIndex, ::UnityEngine::Renderer*  renderer, ::UnityEngine::Material*  detailBillboardMaterial, ::MA::Flora::BatchDomainIndex  batchDomainIndex, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method ReleaseDraw, addr 0x1814bc380, size 0x1a0, virtual false, abstract: false, final false
inline void ReleaseDraw(::MA::Flora::DrawBatchIndex  drawIndex) ;

/// @brief Method ReleaseDraws, addr 0x1814bc520, size 0x210, virtual false, abstract: false, final false
inline void ReleaseDraws(::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatchIndex>  drawIndices) ;

/// @brief Method ResetCullingChunks, addr 0x1814bc730, size 0x130, virtual false, abstract: false, final false
inline void ResetCullingChunks() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* getStaticF_MaterialBuffer() ;

/// @brief Method get_DrawBatchChunks, addr 0x1802edd10, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex> get_DrawBatchChunks() ;

/// @brief Method get_DrawBatchCount, addr 0x1814bc8f0, size 0x80, virtual false, abstract: false, final false
inline int32_t get_DrawBatchCount() ;

/// @brief Method get_DrawBatchIndices, addr 0x1802e5710, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::NativeBitSet get_DrawBatchIndices() ;

/// @brief Method get_DrawBatchRangeIndices, addr 0x1814af090, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::DrawRangeIndex> get_DrawBatchRangeIndices() ;

/// @brief Method get_DrawBatches, addr 0x1802ec5e0, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatch> get_DrawBatches() ;

/// @brief Method get_DrawRangeBatches, addr 0x18051e850, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex> get_DrawRangeBatches() ;

/// @brief Method get_DrawRangeCount, addr 0x1814bc970, size 0x1b0, virtual false, abstract: false, final false
inline int32_t get_DrawRangeCount() ;

/// @brief Method get_DrawRangeIndices, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::NativeBitSet get_DrawRangeIndices() ;

/// @brief Method get_DrawRangeKeys, addr 0x180a26490, size 0x12a0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::DrawRangeKey> get_DrawRangeKeys() ;

/// @brief Method get_NeedsRebuild, addr 0x180f187e0, size 0x650, virtual false, abstract: false, final false
inline bool get_NeedsRebuild() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

static inline void setStaticF_MaterialBuffer(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr DrawManager() ;

// Ctor Parameters [CppParam { name: "m_NextDrawRangeIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DrawRangeIndices", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_DrawRangeFreeIndices", ty: "::Unity::Collections::NativeList_1<::MA::Flora::DrawRangeIndex>", modifiers: "", def_value: None }, CppParam { name: "m_DrawRangeHash", ty: "::Unity::Collections::NativeParallelHashMap_2<::MA::Flora::DrawRangeKey,::MA::Flora::DrawRangeIndex>", modifiers: "", def_value: None }, CppParam { name: "m_DrawRangeKeys", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawRangeKey>", modifiers: "", def_value: None }, CppParam { name: "m_DrawRangeBatches", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: None }, CppParam { name: "m_DrawMatrixMap", ty: "::Unity::Collections::NativeParallelHashMap_2<::Unity::Mathematics::float4x4,int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_DrawMatrixKeys", ty: "::Unity::Collections::NativeList_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: None }, CppParam { name: "m_NextDrawBatchIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DrawBatchIndices", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_DrawBatchFreeIndices", ty: "::Unity::Collections::NativeList_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: None }, CppParam { name: "m_DrawBatchHash", ty: "::Unity::Collections::NativeParallelHashMap_2<::MA::Flora::DrawBatchKey,::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: None }, CppParam { name: "m_DrawBatches", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatch>", modifiers: "", def_value: None }, CppParam { name: "m_DrawBatchRefCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_DrawBatchRangeIndices", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawRangeIndex>", modifiers: "", def_value: None }, CppParam { name: "m_DrawBatchChunks", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "m_NeedsRebuild", ty: "bool", modifiers: "", def_value: None }]
constexpr DrawManager(int32_t  m_NextDrawRangeIndex, ::MA::Flora::NativeBitSet  m_DrawRangeIndices, ::Unity::Collections::NativeList_1<::MA::Flora::DrawRangeIndex>  m_DrawRangeFreeIndices, ::Unity::Collections::NativeParallelHashMap_2<::MA::Flora::DrawRangeKey,::MA::Flora::DrawRangeIndex>  m_DrawRangeHash, ::Unity::Collections::NativeArray_1<::MA::Flora::DrawRangeKey>  m_DrawRangeKeys, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_DrawRangeBatches, ::Unity::Collections::NativeParallelHashMap_2<::Unity::Mathematics::float4x4,int32_t>  m_DrawMatrixMap, ::Unity::Collections::NativeList_1<::Unity::Mathematics::float4x4>  m_DrawMatrixKeys, int32_t  m_NextDrawBatchIndex, ::MA::Flora::NativeBitSet  m_DrawBatchIndices, ::Unity::Collections::NativeList_1<::MA::Flora::DrawBatchIndex>  m_DrawBatchFreeIndices, ::Unity::Collections::NativeParallelHashMap_2<::MA::Flora::DrawBatchKey,::MA::Flora::DrawBatchIndex>  m_DrawBatchHash, ::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatch>  m_DrawBatches, ::Unity::Collections::NativeArray_1<int32_t>  m_DrawBatchRefCounts, ::Unity::Collections::NativeArray_1<::MA::Flora::DrawRangeIndex>  m_DrawBatchRangeIndices, ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>  m_DrawBatchChunks, bool  m_NeedsRebuild) noexcept;

/// @brief Field InitialCapacity offset 0xffffffff size 0x4
static constexpr int32_t  InitialCapacity{static_cast<int32_t>(0x40)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13188};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xd0};

/// @brief Field m_NextDrawRangeIndex, offset: 0x0, size: 0x4, def value: None
 int32_t  m_NextDrawRangeIndex;

/// @brief Field m_DrawRangeIndices, offset: 0x8, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_DrawRangeIndices;

/// @brief Field m_DrawRangeFreeIndices, offset: 0x10, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::MA::Flora::DrawRangeIndex>  m_DrawRangeFreeIndices;

/// @brief Field m_DrawRangeHash, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeParallelHashMap_2<::MA::Flora::DrawRangeKey,::MA::Flora::DrawRangeIndex>  m_DrawRangeHash;

/// @brief Field m_DrawRangeKeys, offset: 0x28, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::DrawRangeKey>  m_DrawRangeKeys;

/// @brief Field m_DrawRangeBatches, offset: 0x38, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_DrawRangeBatches;

/// @brief Field m_DrawMatrixMap, offset: 0x48, size: 0x10, def value: None
 ::Unity::Collections::NativeParallelHashMap_2<::Unity::Mathematics::float4x4,int32_t>  m_DrawMatrixMap;

/// @brief Field m_DrawMatrixKeys, offset: 0x58, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::Unity::Mathematics::float4x4>  m_DrawMatrixKeys;

/// @brief Field m_NextDrawBatchIndex, offset: 0x60, size: 0x4, def value: None
 int32_t  m_NextDrawBatchIndex;

/// @brief Field m_DrawBatchIndices, offset: 0x68, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_DrawBatchIndices;

/// @brief Field m_DrawBatchFreeIndices, offset: 0x70, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::MA::Flora::DrawBatchIndex>  m_DrawBatchFreeIndices;

/// @brief Field m_DrawBatchHash, offset: 0x78, size: 0x10, def value: None
 ::Unity::Collections::NativeParallelHashMap_2<::MA::Flora::DrawBatchKey,::MA::Flora::DrawBatchIndex>  m_DrawBatchHash;

/// @brief Field m_DrawBatches, offset: 0x88, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatch>  m_DrawBatches;

/// @brief Field m_DrawBatchRefCounts, offset: 0x98, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  m_DrawBatchRefCounts;

/// @brief Field m_DrawBatchRangeIndices, offset: 0xa8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::DrawRangeIndex>  m_DrawBatchRangeIndices;

/// @brief Field m_DrawBatchChunks, offset: 0xb8, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>  m_DrawBatchChunks;

/// @brief Field m_NeedsRebuild, offset: 0xc8, size: 0x1, def value: None
 bool  m_NeedsRebuild;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::DrawManager, m_NextDrawRangeIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawManager, m_DrawRangeIndices) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawManager, m_DrawRangeFreeIndices) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawManager, m_DrawRangeHash) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawManager, m_DrawRangeKeys) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawManager, m_DrawRangeBatches) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawManager, m_DrawMatrixMap) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawManager, m_DrawMatrixKeys) == 0x58, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawManager, m_NextDrawBatchIndex) == 0x60, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawManager, m_DrawBatchIndices) == 0x68, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawManager, m_DrawBatchFreeIndices) == 0x70, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawManager, m_DrawBatchHash) == 0x78, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawManager, m_DrawBatches) == 0x88, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawManager, m_DrawBatchRefCounts) == 0x98, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawManager, m_DrawBatchRangeIndices) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawManager, m_DrawBatchChunks) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawManager, m_NeedsRebuild) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::DrawManager) == 0xd0, "Size mismatch!");

} // namespace end def MA::Flora
