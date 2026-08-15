#pragma once
// IWYU pragma private; include "MA/Flora/TerrainDetailManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__InstanceManager_def.hpp"
#include "MA/Flora/zzzz__IntProfilerCounter_def.hpp"
#include "MA/Flora/zzzz__NativeBitSet_def.hpp"
#include "MA/Flora/zzzz__NativeDataReference_1_def.hpp"
#include "MA/Flora/zzzz__ParallelBitArray_def.hpp"
#include "MA/Flora/zzzz__StreamingSphereManager_def.hpp"
#include "MA/Flora/zzzz__TerrainDetailLayer_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainDetailManager)
namespace MA::Flora {
struct InstanceContext;
}
namespace MA::Flora {
struct TerrainDetailLayer_PatchBuildResult;
}
namespace MA::Flora {
struct TerrainDetailLayer;
}
namespace MA::Flora {
struct TerrainDetailManager_ComputePatchLoadChangesJob;
}
namespace MA::Flora {
struct TerrainDetailManager_DetailStreamingFrameStats;
}
namespace MA::Flora {
struct TerrainDetailManager_RasterizeSpheresJob;
}
namespace MA::Flora {
struct TerrainDetailPrototype;
}
namespace MA::Flora {
struct TerrainSnapshot;
}
namespace MA::Flora {
struct TerrainSystemSettings;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeList_1;
}
namespace Unity::Jobs {
class IJobParallelFor;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct float3;
}
namespace UnityEngine {
struct TerrainChangedFlags;
}
// Forward declare root types
namespace MA::Flora {
struct TerrainDetailManager;
}
namespace MA::Flora {
struct TerrainDetailManager_ComputePatchLoadChangesJob;
}
namespace MA::Flora {
struct TerrainDetailManager_DetailStreamingFrameStats;
}
namespace MA::Flora {
struct TerrainDetailManager_RasterizeSpheresJob;
}
// Write type traits
MARK_VAL_T(::MA::Flora::TerrainDetailManager);
MARK_VAL_T(::MA::Flora::TerrainDetailManager_ComputePatchLoadChangesJob);
MARK_VAL_T(::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats);
MARK_VAL_T(::MA::Flora::TerrainDetailManager_RasterizeSpheresJob);
DEFINE_IL2CPP_CLASS(::MA::Flora::TerrainDetailManager, "MA.Flora", "TerrainDetailManager");
DEFINE_IL2CPP_CLASS(::MA::Flora::TerrainDetailManager_ComputePatchLoadChangesJob, "MA.Flora", "TerrainDetailManager/ComputePatchLoadChangesJob");
DEFINE_IL2CPP_CLASS(::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats, "MA.Flora", "TerrainDetailManager/DetailStreamingFrameStats");
DEFINE_IL2CPP_CLASS(::MA::Flora::TerrainDetailManager_RasterizeSpheresJob, "MA.Flora", "TerrainDetailManager/RasterizeSpheresJob");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TerrainDetailManager/DetailStreamingFrameStats
struct CORDL_TYPE TerrainDetailManager_DetailStreamingFrameStats {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TerrainDetailManager_DetailStreamingFrameStats() ;

// Ctor Parameters [CppParam { name: "PatchesLoaded", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "PatchesUnloaded", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "PatchesRebuilt", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "InstancesCreated", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "InstancesDestroyed", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "InstancesUpdated", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "StructuralApplyPhases", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TerrainDetailManager_DetailStreamingFrameStats(int32_t  PatchesLoaded, int32_t  PatchesUnloaded, int32_t  PatchesRebuilt, int32_t  InstancesCreated, int32_t  InstancesDestroyed, int32_t  InstancesUpdated, int32_t  StructuralApplyPhases) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13377};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field PatchesLoaded, offset: 0x0, size: 0x4, def value: None
 int32_t  PatchesLoaded;

/// @brief Field PatchesUnloaded, offset: 0x4, size: 0x4, def value: None
 int32_t  PatchesUnloaded;

/// @brief Field PatchesRebuilt, offset: 0x8, size: 0x4, def value: None
 int32_t  PatchesRebuilt;

/// @brief Field InstancesCreated, offset: 0xc, size: 0x4, def value: None
 int32_t  InstancesCreated;

/// @brief Field InstancesDestroyed, offset: 0x10, size: 0x4, def value: None
 int32_t  InstancesDestroyed;

/// @brief Field InstancesUpdated, offset: 0x14, size: 0x4, def value: None
 int32_t  InstancesUpdated;

/// @brief Field StructuralApplyPhases, offset: 0x18, size: 0x4, def value: None
 int32_t  StructuralApplyPhases;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats, PatchesLoaded) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats, PatchesUnloaded) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats, PatchesRebuilt) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats, InstancesCreated) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats, InstancesDestroyed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats, InstancesUpdated) == 0x14, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats, StructuralApplyPhases) == 0x18, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats) == 0x1c, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.ParallelBitArray, Unity.Collections.NativeArray`1<T>, Unity.Mathematics.float2, Unity.Mathematics.float3, Unity.Mathematics.float4
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TerrainDetailManager/RasterizeSpheresJob
struct CORDL_TYPE TerrainDetailManager_RasterizeSpheresJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method CircleIntersectsAABB2D, addr 0x181509e50, size 0x120, virtual false, abstract: false, final false
static inline bool CircleIntersectsAABB2D(::Unity::Mathematics::float2  center, float_t  radiusSq, ::Unity::Mathematics::float2  min, ::Unity::Mathematics::float2  max) ;

/// @brief Method Execute, addr 0x18150c8b0, size 0x410, virtual true, abstract: false, final true
inline void Execute(int32_t  sphereIndex) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr TerrainDetailManager_RasterizeSpheresJob() ;

// Ctor Parameters [CppParam { name: "TerrainOrigin", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "PatchSizeXZ", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None }, CppParam { name: "PatchCountPerEdge", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "DetailDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "StreamingSpheres", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>", modifiers: "", def_value: None }, CppParam { name: "PatchesInRange", ty: "::MA::Flora::ParallelBitArray", modifiers: "", def_value: None }]
constexpr TerrainDetailManager_RasterizeSpheresJob(::Unity::Mathematics::float3  TerrainOrigin, ::Unity::Mathematics::float2  PatchSizeXZ, int32_t  PatchCountPerEdge, float_t  DetailDistance, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  StreamingSpheres, ::MA::Flora::ParallelBitArray  PatchesInRange) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13378};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field TerrainOrigin, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  TerrainOrigin;

/// @brief Field PatchSizeXZ, offset: 0xc, size: 0x8, def value: None
 ::Unity::Mathematics::float2  PatchSizeXZ;

/// @brief Field PatchCountPerEdge, offset: 0x14, size: 0x4, def value: None
 int32_t  PatchCountPerEdge;

/// @brief Field DetailDistance, offset: 0x18, size: 0x4, def value: None
 float_t  DetailDistance;

/// @brief Field StreamingSpheres, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  StreamingSpheres;

/// @brief Field PatchesInRange, offset: 0x30, size: 0x18, def value: None
 ::MA::Flora::ParallelBitArray  PatchesInRange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::TerrainDetailManager_RasterizeSpheresJob, TerrainOrigin) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailManager_RasterizeSpheresJob, PatchSizeXZ) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailManager_RasterizeSpheresJob, PatchCountPerEdge) == 0x14, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailManager_RasterizeSpheresJob, DetailDistance) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailManager_RasterizeSpheresJob, StreamingSpheres) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailManager_RasterizeSpheresJob, PatchesInRange) == 0x30, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TerrainDetailManager_RasterizeSpheresJob) == 0x48, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.ParallelBitArray
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TerrainDetailManager/ComputePatchLoadChangesJob
struct CORDL_TYPE TerrainDetailManager_ComputePatchLoadChangesJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0x18150ac10, size 0x50, virtual true, abstract: false, final true
inline void Execute(int32_t  chunkIndex) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr TerrainDetailManager_ComputePatchLoadChangesJob() ;

// Ctor Parameters [CppParam { name: "InRange", ty: "::MA::Flora::ParallelBitArray", modifiers: "", def_value: None }, CppParam { name: "Loaded", ty: "::MA::Flora::ParallelBitArray", modifiers: "", def_value: None }, CppParam { name: "ToLoad", ty: "::MA::Flora::ParallelBitArray", modifiers: "", def_value: None }, CppParam { name: "ToUnload", ty: "::MA::Flora::ParallelBitArray", modifiers: "", def_value: None }]
constexpr TerrainDetailManager_ComputePatchLoadChangesJob(::MA::Flora::ParallelBitArray  InRange, ::MA::Flora::ParallelBitArray  Loaded, ::MA::Flora::ParallelBitArray  ToLoad, ::MA::Flora::ParallelBitArray  ToUnload) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13379};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field InRange, offset: 0x0, size: 0x18, def value: None
 ::MA::Flora::ParallelBitArray  InRange;

/// @brief Field Loaded, offset: 0x18, size: 0x18, def value: None
 ::MA::Flora::ParallelBitArray  Loaded;

/// @brief Field ToLoad, offset: 0x30, size: 0x18, def value: None
 ::MA::Flora::ParallelBitArray  ToLoad;

/// @brief Field ToUnload, offset: 0x48, size: 0x18, def value: None
 ::MA::Flora::ParallelBitArray  ToUnload;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::TerrainDetailManager_ComputePatchLoadChangesJob, InRange) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailManager_ComputePatchLoadChangesJob, Loaded) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailManager_ComputePatchLoadChangesJob, ToLoad) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailManager_ComputePatchLoadChangesJob, ToUnload) == 0x48, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TerrainDetailManager_ComputePatchLoadChangesJob) == 0x60, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.InstanceManager, MA.Flora.IntProfilerCounter, MA.Flora.NativeBitSet, MA.Flora.NativeDataReference`1<T>, MA.Flora.ParallelBitArray, MA.Flora.StreamingSphereManager, MA.Flora.TerrainDetailLayer, Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>, Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, Unity.Profiling.ProfilerMarker
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TerrainDetailManager
struct CORDL_TYPE TerrainDetailManager {
public:
// Declarations
using ComputePatchLoadChangesJob = ::MA::Flora::TerrainDetailManager_ComputePatchLoadChangesJob;

using DetailStreamingFrameStats = ::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats;

using RasterizeSpheresJob = ::MA::Flora::TerrainDetailManager_RasterizeSpheresJob;

/// @brief Field ApplyCreatesMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ApplyCreatesMarker, put=setStaticF_ApplyCreatesMarker)) ::Unity::Profiling::ProfilerMarker  ApplyCreatesMarker;

/// @brief Field ApplyDestroysMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ApplyDestroysMarker, put=setStaticF_ApplyDestroysMarker)) ::Unity::Profiling::ProfilerMarker  ApplyDestroysMarker;

/// @brief Field ApplyStructuralPhaseMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ApplyStructuralPhaseMarker, put=setStaticF_ApplyStructuralPhaseMarker)) ::Unity::Profiling::ProfilerMarker  ApplyStructuralPhaseMarker;

/// @brief Field BuildWaitMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BuildWaitMarker, put=setStaticF_BuildWaitMarker)) ::Unity::Profiling::ProfilerMarker  BuildWaitMarker;

/// @brief Field ComputeDetailTransformsMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ComputeDetailTransformsMarker, put=setStaticF_ComputeDetailTransformsMarker)) ::Unity::Profiling::ProfilerMarker  ComputeDetailTransformsMarker;

/// @brief Field MarkPatchesInRangeMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MarkPatchesInRangeMarker, put=setStaticF_MarkPatchesInRangeMarker)) ::Unity::Profiling::ProfilerMarker  MarkPatchesInRangeMarker;

/// @brief Field SampleTerrainNormalsMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SampleTerrainNormalsMarker, put=setStaticF_SampleTerrainNormalsMarker)) ::Unity::Profiling::ProfilerMarker  SampleTerrainNormalsMarker;

/// @brief Field ScheduleLocalToWorldUpdatesMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ScheduleLocalToWorldUpdatesMarker, put=setStaticF_ScheduleLocalToWorldUpdatesMarker)) ::Unity::Profiling::ProfilerMarker  ScheduleLocalToWorldUpdatesMarker;

/// @brief Field UpdateLoadedPatchesMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UpdateLoadedPatchesMarker, put=setStaticF_UpdateLoadedPatchesMarker)) ::Unity::Profiling::ProfilerMarker  UpdateLoadedPatchesMarker;

/// @brief Field UpdateMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UpdateMarker, put=setStaticF_UpdateMarker)) ::Unity::Profiling::ProfilerMarker  UpdateMarker;

/// @brief Field s_InstancesCreatedCounter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_InstancesCreatedCounter, put=setStaticF_s_InstancesCreatedCounter)) ::MA::Flora::IntProfilerCounter  s_InstancesCreatedCounter;

/// @brief Field s_InstancesDestroyedCounter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_InstancesDestroyedCounter, put=setStaticF_s_InstancesDestroyedCounter)) ::MA::Flora::IntProfilerCounter  s_InstancesDestroyedCounter;

/// @brief Field s_InstancesUpdatedCounter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_InstancesUpdatedCounter, put=setStaticF_s_InstancesUpdatedCounter)) ::MA::Flora::IntProfilerCounter  s_InstancesUpdatedCounter;

/// @brief Field s_PatchesLoadedCounter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_PatchesLoadedCounter, put=setStaticF_s_PatchesLoadedCounter)) ::MA::Flora::IntProfilerCounter  s_PatchesLoadedCounter;

/// @brief Field s_PatchesRebuiltCounter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_PatchesRebuiltCounter, put=setStaticF_s_PatchesRebuiltCounter)) ::MA::Flora::IntProfilerCounter  s_PatchesRebuiltCounter;

/// @brief Field s_PatchesUnloadedCounter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_PatchesUnloadedCounter, put=setStaticF_s_PatchesUnloadedCounter)) ::MA::Flora::IntProfilerCounter  s_PatchesUnloadedCounter;

/// @brief Field s_StructuralApplyPhaseCounter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_StructuralApplyPhaseCounter, put=setStaticF_s_StructuralApplyPhaseCounter)) ::MA::Flora::IntProfilerCounter  s_StructuralApplyPhaseCounter;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method ApplyCreatesAndDestroysOnMainThread, addr 0x1815045b0, size 0x840, virtual false, abstract: false, final false
inline int32_t ApplyCreatesAndDestroysOnMainThread(::by_ref<::MA::Flora::TerrainDetailLayer>  layer, ::by_ref<::MA::Flora::TerrainSnapshot>  terrain, ::Unity::Collections::NativeList_1<::MA::Flora::TerrainDetailLayer_PatchBuildResult>  patchResults, ::by_ref<::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats>  stats) ;

/// @brief Method ApplyQueuedUnloads, addr 0x181504df0, size 0x640, virtual false, abstract: false, final false
inline void ApplyQueuedUnloads(::Unity::Collections::NativeList_1<int32_t>  patchesToUnload, ::by_ref<::MA::Flora::TerrainSystemSettings>  settings, ::by_ref<int32_t>  unloadedCells, ::by_ref<int32_t>  structuralInstancesUsed, ::by_ref<::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats>  stats) ;

/// @brief Method Clear, addr 0x181505510, size 0x90, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method ClearPatchDirtyState, addr 0x181505430, size 0x90, virtual false, abstract: false, final false
inline void ClearPatchDirtyState(int32_t  patchIndex) ;

/// @brief Method ClearQueuedPatchWork, addr 0x1815054c0, size 0x50, virtual false, abstract: false, final false
inline void ClearQueuedPatchWork() ;

/// @brief Method CompactWorkQueue, addr 0x1815055a0, size 0xc0, virtual false, abstract: false, final false
inline void CompactWorkQueue() ;

/// @brief Method Dispose, addr 0x181505660, size 0xf0, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method EnqueuePatchForWork, addr 0x181505750, size 0x80, virtual false, abstract: false, final false
inline void EnqueuePatchForWork(int32_t  patchIndex) ;

/// @brief Method EnsureProfilerCountersCreated, addr 0x1815057d0, size 0x1a0, virtual false, abstract: false, final false
static inline void EnsureProfilerCountersCreated() ;

/// @brief Method GetPatchInstanceCount, addr 0x181505970, size 0x110, virtual false, abstract: false, final false
inline int32_t GetPatchInstanceCount(int32_t  patchIndex) ;

/// @brief Method GetRemainingBudget, addr 0x181505a80, size 0x20, virtual false, abstract: false, final false
static inline int32_t GetRemainingBudget(int32_t  budgetPerFrame, int32_t  usedCount) ;

/// @brief Method GetStructuralCost, addr 0x181505aa0, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetStructuralCost(::by_ref<::MA::Flora::TerrainDetailLayer_PatchBuildResult>  result) ;

/// @brief Method MarkPatchDirty, addr 0x181505ab0, size 0x1b0, virtual false, abstract: false, final false
inline void MarkPatchDirty(int32_t  patchIndex) ;

/// @brief Method PatchHasDirtyLayers, addr 0x181505c60, size 0x80, virtual false, abstract: false, final false
inline bool PatchHasDirtyLayers(int32_t  patchIndex) ;

/// @brief Method PublishProfilerCounters, addr 0x181505ce0, size 0x270, virtual false, abstract: false, final false
static inline void PublishProfilerCounters(::by_ref<::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats>  stats) ;

/// @brief Method QueueLoadedDirtyPatches, addr 0x181505f50, size 0x130, virtual false, abstract: false, final false
inline void QueueLoadedDirtyPatches() ;

/// @brief Method ResetTrackingState, addr 0x181506080, size 0xf0, virtual false, abstract: false, final false
inline void ResetTrackingState() ;

/// @brief Method ResizePatchesIfNeeded, addr 0x181506170, size 0x300, virtual false, abstract: false, final false
inline void ResizePatchesIfNeeded(int32_t  patchCountPerEdge, ::Unity::Mathematics::float3  terrainPosition, ::Unity::Mathematics::float3  terrainSize) ;

/// @brief Method ScheduleMarkPatchesInRange, addr 0x181506470, size 0x4c0, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleMarkPatchesInRange(::by_ref<::MA::Flora::TerrainSnapshot>  terrain) ;

/// @brief Method ScheduleQueuedPatchWork, addr 0x181506930, size 0xb60, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleQueuedPatchWork(::by_ref<::MA::Flora::TerrainSnapshot>  terrain, bool  allowBuilds, ::by_ref<::MA::Flora::TerrainSystemSettings>  settings, ::by_ref<int32_t>  builtCells, ::by_ref<int32_t>  unloadedCells, ::by_ref<int32_t>  structuralInstancesUsed, ::Unity::Collections::NativeList_1<int32_t>  patchesToUnload, ::by_ref<::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats>  stats) ;

/// @brief Method ScheduleUpdate, addr 0x181507490, size 0x390, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleUpdate(::by_ref<::MA::Flora::TerrainSnapshot>  terrain, ::MA::Flora::TerrainSystemSettings  settings, ::by_ref<int32_t>  builtCells, ::by_ref<int32_t>  unloadedCells, ::by_ref<int32_t>  structuralInstancesUsed, ::by_ref<::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats>  stats) ;

/// @brief Method ScheduleUpdates, addr 0x181507820, size 0x210, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleUpdates(::by_ref<::MA::Flora::TerrainDetailLayer>  layer, ::by_ref<::MA::Flora::TerrainDetailLayer_PatchBuildResult>  result, ::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method SetDirty, addr 0x181507a30, size 0xd0, virtual false, abstract: false, final false
inline void SetDirty() ;

/// @brief Method SetDirty, addr 0x181507b00, size 0x20, virtual false, abstract: false, final false
inline void SetDirty(::UnityEngine::TerrainChangedFlags  flags) ;

/// @brief Method SetEmpty, addr 0x181507b20, size 0x80, virtual false, abstract: false, final false
inline void SetEmpty() ;

/// @brief Method ShouldDeferStructuralWork, addr 0x181507ba0, size 0x30, virtual false, abstract: false, final false
static inline bool ShouldDeferStructuralWork(int32_t  structuralBudgetPerFrame, int32_t  remainingStructuralBudgetForBuild, int32_t  structuralCost, int32_t  structuralInstancesUsed, int32_t  scheduledStructuralCost) ;

/// @brief Method TryDequeuePatchForWork, addr 0x181507bd0, size 0x140, virtual false, abstract: false, final false
inline bool TryDequeuePatchForWork(::by_ref<int32_t>  patchIndex) ;

/// @brief Method TryTakeNextDirtyLayer, addr 0x181507d10, size 0x120, virtual false, abstract: false, final false
inline bool TryTakeNextDirtyLayer(int32_t  patchIndex, ::by_ref<int32_t>  layerIndex) ;

/// @brief Method UpdateLayerPrototypes, addr 0x181507e30, size 0x2b0, virtual false, abstract: false, final false
inline void UpdateLayerPrototypes(::Unity::Collections::NativeArray_1<::MA::Flora::TerrainDetailPrototype>  prototypes) ;

/// @brief Method UpdateLoadAndUnloadQueues, addr 0x1815080e0, size 0x3e0, virtual false, abstract: false, final false
inline void UpdateLoadAndUnloadQueues(bool  allowLoads, ::by_ref<::MA::Flora::TerrainSystemSettings>  settings, ::Unity::Collections::NativeList_1<int32_t>  patchesToUnload, ::by_ref<::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats>  stats) ;

/// @brief Method .ctor, addr 0x1815086a0, size 0x490, virtual false, abstract: false, final false
inline void _ctor(::MA::Flora::InstanceContext  instanceContext) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_ApplyCreatesMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_ApplyDestroysMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_ApplyStructuralPhaseMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_BuildWaitMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_ComputeDetailTransformsMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_MarkPatchesInRangeMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_SampleTerrainNormalsMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_ScheduleLocalToWorldUpdatesMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_UpdateLoadedPatchesMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_UpdateMarker() ;

static inline ::MA::Flora::IntProfilerCounter getStaticF_s_InstancesCreatedCounter() ;

static inline ::MA::Flora::IntProfilerCounter getStaticF_s_InstancesDestroyedCounter() ;

static inline ::MA::Flora::IntProfilerCounter getStaticF_s_InstancesUpdatedCounter() ;

static inline ::MA::Flora::IntProfilerCounter getStaticF_s_PatchesLoadedCounter() ;

static inline ::MA::Flora::IntProfilerCounter getStaticF_s_PatchesRebuiltCounter() ;

static inline ::MA::Flora::IntProfilerCounter getStaticF_s_PatchesUnloadedCounter() ;

static inline ::MA::Flora::IntProfilerCounter getStaticF_s_StructuralApplyPhaseCounter() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

static inline void setStaticF_ApplyCreatesMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_ApplyDestroysMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_ApplyStructuralPhaseMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_BuildWaitMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_ComputeDetailTransformsMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_MarkPatchesInRangeMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_SampleTerrainNormalsMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_ScheduleLocalToWorldUpdatesMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_UpdateLoadedPatchesMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_UpdateMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_s_InstancesCreatedCounter(::MA::Flora::IntProfilerCounter  value) ;

static inline void setStaticF_s_InstancesDestroyedCounter(::MA::Flora::IntProfilerCounter  value) ;

static inline void setStaticF_s_InstancesUpdatedCounter(::MA::Flora::IntProfilerCounter  value) ;

static inline void setStaticF_s_PatchesLoadedCounter(::MA::Flora::IntProfilerCounter  value) ;

static inline void setStaticF_s_PatchesRebuiltCounter(::MA::Flora::IntProfilerCounter  value) ;

static inline void setStaticF_s_PatchesUnloadedCounter(::MA::Flora::IntProfilerCounter  value) ;

static inline void setStaticF_s_StructuralApplyPhaseCounter(::MA::Flora::IntProfilerCounter  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr TerrainDetailManager() ;

// Ctor Parameters [CppParam { name: "m_InstanceManager", ty: "::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>", modifiers: "", def_value: None }, CppParam { name: "m_StreamingManager", ty: "::MA::Flora::NativeDataReference_1<::MA::Flora::StreamingSphereManager>", modifiers: "", def_value: None }, CppParam { name: "m_Layers", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::TerrainDetailLayer>", modifiers: "", def_value: None }, CppParam { name: "m_PatchesInRange", ty: "::MA::Flora::ParallelBitArray", modifiers: "", def_value: None }, CppParam { name: "m_PatchesLoaded", ty: "::MA::Flora::ParallelBitArray", modifiers: "", def_value: None }, CppParam { name: "m_PatchesToLoad", ty: "::MA::Flora::ParallelBitArray", modifiers: "", def_value: None }, CppParam { name: "m_PatchesToUnload", ty: "::MA::Flora::ParallelBitArray", modifiers: "", def_value: None }, CppParam { name: "m_PatchesOutOfRangeTime", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "m_PatchNextLayerIndex", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_PatchesQueuedForWork", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_WorkQueue", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_WorkQueueHead", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_PatchCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ScheduledMarkInRangeJob", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_WasWithinDetailsRange", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_Hidden", ty: "bool", modifiers: "", def_value: None }]
constexpr TerrainDetailManager(::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>  m_InstanceManager, ::MA::Flora::NativeDataReference_1<::MA::Flora::StreamingSphereManager>  m_StreamingManager, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::TerrainDetailLayer>  m_Layers, ::MA::Flora::ParallelBitArray  m_PatchesInRange, ::MA::Flora::ParallelBitArray  m_PatchesLoaded, ::MA::Flora::ParallelBitArray  m_PatchesToLoad, ::MA::Flora::ParallelBitArray  m_PatchesToUnload, ::Unity::Collections::NativeArray_1<float_t>  m_PatchesOutOfRangeTime, ::Unity::Collections::NativeArray_1<int32_t>  m_PatchNextLayerIndex, ::MA::Flora::NativeBitSet  m_PatchesQueuedForWork, ::Unity::Collections::NativeList_1<int32_t>  m_WorkQueue, int32_t  m_WorkQueueHead, int32_t  m_PatchCount, bool  m_ScheduledMarkInRangeJob, bool  m_WasWithinDetailsRange, bool  m_Hidden) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13380};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc8};

/// @brief Field m_InstanceManager, offset: 0x0, size: 0x8, def value: None
 ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>  m_InstanceManager;

/// @brief Field m_StreamingManager, offset: 0x8, size: 0x8, def value: None
 ::MA::Flora::NativeDataReference_1<::MA::Flora::StreamingSphereManager>  m_StreamingManager;

/// @brief Field m_Layers, offset: 0x10, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::TerrainDetailLayer>  m_Layers;

/// @brief Field m_PatchesInRange, offset: 0x28, size: 0x18, def value: None
 ::MA::Flora::ParallelBitArray  m_PatchesInRange;

/// @brief Field m_PatchesLoaded, offset: 0x40, size: 0x18, def value: None
 ::MA::Flora::ParallelBitArray  m_PatchesLoaded;

/// @brief Field m_PatchesToLoad, offset: 0x58, size: 0x18, def value: None
 ::MA::Flora::ParallelBitArray  m_PatchesToLoad;

/// @brief Field m_PatchesToUnload, offset: 0x70, size: 0x18, def value: None
 ::MA::Flora::ParallelBitArray  m_PatchesToUnload;

/// @brief Field m_PatchesOutOfRangeTime, offset: 0x88, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<float_t>  m_PatchesOutOfRangeTime;

/// @brief Field m_PatchNextLayerIndex, offset: 0x98, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  m_PatchNextLayerIndex;

/// @brief Field m_PatchesQueuedForWork, offset: 0xa8, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_PatchesQueuedForWork;

/// @brief Field m_WorkQueue, offset: 0xb0, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<int32_t>  m_WorkQueue;

/// @brief Field m_WorkQueueHead, offset: 0xb8, size: 0x4, def value: None
 int32_t  m_WorkQueueHead;

/// @brief Field m_PatchCount, offset: 0xbc, size: 0x4, def value: None
 int32_t  m_PatchCount;

/// @brief Field m_ScheduledMarkInRangeJob, offset: 0xc0, size: 0x1, def value: None
 bool  m_ScheduledMarkInRangeJob;

/// @brief Field m_WasWithinDetailsRange, offset: 0xc1, size: 0x1, def value: None
 bool  m_WasWithinDetailsRange;

/// @brief Field m_Hidden, offset: 0xc2, size: 0x1, def value: None
 bool  m_Hidden;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::TerrainDetailManager, m_InstanceManager) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailManager, m_StreamingManager) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailManager, m_Layers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailManager, m_PatchesInRange) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailManager, m_PatchesLoaded) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailManager, m_PatchesToLoad) == 0x58, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailManager, m_PatchesToUnload) == 0x70, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailManager, m_PatchesOutOfRangeTime) == 0x88, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailManager, m_PatchNextLayerIndex) == 0x98, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailManager, m_PatchesQueuedForWork) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailManager, m_WorkQueue) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailManager, m_WorkQueueHead) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailManager, m_PatchCount) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailManager, m_ScheduledMarkInRangeJob) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailManager, m_WasWithinDetailsRange) == 0xc1, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailManager, m_Hidden) == 0xc2, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TerrainDetailManager) == 0xc8, "Size mismatch!");

} // namespace end def MA::Flora
