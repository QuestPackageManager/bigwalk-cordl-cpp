#pragma once
// IWYU pragma private; include "MA/Flora/InstanceManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__AABBMinMax_def.hpp"
#include "MA/Flora/zzzz__AABB_def.hpp"
#include "MA/Flora/zzzz__ArchetypeIndex_def.hpp"
#include "MA/Flora/zzzz__ArchetypeKey_def.hpp"
#include "MA/Flora/zzzz__BatchAllocation_def.hpp"
#include "MA/Flora/zzzz__BatchCullingAddresses_def.hpp"
#include "MA/Flora/zzzz__BufferScatterData_1_def.hpp"
#include "MA/Flora/zzzz__CellLocation_def.hpp"
#include "MA/Flora/zzzz__ChunkIndex_def.hpp"
#include "MA/Flora/zzzz__CullingGrid_def.hpp"
#include "MA/Flora/zzzz__FloraInstanceHandle_def.hpp"
#include "MA/Flora/zzzz__FloraInstanceTransform_def.hpp"
#include "MA/Flora/zzzz__FloraLocalToWorld_def.hpp"
#include "MA/Flora/zzzz__GraphicsBufferRef_def.hpp"
#include "MA/Flora/zzzz__GraphicsMatrix_def.hpp"
#include "MA/Flora/zzzz__InstanceBuffer_def.hpp"
#include "MA/Flora/zzzz__InstanceInContainer_def.hpp"
#include "MA/Flora/zzzz__InstanceInCullingChunk_def.hpp"
#include "MA/Flora/zzzz__InstanceTag_def.hpp"
#include "MA/Flora/zzzz__NativeBitSet_def.hpp"
#include "MA/Flora/zzzz__NativeBufferArray_1_def.hpp"
#include "MA/Flora/zzzz__NativeDataReference_1_def.hpp"
#include "MA/Flora/zzzz__NativeScatterList_1_def.hpp"
#include "MA/Flora/zzzz__PackedArchetypeData_def.hpp"
#include "MA/Flora/zzzz__PackedChunkUploadHeader_def.hpp"
#include "MA/Flora/zzzz__SourceRecordIndex_def.hpp"
#include "MA/Flora/zzzz__TemplateIndex_def.hpp"
#include "MA/Flora/zzzz__TemplateManager_def.hpp"
#include "MA/Flora/zzzz__TreeInTerrain_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Burst/zzzz__SharedStatic_1_def.hpp"
#include "Unity/Collections/zzzz__DoubleRewindableAllocators_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelMultiHashMap_2_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "Unity/Mathematics/zzzz__uint2_def.hpp"
#include "Unity/Mathematics/zzzz__uint4_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/Rendering/zzzz__SphericalHarmonicsL2_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__LightProbesQuery_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceManager)
namespace MA::Flora {
struct AABB;
}
namespace MA::Flora {
struct ArchetypeIndex;
}
namespace MA::Flora {
struct ArchetypeKey;
}
namespace MA::Flora {
struct ArchetypeStore_InstanceManager_PerArchetypeData;
}
namespace MA::Flora {
struct ArchetypeStore_InstanceManager_StaticIdentifier;
}
namespace MA::Flora {
class ArchetypeStore_InstanceManager___c;
}
namespace MA::Flora {
template<typename T>
struct BufferScatterData_1;
}
namespace MA::Flora {
struct CellLocation;
}
namespace MA::Flora {
struct ChunkIndex;
}
namespace MA::Flora {
struct ChunkStore_InstanceManager_PerChunkData;
}
namespace MA::Flora {
struct ChunkStore_InstanceManager_StaticIdentifier;
}
namespace MA::Flora {
class ChunkStore_InstanceManager___c;
}
namespace MA::Flora {
struct DetailInTerrain;
}
namespace MA::Flora {
template<typename T>
struct EntityObjectRef_1;
}
namespace MA::Flora {
class FloraInstanceContainer;
}
namespace MA::Flora {
struct FloraInstanceHandle;
}
namespace MA::Flora {
struct FloraInstanceTransform;
}
namespace MA::Flora {
struct FloraLocalToWorld;
}
namespace MA::Flora {
struct GraphicsBufferRef;
}
namespace MA::Flora {
struct GraphicsMatrix;
}
namespace MA::Flora {
struct InstanceContext;
}
namespace MA::Flora {
struct InstanceInChunk;
}
namespace MA::Flora {
struct InstanceInContainer;
}
namespace MA::Flora {
struct InstanceInCullingChunk;
}
namespace MA::Flora {
class InstanceManager_AddTagsToInstanceWithBurst_00000289$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_AddTagsToInstanceWithBurst_00000289$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_AddTagsToInstancesBatchWithBurst_00000286$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_AddTagsToInstancesBatchWithBurst_00000286$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_AddTagsToInstancesWithBurst_0000028A$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_AddTagsToInstancesWithBurst_0000028A$PostfixBurstDelegate;
}
namespace MA::Flora {
struct InstanceManager_ArchetypeStore;
}
namespace MA::Flora {
struct InstanceManager_ChunkLightProbeScatterData;
}
namespace MA::Flora {
struct InstanceManager_ChunkStore;
}
namespace MA::Flora {
struct InstanceManager_ComputeBoundsForInstancesJob;
}
namespace MA::Flora {
struct InstanceManager_ContainerTransformBatch;
}
namespace MA::Flora {
struct InstanceManager_CopyLocalToWorldPreviousJob;
}
namespace MA::Flora {
class InstanceManager_DestroyAllInstancesInSceneWithBurst_00000276$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_DestroyAllInstancesInSceneWithBurst_00000276$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_DestroyWithBurst_00000312$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_DestroyWithBurst_00000312$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_GatherInstanceInChunkForInstances_0000027A$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_GatherInstanceInChunkForInstances_0000027A$PostfixBurstDelegate;
}
namespace MA::Flora {
struct InstanceManager_GatherProbePositionsJob;
}
namespace MA::Flora {
class InstanceManager_GetBoundsWithBurst_0000031E$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_GetBoundsWithBurst_0000031E$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_GetDetailInstanceMapWithBurst_000002A8$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_GetDetailInstanceMapWithBurst_000002A8$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_GetInstanceContainerIndexMapWithBurst_00000327$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_GetInstanceContainerIndexMapWithBurst_00000327$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_GetInstanceInContainersAndIndicesWithBurst_00000329$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_GetInstanceInContainersAndIndicesWithBurst_00000329$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_GetLocalToWorldsWithBurst_00000317$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_GetLocalToWorldsWithBurst_00000317$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_GetPositionsWithBurst_0000031B$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_GetPositionsWithBurst_0000031B$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_GetValidTreeInTerrainsAndIndicesWithBurst_000002AC$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_GetValidTreeInTerrainsAndIndicesWithBurst_000002AC$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_GetValidTreeInTerrainsWithBurst_000002AA$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_GetValidTreeInTerrainsWithBurst_000002AA$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_GetWorldTransformsWithBurst_00000319$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_GetWorldTransformsWithBurst_00000319$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_InitializeFrameWithBurst_00000296$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_InitializeFrameWithBurst_00000296$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_InstanceBatchFromInstanceChunkData_0000027B$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_InstanceBatchFromInstanceChunkData_0000027B$PostfixBurstDelegate;
}
namespace MA::Flora {
struct InstanceManager_InstanceBatchInChunk;
}
namespace MA::Flora {
struct InstanceManager_InstanceInContainerIndexPair;
}
namespace MA::Flora {
class InstanceManager_InstantiateInstancesWithBurst_0000032A$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_InstantiateInstancesWithBurst_0000032A$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_InstantiateInstancesWithBurst_0000032B$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_InstantiateInstancesWithBurst_0000032B$PostfixBurstDelegate;
}
namespace MA::Flora {
struct InstanceManager_InstantiateParams;
}
namespace MA::Flora {
class InstanceManager_MarkInstanceTransformsDirtyWithBurst_0000032D$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_MarkInstanceTransformsDirtyWithBurst_0000032D$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_MoveInstancesToNewArchetypeBatchWithBurst_00000281$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_MoveInstancesToNewArchetypeBatchWithBurst_00000281$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_OnPostLateUpdateWithBurst_00000299$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_OnPostLateUpdateWithBurst_00000299$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_RemoveTagsFromInstanceWithBurst_00000290$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_RemoveTagsFromInstanceWithBurst_00000290$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_RemoveTagsFromInstancesBatchWithBurst_0000028D$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_RemoveTagsFromInstancesBatchWithBurst_0000028D$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_RemoveTagsFromInstancesWithBurst_00000291$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_RemoveTagsFromInstancesWithBurst_00000291$PostfixBurstDelegate;
}
namespace MA::Flora {
struct InstanceManager_ScatterArchetypeDataJob;
}
namespace MA::Flora {
struct InstanceManager_ScatterEntityIdsJob;
}
namespace MA::Flora {
struct InstanceManager_ScatterInitDynamicMatricesJob;
}
namespace MA::Flora {
struct InstanceManager_ScatterLightmapSTJob;
}
namespace MA::Flora {
struct InstanceManager_ScatterProbeDataJob;
}
namespace MA::Flora {
struct InstanceManager_ScatterRandomIdsJob;
}
namespace MA::Flora {
struct InstanceManager_ScatterStaticMatricesJob;
}
namespace MA::Flora {
struct InstanceManager_ScatterUpdateDynamicMatricesJob;
}
namespace MA::Flora {
struct InstanceManager_ScatterVariationColorJob;
}
namespace MA::Flora {
class InstanceManager_ScheduleUploadsWithBurst_000002C2$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_ScheduleUploadsWithBurst_000002C2$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_SetInstanceInContainerIndicesWithBurst_00000324$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_SetInstanceInContainerIndicesWithBurst_00000324$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_SetTerrainTreeIndicesWithBurst_000002AE$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_SetTerrainTreeIndicesWithBurst_000002AE$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_SortInstanceInChunk_00000279$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_SortInstanceInChunk_00000279$PostfixBurstDelegate;
}
namespace MA::Flora {
struct InstanceManager_TreeInTerrainIndexPair;
}
namespace MA::Flora {
struct InstanceManager_UpdateLocalToWorldsJob;
}
namespace MA::Flora {
struct InstanceManager_UpdateLocalTransformsJob;
}
namespace MA::Flora {
struct InstanceManager_UpdateTrackedContainerTransformsJob;
}
namespace MA::Flora {
struct InstanceManager_UpdateWorldTransformsJob;
}
namespace MA::Flora {
class InstanceManager_WriteLocalToWorldsBatched_00000335$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_WriteLocalToWorldsBatched_00000335$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager___InteropDelegates;
}
namespace MA::Flora {
struct InstanceManager___c__DisplayClass380_0;
}
namespace MA::Flora {
struct InstanceTag;
}
namespace MA::Flora {
struct NativeBitSet;
}
namespace MA::Flora {
struct TemplateIndex;
}
namespace MA::Flora {
struct TemplateLayoutIndex;
}
namespace MA::Flora {
struct TemplateStateChangeMask;
}
namespace MA::Flora {
struct TerrainDetailPrototype;
}
namespace MA::Flora {
struct TreeInTerrain;
}
namespace MA::Flora {
class __InteropDelegates_InstanceManager__InstantiateDetailsFromBurstInternal_1_Delegate;
}
namespace MA::Flora {
class __InteropDelegates_InstanceManager__InstantiateTreesFromBurst_0_Delegate;
}
namespace MA::InternalBridge {
struct UnityTransformDispatchData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class EventArgs;
}
namespace System {
class EventHandler;
}
namespace System {
class IAsyncResult;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Collections::LowLevel::Unsafe {
template<typename T>
struct UnsafeList_1;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
struct FixedString64Bytes;
}
namespace Unity::Collections {
struct NativeArrayOptions;
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
template<typename TKey,typename TValue>
struct NativeParallelMultiHashMap_2;
}
namespace Unity::Collections {
struct RewindableAllocator;
}
namespace Unity::Jobs {
class IJobFor;
}
namespace Unity::Jobs {
class IJobParallelForBatch;
}
namespace Unity::Jobs {
class IJobParallelFor;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float4;
}
namespace Unity::Mathematics {
struct float4x4;
}
namespace UnityEngine::Rendering {
class BatchRendererGroup;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct EntityId;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace MA::Flora {
class ArchetypeStore_InstanceManager___c;
}
namespace MA::Flora {
class ChunkStore_InstanceManager___c;
}
namespace MA::Flora {
class InstanceManager_AddTagsToInstanceWithBurst_00000289$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_AddTagsToInstanceWithBurst_00000289$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_AddTagsToInstancesBatchWithBurst_00000286$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_AddTagsToInstancesBatchWithBurst_00000286$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_AddTagsToInstancesWithBurst_0000028A$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_AddTagsToInstancesWithBurst_0000028A$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_DestroyAllInstancesInSceneWithBurst_00000276$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_DestroyAllInstancesInSceneWithBurst_00000276$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_DestroyWithBurst_00000312$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_DestroyWithBurst_00000312$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_GatherInstanceInChunkForInstances_0000027A$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_GatherInstanceInChunkForInstances_0000027A$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_GetBoundsWithBurst_0000031E$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_GetBoundsWithBurst_0000031E$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_GetDetailInstanceMapWithBurst_000002A8$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_GetDetailInstanceMapWithBurst_000002A8$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_GetInstanceContainerIndexMapWithBurst_00000327$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_GetInstanceContainerIndexMapWithBurst_00000327$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_GetInstanceInContainersAndIndicesWithBurst_00000329$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_GetInstanceInContainersAndIndicesWithBurst_00000329$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_GetLocalToWorldsWithBurst_00000317$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_GetLocalToWorldsWithBurst_00000317$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_GetPositionsWithBurst_0000031B$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_GetPositionsWithBurst_0000031B$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_GetValidTreeInTerrainsAndIndicesWithBurst_000002AC$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_GetValidTreeInTerrainsAndIndicesWithBurst_000002AC$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_GetValidTreeInTerrainsWithBurst_000002AA$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_GetValidTreeInTerrainsWithBurst_000002AA$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_GetWorldTransformsWithBurst_00000319$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_GetWorldTransformsWithBurst_00000319$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_InitializeFrameWithBurst_00000296$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_InitializeFrameWithBurst_00000296$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_InstanceBatchFromInstanceChunkData_0000027B$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_InstanceBatchFromInstanceChunkData_0000027B$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_InstantiateInstancesWithBurst_0000032A$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_InstantiateInstancesWithBurst_0000032A$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_InstantiateInstancesWithBurst_0000032B$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_InstantiateInstancesWithBurst_0000032B$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_MarkInstanceTransformsDirtyWithBurst_0000032D$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_MarkInstanceTransformsDirtyWithBurst_0000032D$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_MoveInstancesToNewArchetypeBatchWithBurst_00000281$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_MoveInstancesToNewArchetypeBatchWithBurst_00000281$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_OnPostLateUpdateWithBurst_00000299$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_OnPostLateUpdateWithBurst_00000299$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_RemoveTagsFromInstanceWithBurst_00000290$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_RemoveTagsFromInstanceWithBurst_00000290$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_RemoveTagsFromInstancesBatchWithBurst_0000028D$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_RemoveTagsFromInstancesBatchWithBurst_0000028D$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_RemoveTagsFromInstancesWithBurst_00000291$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_RemoveTagsFromInstancesWithBurst_00000291$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_ScheduleUploadsWithBurst_000002C2$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_ScheduleUploadsWithBurst_000002C2$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_SetInstanceInContainerIndicesWithBurst_00000324$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_SetInstanceInContainerIndicesWithBurst_00000324$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_SetTerrainTreeIndicesWithBurst_000002AE$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_SetTerrainTreeIndicesWithBurst_000002AE$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_SortInstanceInChunk_00000279$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_SortInstanceInChunk_00000279$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager_WriteLocalToWorldsBatched_00000335$BurstDirectCall;
}
namespace MA::Flora {
class InstanceManager_WriteLocalToWorldsBatched_00000335$PostfixBurstDelegate;
}
namespace MA::Flora {
class InstanceManager___InteropDelegates;
}
namespace MA::Flora {
class __InteropDelegates_InstanceManager__InstantiateDetailsFromBurstInternal_1_Delegate;
}
namespace MA::Flora {
class __InteropDelegates_InstanceManager__InstantiateTreesFromBurst_0_Delegate;
}
namespace MA::Flora {
struct ArchetypeStore_InstanceManager_PerArchetypeData;
}
namespace MA::Flora {
struct ArchetypeStore_InstanceManager_StaticIdentifier;
}
namespace MA::Flora {
struct ChunkStore_InstanceManager_PerChunkData;
}
namespace MA::Flora {
struct ChunkStore_InstanceManager_StaticIdentifier;
}
namespace MA::Flora {
struct InstanceManager;
}
namespace MA::Flora {
struct InstanceManager_ArchetypeStore;
}
namespace MA::Flora {
struct InstanceManager_ChunkLightProbeScatterData;
}
namespace MA::Flora {
struct InstanceManager_ChunkStore;
}
namespace MA::Flora {
struct InstanceManager_ComputeBoundsForInstancesJob;
}
namespace MA::Flora {
struct InstanceManager_ContainerTransformBatch;
}
namespace MA::Flora {
struct InstanceManager_CopyLocalToWorldPreviousJob;
}
namespace MA::Flora {
struct InstanceManager_GatherProbePositionsJob;
}
namespace MA::Flora {
struct InstanceManager_InstanceBatchInChunk;
}
namespace MA::Flora {
struct InstanceManager_InstanceInContainerIndexPair;
}
namespace MA::Flora {
struct InstanceManager_InstantiateParams;
}
namespace MA::Flora {
struct InstanceManager_ScatterArchetypeDataJob;
}
namespace MA::Flora {
struct InstanceManager_ScatterEntityIdsJob;
}
namespace MA::Flora {
struct InstanceManager_ScatterInitDynamicMatricesJob;
}
namespace MA::Flora {
struct InstanceManager_ScatterLightmapSTJob;
}
namespace MA::Flora {
struct InstanceManager_ScatterProbeDataJob;
}
namespace MA::Flora {
struct InstanceManager_ScatterRandomIdsJob;
}
namespace MA::Flora {
struct InstanceManager_ScatterStaticMatricesJob;
}
namespace MA::Flora {
struct InstanceManager_ScatterUpdateDynamicMatricesJob;
}
namespace MA::Flora {
struct InstanceManager_ScatterVariationColorJob;
}
namespace MA::Flora {
struct InstanceManager_TreeInTerrainIndexPair;
}
namespace MA::Flora {
struct InstanceManager_UpdateLocalToWorldsJob;
}
namespace MA::Flora {
struct InstanceManager_UpdateLocalTransformsJob;
}
namespace MA::Flora {
struct InstanceManager_UpdateTrackedContainerTransformsJob;
}
namespace MA::Flora {
struct InstanceManager_UpdateWorldTransformsJob;
}
namespace MA::Flora {
struct InstanceManager___c__DisplayClass380_0;
}
// Write type traits
MARK_REF_T(::MA::Flora::ArchetypeStore_InstanceManager___c*);
MARK_REF_T(::MA::Flora::ChunkStore_InstanceManager___c*);
MARK_REF_T(::MA::Flora::InstanceManager_AddTagsToInstanceWithBurst_00000289$BurstDirectCall*);
MARK_REF_T(::MA::Flora::InstanceManager_AddTagsToInstanceWithBurst_00000289$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::InstanceManager_AddTagsToInstancesBatchWithBurst_00000286$BurstDirectCall*);
MARK_REF_T(::MA::Flora::InstanceManager_AddTagsToInstancesBatchWithBurst_00000286$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::InstanceManager_AddTagsToInstancesWithBurst_0000028A$BurstDirectCall*);
MARK_REF_T(::MA::Flora::InstanceManager_AddTagsToInstancesWithBurst_0000028A$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::InstanceManager_DestroyAllInstancesInSceneWithBurst_00000276$BurstDirectCall*);
MARK_REF_T(::MA::Flora::InstanceManager_DestroyAllInstancesInSceneWithBurst_00000276$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::InstanceManager_DestroyWithBurst_00000312$BurstDirectCall*);
MARK_REF_T(::MA::Flora::InstanceManager_DestroyWithBurst_00000312$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::InstanceManager_GatherInstanceInChunkForInstances_0000027A$BurstDirectCall*);
MARK_REF_T(::MA::Flora::InstanceManager_GatherInstanceInChunkForInstances_0000027A$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::InstanceManager_GetBoundsWithBurst_0000031E$BurstDirectCall*);
MARK_REF_T(::MA::Flora::InstanceManager_GetBoundsWithBurst_0000031E$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::InstanceManager_GetDetailInstanceMapWithBurst_000002A8$BurstDirectCall*);
MARK_REF_T(::MA::Flora::InstanceManager_GetDetailInstanceMapWithBurst_000002A8$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::InstanceManager_GetInstanceContainerIndexMapWithBurst_00000327$BurstDirectCall*);
MARK_REF_T(::MA::Flora::InstanceManager_GetInstanceContainerIndexMapWithBurst_00000327$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::InstanceManager_GetInstanceInContainersAndIndicesWithBurst_00000329$BurstDirectCall*);
MARK_REF_T(::MA::Flora::InstanceManager_GetInstanceInContainersAndIndicesWithBurst_00000329$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::InstanceManager_GetLocalToWorldsWithBurst_00000317$BurstDirectCall*);
MARK_REF_T(::MA::Flora::InstanceManager_GetLocalToWorldsWithBurst_00000317$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::InstanceManager_GetPositionsWithBurst_0000031B$BurstDirectCall*);
MARK_REF_T(::MA::Flora::InstanceManager_GetPositionsWithBurst_0000031B$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::InstanceManager_GetValidTreeInTerrainsAndIndicesWithBurst_000002AC$BurstDirectCall*);
MARK_REF_T(::MA::Flora::InstanceManager_GetValidTreeInTerrainsAndIndicesWithBurst_000002AC$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::InstanceManager_GetValidTreeInTerrainsWithBurst_000002AA$BurstDirectCall*);
MARK_REF_T(::MA::Flora::InstanceManager_GetValidTreeInTerrainsWithBurst_000002AA$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::InstanceManager_GetWorldTransformsWithBurst_00000319$BurstDirectCall*);
MARK_REF_T(::MA::Flora::InstanceManager_GetWorldTransformsWithBurst_00000319$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::InstanceManager_InitializeFrameWithBurst_00000296$BurstDirectCall*);
MARK_REF_T(::MA::Flora::InstanceManager_InitializeFrameWithBurst_00000296$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::InstanceManager_InstanceBatchFromInstanceChunkData_0000027B$BurstDirectCall*);
MARK_REF_T(::MA::Flora::InstanceManager_InstanceBatchFromInstanceChunkData_0000027B$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::InstanceManager_InstantiateInstancesWithBurst_0000032A$BurstDirectCall*);
MARK_REF_T(::MA::Flora::InstanceManager_InstantiateInstancesWithBurst_0000032A$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::InstanceManager_InstantiateInstancesWithBurst_0000032B$BurstDirectCall*);
MARK_REF_T(::MA::Flora::InstanceManager_InstantiateInstancesWithBurst_0000032B$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::InstanceManager_MarkInstanceTransformsDirtyWithBurst_0000032D$BurstDirectCall*);
MARK_REF_T(::MA::Flora::InstanceManager_MarkInstanceTransformsDirtyWithBurst_0000032D$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::InstanceManager_MoveInstancesToNewArchetypeBatchWithBurst_00000281$BurstDirectCall*);
MARK_REF_T(::MA::Flora::InstanceManager_MoveInstancesToNewArchetypeBatchWithBurst_00000281$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::InstanceManager_OnPostLateUpdateWithBurst_00000299$BurstDirectCall*);
MARK_REF_T(::MA::Flora::InstanceManager_OnPostLateUpdateWithBurst_00000299$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::InstanceManager_RemoveTagsFromInstanceWithBurst_00000290$BurstDirectCall*);
MARK_REF_T(::MA::Flora::InstanceManager_RemoveTagsFromInstanceWithBurst_00000290$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::InstanceManager_RemoveTagsFromInstancesBatchWithBurst_0000028D$BurstDirectCall*);
MARK_REF_T(::MA::Flora::InstanceManager_RemoveTagsFromInstancesBatchWithBurst_0000028D$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::InstanceManager_RemoveTagsFromInstancesWithBurst_00000291$BurstDirectCall*);
MARK_REF_T(::MA::Flora::InstanceManager_RemoveTagsFromInstancesWithBurst_00000291$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::InstanceManager_ScheduleUploadsWithBurst_000002C2$BurstDirectCall*);
MARK_REF_T(::MA::Flora::InstanceManager_ScheduleUploadsWithBurst_000002C2$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::InstanceManager_SetInstanceInContainerIndicesWithBurst_00000324$BurstDirectCall*);
MARK_REF_T(::MA::Flora::InstanceManager_SetInstanceInContainerIndicesWithBurst_00000324$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::InstanceManager_SetTerrainTreeIndicesWithBurst_000002AE$BurstDirectCall*);
MARK_REF_T(::MA::Flora::InstanceManager_SetTerrainTreeIndicesWithBurst_000002AE$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::InstanceManager_SortInstanceInChunk_00000279$BurstDirectCall*);
MARK_REF_T(::MA::Flora::InstanceManager_SortInstanceInChunk_00000279$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::InstanceManager_WriteLocalToWorldsBatched_00000335$BurstDirectCall*);
MARK_REF_T(::MA::Flora::InstanceManager_WriteLocalToWorldsBatched_00000335$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::InstanceManager___InteropDelegates*);
MARK_REF_T(::MA::Flora::__InteropDelegates_InstanceManager__InstantiateDetailsFromBurstInternal_1_Delegate*);
MARK_REF_T(::MA::Flora::__InteropDelegates_InstanceManager__InstantiateTreesFromBurst_0_Delegate*);
MARK_VAL_T(::MA::Flora::ArchetypeStore_InstanceManager_PerArchetypeData);
MARK_VAL_T(::MA::Flora::ArchetypeStore_InstanceManager_StaticIdentifier);
MARK_VAL_T(::MA::Flora::ChunkStore_InstanceManager_PerChunkData);
MARK_VAL_T(::MA::Flora::ChunkStore_InstanceManager_StaticIdentifier);
MARK_VAL_T(::MA::Flora::InstanceManager);
MARK_VAL_T(::MA::Flora::InstanceManager_ArchetypeStore);
MARK_VAL_T(::MA::Flora::InstanceManager_ChunkLightProbeScatterData);
MARK_VAL_T(::MA::Flora::InstanceManager_ChunkStore);
MARK_VAL_T(::MA::Flora::InstanceManager_ComputeBoundsForInstancesJob);
MARK_VAL_T(::MA::Flora::InstanceManager_ContainerTransformBatch);
MARK_VAL_T(::MA::Flora::InstanceManager_CopyLocalToWorldPreviousJob);
MARK_VAL_T(::MA::Flora::InstanceManager_GatherProbePositionsJob);
MARK_VAL_T(::MA::Flora::InstanceManager_InstanceBatchInChunk);
MARK_VAL_T(::MA::Flora::InstanceManager_InstanceInContainerIndexPair);
MARK_VAL_T(::MA::Flora::InstanceManager_InstantiateParams);
MARK_VAL_T(::MA::Flora::InstanceManager_ScatterArchetypeDataJob);
MARK_VAL_T(::MA::Flora::InstanceManager_ScatterEntityIdsJob);
MARK_VAL_T(::MA::Flora::InstanceManager_ScatterInitDynamicMatricesJob);
MARK_VAL_T(::MA::Flora::InstanceManager_ScatterLightmapSTJob);
MARK_VAL_T(::MA::Flora::InstanceManager_ScatterProbeDataJob);
MARK_VAL_T(::MA::Flora::InstanceManager_ScatterRandomIdsJob);
MARK_VAL_T(::MA::Flora::InstanceManager_ScatterStaticMatricesJob);
MARK_VAL_T(::MA::Flora::InstanceManager_ScatterUpdateDynamicMatricesJob);
MARK_VAL_T(::MA::Flora::InstanceManager_ScatterVariationColorJob);
MARK_VAL_T(::MA::Flora::InstanceManager_TreeInTerrainIndexPair);
MARK_VAL_T(::MA::Flora::InstanceManager_UpdateLocalToWorldsJob);
MARK_VAL_T(::MA::Flora::InstanceManager_UpdateLocalTransformsJob);
MARK_VAL_T(::MA::Flora::InstanceManager_UpdateTrackedContainerTransformsJob);
MARK_VAL_T(::MA::Flora::InstanceManager_UpdateWorldTransformsJob);
MARK_VAL_T(::MA::Flora::InstanceManager___c__DisplayClass380_0);
DEFINE_IL2CPP_CLASS(::MA::Flora::ArchetypeStore_InstanceManager___c*, "MA.Flora", "InstanceManager/ArchetypeStore/<>c");
DEFINE_IL2CPP_CLASS(::MA::Flora::ChunkStore_InstanceManager___c*, "MA.Flora", "InstanceManager/ChunkStore/<>c");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_AddTagsToInstanceWithBurst_00000289$BurstDirectCall*, "MA.Flora", "InstanceManager/AddTagsToInstanceWithBurst_00000289$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_AddTagsToInstanceWithBurst_00000289$PostfixBurstDelegate*, "MA.Flora", "InstanceManager/AddTagsToInstanceWithBurst_00000289$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_AddTagsToInstancesBatchWithBurst_00000286$BurstDirectCall*, "MA.Flora", "InstanceManager/AddTagsToInstancesBatchWithBurst_00000286$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_AddTagsToInstancesBatchWithBurst_00000286$PostfixBurstDelegate*, "MA.Flora", "InstanceManager/AddTagsToInstancesBatchWithBurst_00000286$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_AddTagsToInstancesWithBurst_0000028A$BurstDirectCall*, "MA.Flora", "InstanceManager/AddTagsToInstancesWithBurst_0000028A$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_AddTagsToInstancesWithBurst_0000028A$PostfixBurstDelegate*, "MA.Flora", "InstanceManager/AddTagsToInstancesWithBurst_0000028A$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_DestroyAllInstancesInSceneWithBurst_00000276$BurstDirectCall*, "MA.Flora", "InstanceManager/DestroyAllInstancesInSceneWithBurst_00000276$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_DestroyAllInstancesInSceneWithBurst_00000276$PostfixBurstDelegate*, "MA.Flora", "InstanceManager/DestroyAllInstancesInSceneWithBurst_00000276$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_DestroyWithBurst_00000312$BurstDirectCall*, "MA.Flora", "InstanceManager/DestroyWithBurst_00000312$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_DestroyWithBurst_00000312$PostfixBurstDelegate*, "MA.Flora", "InstanceManager/DestroyWithBurst_00000312$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_GatherInstanceInChunkForInstances_0000027A$BurstDirectCall*, "MA.Flora", "InstanceManager/GatherInstanceInChunkForInstances_0000027A$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_GatherInstanceInChunkForInstances_0000027A$PostfixBurstDelegate*, "MA.Flora", "InstanceManager/GatherInstanceInChunkForInstances_0000027A$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_GetBoundsWithBurst_0000031E$BurstDirectCall*, "MA.Flora", "InstanceManager/GetBoundsWithBurst_0000031E$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_GetBoundsWithBurst_0000031E$PostfixBurstDelegate*, "MA.Flora", "InstanceManager/GetBoundsWithBurst_0000031E$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_GetDetailInstanceMapWithBurst_000002A8$BurstDirectCall*, "MA.Flora", "InstanceManager/GetDetailInstanceMapWithBurst_000002A8$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_GetDetailInstanceMapWithBurst_000002A8$PostfixBurstDelegate*, "MA.Flora", "InstanceManager/GetDetailInstanceMapWithBurst_000002A8$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_GetInstanceContainerIndexMapWithBurst_00000327$BurstDirectCall*, "MA.Flora", "InstanceManager/GetInstanceContainerIndexMapWithBurst_00000327$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_GetInstanceContainerIndexMapWithBurst_00000327$PostfixBurstDelegate*, "MA.Flora", "InstanceManager/GetInstanceContainerIndexMapWithBurst_00000327$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_GetInstanceInContainersAndIndicesWithBurst_00000329$BurstDirectCall*, "MA.Flora", "InstanceManager/GetInstanceInContainersAndIndicesWithBurst_00000329$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_GetInstanceInContainersAndIndicesWithBurst_00000329$PostfixBurstDelegate*, "MA.Flora", "InstanceManager/GetInstanceInContainersAndIndicesWithBurst_00000329$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_GetLocalToWorldsWithBurst_00000317$BurstDirectCall*, "MA.Flora", "InstanceManager/GetLocalToWorldsWithBurst_00000317$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_GetLocalToWorldsWithBurst_00000317$PostfixBurstDelegate*, "MA.Flora", "InstanceManager/GetLocalToWorldsWithBurst_00000317$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_GetPositionsWithBurst_0000031B$BurstDirectCall*, "MA.Flora", "InstanceManager/GetPositionsWithBurst_0000031B$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_GetPositionsWithBurst_0000031B$PostfixBurstDelegate*, "MA.Flora", "InstanceManager/GetPositionsWithBurst_0000031B$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_GetValidTreeInTerrainsAndIndicesWithBurst_000002AC$BurstDirectCall*, "MA.Flora", "InstanceManager/GetValidTreeInTerrainsAndIndicesWithBurst_000002AC$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_GetValidTreeInTerrainsAndIndicesWithBurst_000002AC$PostfixBurstDelegate*, "MA.Flora", "InstanceManager/GetValidTreeInTerrainsAndIndicesWithBurst_000002AC$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_GetValidTreeInTerrainsWithBurst_000002AA$BurstDirectCall*, "MA.Flora", "InstanceManager/GetValidTreeInTerrainsWithBurst_000002AA$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_GetValidTreeInTerrainsWithBurst_000002AA$PostfixBurstDelegate*, "MA.Flora", "InstanceManager/GetValidTreeInTerrainsWithBurst_000002AA$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_GetWorldTransformsWithBurst_00000319$BurstDirectCall*, "MA.Flora", "InstanceManager/GetWorldTransformsWithBurst_00000319$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_GetWorldTransformsWithBurst_00000319$PostfixBurstDelegate*, "MA.Flora", "InstanceManager/GetWorldTransformsWithBurst_00000319$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_InitializeFrameWithBurst_00000296$BurstDirectCall*, "MA.Flora", "InstanceManager/InitializeFrameWithBurst_00000296$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_InitializeFrameWithBurst_00000296$PostfixBurstDelegate*, "MA.Flora", "InstanceManager/InitializeFrameWithBurst_00000296$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_InstanceBatchFromInstanceChunkData_0000027B$BurstDirectCall*, "MA.Flora", "InstanceManager/InstanceBatchFromInstanceChunkData_0000027B$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_InstanceBatchFromInstanceChunkData_0000027B$PostfixBurstDelegate*, "MA.Flora", "InstanceManager/InstanceBatchFromInstanceChunkData_0000027B$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_InstantiateInstancesWithBurst_0000032A$BurstDirectCall*, "MA.Flora", "InstanceManager/InstantiateInstancesWithBurst_0000032A$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_InstantiateInstancesWithBurst_0000032A$PostfixBurstDelegate*, "MA.Flora", "InstanceManager/InstantiateInstancesWithBurst_0000032A$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_InstantiateInstancesWithBurst_0000032B$BurstDirectCall*, "MA.Flora", "InstanceManager/InstantiateInstancesWithBurst_0000032B$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_InstantiateInstancesWithBurst_0000032B$PostfixBurstDelegate*, "MA.Flora", "InstanceManager/InstantiateInstancesWithBurst_0000032B$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_MarkInstanceTransformsDirtyWithBurst_0000032D$BurstDirectCall*, "MA.Flora", "InstanceManager/MarkInstanceTransformsDirtyWithBurst_0000032D$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_MarkInstanceTransformsDirtyWithBurst_0000032D$PostfixBurstDelegate*, "MA.Flora", "InstanceManager/MarkInstanceTransformsDirtyWithBurst_0000032D$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_MoveInstancesToNewArchetypeBatchWithBurst_00000281$BurstDirectCall*, "MA.Flora", "InstanceManager/MoveInstancesToNewArchetypeBatchWithBurst_00000281$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_MoveInstancesToNewArchetypeBatchWithBurst_00000281$PostfixBurstDelegate*, "MA.Flora", "InstanceManager/MoveInstancesToNewArchetypeBatchWithBurst_00000281$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_OnPostLateUpdateWithBurst_00000299$BurstDirectCall*, "MA.Flora", "InstanceManager/OnPostLateUpdateWithBurst_00000299$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_OnPostLateUpdateWithBurst_00000299$PostfixBurstDelegate*, "MA.Flora", "InstanceManager/OnPostLateUpdateWithBurst_00000299$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_RemoveTagsFromInstanceWithBurst_00000290$BurstDirectCall*, "MA.Flora", "InstanceManager/RemoveTagsFromInstanceWithBurst_00000290$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_RemoveTagsFromInstanceWithBurst_00000290$PostfixBurstDelegate*, "MA.Flora", "InstanceManager/RemoveTagsFromInstanceWithBurst_00000290$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_RemoveTagsFromInstancesBatchWithBurst_0000028D$BurstDirectCall*, "MA.Flora", "InstanceManager/RemoveTagsFromInstancesBatchWithBurst_0000028D$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_RemoveTagsFromInstancesBatchWithBurst_0000028D$PostfixBurstDelegate*, "MA.Flora", "InstanceManager/RemoveTagsFromInstancesBatchWithBurst_0000028D$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_RemoveTagsFromInstancesWithBurst_00000291$BurstDirectCall*, "MA.Flora", "InstanceManager/RemoveTagsFromInstancesWithBurst_00000291$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_RemoveTagsFromInstancesWithBurst_00000291$PostfixBurstDelegate*, "MA.Flora", "InstanceManager/RemoveTagsFromInstancesWithBurst_00000291$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_ScheduleUploadsWithBurst_000002C2$BurstDirectCall*, "MA.Flora", "InstanceManager/ScheduleUploadsWithBurst_000002C2$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_ScheduleUploadsWithBurst_000002C2$PostfixBurstDelegate*, "MA.Flora", "InstanceManager/ScheduleUploadsWithBurst_000002C2$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_SetInstanceInContainerIndicesWithBurst_00000324$BurstDirectCall*, "MA.Flora", "InstanceManager/SetInstanceInContainerIndicesWithBurst_00000324$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_SetInstanceInContainerIndicesWithBurst_00000324$PostfixBurstDelegate*, "MA.Flora", "InstanceManager/SetInstanceInContainerIndicesWithBurst_00000324$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_SetTerrainTreeIndicesWithBurst_000002AE$BurstDirectCall*, "MA.Flora", "InstanceManager/SetTerrainTreeIndicesWithBurst_000002AE$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_SetTerrainTreeIndicesWithBurst_000002AE$PostfixBurstDelegate*, "MA.Flora", "InstanceManager/SetTerrainTreeIndicesWithBurst_000002AE$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_SortInstanceInChunk_00000279$BurstDirectCall*, "MA.Flora", "InstanceManager/SortInstanceInChunk_00000279$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_SortInstanceInChunk_00000279$PostfixBurstDelegate*, "MA.Flora", "InstanceManager/SortInstanceInChunk_00000279$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_WriteLocalToWorldsBatched_00000335$BurstDirectCall*, "MA.Flora", "InstanceManager/WriteLocalToWorldsBatched_00000335$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_WriteLocalToWorldsBatched_00000335$PostfixBurstDelegate*, "MA.Flora", "InstanceManager/WriteLocalToWorldsBatched_00000335$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager___InteropDelegates*, "MA.Flora", "InstanceManager/__InteropDelegates");
DEFINE_IL2CPP_CLASS(::MA::Flora::__InteropDelegates_InstanceManager__InstantiateDetailsFromBurstInternal_1_Delegate*, "MA.Flora", "InstanceManager/__InteropDelegates/_InstantiateDetailsFromBurstInternal_1_Delegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::__InteropDelegates_InstanceManager__InstantiateTreesFromBurst_0_Delegate*, "MA.Flora", "InstanceManager/__InteropDelegates/_InstantiateTreesFromBurst_0_Delegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::ArchetypeStore_InstanceManager_PerArchetypeData, "MA.Flora", "InstanceManager/ArchetypeStore/PerArchetypeData");
DEFINE_IL2CPP_CLASS(::MA::Flora::ArchetypeStore_InstanceManager_StaticIdentifier, "MA.Flora", "InstanceManager/ArchetypeStore/StaticIdentifier");
DEFINE_IL2CPP_CLASS(::MA::Flora::ChunkStore_InstanceManager_PerChunkData, "MA.Flora", "InstanceManager/ChunkStore/PerChunkData");
DEFINE_IL2CPP_CLASS(::MA::Flora::ChunkStore_InstanceManager_StaticIdentifier, "MA.Flora", "InstanceManager/ChunkStore/StaticIdentifier");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager, "MA.Flora", "InstanceManager");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_ArchetypeStore, "MA.Flora", "InstanceManager/ArchetypeStore");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_ChunkLightProbeScatterData, "MA.Flora", "InstanceManager/ChunkLightProbeScatterData");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_ChunkStore, "MA.Flora", "InstanceManager/ChunkStore");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_ComputeBoundsForInstancesJob, "MA.Flora", "InstanceManager/ComputeBoundsForInstancesJob");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_ContainerTransformBatch, "MA.Flora", "InstanceManager/ContainerTransformBatch");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_CopyLocalToWorldPreviousJob, "MA.Flora", "InstanceManager/CopyLocalToWorldPreviousJob");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_GatherProbePositionsJob, "MA.Flora", "InstanceManager/GatherProbePositionsJob");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_InstanceBatchInChunk, "MA.Flora", "InstanceManager/InstanceBatchInChunk");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_InstanceInContainerIndexPair, "MA.Flora", "InstanceManager/InstanceInContainerIndexPair");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_InstantiateParams, "MA.Flora", "InstanceManager/InstantiateParams");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_ScatterArchetypeDataJob, "MA.Flora", "InstanceManager/ScatterArchetypeDataJob");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_ScatterEntityIdsJob, "MA.Flora", "InstanceManager/ScatterEntityIdsJob");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_ScatterInitDynamicMatricesJob, "MA.Flora", "InstanceManager/ScatterInitDynamicMatricesJob");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_ScatterLightmapSTJob, "MA.Flora", "InstanceManager/ScatterLightmapSTJob");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_ScatterProbeDataJob, "MA.Flora", "InstanceManager/ScatterProbeDataJob");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_ScatterRandomIdsJob, "MA.Flora", "InstanceManager/ScatterRandomIdsJob");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_ScatterStaticMatricesJob, "MA.Flora", "InstanceManager/ScatterStaticMatricesJob");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_ScatterUpdateDynamicMatricesJob, "MA.Flora", "InstanceManager/ScatterUpdateDynamicMatricesJob");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_ScatterVariationColorJob, "MA.Flora", "InstanceManager/ScatterVariationColorJob");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_TreeInTerrainIndexPair, "MA.Flora", "InstanceManager/TreeInTerrainIndexPair");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_UpdateLocalToWorldsJob, "MA.Flora", "InstanceManager/UpdateLocalToWorldsJob");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_UpdateLocalTransformsJob, "MA.Flora", "InstanceManager/UpdateLocalTransformsJob");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_UpdateTrackedContainerTransformsJob, "MA.Flora", "InstanceManager/UpdateTrackedContainerTransformsJob");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager_UpdateWorldTransformsJob, "MA.Flora", "InstanceManager/UpdateWorldTransformsJob");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceManager___c__DisplayClass380_0, "MA.Flora", "InstanceManager/<>c__DisplayClass380_0");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceManager/ArchetypeStore
struct CORDL_TYPE InstanceManager_ArchetypeStore {
public:
// Declarations
using PerArchetypeData = ::MA::Flora::ArchetypeStore_InstanceManager_PerArchetypeData;

using StaticIdentifier = ::MA::Flora::ArchetypeStore_InstanceManager_StaticIdentifier;

using __c = ::MA::Flora::ArchetypeStore_InstanceManager___c;

/// @brief Method Initialize, addr 0x18147b260, size 0x1d0, virtual false, abstract: false, final false
static inline void Initialize() ;

/// @brief Method <Initialize>g__Shutdown|5_0, addr 0x18147b430, size 0x60, virtual false, abstract: false, final false
static inline void _Initialize_g__Shutdown_5_0() ;

/// @brief Method get_Data, addr 0x18147b490, size 0x30, virtual false, abstract: false, final false
static inline ::MA::Flora::ArchetypeStore_InstanceManager_PerArchetypeData* get_Data() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_ArchetypeStore() ;

// Ctor Parameters [CppParam { name: "m_PerArchetypeData", ty: "::MA::Flora::ArchetypeStore_InstanceManager_PerArchetypeData*", modifiers: "", def_value: None }]
constexpr InstanceManager_ArchetypeStore(::MA::Flora::ArchetypeStore_InstanceManager_PerArchetypeData*  m_PerArchetypeData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12929};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_PerArchetypeData, offset: 0x0, size: 0x8, def value: None
 ::MA::Flora::ArchetypeStore_InstanceManager_PerArchetypeData*  m_PerArchetypeData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceManager_ArchetypeStore, m_PerArchetypeData) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceManager_ArchetypeStore) == 0x8, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.InstanceManager::ArchetypeStore, Unity.Burst.SharedStatic`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceManager/ArchetypeStore/StaticIdentifier
#pragma pack(push, 0)
struct CORDL_TYPE ArchetypeStore_InstanceManager_StaticIdentifier {
public:
// Declarations
/// @brief Field Ref, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Ref, put=setStaticF_Ref)) ::Unity::Burst::SharedStatic_1<::MA::Flora::InstanceManager_ArchetypeStore>  Ref;

static inline ::Unity::Burst::SharedStatic_1<::MA::Flora::InstanceManager_ArchetypeStore> getStaticF_Ref() ;

static inline void setStaticF_Ref(::Unity::Burst::SharedStatic_1<::MA::Flora::InstanceManager_ArchetypeStore>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ArchetypeStore_InstanceManager_StaticIdentifier() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12926};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::MA::Flora::ArchetypeStore_InstanceManager_StaticIdentifier) == 0x1, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.ArchetypeKey
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceManager/ArchetypeStore/PerArchetypeData
struct CORDL_TYPE ArchetypeStore_InstanceManager_PerArchetypeData {
public:
// Declarations
/// @brief Method get_Default, addr 0x181485e50, size 0x20, virtual false, abstract: false, final false
static inline ::MA::Flora::ArchetypeStore_InstanceManager_PerArchetypeData get_Default() ;

// Ctor Parameters []
// @brief default ctor
constexpr ArchetypeStore_InstanceManager_PerArchetypeData() ;

// Ctor Parameters [CppParam { name: "Key", ty: "::MA::Flora::ArchetypeKey", modifiers: "", def_value: None }, CppParam { name: "Version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ChunkCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "InstanceCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ArchetypeStore_InstanceManager_PerArchetypeData(::MA::Flora::ArchetypeKey  Key, int32_t  Version, int32_t  ChunkCount, int32_t  InstanceCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12927};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field Key, offset: 0x0, size: 0x18, def value: None
 ::MA::Flora::ArchetypeKey  Key;

/// @brief Field Version, offset: 0x18, size: 0x4, def value: None
 int32_t  Version;

/// @brief Field ChunkCount, offset: 0x1c, size: 0x4, def value: None
 int32_t  ChunkCount;

/// @brief Field InstanceCount, offset: 0x20, size: 0x4, def value: None
 int32_t  InstanceCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::ArchetypeStore_InstanceManager_PerArchetypeData, Key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ArchetypeStore_InstanceManager_PerArchetypeData, Version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ArchetypeStore_InstanceManager_PerArchetypeData, ChunkCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ArchetypeStore_InstanceManager_PerArchetypeData, InstanceCount) == 0x20, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::ArchetypeStore_InstanceManager_PerArchetypeData) == 0x24, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/ArchetypeStore/<>c
class CORDL_TYPE ArchetypeStore_InstanceManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::MA::Flora::ArchetypeStore_InstanceManager___c*  __9;

/// @brief Field <>9__5_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__5_1, put=setStaticF___9__5_1)) ::System::EventHandler*  __9__5_1;

/// @brief Field <>9__5_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__5_2, put=setStaticF___9__5_2)) ::System::EventHandler*  __9__5_2;

static inline ::MA::Flora::ArchetypeStore_InstanceManager___c* New_ctor() ;

/// @brief Method <Initialize>b__5_1, addr 0x18147b430, size 0x60, virtual false, abstract: false, final false
inline void _Initialize_b__5_1(::System::Object*  _, ::System::EventArgs*  __param_1) ;

/// @brief Method <Initialize>b__5_2, addr 0x18147b430, size 0x60, virtual false, abstract: false, final false
inline void _Initialize_b__5_2(::System::Object*  _, ::System::EventArgs*  __param_1) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::MA::Flora::ArchetypeStore_InstanceManager___c* getStaticF___9() ;

static inline ::System::EventHandler* getStaticF___9__5_1() ;

static inline ::System::EventHandler* getStaticF___9__5_2() ;

static inline void setStaticF___9(::MA::Flora::ArchetypeStore_InstanceManager___c*  value) ;

static inline void setStaticF___9__5_1(::System::EventHandler*  value) ;

static inline void setStaticF___9__5_2(::System::EventHandler*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArchetypeStore_InstanceManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArchetypeStore_InstanceManager___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ArchetypeStore_InstanceManager___c(ArchetypeStore_InstanceManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArchetypeStore_InstanceManager___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArchetypeStore_InstanceManager___c(ArchetypeStore_InstanceManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12928};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::ArchetypeStore_InstanceManager___c) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceManager/ChunkStore
struct CORDL_TYPE InstanceManager_ChunkStore {
public:
// Declarations
using PerChunkData = ::MA::Flora::ChunkStore_InstanceManager_PerChunkData;

using StaticIdentifier = ::MA::Flora::ChunkStore_InstanceManager_StaticIdentifier;

using __c = ::MA::Flora::ChunkStore_InstanceManager___c;

/// @brief Method Init, addr 0x18147b4c0, size 0xa0, virtual false, abstract: false, final false
static inline void Init(::MA::Flora::ChunkIndex  chunk) ;

/// @brief Method Initialize, addr 0x18147b560, size 0x1d0, virtual false, abstract: false, final false
static inline void Initialize() ;

/// @brief Method <Initialize>g__Shutdown|5_0, addr 0x18147b730, size 0x60, virtual false, abstract: false, final false
static inline void _Initialize_g__Shutdown_5_0() ;

/// @brief Method get_Data, addr 0x18147b790, size 0x30, virtual false, abstract: false, final false
static inline ::MA::Flora::ChunkStore_InstanceManager_PerChunkData* get_Data() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_ChunkStore() ;

// Ctor Parameters [CppParam { name: "m_PerChunkData", ty: "::MA::Flora::ChunkStore_InstanceManager_PerChunkData*", modifiers: "", def_value: None }]
constexpr InstanceManager_ChunkStore(::MA::Flora::ChunkStore_InstanceManager_PerChunkData*  m_PerChunkData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12933};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_PerChunkData, offset: 0x0, size: 0x8, def value: None
 ::MA::Flora::ChunkStore_InstanceManager_PerChunkData*  m_PerChunkData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceManager_ChunkStore, m_PerChunkData) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceManager_ChunkStore) == 0x8, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.InstanceManager::ChunkStore, Unity.Burst.SharedStatic`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceManager/ChunkStore/StaticIdentifier
#pragma pack(push, 0)
struct CORDL_TYPE ChunkStore_InstanceManager_StaticIdentifier {
public:
// Declarations
/// @brief Field Ref, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Ref, put=setStaticF_Ref)) ::Unity::Burst::SharedStatic_1<::MA::Flora::InstanceManager_ChunkStore>  Ref;

static inline ::Unity::Burst::SharedStatic_1<::MA::Flora::InstanceManager_ChunkStore> getStaticF_Ref() ;

static inline void setStaticF_Ref(::Unity::Burst::SharedStatic_1<::MA::Flora::InstanceManager_ChunkStore>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ChunkStore_InstanceManager_StaticIdentifier() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12930};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::MA::Flora::ChunkStore_InstanceManager_StaticIdentifier) == 0x1, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.ArchetypeIndex, MA.Flora.BatchAllocation, MA.Flora.BatchCullingAddresses
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceManager/ChunkStore/PerChunkData
struct CORDL_TYPE ChunkStore_InstanceManager_PerChunkData {
public:
// Declarations
/// @brief Method get_Default, addr 0x181485e70, size 0x40, virtual false, abstract: false, final false
static inline ::MA::Flora::ChunkStore_InstanceManager_PerChunkData get_Default() ;

// Ctor Parameters []
// @brief default ctor
constexpr ChunkStore_InstanceManager_PerChunkData() ;

// Ctor Parameters [CppParam { name: "Type", ty: "::MA::Flora::ArchetypeIndex", modifiers: "", def_value: None }, CppParam { name: "InstanceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "IndexInArchetype", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "IndexInArchetypeFreeSlotList", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "IndexInTemplateList", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "BatchAllocation", ty: "::MA::Flora::BatchAllocation", modifiers: "", def_value: None }, CppParam { name: "BatchDomainAddresses", ty: "::MA::Flora::BatchCullingAddresses", modifiers: "", def_value: None }]
constexpr ChunkStore_InstanceManager_PerChunkData(::MA::Flora::ArchetypeIndex  Type, int32_t  InstanceCount, int32_t  IndexInArchetype, int32_t  IndexInArchetypeFreeSlotList, int32_t  IndexInTemplateList, ::MA::Flora::BatchAllocation  BatchAllocation, ::MA::Flora::BatchCullingAddresses  BatchDomainAddresses) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12931};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field Type, offset: 0x0, size: 0x4, def value: None
 ::MA::Flora::ArchetypeIndex  Type;

/// @brief Field InstanceCount, offset: 0x4, size: 0x4, def value: None
 int32_t  InstanceCount;

/// @brief Field IndexInArchetype, offset: 0x8, size: 0x4, def value: None
 int32_t  IndexInArchetype;

/// @brief Field IndexInArchetypeFreeSlotList, offset: 0xc, size: 0x4, def value: None
 int32_t  IndexInArchetypeFreeSlotList;

/// @brief Field IndexInTemplateList, offset: 0x10, size: 0x4, def value: None
 int32_t  IndexInTemplateList;

/// @brief Field BatchAllocation, offset: 0x14, size: 0xc, def value: None
 ::MA::Flora::BatchAllocation  BatchAllocation;

/// @brief Field BatchDomainAddresses, offset: 0x20, size: 0x10, def value: None
 ::MA::Flora::BatchCullingAddresses  BatchDomainAddresses;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::ChunkStore_InstanceManager_PerChunkData, Type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ChunkStore_InstanceManager_PerChunkData, InstanceCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ChunkStore_InstanceManager_PerChunkData, IndexInArchetype) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ChunkStore_InstanceManager_PerChunkData, IndexInArchetypeFreeSlotList) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ChunkStore_InstanceManager_PerChunkData, IndexInTemplateList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ChunkStore_InstanceManager_PerChunkData, BatchAllocation) == 0x14, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ChunkStore_InstanceManager_PerChunkData, BatchDomainAddresses) == 0x20, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::ChunkStore_InstanceManager_PerChunkData) == 0x30, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/ChunkStore/<>c
class CORDL_TYPE ChunkStore_InstanceManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::MA::Flora::ChunkStore_InstanceManager___c*  __9;

/// @brief Field <>9__5_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__5_1, put=setStaticF___9__5_1)) ::System::EventHandler*  __9__5_1;

/// @brief Field <>9__5_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__5_2, put=setStaticF___9__5_2)) ::System::EventHandler*  __9__5_2;

static inline ::MA::Flora::ChunkStore_InstanceManager___c* New_ctor() ;

/// @brief Method <Initialize>b__5_1, addr 0x18147b730, size 0x60, virtual false, abstract: false, final false
inline void _Initialize_b__5_1(::System::Object*  _, ::System::EventArgs*  __param_1) ;

/// @brief Method <Initialize>b__5_2, addr 0x18147b730, size 0x60, virtual false, abstract: false, final false
inline void _Initialize_b__5_2(::System::Object*  _, ::System::EventArgs*  __param_1) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::MA::Flora::ChunkStore_InstanceManager___c* getStaticF___9() ;

static inline ::System::EventHandler* getStaticF___9__5_1() ;

static inline ::System::EventHandler* getStaticF___9__5_2() ;

static inline void setStaticF___9(::MA::Flora::ChunkStore_InstanceManager___c*  value) ;

static inline void setStaticF___9__5_1(::System::EventHandler*  value) ;

static inline void setStaticF___9__5_2(::System::EventHandler*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChunkStore_InstanceManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChunkStore_InstanceManager___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChunkStore_InstanceManager___c(ChunkStore_InstanceManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChunkStore_InstanceManager___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChunkStore_InstanceManager___c(ChunkStore_InstanceManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12932};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::ChunkStore_InstanceManager___c) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.ChunkIndex
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceManager/InstanceBatchInChunk
struct CORDL_TYPE InstanceManager_InstanceBatchInChunk {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_InstanceBatchInChunk() ;

// Ctor Parameters [CppParam { name: "Chunk", ty: "::MA::Flora::ChunkIndex", modifiers: "", def_value: None }, CppParam { name: "StartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InstanceManager_InstanceBatchInChunk(::MA::Flora::ChunkIndex  Chunk, int32_t  StartIndex, int32_t  Count) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12934};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field Chunk, offset: 0x0, size: 0x4, def value: None
 ::MA::Flora::ChunkIndex  Chunk;

/// @brief Field StartIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  StartIndex;

/// @brief Field Count, offset: 0x8, size: 0x4, def value: None
 int32_t  Count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceManager_InstanceBatchInChunk, Chunk) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_InstanceBatchInChunk, StartIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_InstanceBatchInChunk, Count) == 0x8, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceManager_InstanceBatchInChunk) == 0xc, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.ChunkIndex, MA.Flora.GraphicsMatrix, Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceManager/CopyLocalToWorldPreviousJob
struct CORDL_TYPE InstanceManager_CopyLocalToWorldPreviousJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0x18147bb60, size 0x310, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_CopyLocalToWorldPreviousJob() ;

// Ctor Parameters [CppParam { name: "Chunks", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "LocalToWorlds", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>", modifiers: "", def_value: None }, CppParam { name: "PrevLocalToWorlds", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>", modifiers: "", def_value: None }]
constexpr InstanceManager_CopyLocalToWorldPreviousJob(::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex>  Chunks, ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  LocalToWorlds, ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  PrevLocalToWorlds) noexcept;

/// @brief Field BatchSize offset 0xffffffff size 0x4
static constexpr int32_t  BatchSize{static_cast<int32_t>(0x10)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12935};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field Chunks, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex>  Chunks;

/// @brief Field LocalToWorlds, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  LocalToWorlds;

/// @brief Field PrevLocalToWorlds, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  PrevLocalToWorlds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceManager_CopyLocalToWorldPreviousJob, Chunks) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_CopyLocalToWorldPreviousJob, LocalToWorlds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_CopyLocalToWorldPreviousJob, PrevLocalToWorlds) == 0x20, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceManager_CopyLocalToWorldPreviousJob) == 0x30, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.TreeInTerrain
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceManager/TreeInTerrainIndexPair
struct CORDL_TYPE InstanceManager_TreeInTerrainIndexPair {
public:
// Declarations
/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::InstanceManager_TreeInTerrainIndexPair>"
constexpr operator  ::System::IComparable_1<::MA::Flora::InstanceManager_TreeInTerrainIndexPair>*() ;

/// @brief Method CompareTo, addr 0x181498aa0, size 0x70, virtual true, abstract: false, final true
inline int32_t CompareTo(::MA::Flora::InstanceManager_TreeInTerrainIndexPair  other) ;

/// @brief Convert to "::System::IComparable_1<::MA::Flora::InstanceManager_TreeInTerrainIndexPair>"
constexpr ::System::IComparable_1<::MA::Flora::InstanceManager_TreeInTerrainIndexPair>* i___System__IComparable_1___MA__Flora__InstanceManager_TreeInTerrainIndexPair_() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_TreeInTerrainIndexPair() ;

// Ctor Parameters [CppParam { name: "Tree", ty: "::MA::Flora::TreeInTerrain", modifiers: "", def_value: None }, CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InstanceManager_TreeInTerrainIndexPair(::MA::Flora::TreeInTerrain  Tree, int32_t  Index) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12936};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field Tree, offset: 0x0, size: 0x8, def value: None
 ::MA::Flora::TreeInTerrain  Tree;

/// @brief Field Index, offset: 0x8, size: 0x4, def value: None
 int32_t  Index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceManager_TreeInTerrainIndexPair, Tree) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_TreeInTerrainIndexPair, Index) == 0x8, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceManager_TreeInTerrainIndexPair) == 0xc, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.FloraLocalToWorld
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceManager/ContainerTransformBatch
struct CORDL_TYPE InstanceManager_ContainerTransformBatch {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_ContainerTransformBatch() ;

// Ctor Parameters [CppParam { name: "Slot", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "StartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ParentLocalToWorld", ty: "::MA::Flora::FloraLocalToWorld", modifiers: "", def_value: None }]
constexpr InstanceManager_ContainerTransformBatch(int32_t  Slot, int32_t  StartIndex, int32_t  Count, ::MA::Flora::FloraLocalToWorld  ParentLocalToWorld) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12937};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4c};

/// @brief Field Slot, offset: 0x0, size: 0x4, def value: None
 int32_t  Slot;

/// @brief Field StartIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  StartIndex;

/// @brief Field Count, offset: 0x8, size: 0x4, def value: None
 int32_t  Count;

/// @brief Field ParentLocalToWorld, offset: 0xc, size: 0x40, def value: None
 ::MA::Flora::FloraLocalToWorld  ParentLocalToWorld;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceManager_ContainerTransformBatch, Slot) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ContainerTransformBatch, StartIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ContainerTransformBatch, Count) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ContainerTransformBatch, ParentLocalToWorld) == 0xc, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceManager_ContainerTransformBatch) == 0x4c, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.AABB, MA.Flora.FloraInstanceHandle, MA.Flora.FloraInstanceTransform, MA.Flora.GraphicsMatrix, MA.Flora.InstanceManager::ContainerTransformBatch, MA.Flora.NativeBufferArray`1<T>, Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceManager/UpdateTrackedContainerTransformsJob
struct CORDL_TYPE InstanceManager_UpdateTrackedContainerTransformsJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr operator  ::Unity::Jobs::IJobFor*() ;

/// @brief Method Execute, addr 0x181499590, size 0x650, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_UpdateTrackedContainerTransformsJob() ;

// Ctor Parameters [CppParam { name: "Batches", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::InstanceManager_ContainerTransformBatch>", modifiers: "", def_value: None }, CppParam { name: "ContainerHandles", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraInstanceHandle>", modifiers: "", def_value: None }, CppParam { name: "ContainerLocalTransforms", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraInstanceTransform>", modifiers: "", def_value: None }, CppParam { name: "PrevLocalToWorlds", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>", modifiers: "", def_value: None }, CppParam { name: "LocalToWorlds", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>", modifiers: "", def_value: None }, CppParam { name: "InstanceAABBs", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::AABB>", modifiers: "", def_value: None }, CppParam { name: "MovedThisFrame", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "FlippedWinding", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }]
constexpr InstanceManager_UpdateTrackedContainerTransformsJob(::Unity::Collections::NativeArray_1<::MA::Flora::InstanceManager_ContainerTransformBatch>  Batches, ::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraInstanceHandle>  ContainerHandles, ::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraInstanceTransform>  ContainerLocalTransforms, ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  PrevLocalToWorlds, ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  LocalToWorlds, ::Unity::Collections::NativeArray_1<::MA::Flora::AABB>  InstanceAABBs, ::Unity::Collections::NativeArray_1<uint8_t>  MovedThisFrame, ::Unity::Collections::NativeArray_1<uint8_t>  FlippedWinding) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12938};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field Batches, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::InstanceManager_ContainerTransformBatch>  Batches;

/// @brief Field ContainerHandles, offset: 0x10, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraInstanceHandle>  ContainerHandles;

/// @brief Field ContainerLocalTransforms, offset: 0x20, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraInstanceTransform>  ContainerLocalTransforms;

/// @brief Field PrevLocalToWorlds, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  PrevLocalToWorlds;

/// @brief Field LocalToWorlds, offset: 0x40, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  LocalToWorlds;

/// @brief Field InstanceAABBs, offset: 0x50, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::AABB>  InstanceAABBs;

/// @brief Field MovedThisFrame, offset: 0x60, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  MovedThisFrame;

/// @brief Field FlippedWinding, offset: 0x70, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  FlippedWinding;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceManager_UpdateTrackedContainerTransformsJob, Batches) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_UpdateTrackedContainerTransformsJob, ContainerHandles) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_UpdateTrackedContainerTransformsJob, ContainerLocalTransforms) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_UpdateTrackedContainerTransformsJob, PrevLocalToWorlds) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_UpdateTrackedContainerTransformsJob, LocalToWorlds) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_UpdateTrackedContainerTransformsJob, InstanceAABBs) == 0x50, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_UpdateTrackedContainerTransformsJob, MovedThisFrame) == 0x60, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_UpdateTrackedContainerTransformsJob, FlippedWinding) == 0x70, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceManager_UpdateTrackedContainerTransformsJob) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.ArchetypeIndex, MA.Flora.PackedArchetypeData, Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceManager/ScatterArchetypeDataJob
struct CORDL_TYPE InstanceManager_ScatterArchetypeDataJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr operator  ::Unity::Jobs::IJobFor*() ;

/// @brief Method Execute, addr 0x181486be0, size 0x60, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_ScatterArchetypeDataJob() ;

// Ctor Parameters [CppParam { name: "Archetypes", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>", modifiers: "", def_value: None }, CppParam { name: "PackedArchetypeData", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::PackedArchetypeData>", modifiers: "", def_value: None }]
constexpr InstanceManager_ScatterArchetypeDataJob(::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>  Archetypes, ::Unity::Collections::NativeArray_1<::MA::Flora::PackedArchetypeData>  PackedArchetypeData) noexcept;

/// @brief Field BatchSize offset 0xffffffff size 0x4
static constexpr int32_t  BatchSize{static_cast<int32_t>(0x100)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12939};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Archetypes, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>  Archetypes;

/// @brief Field PackedArchetypeData, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::PackedArchetypeData>  PackedArchetypeData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceManager_ScatterArchetypeDataJob, Archetypes) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ScatterArchetypeDataJob, PackedArchetypeData) == 0x10, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceManager_ScatterArchetypeDataJob) == 0x20, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.ChunkIndex, MA.Flora.PackedChunkUploadHeader, Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceManager/ScatterRandomIdsJob
struct CORDL_TYPE InstanceManager_ScatterRandomIdsJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr operator  ::Unity::Jobs::IJobFor*() ;

/// @brief Method Execute, addr 0x181487190, size 0x110, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_ScatterRandomIdsJob() ;

// Ctor Parameters [CppParam { name: "Chunks", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "RandomValues", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "ChunkDataHeaders", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>", modifiers: "", def_value: None }, CppParam { name: "ScatterValues", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: None }]
constexpr InstanceManager_ScatterRandomIdsJob(::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex>  Chunks, ::Unity::Collections::NativeArray_1<float_t>  RandomValues, ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>  ChunkDataHeaders, ::Unity::Collections::NativeArray_1<float_t>  ScatterValues) noexcept;

/// @brief Field BatchSize offset 0xffffffff size 0x4
static constexpr int32_t  BatchSize{static_cast<int32_t>(0x8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12940};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field Chunks, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex>  Chunks;

/// @brief Field RandomValues, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<float_t>  RandomValues;

/// @brief Field ChunkDataHeaders, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>  ChunkDataHeaders;

/// @brief Field ScatterValues, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<float_t>  ScatterValues;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceManager_ScatterRandomIdsJob, Chunks) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ScatterRandomIdsJob, RandomValues) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ScatterRandomIdsJob, ChunkDataHeaders) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ScatterRandomIdsJob, ScatterValues) == 0x30, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceManager_ScatterRandomIdsJob) == 0x40, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.ChunkIndex, MA.Flora.PackedChunkUploadHeader, Unity.Collections.NativeArray`1<T>, Unity.Mathematics.float4
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceManager/ScatterVariationColorJob
struct CORDL_TYPE InstanceManager_ScatterVariationColorJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr operator  ::Unity::Jobs::IJobFor*() ;

/// @brief Method Execute, addr 0x181486ed0, size 0x110, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_ScatterVariationColorJob() ;

// Ctor Parameters [CppParam { name: "Chunks", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "VariationColors", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>", modifiers: "", def_value: None }, CppParam { name: "ChunkDataHeaders", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>", modifiers: "", def_value: None }, CppParam { name: "ScatterValues", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>", modifiers: "", def_value: None }]
constexpr InstanceManager_ScatterVariationColorJob(::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex>  Chunks, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  VariationColors, ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>  ChunkDataHeaders, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  ScatterValues) noexcept;

/// @brief Field BatchSize offset 0xffffffff size 0x4
static constexpr int32_t  BatchSize{static_cast<int32_t>(0x8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12941};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field Chunks, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex>  Chunks;

/// @brief Field VariationColors, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  VariationColors;

/// @brief Field ChunkDataHeaders, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>  ChunkDataHeaders;

/// @brief Field ScatterValues, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  ScatterValues;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceManager_ScatterVariationColorJob, Chunks) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ScatterVariationColorJob, VariationColors) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ScatterVariationColorJob, ChunkDataHeaders) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ScatterVariationColorJob, ScatterValues) == 0x30, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceManager_ScatterVariationColorJob) == 0x40, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.ChunkIndex, MA.Flora.PackedChunkUploadHeader, Unity.Collections.NativeArray`1<T>, Unity.Mathematics.float4
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceManager/ScatterLightmapSTJob
struct CORDL_TYPE InstanceManager_ScatterLightmapSTJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr operator  ::Unity::Jobs::IJobFor*() ;

/// @brief Method Execute, addr 0x181486ed0, size 0x110, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_ScatterLightmapSTJob() ;

// Ctor Parameters [CppParam { name: "Chunks", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "LightmapSTs", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>", modifiers: "", def_value: None }, CppParam { name: "ChunkDataHeaders", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>", modifiers: "", def_value: None }, CppParam { name: "ScatterValues", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>", modifiers: "", def_value: None }]
constexpr InstanceManager_ScatterLightmapSTJob(::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex>  Chunks, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  LightmapSTs, ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>  ChunkDataHeaders, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  ScatterValues) noexcept;

/// @brief Field BatchSize offset 0xffffffff size 0x4
static constexpr int32_t  BatchSize{static_cast<int32_t>(0x8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12942};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field Chunks, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex>  Chunks;

/// @brief Field LightmapSTs, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  LightmapSTs;

/// @brief Field ChunkDataHeaders, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>  ChunkDataHeaders;

/// @brief Field ScatterValues, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  ScatterValues;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceManager_ScatterLightmapSTJob, Chunks) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ScatterLightmapSTJob, LightmapSTs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ScatterLightmapSTJob, ChunkDataHeaders) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ScatterLightmapSTJob, ScatterValues) == 0x30, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceManager_ScatterLightmapSTJob) == 0x40, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.ChunkIndex, MA.Flora.GraphicsMatrix, MA.Flora.PackedChunkUploadHeader, Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceManager/ScatterStaticMatricesJob
struct CORDL_TYPE InstanceManager_ScatterStaticMatricesJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr operator  ::Unity::Jobs::IJobFor*() ;

/// @brief Method Execute, addr 0x1814872a0, size 0x110, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_ScatterStaticMatricesJob() ;

// Ctor Parameters [CppParam { name: "Chunks", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "InstanceLocalToWorld", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>", modifiers: "", def_value: None }, CppParam { name: "ChunkDataHeaders", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>", modifiers: "", def_value: None }, CppParam { name: "ScatterValues", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>", modifiers: "", def_value: None }]
constexpr InstanceManager_ScatterStaticMatricesJob(::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex>  Chunks, ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  InstanceLocalToWorld, ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>  ChunkDataHeaders, ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  ScatterValues) noexcept;

/// @brief Field BatchSize offset 0xffffffff size 0x4
static constexpr int32_t  BatchSize{static_cast<int32_t>(0x8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12943};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field Chunks, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex>  Chunks;

/// @brief Field InstanceLocalToWorld, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  InstanceLocalToWorld;

/// @brief Field ChunkDataHeaders, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>  ChunkDataHeaders;

/// @brief Field ScatterValues, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  ScatterValues;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceManager_ScatterStaticMatricesJob, Chunks) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ScatterStaticMatricesJob, InstanceLocalToWorld) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ScatterStaticMatricesJob, ChunkDataHeaders) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ScatterStaticMatricesJob, ScatterValues) == 0x30, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceManager_ScatterStaticMatricesJob) == 0x40, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.ChunkIndex, MA.Flora.GraphicsMatrix, MA.Flora.PackedChunkUploadHeader, Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceManager/ScatterInitDynamicMatricesJob
struct CORDL_TYPE InstanceManager_ScatterInitDynamicMatricesJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr operator  ::Unity::Jobs::IJobFor*() ;

/// @brief Method Execute, addr 0x181486d50, size 0x180, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_ScatterInitDynamicMatricesJob() ;

// Ctor Parameters [CppParam { name: "Chunks", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "InstanceLocalToWorld", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>", modifiers: "", def_value: None }, CppParam { name: "InstancePrevLocalToWorld", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>", modifiers: "", def_value: None }, CppParam { name: "ChunkDataHeaders", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>", modifiers: "", def_value: None }, CppParam { name: "ScatterValues", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>", modifiers: "", def_value: None }]
constexpr InstanceManager_ScatterInitDynamicMatricesJob(::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex>  Chunks, ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  InstanceLocalToWorld, ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  InstancePrevLocalToWorld, ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>  ChunkDataHeaders, ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  ScatterValues) noexcept;

/// @brief Field BatchSize offset 0xffffffff size 0x4
static constexpr int32_t  BatchSize{static_cast<int32_t>(0x8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12944};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field Chunks, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex>  Chunks;

/// @brief Field InstanceLocalToWorld, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  InstanceLocalToWorld;

/// @brief Field InstancePrevLocalToWorld, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  InstancePrevLocalToWorld;

/// @brief Field ChunkDataHeaders, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>  ChunkDataHeaders;

/// @brief Field ScatterValues, offset: 0x40, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  ScatterValues;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceManager_ScatterInitDynamicMatricesJob, Chunks) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ScatterInitDynamicMatricesJob, InstanceLocalToWorld) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ScatterInitDynamicMatricesJob, InstancePrevLocalToWorld) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ScatterInitDynamicMatricesJob, ChunkDataHeaders) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ScatterInitDynamicMatricesJob, ScatterValues) == 0x40, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceManager_ScatterInitDynamicMatricesJob) == 0x50, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.ChunkIndex, MA.Flora.GraphicsMatrix, MA.Flora.PackedChunkUploadHeader, Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceManager/ScatterUpdateDynamicMatricesJob
struct CORDL_TYPE InstanceManager_ScatterUpdateDynamicMatricesJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr operator  ::Unity::Jobs::IJobFor*() ;

/// @brief Method Execute, addr 0x1814872a0, size 0x110, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_ScatterUpdateDynamicMatricesJob() ;

// Ctor Parameters [CppParam { name: "Chunks", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "InstanceLocalToWorld", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>", modifiers: "", def_value: None }, CppParam { name: "ChunkDataHeaders", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>", modifiers: "", def_value: None }, CppParam { name: "ScatterValues", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>", modifiers: "", def_value: None }]
constexpr InstanceManager_ScatterUpdateDynamicMatricesJob(::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex>  Chunks, ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  InstanceLocalToWorld, ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>  ChunkDataHeaders, ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  ScatterValues) noexcept;

/// @brief Field BatchSize offset 0xffffffff size 0x4
static constexpr int32_t  BatchSize{static_cast<int32_t>(0x8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12945};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field Chunks, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex>  Chunks;

/// @brief Field InstanceLocalToWorld, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  InstanceLocalToWorld;

/// @brief Field ChunkDataHeaders, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>  ChunkDataHeaders;

/// @brief Field ScatterValues, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  ScatterValues;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceManager_ScatterUpdateDynamicMatricesJob, Chunks) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ScatterUpdateDynamicMatricesJob, InstanceLocalToWorld) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ScatterUpdateDynamicMatricesJob, ChunkDataHeaders) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ScatterUpdateDynamicMatricesJob, ScatterValues) == 0x30, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceManager_ScatterUpdateDynamicMatricesJob) == 0x40, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.ChunkIndex, MA.Flora.GraphicsMatrix, Unity.Collections.NativeArray`1<T>, UnityEngine.Vector3
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceManager/GatherProbePositionsJob
struct CORDL_TYPE InstanceManager_GatherProbePositionsJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr operator  ::Unity::Jobs::IJobFor*() ;

/// @brief Method Execute, addr 0x18147dd80, size 0x320, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_GatherProbePositionsJob() ;

// Ctor Parameters [CppParam { name: "Chunks", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "InstanceLocalToWorld", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>", modifiers: "", def_value: None }, CppParam { name: "GatheredPositions", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None }]
constexpr InstanceManager_GatherProbePositionsJob(::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex>  Chunks, ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  InstanceLocalToWorld, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  GatheredPositions) noexcept;

/// @brief Field BatchSize offset 0xffffffff size 0x4
static constexpr int32_t  BatchSize{static_cast<int32_t>(0x8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12946};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field Chunks, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex>  Chunks;

/// @brief Field InstanceLocalToWorld, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  InstanceLocalToWorld;

/// @brief Field GatheredPositions, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  GatheredPositions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceManager_GatherProbePositionsJob, Chunks) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_GatherProbePositionsJob, InstanceLocalToWorld) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_GatherProbePositionsJob, GatheredPositions) == 0x20, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceManager_GatherProbePositionsJob) == 0x30, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.ChunkIndex, MA.Flora.PackedChunkUploadHeader, Unity.Collections.NativeArray`1<T>, UnityEngine.LightProbesQuery, UnityEngine.Rendering.SphericalHarmonicsL2, UnityEngine.Vector3, UnityEngine.Vector4
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceManager/ScatterProbeDataJob
struct CORDL_TYPE InstanceManager_ScatterProbeDataJob {
public:
// Declarations
/// @brief Field GPUSizeInBytes, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_GPUSizeInBytes, put=setStaticF_GPUSizeInBytes)) int32_t  GPUSizeInBytes;

/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr operator  ::Unity::Jobs::IJobFor*() ;

/// @brief Method Execute, addr 0x181486fe0, size 0x180, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

static inline int32_t getStaticF_GPUSizeInBytes() ;

/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor() ;

static inline void setStaticF_GPUSizeInBytes(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_ScatterProbeDataJob() ;

// Ctor Parameters [CppParam { name: "Chunks", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "QueryPositions", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None }, CppParam { name: "LightProbesQuery", ty: "::UnityEngine::LightProbesQuery", modifiers: "", def_value: None }, CppParam { name: "ChunkDataHeaders", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>", modifiers: "", def_value: None }, CppParam { name: "CompactTetrahedronCache", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "ProbesSphericalHarmonics", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2>", modifiers: "", def_value: None }, CppParam { name: "ProbesOcclusion", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>", modifiers: "", def_value: None }]
constexpr InstanceManager_ScatterProbeDataJob(::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex>  Chunks, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  QueryPositions, ::UnityEngine::LightProbesQuery  LightProbesQuery, ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>  ChunkDataHeaders, ::Unity::Collections::NativeArray_1<int32_t>  CompactTetrahedronCache, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2>  ProbesSphericalHarmonics, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  ProbesOcclusion) noexcept;

/// @brief Field BatchSize offset 0xffffffff size 0x4
static constexpr int32_t  BatchSize{static_cast<int32_t>(0x8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12947};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field Chunks, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex>  Chunks;

/// @brief Field QueryPositions, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  QueryPositions;

/// @brief Field LightProbesQuery, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::LightProbesQuery  LightProbesQuery;

/// @brief Field ChunkDataHeaders, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>  ChunkDataHeaders;

/// @brief Field CompactTetrahedronCache, offset: 0x40, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  CompactTetrahedronCache;

/// @brief Field ProbesSphericalHarmonics, offset: 0x50, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2>  ProbesSphericalHarmonics;

/// @brief Field ProbesOcclusion, offset: 0x60, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  ProbesOcclusion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceManager_ScatterProbeDataJob, Chunks) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ScatterProbeDataJob, QueryPositions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ScatterProbeDataJob, LightProbesQuery) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ScatterProbeDataJob, ChunkDataHeaders) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ScatterProbeDataJob, CompactTetrahedronCache) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ScatterProbeDataJob, ProbesSphericalHarmonics) == 0x50, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ScatterProbeDataJob, ProbesOcclusion) == 0x60, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceManager_ScatterProbeDataJob) == 0x70, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.ChunkIndex, MA.Flora.PackedChunkUploadHeader, Unity.Collections.NativeArray`1<T>, Unity.Mathematics.uint2
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceManager/ScatterEntityIdsJob
struct CORDL_TYPE InstanceManager_ScatterEntityIdsJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr operator  ::Unity::Jobs::IJobFor*() ;

/// @brief Method Execute, addr 0x181486c40, size 0x110, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_ScatterEntityIdsJob() ;

// Ctor Parameters [CppParam { name: "Chunks", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "InstanceHandles", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::uint2>", modifiers: "", def_value: None }, CppParam { name: "ChunkDataHeaders", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>", modifiers: "", def_value: None }, CppParam { name: "ScatterValues", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::uint2>", modifiers: "", def_value: None }]
constexpr InstanceManager_ScatterEntityIdsJob(::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex>  Chunks, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::uint2>  InstanceHandles, ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>  ChunkDataHeaders, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::uint2>  ScatterValues) noexcept;

/// @brief Field BatchSize offset 0xffffffff size 0x4
static constexpr int32_t  BatchSize{static_cast<int32_t>(0x8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12948};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field Chunks, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex>  Chunks;

/// @brief Field InstanceHandles, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::uint2>  InstanceHandles;

/// @brief Field ChunkDataHeaders, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>  ChunkDataHeaders;

/// @brief Field ScatterValues, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::uint2>  ScatterValues;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceManager_ScatterEntityIdsJob, Chunks) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ScatterEntityIdsJob, InstanceHandles) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ScatterEntityIdsJob, ChunkDataHeaders) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ScatterEntityIdsJob, ScatterValues) == 0x30, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceManager_ScatterEntityIdsJob) == 0x40, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.PackedChunkUploadHeader, Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.SphericalHarmonicsL2, UnityEngine.Vector4
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceManager/ChunkLightProbeScatterData
struct CORDL_TYPE InstanceManager_ChunkLightProbeScatterData {
public:
// Declarations
 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Method get_IsCreated, addr 0x1802ff710, size 0x10, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_ChunkLightProbeScatterData() ;

// Ctor Parameters [CppParam { name: "ChunkHeaders", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>", modifiers: "", def_value: None }, CppParam { name: "SH", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2>", modifiers: "", def_value: None }, CppParam { name: "Occlusion", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>", modifiers: "", def_value: None }]
constexpr InstanceManager_ChunkLightProbeScatterData(::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>  ChunkHeaders, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2>  SH, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  Occlusion) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12949};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field ChunkHeaders, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>  ChunkHeaders;

/// @brief Field SH, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2>  SH;

/// @brief Field Occlusion, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  Occlusion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceManager_ChunkLightProbeScatterData, ChunkHeaders) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ChunkLightProbeScatterData, SH) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ChunkLightProbeScatterData, Occlusion) == 0x20, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceManager_ChunkLightProbeScatterData) == 0x30, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.FloraLocalToWorld, MA.Flora.InstanceTag, MA.Flora.SourceRecordIndex, MA.Flora.TemplateIndex, Unity.Mathematics.float4, UnityEngine.EntityId, UnityEngine.SceneManagement.Scene
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceManager/InstantiateParams
struct CORDL_TYPE InstanceManager_InstantiateParams {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_InstantiateParams() ;

// Ctor Parameters [CppParam { name: "AdditionalTags", ty: "::MA::Flora::InstanceTag", modifiers: "", def_value: None }, CppParam { name: "Scene", ty: "::UnityEngine::SceneManagement::Scene", modifiers: "", def_value: None }, CppParam { name: "SourceRecord", ty: "::MA::Flora::SourceRecordIndex", modifiers: "", def_value: None }, CppParam { name: "Template", ty: "::MA::Flora::TemplateIndex", modifiers: "", def_value: None }, CppParam { name: "SceneEntityId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None }, CppParam { name: "TerrainDetailLayerIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ContainerEntity", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None }, CppParam { name: "UnityRendererID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "LightmapIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Layer", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "MaxRenderDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "LightmapST", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "SceneCullingMask", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "HasLocalToWorld", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "ParentLocalToWorld", ty: "::MA::Flora::FloraLocalToWorld", modifiers: "", def_value: None }]
constexpr InstanceManager_InstantiateParams(::MA::Flora::InstanceTag  AdditionalTags, ::UnityEngine::SceneManagement::Scene  Scene, ::MA::Flora::SourceRecordIndex  SourceRecord, ::MA::Flora::TemplateIndex  Template, ::UnityEngine::EntityId  SceneEntityId, int32_t  TerrainDetailLayerIndex, ::UnityEngine::EntityId  ContainerEntity, int32_t  UnityRendererID, int32_t  LightmapIndex, uint8_t  Layer, float_t  MaxRenderDistance, ::Unity::Mathematics::float4  LightmapST, uint64_t  SceneCullingMask, bool  HasLocalToWorld, ::MA::Flora::FloraLocalToWorld  ParentLocalToWorld) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12950};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field AdditionalTags, offset: 0x0, size: 0x4, def value: None
 ::MA::Flora::InstanceTag  AdditionalTags;

/// @brief Field Scene, offset: 0x4, size: 0x4, def value: None
 ::UnityEngine::SceneManagement::Scene  Scene;

/// @brief Field SourceRecord, offset: 0x8, size: 0x4, def value: None
 ::MA::Flora::SourceRecordIndex  SourceRecord;

/// @brief Field Template, offset: 0xc, size: 0x4, def value: None
 ::MA::Flora::TemplateIndex  Template;

/// @brief Field SceneEntityId, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::EntityId  SceneEntityId;

/// @brief Field TerrainDetailLayerIndex, offset: 0x14, size: 0x4, def value: None
 int32_t  TerrainDetailLayerIndex;

/// @brief Field ContainerEntity, offset: 0x18, size: 0x4, def value: None
 ::UnityEngine::EntityId  ContainerEntity;

/// @brief Field UnityRendererID, offset: 0x1c, size: 0x4, def value: None
 int32_t  UnityRendererID;

/// @brief Field LightmapIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  LightmapIndex;

/// @brief Field Layer, offset: 0x24, size: 0x1, def value: None
 uint8_t  Layer;

/// @brief Field MaxRenderDistance, offset: 0x28, size: 0x4, def value: None
 float_t  MaxRenderDistance;

/// @brief Field LightmapST, offset: 0x2c, size: 0x10, def value: None
 ::Unity::Mathematics::float4  LightmapST;

/// @brief Field SceneCullingMask, offset: 0x40, size: 0x8, def value: None
 uint64_t  SceneCullingMask;

/// @brief Field HasLocalToWorld, offset: 0x48, size: 0x1, def value: None
 bool  HasLocalToWorld;

/// @brief Field ParentLocalToWorld, offset: 0x4c, size: 0x40, def value: None
 ::MA::Flora::FloraLocalToWorld  ParentLocalToWorld;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceManager_InstantiateParams, AdditionalTags) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_InstantiateParams, Scene) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_InstantiateParams, SourceRecord) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_InstantiateParams, Template) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_InstantiateParams, SceneEntityId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_InstantiateParams, TerrainDetailLayerIndex) == 0x14, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_InstantiateParams, ContainerEntity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_InstantiateParams, UnityRendererID) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_InstantiateParams, LightmapIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_InstantiateParams, Layer) == 0x24, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_InstantiateParams, MaxRenderDistance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_InstantiateParams, LightmapST) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_InstantiateParams, SceneCullingMask) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_InstantiateParams, HasLocalToWorld) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_InstantiateParams, ParentLocalToWorld) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceManager_InstantiateParams) == 0x90, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.AABB, MA.Flora.AABBMinMax, MA.Flora.FloraInstanceHandle, Unity.Collections.NativeArray`1::ReadOnly<T>, Unity.Collections.NativeArray`1<T>, Unity.Mathematics.float4x4
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceManager/ComputeBoundsForInstancesJob
struct CORDL_TYPE InstanceManager_ComputeBoundsForInstancesJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr operator  ::Unity::Jobs::IJobFor*() ;

/// @brief Method Execute, addr 0x18147b7c0, size 0x3a0, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_ComputeBoundsForInstancesJob() ;

// Ctor Parameters [CppParam { name: "HasInSpace", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "InSpace", ty: "::Unity::Mathematics::float4x4", modifiers: "", def_value: None }, CppParam { name: "Instances", ty: "::Unity::Collections::NativeArray_1_ReadOnly<::MA::Flora::FloraInstanceHandle>", modifiers: "", def_value: None }, CppParam { name: "InstanceBounds", ty: "::Unity::Collections::NativeArray_1_ReadOnly<::MA::Flora::AABB>", modifiers: "", def_value: None }, CppParam { name: "BoundsPerThread", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::AABBMinMax>", modifiers: "", def_value: None }, CppParam { name: "m_ThreadIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InstanceManager_ComputeBoundsForInstancesJob(bool  HasInSpace, ::Unity::Mathematics::float4x4  InSpace, ::Unity::Collections::NativeArray_1_ReadOnly<::MA::Flora::FloraInstanceHandle>  Instances, ::Unity::Collections::NativeArray_1_ReadOnly<::MA::Flora::AABB>  InstanceBounds, ::Unity::Collections::NativeArray_1<::MA::Flora::AABBMinMax>  BoundsPerThread, int32_t  m_ThreadIndex) noexcept;

/// @brief Field BatchSize offset 0xffffffff size 0x4
static constexpr int32_t  BatchSize{static_cast<int32_t>(0x80)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12951};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field HasInSpace, offset: 0x0, size: 0x1, def value: None
 bool  HasInSpace;

/// @brief Field InSpace, offset: 0x4, size: 0x40, def value: None
 ::Unity::Mathematics::float4x4  InSpace;

/// @brief Field Instances, offset: 0x48, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1_ReadOnly<::MA::Flora::FloraInstanceHandle>  Instances;

/// @brief Field InstanceBounds, offset: 0x58, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1_ReadOnly<::MA::Flora::AABB>  InstanceBounds;

/// @brief Field BoundsPerThread, offset: 0x68, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::AABBMinMax>  BoundsPerThread;

/// @brief Field m_ThreadIndex, offset: 0x78, size: 0x4, def value: None
 int32_t  m_ThreadIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceManager_ComputeBoundsForInstancesJob, HasInSpace) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ComputeBoundsForInstancesJob, InSpace) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ComputeBoundsForInstancesJob, Instances) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ComputeBoundsForInstancesJob, InstanceBounds) == 0x58, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ComputeBoundsForInstancesJob, BoundsPerThread) == 0x68, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_ComputeBoundsForInstancesJob, m_ThreadIndex) == 0x78, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceManager_ComputeBoundsForInstancesJob) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.InstanceInContainer
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceManager/InstanceInContainerIndexPair
struct CORDL_TYPE InstanceManager_InstanceInContainerIndexPair {
public:
// Declarations
/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::InstanceManager_InstanceInContainerIndexPair>"
constexpr operator  ::System::IComparable_1<::MA::Flora::InstanceManager_InstanceInContainerIndexPair>*() ;

/// @brief Method CompareTo, addr 0x1814821c0, size 0x70, virtual true, abstract: false, final true
inline int32_t CompareTo(::MA::Flora::InstanceManager_InstanceInContainerIndexPair  other) ;

/// @brief Convert to "::System::IComparable_1<::MA::Flora::InstanceManager_InstanceInContainerIndexPair>"
constexpr ::System::IComparable_1<::MA::Flora::InstanceManager_InstanceInContainerIndexPair>* i___System__IComparable_1___MA__Flora__InstanceManager_InstanceInContainerIndexPair_() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_InstanceInContainerIndexPair() ;

// Ctor Parameters [CppParam { name: "Instance", ty: "::MA::Flora::InstanceInContainer", modifiers: "", def_value: None }, CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InstanceManager_InstanceInContainerIndexPair(::MA::Flora::InstanceInContainer  Instance, int32_t  Index) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12952};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field Instance, offset: 0x0, size: 0x8, def value: None
 ::MA::Flora::InstanceInContainer  Instance;

/// @brief Field Index, offset: 0x8, size: 0x4, def value: None
 int32_t  Index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceManager_InstanceInContainerIndexPair, Instance) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_InstanceInContainerIndexPair, Index) == 0x8, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceManager_InstanceInContainerIndexPair) == 0xc, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.AABB, MA.Flora.FloraInstanceHandle, MA.Flora.FloraLocalToWorld, MA.Flora.GraphicsMatrix, Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceManager/UpdateLocalToWorldsJob
struct CORDL_TYPE InstanceManager_UpdateLocalToWorldsJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
constexpr operator  ::Unity::Jobs::IJobParallelForBatch*() ;

/// @brief Method Execute, addr 0x181498c40, size 0x490, virtual true, abstract: false, final true
inline void Execute(int32_t  startIndex, int32_t  count) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
constexpr ::Unity::Jobs::IJobParallelForBatch* i___Unity__Jobs__IJobParallelForBatch() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_UpdateLocalToWorldsJob() ;

// Ctor Parameters [CppParam { name: "InputInstances", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>", modifiers: "", def_value: None }, CppParam { name: "InputLocalToWorlds", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>", modifiers: "", def_value: None }, CppParam { name: "PrevLocalToWorlds", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>", modifiers: "", def_value: None }, CppParam { name: "LocalToWorlds", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>", modifiers: "", def_value: None }, CppParam { name: "InstanceAABBs", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::AABB>", modifiers: "", def_value: None }, CppParam { name: "MovedThisFrame", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "FlippedWinding", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }]
constexpr InstanceManager_UpdateLocalToWorldsJob(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  InputInstances, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>  InputLocalToWorlds, ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  PrevLocalToWorlds, ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  LocalToWorlds, ::Unity::Collections::NativeArray_1<::MA::Flora::AABB>  InstanceAABBs, ::Unity::Collections::NativeArray_1<uint8_t>  MovedThisFrame, ::Unity::Collections::NativeArray_1<uint8_t>  FlippedWinding) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12953};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field InputInstances, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  InputInstances;

/// @brief Field InputLocalToWorlds, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>  InputLocalToWorlds;

/// @brief Field PrevLocalToWorlds, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  PrevLocalToWorlds;

/// @brief Field LocalToWorlds, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  LocalToWorlds;

/// @brief Field InstanceAABBs, offset: 0x40, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::AABB>  InstanceAABBs;

/// @brief Field MovedThisFrame, offset: 0x50, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  MovedThisFrame;

/// @brief Field FlippedWinding, offset: 0x60, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  FlippedWinding;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceManager_UpdateLocalToWorldsJob, InputInstances) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_UpdateLocalToWorldsJob, InputLocalToWorlds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_UpdateLocalToWorldsJob, PrevLocalToWorlds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_UpdateLocalToWorldsJob, LocalToWorlds) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_UpdateLocalToWorldsJob, InstanceAABBs) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_UpdateLocalToWorldsJob, MovedThisFrame) == 0x50, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_UpdateLocalToWorldsJob, FlippedWinding) == 0x60, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceManager_UpdateLocalToWorldsJob) == 0x70, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.AABB, MA.Flora.FloraInstanceHandle, MA.Flora.FloraInstanceTransform, MA.Flora.GraphicsMatrix, Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceManager/UpdateWorldTransformsJob
struct CORDL_TYPE InstanceManager_UpdateWorldTransformsJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
constexpr operator  ::Unity::Jobs::IJobParallelForBatch*() ;

/// @brief Method Execute, addr 0x181499be0, size 0x4b0, virtual true, abstract: false, final true
inline void Execute(int32_t  startIndex, int32_t  count) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
constexpr ::Unity::Jobs::IJobParallelForBatch* i___Unity__Jobs__IJobParallelForBatch() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_UpdateWorldTransformsJob() ;

// Ctor Parameters [CppParam { name: "InputInstances", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>", modifiers: "", def_value: None }, CppParam { name: "InputTransforms", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>", modifiers: "", def_value: None }, CppParam { name: "PrevLocalToWorlds", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>", modifiers: "", def_value: None }, CppParam { name: "LocalToWorlds", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>", modifiers: "", def_value: None }, CppParam { name: "InstanceAABBs", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::AABB>", modifiers: "", def_value: None }, CppParam { name: "MovedThisFrame", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "FlippedWinding", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }]
constexpr InstanceManager_UpdateWorldTransformsJob(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  InputInstances, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  InputTransforms, ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  PrevLocalToWorlds, ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  LocalToWorlds, ::Unity::Collections::NativeArray_1<::MA::Flora::AABB>  InstanceAABBs, ::Unity::Collections::NativeArray_1<uint8_t>  MovedThisFrame, ::Unity::Collections::NativeArray_1<uint8_t>  FlippedWinding) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12954};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field InputInstances, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  InputInstances;

/// @brief Field InputTransforms, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  InputTransforms;

/// @brief Field PrevLocalToWorlds, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  PrevLocalToWorlds;

/// @brief Field LocalToWorlds, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  LocalToWorlds;

/// @brief Field InstanceAABBs, offset: 0x40, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::AABB>  InstanceAABBs;

/// @brief Field MovedThisFrame, offset: 0x50, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  MovedThisFrame;

/// @brief Field FlippedWinding, offset: 0x60, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  FlippedWinding;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceManager_UpdateWorldTransformsJob, InputInstances) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_UpdateWorldTransformsJob, InputTransforms) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_UpdateWorldTransformsJob, PrevLocalToWorlds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_UpdateWorldTransformsJob, LocalToWorlds) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_UpdateWorldTransformsJob, InstanceAABBs) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_UpdateWorldTransformsJob, MovedThisFrame) == 0x50, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_UpdateWorldTransformsJob, FlippedWinding) == 0x60, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceManager_UpdateWorldTransformsJob) == 0x70, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.AABB, MA.Flora.FloraInstanceHandle, MA.Flora.FloraInstanceTransform, MA.Flora.FloraLocalToWorld, MA.Flora.GraphicsMatrix, Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceManager/UpdateLocalTransformsJob
struct CORDL_TYPE InstanceManager_UpdateLocalTransformsJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
constexpr operator  ::Unity::Jobs::IJobParallelForBatch*() ;

/// @brief Method Execute, addr 0x1814990d0, size 0x4c0, virtual true, abstract: false, final true
inline void Execute(int32_t  startIndex, int32_t  count) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
constexpr ::Unity::Jobs::IJobParallelForBatch* i___Unity__Jobs__IJobParallelForBatch() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_UpdateLocalTransformsJob() ;

// Ctor Parameters [CppParam { name: "ParentLocalToWorld", ty: "::MA::Flora::FloraLocalToWorld", modifiers: "", def_value: None }, CppParam { name: "InputInstances", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>", modifiers: "", def_value: None }, CppParam { name: "InputTransforms", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>", modifiers: "", def_value: None }, CppParam { name: "PrevLocalToWorlds", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>", modifiers: "", def_value: None }, CppParam { name: "LocalToWorlds", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>", modifiers: "", def_value: None }, CppParam { name: "InstanceAABBs", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::AABB>", modifiers: "", def_value: None }, CppParam { name: "MovedThisFrame", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "FlippedWinding", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }]
constexpr InstanceManager_UpdateLocalTransformsJob(::MA::Flora::FloraLocalToWorld  ParentLocalToWorld, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  InputInstances, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  InputTransforms, ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  PrevLocalToWorlds, ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  LocalToWorlds, ::Unity::Collections::NativeArray_1<::MA::Flora::AABB>  InstanceAABBs, ::Unity::Collections::NativeArray_1<uint8_t>  MovedThisFrame, ::Unity::Collections::NativeArray_1<uint8_t>  FlippedWinding) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12955};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xb0};

/// @brief Field ParentLocalToWorld, offset: 0x0, size: 0x40, def value: None
 ::MA::Flora::FloraLocalToWorld  ParentLocalToWorld;

/// @brief Field InputInstances, offset: 0x40, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  InputInstances;

/// @brief Field InputTransforms, offset: 0x50, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  InputTransforms;

/// @brief Field PrevLocalToWorlds, offset: 0x60, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  PrevLocalToWorlds;

/// @brief Field LocalToWorlds, offset: 0x70, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  LocalToWorlds;

/// @brief Field InstanceAABBs, offset: 0x80, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::AABB>  InstanceAABBs;

/// @brief Field MovedThisFrame, offset: 0x90, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  MovedThisFrame;

/// @brief Field FlippedWinding, offset: 0xa0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  FlippedWinding;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceManager_UpdateLocalTransformsJob, ParentLocalToWorld) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_UpdateLocalTransformsJob, InputInstances) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_UpdateLocalTransformsJob, InputTransforms) == 0x50, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_UpdateLocalTransformsJob, PrevLocalToWorlds) == 0x60, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_UpdateLocalTransformsJob, LocalToWorlds) == 0x70, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_UpdateLocalTransformsJob, InstanceAABBs) == 0x80, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_UpdateLocalTransformsJob, MovedThisFrame) == 0x90, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager_UpdateLocalTransformsJob, FlippedWinding) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceManager_UpdateLocalTransformsJob) == 0xb0, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/__InteropDelegates/_InstantiateTreesFromBurst_0_Delegate
class CORDL_TYPE __InteropDelegates_InstanceManager__InstantiateTreesFromBurst_0_Delegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18149a800, size 0xc0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::MA::Flora::InstanceManager*>  data, ::by_ref<::UnityEngine::EntityId>  terrainId, ::by_ref<::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::GameObject>>>  prefab, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>  matrices, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x18149a680, size 0xc0, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::MA::Flora::InstanceManager*>  data, ::by_ref<::UnityEngine::EntityId>  terrainId, ::by_ref<::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::GameObject>>>  prefab, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>  matrices, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x181308320, size 0xd10, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::MA::Flora::InstanceManager*>  data, ::by_ref<::UnityEngine::EntityId>  terrainId, ::by_ref<::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::GameObject>>>  prefab, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>  matrices) ;

static inline ::MA::Flora::__InteropDelegates_InstanceManager__InstantiateTreesFromBurst_0_Delegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18149a740, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __InteropDelegates_InstanceManager__InstantiateTreesFromBurst_0_Delegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__InteropDelegates_InstanceManager__InstantiateTreesFromBurst_0_Delegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InteropDelegates_InstanceManager__InstantiateTreesFromBurst_0_Delegate(__InteropDelegates_InstanceManager__InstantiateTreesFromBurst_0_Delegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InteropDelegates_InstanceManager__InstantiateTreesFromBurst_0_Delegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InteropDelegates_InstanceManager__InstantiateTreesFromBurst_0_Delegate(__InteropDelegates_InstanceManager__InstantiateTreesFromBurst_0_Delegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12956};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::__InteropDelegates_InstanceManager__InstantiateTreesFromBurst_0_Delegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/__InteropDelegates/_InstantiateDetailsFromBurstInternal_1_Delegate
class CORDL_TYPE __InteropDelegates_InstanceManager__InstantiateDetailsFromBurstInternal_1_Delegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18149a5d0, size 0xb0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::MA::Flora::InstanceManager*>  data, ::by_ref<::UnityEngine::EntityId>  terrain, ::by_ref<::MA::Flora::TerrainDetailPrototype*>  prototype, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>  matrices, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x18149a680, size 0xc0, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::MA::Flora::InstanceManager*>  data, ::by_ref<::UnityEngine::EntityId>  terrain, ::by_ref<::MA::Flora::TerrainDetailPrototype*>  prototype, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>  matrices, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x181308320, size 0xd10, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::MA::Flora::InstanceManager*>  data, ::by_ref<::UnityEngine::EntityId>  terrain, ::by_ref<::MA::Flora::TerrainDetailPrototype*>  prototype, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>  matrices) ;

static inline ::MA::Flora::__InteropDelegates_InstanceManager__InstantiateDetailsFromBurstInternal_1_Delegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18149a740, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __InteropDelegates_InstanceManager__InstantiateDetailsFromBurstInternal_1_Delegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__InteropDelegates_InstanceManager__InstantiateDetailsFromBurstInternal_1_Delegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InteropDelegates_InstanceManager__InstantiateDetailsFromBurstInternal_1_Delegate(__InteropDelegates_InstanceManager__InstantiateDetailsFromBurstInternal_1_Delegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InteropDelegates_InstanceManager__InstantiateDetailsFromBurstInternal_1_Delegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InteropDelegates_InstanceManager__InstantiateDetailsFromBurstInternal_1_Delegate(__InteropDelegates_InstanceManager__InstantiateDetailsFromBurstInternal_1_Delegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12957};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::__InteropDelegates_InstanceManager__InstantiateDetailsFromBurstInternal_1_Delegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/__InteropDelegates
class CORDL_TYPE InstanceManager___InteropDelegates : public ::System::Object {
public:
// Declarations
using _InstantiateDetailsFromBurstInternal_1_Delegate = ::MA::Flora::__InteropDelegates_InstanceManager__InstantiateDetailsFromBurstInternal_1_Delegate;

using _InstantiateTreesFromBurst_0_Delegate = ::MA::Flora::__InteropDelegates_InstanceManager__InstantiateTreesFromBurst_0_Delegate;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager___InteropDelegates() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager___InteropDelegates", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager___InteropDelegates(InstanceManager___InteropDelegates && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager___InteropDelegates", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager___InteropDelegates(InstanceManager___InteropDelegates const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12958};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager___InteropDelegates) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.InstanceManager::InstanceBatchInChunk
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceManager/<>c__DisplayClass380_0
struct CORDL_TYPE InstanceManager___c__DisplayClass380_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager___c__DisplayClass380_0() ;

// Ctor Parameters [CppParam { name: "instanceBatch", ty: "::MA::Flora::InstanceManager_InstanceBatchInChunk", modifiers: "", def_value: None }, CppParam { name: "srcLocalToWorlds", ty: "::MA::Flora::FloraLocalToWorld*", modifiers: "", def_value: None }, CppParam { name: "srcArrayStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "dstLocalToWorlds", ty: "::MA::Flora::FloraLocalToWorld*", modifiers: "", def_value: None }, CppParam { name: "dstArrayStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::MA::Flora::InstanceManager*", modifiers: "", def_value: None }]
constexpr InstanceManager___c__DisplayClass380_0(::MA::Flora::InstanceManager_InstanceBatchInChunk  instanceBatch, ::MA::Flora::FloraLocalToWorld*  srcLocalToWorlds, int32_t  srcArrayStart, ::MA::Flora::FloraLocalToWorld*  dstLocalToWorlds, int32_t  dstArrayStart, ::MA::Flora::InstanceManager*  data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12959};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field instanceBatch, offset: 0x0, size: 0xc, def value: None
 ::MA::Flora::InstanceManager_InstanceBatchInChunk  instanceBatch;

/// @brief Field srcLocalToWorlds, offset: 0x10, size: 0x8, def value: None
 ::MA::Flora::FloraLocalToWorld*  srcLocalToWorlds;

/// @brief Field srcArrayStart, offset: 0x18, size: 0x4, def value: None
 int32_t  srcArrayStart;

/// @brief Field dstLocalToWorlds, offset: 0x20, size: 0x8, def value: None
 ::MA::Flora::FloraLocalToWorld*  dstLocalToWorlds;

/// @brief Field dstArrayStart, offset: 0x28, size: 0x4, def value: None
 int32_t  dstArrayStart;

/// @brief Field data, offset: 0x30, size: 0x8, def value: None
 ::MA::Flora::InstanceManager*  data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceManager___c__DisplayClass380_0, instanceBatch) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager___c__DisplayClass380_0, srcLocalToWorlds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager___c__DisplayClass380_0, srcArrayStart) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager___c__DisplayClass380_0, dstLocalToWorlds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager___c__DisplayClass380_0, dstArrayStart) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager___c__DisplayClass380_0, data) == 0x30, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceManager___c__DisplayClass380_0) == 0x38, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/DestroyAllInstancesInSceneWithBurst_00000276$PostfixBurstDelegate
class CORDL_TYPE InstanceManager_DestroyAllInstancesInSceneWithBurst_00000276$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18147c220, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::MA::Flora::InstanceManager*  im, ::UnityEngine::SceneManagement::Scene  scene, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1804f6ae0, size 0xc0, virtual true, abstract: false, final false
inline void Invoke(::MA::Flora::InstanceManager*  im, ::UnityEngine::SceneManagement::Scene  scene) ;

static inline ::MA::Flora::InstanceManager_DestroyAllInstancesInSceneWithBurst_00000276$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x18147c2b0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_DestroyAllInstancesInSceneWithBurst_00000276$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_DestroyAllInstancesInSceneWithBurst_00000276$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_DestroyAllInstancesInSceneWithBurst_00000276$PostfixBurstDelegate(InstanceManager_DestroyAllInstancesInSceneWithBurst_00000276$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_DestroyAllInstancesInSceneWithBurst_00000276$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_DestroyAllInstancesInSceneWithBurst_00000276$PostfixBurstDelegate(InstanceManager_DestroyAllInstancesInSceneWithBurst_00000276$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12960};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_DestroyAllInstancesInSceneWithBurst_00000276$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/DestroyAllInstancesInSceneWithBurst_00000276$BurstDirectCall
class CORDL_TYPE InstanceManager_DestroyAllInstancesInSceneWithBurst_00000276$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x18147bfa0, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x18147be70, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x18147c0c0, size 0x160, virtual false, abstract: false, final false
static inline void Invoke(::MA::Flora::InstanceManager*  im, ::UnityEngine::SceneManagement::Scene  scene) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_DestroyAllInstancesInSceneWithBurst_00000276$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_DestroyAllInstancesInSceneWithBurst_00000276$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_DestroyAllInstancesInSceneWithBurst_00000276$BurstDirectCall(InstanceManager_DestroyAllInstancesInSceneWithBurst_00000276$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_DestroyAllInstancesInSceneWithBurst_00000276$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_DestroyAllInstancesInSceneWithBurst_00000276$BurstDirectCall(InstanceManager_DestroyAllInstancesInSceneWithBurst_00000276$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12961};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_DestroyAllInstancesInSceneWithBurst_00000276$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/SortInstanceInChunk_00000279$PostfixBurstDelegate
class CORDL_TYPE InstanceManager_SortInstanceInChunk_00000279$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x181488820, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::MA::Flora::InstanceInChunk*  instanceInChunks, int32_t  count, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1804f6ae0, size 0xc0, virtual true, abstract: false, final false
inline void Invoke(::MA::Flora::InstanceInChunk*  instanceInChunks, int32_t  count) ;

static inline ::MA::Flora::InstanceManager_SortInstanceInChunk_00000279$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1814888b0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_SortInstanceInChunk_00000279$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_SortInstanceInChunk_00000279$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_SortInstanceInChunk_00000279$PostfixBurstDelegate(InstanceManager_SortInstanceInChunk_00000279$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_SortInstanceInChunk_00000279$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_SortInstanceInChunk_00000279$PostfixBurstDelegate(InstanceManager_SortInstanceInChunk_00000279$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12962};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_SortInstanceInChunk_00000279$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/SortInstanceInChunk_00000279$BurstDirectCall
class CORDL_TYPE InstanceManager_SortInstanceInChunk_00000279$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x1814885a0, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x181488470, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1814886c0, size 0x160, virtual false, abstract: false, final false
static inline void Invoke(::MA::Flora::InstanceInChunk*  instanceInChunks, int32_t  count) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_SortInstanceInChunk_00000279$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_SortInstanceInChunk_00000279$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_SortInstanceInChunk_00000279$BurstDirectCall(InstanceManager_SortInstanceInChunk_00000279$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_SortInstanceInChunk_00000279$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_SortInstanceInChunk_00000279$BurstDirectCall(InstanceManager_SortInstanceInChunk_00000279$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12963};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_SortInstanceInChunk_00000279$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/GatherInstanceInChunkForInstances_0000027A$PostfixBurstDelegate
class CORDL_TYPE InstanceManager_GatherInstanceInChunkForInstances_0000027A$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18147c720, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::MA::Flora::FloraInstanceHandle*  instances, ::MA::Flora::InstanceInChunk*  instanceChunkData, int32_t  instanceCount, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1803828b0, size 0x390, virtual true, abstract: false, final false
inline void Invoke(::MA::Flora::FloraInstanceHandle*  instances, ::MA::Flora::InstanceInChunk*  instanceChunkData, int32_t  instanceCount) ;

static inline ::MA::Flora::InstanceManager_GatherInstanceInChunkForInstances_0000027A$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x18147a890, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_GatherInstanceInChunkForInstances_0000027A$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GatherInstanceInChunkForInstances_0000027A$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_GatherInstanceInChunkForInstances_0000027A$PostfixBurstDelegate(InstanceManager_GatherInstanceInChunkForInstances_0000027A$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GatherInstanceInChunkForInstances_0000027A$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_GatherInstanceInChunkForInstances_0000027A$PostfixBurstDelegate(InstanceManager_GatherInstanceInChunkForInstances_0000027A$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12964};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_GatherInstanceInChunkForInstances_0000027A$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/GatherInstanceInChunkForInstances_0000027A$BurstDirectCall
class CORDL_TYPE InstanceManager_GatherInstanceInChunkForInstances_0000027A$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x18147da50, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x18147d920, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x18147db70, size 0x210, virtual false, abstract: false, final false
static inline void Invoke(::MA::Flora::FloraInstanceHandle*  instances, ::MA::Flora::InstanceInChunk*  instanceChunkData, int32_t  instanceCount) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_GatherInstanceInChunkForInstances_0000027A$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GatherInstanceInChunkForInstances_0000027A$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_GatherInstanceInChunkForInstances_0000027A$BurstDirectCall(InstanceManager_GatherInstanceInChunkForInstances_0000027A$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GatherInstanceInChunkForInstances_0000027A$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_GatherInstanceInChunkForInstances_0000027A$BurstDirectCall(InstanceManager_GatherInstanceInChunkForInstances_0000027A$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12965};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_GatherInstanceInChunkForInstances_0000027A$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/InstanceBatchFromInstanceChunkData_0000027B$PostfixBurstDelegate
class CORDL_TYPE InstanceManager_InstanceBatchFromInstanceChunkData_0000027B$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1814819f0, size 0x150, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::MA::Flora::InstanceInChunk*>  chunkData, int32_t  chunkCount, ::MA::Flora::InstanceManager_InstanceBatchInChunk*  instanceBatchList, int32_t*  currentBatchIndex, int32_t*  foundError, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x181308320, size 0xd10, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::MA::Flora::InstanceInChunk*>  chunkData, int32_t  chunkCount, ::MA::Flora::InstanceManager_InstanceBatchInChunk*  instanceBatchList, int32_t*  currentBatchIndex, int32_t*  foundError) ;

static inline ::MA::Flora::InstanceManager_InstanceBatchFromInstanceChunkData_0000027B$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x181481b40, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_InstanceBatchFromInstanceChunkData_0000027B$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_InstanceBatchFromInstanceChunkData_0000027B$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_InstanceBatchFromInstanceChunkData_0000027B$PostfixBurstDelegate(InstanceManager_InstanceBatchFromInstanceChunkData_0000027B$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_InstanceBatchFromInstanceChunkData_0000027B$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_InstanceBatchFromInstanceChunkData_0000027B$PostfixBurstDelegate(InstanceManager_InstanceBatchFromInstanceChunkData_0000027B$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12966};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_InstanceBatchFromInstanceChunkData_0000027B$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/InstanceBatchFromInstanceChunkData_0000027B$BurstDirectCall
class CORDL_TYPE InstanceManager_InstanceBatchFromInstanceChunkData_0000027B$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x181481730, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x181481600, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x181481850, size 0x1a0, virtual false, abstract: false, final false
static inline void Invoke(::by_ref<::MA::Flora::InstanceInChunk*>  chunkData, int32_t  chunkCount, ::MA::Flora::InstanceManager_InstanceBatchInChunk*  instanceBatchList, int32_t*  currentBatchIndex, int32_t*  foundError) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_InstanceBatchFromInstanceChunkData_0000027B$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_InstanceBatchFromInstanceChunkData_0000027B$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_InstanceBatchFromInstanceChunkData_0000027B$BurstDirectCall(InstanceManager_InstanceBatchFromInstanceChunkData_0000027B$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_InstanceBatchFromInstanceChunkData_0000027B$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_InstanceBatchFromInstanceChunkData_0000027B$BurstDirectCall(InstanceManager_InstanceBatchFromInstanceChunkData_0000027B$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12967};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_InstanceBatchFromInstanceChunkData_0000027B$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/MoveInstancesToNewArchetypeBatchWithBurst_00000281$PostfixBurstDelegate
class CORDL_TYPE InstanceManager_MoveInstancesToNewArchetypeBatchWithBurst_00000281$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1814859a0, size 0x50, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::MA::Flora::InstanceManager*  data, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::InstanceManager_InstanceBatchInChunk>*  sortedInstanceBatchList, ::by_ref<::MA::Flora::ArchetypeIndex>  dstArchetype, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1803828b0, size 0x390, virtual true, abstract: false, final false
inline void Invoke(::MA::Flora::InstanceManager*  data, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::InstanceManager_InstanceBatchInChunk>*  sortedInstanceBatchList, ::by_ref<::MA::Flora::ArchetypeIndex>  dstArchetype) ;

static inline ::MA::Flora::InstanceManager_MoveInstancesToNewArchetypeBatchWithBurst_00000281$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1814859f0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_MoveInstancesToNewArchetypeBatchWithBurst_00000281$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_MoveInstancesToNewArchetypeBatchWithBurst_00000281$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_MoveInstancesToNewArchetypeBatchWithBurst_00000281$PostfixBurstDelegate(InstanceManager_MoveInstancesToNewArchetypeBatchWithBurst_00000281$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_MoveInstancesToNewArchetypeBatchWithBurst_00000281$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_MoveInstancesToNewArchetypeBatchWithBurst_00000281$PostfixBurstDelegate(InstanceManager_MoveInstancesToNewArchetypeBatchWithBurst_00000281$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12968};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_MoveInstancesToNewArchetypeBatchWithBurst_00000281$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/MoveInstancesToNewArchetypeBatchWithBurst_00000281$BurstDirectCall
class CORDL_TYPE InstanceManager_MoveInstancesToNewArchetypeBatchWithBurst_00000281$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x181485720, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x1814855f0, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x181485840, size 0x160, virtual false, abstract: false, final false
static inline void Invoke(::MA::Flora::InstanceManager*  data, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::InstanceManager_InstanceBatchInChunk>*  sortedInstanceBatchList, ::by_ref<::MA::Flora::ArchetypeIndex>  dstArchetype) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_MoveInstancesToNewArchetypeBatchWithBurst_00000281$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_MoveInstancesToNewArchetypeBatchWithBurst_00000281$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_MoveInstancesToNewArchetypeBatchWithBurst_00000281$BurstDirectCall(InstanceManager_MoveInstancesToNewArchetypeBatchWithBurst_00000281$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_MoveInstancesToNewArchetypeBatchWithBurst_00000281$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_MoveInstancesToNewArchetypeBatchWithBurst_00000281$BurstDirectCall(InstanceManager_MoveInstancesToNewArchetypeBatchWithBurst_00000281$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12969};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_MoveInstancesToNewArchetypeBatchWithBurst_00000281$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/AddTagsToInstancesBatchWithBurst_00000286$PostfixBurstDelegate
class CORDL_TYPE InstanceManager_AddTagsToInstancesBatchWithBurst_00000286$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18147a760, size 0x130, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::MA::Flora::InstanceManager*  data, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::InstanceManager_InstanceBatchInChunk>*  sortedInstanceBatchList, ::MA::Flora::InstanceTag  tags, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1803828b0, size 0x390, virtual true, abstract: false, final false
inline void Invoke(::MA::Flora::InstanceManager*  data, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::InstanceManager_InstanceBatchInChunk>*  sortedInstanceBatchList, ::MA::Flora::InstanceTag  tags) ;

static inline ::MA::Flora::InstanceManager_AddTagsToInstancesBatchWithBurst_00000286$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x18147a890, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_AddTagsToInstancesBatchWithBurst_00000286$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_AddTagsToInstancesBatchWithBurst_00000286$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_AddTagsToInstancesBatchWithBurst_00000286$PostfixBurstDelegate(InstanceManager_AddTagsToInstancesBatchWithBurst_00000286$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_AddTagsToInstancesBatchWithBurst_00000286$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_AddTagsToInstancesBatchWithBurst_00000286$PostfixBurstDelegate(InstanceManager_AddTagsToInstancesBatchWithBurst_00000286$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12970};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_AddTagsToInstancesBatchWithBurst_00000286$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/AddTagsToInstancesBatchWithBurst_00000286$BurstDirectCall
class CORDL_TYPE InstanceManager_AddTagsToInstancesBatchWithBurst_00000286$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x18147aa80, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x18147a950, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x18147aba0, size 0x160, virtual false, abstract: false, final false
static inline void Invoke(::MA::Flora::InstanceManager*  data, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::InstanceManager_InstanceBatchInChunk>*  sortedInstanceBatchList, ::MA::Flora::InstanceTag  tags) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_AddTagsToInstancesBatchWithBurst_00000286$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_AddTagsToInstancesBatchWithBurst_00000286$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_AddTagsToInstancesBatchWithBurst_00000286$BurstDirectCall(InstanceManager_AddTagsToInstancesBatchWithBurst_00000286$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_AddTagsToInstancesBatchWithBurst_00000286$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_AddTagsToInstancesBatchWithBurst_00000286$BurstDirectCall(InstanceManager_AddTagsToInstancesBatchWithBurst_00000286$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12971};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_AddTagsToInstancesBatchWithBurst_00000286$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/AddTagsToInstanceWithBurst_00000289$PostfixBurstDelegate
class CORDL_TYPE InstanceManager_AddTagsToInstanceWithBurst_00000289$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18147a760, size 0x130, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instance, ::MA::Flora::InstanceTag  tags, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1803828b0, size 0x390, virtual true, abstract: false, final false
inline void Invoke(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instance, ::MA::Flora::InstanceTag  tags) ;

static inline ::MA::Flora::InstanceManager_AddTagsToInstanceWithBurst_00000289$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x18147a890, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_AddTagsToInstanceWithBurst_00000289$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_AddTagsToInstanceWithBurst_00000289$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_AddTagsToInstanceWithBurst_00000289$PostfixBurstDelegate(InstanceManager_AddTagsToInstanceWithBurst_00000289$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_AddTagsToInstanceWithBurst_00000289$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_AddTagsToInstanceWithBurst_00000289$PostfixBurstDelegate(InstanceManager_AddTagsToInstanceWithBurst_00000289$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12972};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_AddTagsToInstanceWithBurst_00000289$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/AddTagsToInstanceWithBurst_00000289$BurstDirectCall
class CORDL_TYPE InstanceManager_AddTagsToInstanceWithBurst_00000289$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x18147a4e0, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x18147a3b0, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x18147a600, size 0x160, virtual false, abstract: false, final false
static inline void Invoke(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instance, ::MA::Flora::InstanceTag  tags) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_AddTagsToInstanceWithBurst_00000289$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_AddTagsToInstanceWithBurst_00000289$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_AddTagsToInstanceWithBurst_00000289$BurstDirectCall(InstanceManager_AddTagsToInstanceWithBurst_00000289$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_AddTagsToInstanceWithBurst_00000289$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_AddTagsToInstanceWithBurst_00000289$BurstDirectCall(InstanceManager_AddTagsToInstanceWithBurst_00000289$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12973};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_AddTagsToInstanceWithBurst_00000289$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/AddTagsToInstancesWithBurst_0000028A$PostfixBurstDelegate
class CORDL_TYPE InstanceManager_AddTagsToInstancesWithBurst_0000028A$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18147b0d0, size 0xd0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instances, int32_t  count, ::MA::Flora::InstanceTag  tags, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1805522b0, size 0xe0, virtual true, abstract: false, final false
inline void Invoke(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instances, int32_t  count, ::MA::Flora::InstanceTag  tags) ;

static inline ::MA::Flora::InstanceManager_AddTagsToInstancesWithBurst_0000028A$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x18147b1a0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_AddTagsToInstancesWithBurst_0000028A$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_AddTagsToInstancesWithBurst_0000028A$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_AddTagsToInstancesWithBurst_0000028A$PostfixBurstDelegate(InstanceManager_AddTagsToInstancesWithBurst_0000028A$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_AddTagsToInstancesWithBurst_0000028A$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_AddTagsToInstancesWithBurst_0000028A$PostfixBurstDelegate(InstanceManager_AddTagsToInstancesWithBurst_0000028A$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12974};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_AddTagsToInstancesWithBurst_0000028A$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/AddTagsToInstancesWithBurst_0000028A$BurstDirectCall
class CORDL_TYPE InstanceManager_AddTagsToInstancesWithBurst_0000028A$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x18147ae30, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x18147ad00, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x18147af50, size 0x180, virtual false, abstract: false, final false
static inline void Invoke(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instances, int32_t  count, ::MA::Flora::InstanceTag  tags) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_AddTagsToInstancesWithBurst_0000028A$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_AddTagsToInstancesWithBurst_0000028A$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_AddTagsToInstancesWithBurst_0000028A$BurstDirectCall(InstanceManager_AddTagsToInstancesWithBurst_0000028A$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_AddTagsToInstancesWithBurst_0000028A$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_AddTagsToInstancesWithBurst_0000028A$BurstDirectCall(InstanceManager_AddTagsToInstancesWithBurst_0000028A$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12975};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_AddTagsToInstancesWithBurst_0000028A$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/RemoveTagsFromInstancesBatchWithBurst_0000028D$PostfixBurstDelegate
class CORDL_TYPE InstanceManager_RemoveTagsFromInstancesBatchWithBurst_0000028D$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18147a760, size 0x130, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::MA::Flora::InstanceManager*  data, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::InstanceManager_InstanceBatchInChunk>*  sortedInstanceBatchList, ::MA::Flora::InstanceTag  tags, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1803828b0, size 0x390, virtual true, abstract: false, final false
inline void Invoke(::MA::Flora::InstanceManager*  data, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::InstanceManager_InstanceBatchInChunk>*  sortedInstanceBatchList, ::MA::Flora::InstanceTag  tags) ;

static inline ::MA::Flora::InstanceManager_RemoveTagsFromInstancesBatchWithBurst_0000028D$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x18147a890, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_RemoveTagsFromInstancesBatchWithBurst_0000028D$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_RemoveTagsFromInstancesBatchWithBurst_0000028D$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_RemoveTagsFromInstancesBatchWithBurst_0000028D$PostfixBurstDelegate(InstanceManager_RemoveTagsFromInstancesBatchWithBurst_0000028D$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_RemoveTagsFromInstancesBatchWithBurst_0000028D$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_RemoveTagsFromInstancesBatchWithBurst_0000028D$PostfixBurstDelegate(InstanceManager_RemoveTagsFromInstancesBatchWithBurst_0000028D$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12976};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_RemoveTagsFromInstancesBatchWithBurst_0000028D$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/RemoveTagsFromInstancesBatchWithBurst_0000028D$BurstDirectCall
class CORDL_TYPE InstanceManager_RemoveTagsFromInstancesBatchWithBurst_0000028D$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x181486590, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x181486460, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1814866b0, size 0x160, virtual false, abstract: false, final false
static inline void Invoke(::MA::Flora::InstanceManager*  data, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::InstanceManager_InstanceBatchInChunk>*  sortedInstanceBatchList, ::MA::Flora::InstanceTag  tags) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_RemoveTagsFromInstancesBatchWithBurst_0000028D$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_RemoveTagsFromInstancesBatchWithBurst_0000028D$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_RemoveTagsFromInstancesBatchWithBurst_0000028D$BurstDirectCall(InstanceManager_RemoveTagsFromInstancesBatchWithBurst_0000028D$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_RemoveTagsFromInstancesBatchWithBurst_0000028D$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_RemoveTagsFromInstancesBatchWithBurst_0000028D$BurstDirectCall(InstanceManager_RemoveTagsFromInstancesBatchWithBurst_0000028D$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12977};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_RemoveTagsFromInstancesBatchWithBurst_0000028D$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/RemoveTagsFromInstanceWithBurst_00000290$PostfixBurstDelegate
class CORDL_TYPE InstanceManager_RemoveTagsFromInstanceWithBurst_00000290$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18147a760, size 0x130, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instance, ::MA::Flora::InstanceTag  tags, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1803828b0, size 0x390, virtual true, abstract: false, final false
inline void Invoke(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instance, ::MA::Flora::InstanceTag  tags) ;

static inline ::MA::Flora::InstanceManager_RemoveTagsFromInstanceWithBurst_00000290$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x18147a890, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_RemoveTagsFromInstanceWithBurst_00000290$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_RemoveTagsFromInstanceWithBurst_00000290$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_RemoveTagsFromInstanceWithBurst_00000290$PostfixBurstDelegate(InstanceManager_RemoveTagsFromInstanceWithBurst_00000290$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_RemoveTagsFromInstanceWithBurst_00000290$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_RemoveTagsFromInstanceWithBurst_00000290$PostfixBurstDelegate(InstanceManager_RemoveTagsFromInstanceWithBurst_00000290$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12978};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_RemoveTagsFromInstanceWithBurst_00000290$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/RemoveTagsFromInstanceWithBurst_00000290$BurstDirectCall
class CORDL_TYPE InstanceManager_RemoveTagsFromInstanceWithBurst_00000290$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x1814861e0, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x1814860b0, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x181486300, size 0x160, virtual false, abstract: false, final false
static inline void Invoke(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instance, ::MA::Flora::InstanceTag  tags) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_RemoveTagsFromInstanceWithBurst_00000290$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_RemoveTagsFromInstanceWithBurst_00000290$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_RemoveTagsFromInstanceWithBurst_00000290$BurstDirectCall(InstanceManager_RemoveTagsFromInstanceWithBurst_00000290$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_RemoveTagsFromInstanceWithBurst_00000290$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_RemoveTagsFromInstanceWithBurst_00000290$BurstDirectCall(InstanceManager_RemoveTagsFromInstanceWithBurst_00000290$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12979};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_RemoveTagsFromInstanceWithBurst_00000290$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/RemoveTagsFromInstancesWithBurst_00000291$PostfixBurstDelegate
class CORDL_TYPE InstanceManager_RemoveTagsFromInstancesWithBurst_00000291$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18147b0d0, size 0xd0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instances, int32_t  count, ::MA::Flora::InstanceTag  tags, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1805522b0, size 0xe0, virtual true, abstract: false, final false
inline void Invoke(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instances, int32_t  count, ::MA::Flora::InstanceTag  tags) ;

static inline ::MA::Flora::InstanceManager_RemoveTagsFromInstancesWithBurst_00000291$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x18147b1a0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_RemoveTagsFromInstancesWithBurst_00000291$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_RemoveTagsFromInstancesWithBurst_00000291$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_RemoveTagsFromInstancesWithBurst_00000291$PostfixBurstDelegate(InstanceManager_RemoveTagsFromInstancesWithBurst_00000291$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_RemoveTagsFromInstancesWithBurst_00000291$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_RemoveTagsFromInstancesWithBurst_00000291$PostfixBurstDelegate(InstanceManager_RemoveTagsFromInstancesWithBurst_00000291$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12980};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_RemoveTagsFromInstancesWithBurst_00000291$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/RemoveTagsFromInstancesWithBurst_00000291$BurstDirectCall
class CORDL_TYPE InstanceManager_RemoveTagsFromInstancesWithBurst_00000291$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x181486940, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x181486810, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x181486a60, size 0x180, virtual false, abstract: false, final false
static inline void Invoke(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instances, int32_t  count, ::MA::Flora::InstanceTag  tags) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_RemoveTagsFromInstancesWithBurst_00000291$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_RemoveTagsFromInstancesWithBurst_00000291$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_RemoveTagsFromInstancesWithBurst_00000291$BurstDirectCall(InstanceManager_RemoveTagsFromInstancesWithBurst_00000291$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_RemoveTagsFromInstancesWithBurst_00000291$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_RemoveTagsFromInstancesWithBurst_00000291$BurstDirectCall(InstanceManager_RemoveTagsFromInstancesWithBurst_00000291$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12981};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_RemoveTagsFromInstancesWithBurst_00000291$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/InitializeFrameWithBurst_00000296$PostfixBurstDelegate
class CORDL_TYPE InstanceManager_InitializeFrameWithBurst_00000296$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1803e3a20, size 0x30, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::MA::Flora::InstanceManager*  data, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::MA::Flora::InstanceManager*  data) ;

static inline ::MA::Flora::InstanceManager_InitializeFrameWithBurst_00000296$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1805450a0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_InitializeFrameWithBurst_00000296$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_InitializeFrameWithBurst_00000296$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_InitializeFrameWithBurst_00000296$PostfixBurstDelegate(InstanceManager_InitializeFrameWithBurst_00000296$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_InitializeFrameWithBurst_00000296$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_InitializeFrameWithBurst_00000296$PostfixBurstDelegate(InstanceManager_InitializeFrameWithBurst_00000296$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12982};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_InitializeFrameWithBurst_00000296$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/InitializeFrameWithBurst_00000296$BurstDirectCall
class CORDL_TYPE InstanceManager_InitializeFrameWithBurst_00000296$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x181481390, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x181481260, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1814814b0, size 0x150, virtual false, abstract: false, final false
static inline void Invoke(::MA::Flora::InstanceManager*  data) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_InitializeFrameWithBurst_00000296$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_InitializeFrameWithBurst_00000296$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_InitializeFrameWithBurst_00000296$BurstDirectCall(InstanceManager_InitializeFrameWithBurst_00000296$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_InitializeFrameWithBurst_00000296$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_InitializeFrameWithBurst_00000296$BurstDirectCall(InstanceManager_InitializeFrameWithBurst_00000296$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12983};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_InitializeFrameWithBurst_00000296$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/OnPostLateUpdateWithBurst_00000299$PostfixBurstDelegate
class CORDL_TYPE InstanceManager_OnPostLateUpdateWithBurst_00000299$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1803e3a20, size 0x30, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::MA::Flora::InstanceManager*  data, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::MA::Flora::InstanceManager*  data) ;

static inline ::MA::Flora::InstanceManager_OnPostLateUpdateWithBurst_00000299$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1805450a0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_OnPostLateUpdateWithBurst_00000299$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_OnPostLateUpdateWithBurst_00000299$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_OnPostLateUpdateWithBurst_00000299$PostfixBurstDelegate(InstanceManager_OnPostLateUpdateWithBurst_00000299$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_OnPostLateUpdateWithBurst_00000299$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_OnPostLateUpdateWithBurst_00000299$PostfixBurstDelegate(InstanceManager_OnPostLateUpdateWithBurst_00000299$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12984};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_OnPostLateUpdateWithBurst_00000299$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/OnPostLateUpdateWithBurst_00000299$BurstDirectCall
class CORDL_TYPE InstanceManager_OnPostLateUpdateWithBurst_00000299$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x181485be0, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x181485ab0, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x181485d00, size 0x150, virtual false, abstract: false, final false
static inline void Invoke(::MA::Flora::InstanceManager*  data) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_OnPostLateUpdateWithBurst_00000299$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_OnPostLateUpdateWithBurst_00000299$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_OnPostLateUpdateWithBurst_00000299$BurstDirectCall(InstanceManager_OnPostLateUpdateWithBurst_00000299$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_OnPostLateUpdateWithBurst_00000299$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_OnPostLateUpdateWithBurst_00000299$BurstDirectCall(InstanceManager_OnPostLateUpdateWithBurst_00000299$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12985};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_OnPostLateUpdateWithBurst_00000299$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/GetDetailInstanceMapWithBurst_000002A8$PostfixBurstDelegate
class CORDL_TYPE InstanceManager_GetDetailInstanceMapWithBurst_000002A8$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18147ed30, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<::MA::Flora::DetailInTerrain,::MA::Flora::FloraInstanceHandle>>  result, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1805522b0, size 0xe0, virtual true, abstract: false, final false
inline void Invoke(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<::MA::Flora::DetailInTerrain,::MA::Flora::FloraInstanceHandle>>  result) ;

static inline ::MA::Flora::InstanceManager_GetDetailInstanceMapWithBurst_000002A8$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x18147e780, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_GetDetailInstanceMapWithBurst_000002A8$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetDetailInstanceMapWithBurst_000002A8$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_GetDetailInstanceMapWithBurst_000002A8$PostfixBurstDelegate(InstanceManager_GetDetailInstanceMapWithBurst_000002A8$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetDetailInstanceMapWithBurst_000002A8$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_GetDetailInstanceMapWithBurst_000002A8$PostfixBurstDelegate(InstanceManager_GetDetailInstanceMapWithBurst_000002A8$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12986};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_GetDetailInstanceMapWithBurst_000002A8$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/GetDetailInstanceMapWithBurst_000002A8$BurstDirectCall
class CORDL_TYPE InstanceManager_GetDetailInstanceMapWithBurst_000002A8$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x18147e970, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x18147e840, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x18147ea90, size 0x2a0, virtual false, abstract: false, final false
static inline void Invoke(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<::MA::Flora::DetailInTerrain,::MA::Flora::FloraInstanceHandle>>  result) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_GetDetailInstanceMapWithBurst_000002A8$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetDetailInstanceMapWithBurst_000002A8$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_GetDetailInstanceMapWithBurst_000002A8$BurstDirectCall(InstanceManager_GetDetailInstanceMapWithBurst_000002A8$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetDetailInstanceMapWithBurst_000002A8$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_GetDetailInstanceMapWithBurst_000002A8$BurstDirectCall(InstanceManager_GetDetailInstanceMapWithBurst_000002A8$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12987};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_GetDetailInstanceMapWithBurst_000002A8$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/GetValidTreeInTerrainsWithBurst_000002AA$PostfixBurstDelegate
class CORDL_TYPE InstanceManager_GetValidTreeInTerrainsWithBurst_000002AA$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x181480d70, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::TreeInTerrain>>  result, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1805522b0, size 0xe0, virtual true, abstract: false, final false
inline void Invoke(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::TreeInTerrain>>  result) ;

static inline ::MA::Flora::InstanceManager_GetValidTreeInTerrainsWithBurst_000002AA$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x18147e780, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_GetValidTreeInTerrainsWithBurst_000002AA$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetValidTreeInTerrainsWithBurst_000002AA$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_GetValidTreeInTerrainsWithBurst_000002AA$PostfixBurstDelegate(InstanceManager_GetValidTreeInTerrainsWithBurst_000002AA$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetValidTreeInTerrainsWithBurst_000002AA$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_GetValidTreeInTerrainsWithBurst_000002AA$PostfixBurstDelegate(InstanceManager_GetValidTreeInTerrainsWithBurst_000002AA$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12988};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_GetValidTreeInTerrainsWithBurst_000002AA$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/GetValidTreeInTerrainsWithBurst_000002AA$BurstDirectCall
class CORDL_TYPE InstanceManager_GetValidTreeInTerrainsWithBurst_000002AA$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x181480ad0, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x1814809a0, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x181480bf0, size 0x180, virtual false, abstract: false, final false
static inline void Invoke(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::TreeInTerrain>>  result) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_GetValidTreeInTerrainsWithBurst_000002AA$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetValidTreeInTerrainsWithBurst_000002AA$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_GetValidTreeInTerrainsWithBurst_000002AA$BurstDirectCall(InstanceManager_GetValidTreeInTerrainsWithBurst_000002AA$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetValidTreeInTerrainsWithBurst_000002AA$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_GetValidTreeInTerrainsWithBurst_000002AA$BurstDirectCall(InstanceManager_GetValidTreeInTerrainsWithBurst_000002AA$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12989};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_GetValidTreeInTerrainsWithBurst_000002AA$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/GetValidTreeInTerrainsAndIndicesWithBurst_000002AC$PostfixBurstDelegate
class CORDL_TYPE InstanceManager_GetValidTreeInTerrainsAndIndicesWithBurst_000002AC$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1814808f0, size 0xb0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  indices, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::TreeInTerrain>>  result, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x181308320, size 0xd10, virtual true, abstract: false, final false
inline void Invoke(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  indices, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::TreeInTerrain>>  result) ;

static inline ::MA::Flora::InstanceManager_GetValidTreeInTerrainsAndIndicesWithBurst_000002AC$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x18147fa30, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_GetValidTreeInTerrainsAndIndicesWithBurst_000002AC$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetValidTreeInTerrainsAndIndicesWithBurst_000002AC$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_GetValidTreeInTerrainsAndIndicesWithBurst_000002AC$PostfixBurstDelegate(InstanceManager_GetValidTreeInTerrainsAndIndicesWithBurst_000002AC$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetValidTreeInTerrainsAndIndicesWithBurst_000002AC$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_GetValidTreeInTerrainsAndIndicesWithBurst_000002AC$PostfixBurstDelegate(InstanceManager_GetValidTreeInTerrainsAndIndicesWithBurst_000002AC$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12990};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_GetValidTreeInTerrainsAndIndicesWithBurst_000002AC$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/GetValidTreeInTerrainsAndIndicesWithBurst_000002AC$BurstDirectCall
class CORDL_TYPE InstanceManager_GetValidTreeInTerrainsAndIndicesWithBurst_000002AC$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x181480630, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x181480500, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x181480750, size 0x1a0, virtual false, abstract: false, final false
static inline void Invoke(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  indices, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::TreeInTerrain>>  result) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_GetValidTreeInTerrainsAndIndicesWithBurst_000002AC$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetValidTreeInTerrainsAndIndicesWithBurst_000002AC$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_GetValidTreeInTerrainsAndIndicesWithBurst_000002AC$BurstDirectCall(InstanceManager_GetValidTreeInTerrainsAndIndicesWithBurst_000002AC$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetValidTreeInTerrainsAndIndicesWithBurst_000002AC$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_GetValidTreeInTerrainsAndIndicesWithBurst_000002AC$BurstDirectCall(InstanceManager_GetValidTreeInTerrainsAndIndicesWithBurst_000002AC$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12991};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_GetValidTreeInTerrainsAndIndicesWithBurst_000002AC$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/SetTerrainTreeIndicesWithBurst_000002AE$PostfixBurstDelegate
class CORDL_TYPE InstanceManager_SetTerrainTreeIndicesWithBurst_000002AE$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x181488250, size 0x160, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::UnityEngine::EntityId>  terrainEntity, ::MA::Flora::FloraInstanceHandle*  instances, int32_t*  indices, int32_t  instanceCount, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1805522b0, size 0xe0, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::UnityEngine::EntityId>  terrainEntity, ::MA::Flora::FloraInstanceHandle*  instances, int32_t*  indices, int32_t  instanceCount) ;

static inline ::MA::Flora::InstanceManager_SetTerrainTreeIndicesWithBurst_000002AE$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1814883b0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_SetTerrainTreeIndicesWithBurst_000002AE$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_SetTerrainTreeIndicesWithBurst_000002AE$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_SetTerrainTreeIndicesWithBurst_000002AE$PostfixBurstDelegate(InstanceManager_SetTerrainTreeIndicesWithBurst_000002AE$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_SetTerrainTreeIndicesWithBurst_000002AE$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_SetTerrainTreeIndicesWithBurst_000002AE$PostfixBurstDelegate(InstanceManager_SetTerrainTreeIndicesWithBurst_000002AE$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12992};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_SetTerrainTreeIndicesWithBurst_000002AE$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/SetTerrainTreeIndicesWithBurst_000002AE$BurstDirectCall
class CORDL_TYPE InstanceManager_SetTerrainTreeIndicesWithBurst_000002AE$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x181487f40, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x181487e10, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x181488060, size 0x1f0, virtual false, abstract: false, final false
static inline void Invoke(::by_ref<::UnityEngine::EntityId>  terrainEntity, ::MA::Flora::FloraInstanceHandle*  instances, int32_t*  indices, int32_t  instanceCount) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_SetTerrainTreeIndicesWithBurst_000002AE$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_SetTerrainTreeIndicesWithBurst_000002AE$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_SetTerrainTreeIndicesWithBurst_000002AE$BurstDirectCall(InstanceManager_SetTerrainTreeIndicesWithBurst_000002AE$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_SetTerrainTreeIndicesWithBurst_000002AE$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_SetTerrainTreeIndicesWithBurst_000002AE$BurstDirectCall(InstanceManager_SetTerrainTreeIndicesWithBurst_000002AE$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12993};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_SetTerrainTreeIndicesWithBurst_000002AE$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/ScheduleUploadsWithBurst_000002C2$PostfixBurstDelegate
class CORDL_TYPE InstanceManager_ScheduleUploadsWithBurst_000002C2$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1803e3a20, size 0x30, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::MA::Flora::InstanceManager*  data, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::MA::Flora::InstanceManager*  data) ;

static inline ::MA::Flora::InstanceManager_ScheduleUploadsWithBurst_000002C2$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1805450a0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_ScheduleUploadsWithBurst_000002C2$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_ScheduleUploadsWithBurst_000002C2$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_ScheduleUploadsWithBurst_000002C2$PostfixBurstDelegate(InstanceManager_ScheduleUploadsWithBurst_000002C2$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_ScheduleUploadsWithBurst_000002C2$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_ScheduleUploadsWithBurst_000002C2$PostfixBurstDelegate(InstanceManager_ScheduleUploadsWithBurst_000002C2$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12994};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_ScheduleUploadsWithBurst_000002C2$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/ScheduleUploadsWithBurst_000002C2$BurstDirectCall
class CORDL_TYPE InstanceManager_ScheduleUploadsWithBurst_000002C2$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x1814874e0, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x1814873b0, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x181487600, size 0x150, virtual false, abstract: false, final false
static inline void Invoke(::MA::Flora::InstanceManager*  data) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_ScheduleUploadsWithBurst_000002C2$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_ScheduleUploadsWithBurst_000002C2$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_ScheduleUploadsWithBurst_000002C2$BurstDirectCall(InstanceManager_ScheduleUploadsWithBurst_000002C2$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_ScheduleUploadsWithBurst_000002C2$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_ScheduleUploadsWithBurst_000002C2$BurstDirectCall(InstanceManager_ScheduleUploadsWithBurst_000002C2$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12995};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_ScheduleUploadsWithBurst_000002C2$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/DestroyWithBurst_00000312$PostfixBurstDelegate
class CORDL_TYPE InstanceManager_DestroyWithBurst_00000312$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18147c720, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instances, int32_t  instanceCount, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1803828b0, size 0x390, virtual true, abstract: false, final false
inline void Invoke(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instances, int32_t  instanceCount) ;

static inline ::MA::Flora::InstanceManager_DestroyWithBurst_00000312$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x18147a890, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_DestroyWithBurst_00000312$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_DestroyWithBurst_00000312$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_DestroyWithBurst_00000312$PostfixBurstDelegate(InstanceManager_DestroyWithBurst_00000312$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_DestroyWithBurst_00000312$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_DestroyWithBurst_00000312$PostfixBurstDelegate(InstanceManager_DestroyWithBurst_00000312$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12996};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_DestroyWithBurst_00000312$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/DestroyWithBurst_00000312$BurstDirectCall
class CORDL_TYPE InstanceManager_DestroyWithBurst_00000312$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x18147c4a0, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x18147c370, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x18147c5c0, size 0x160, virtual false, abstract: false, final false
static inline void Invoke(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instances, int32_t  instanceCount) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_DestroyWithBurst_00000312$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_DestroyWithBurst_00000312$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_DestroyWithBurst_00000312$BurstDirectCall(InstanceManager_DestroyWithBurst_00000312$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_DestroyWithBurst_00000312$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_DestroyWithBurst_00000312$BurstDirectCall(InstanceManager_DestroyWithBurst_00000312$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12997};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_DestroyWithBurst_00000312$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/GetLocalToWorldsWithBurst_00000317$PostfixBurstDelegate
class CORDL_TYPE InstanceManager_GetLocalToWorldsWithBurst_00000317$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18147fec0, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>  result, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1805522b0, size 0xe0, virtual true, abstract: false, final false
inline void Invoke(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>  result) ;

static inline ::MA::Flora::InstanceManager_GetLocalToWorldsWithBurst_00000317$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x18147e780, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_GetLocalToWorldsWithBurst_00000317$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetLocalToWorldsWithBurst_00000317$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_GetLocalToWorldsWithBurst_00000317$PostfixBurstDelegate(InstanceManager_GetLocalToWorldsWithBurst_00000317$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetLocalToWorldsWithBurst_00000317$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_GetLocalToWorldsWithBurst_00000317$PostfixBurstDelegate(InstanceManager_GetLocalToWorldsWithBurst_00000317$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12998};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_GetLocalToWorldsWithBurst_00000317$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/GetLocalToWorldsWithBurst_00000317$BurstDirectCall
class CORDL_TYPE InstanceManager_GetLocalToWorldsWithBurst_00000317$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x18147fc20, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x18147faf0, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x18147fd40, size 0x180, virtual false, abstract: false, final false
static inline void Invoke(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>  result) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_GetLocalToWorldsWithBurst_00000317$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetLocalToWorldsWithBurst_00000317$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_GetLocalToWorldsWithBurst_00000317$BurstDirectCall(InstanceManager_GetLocalToWorldsWithBurst_00000317$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetLocalToWorldsWithBurst_00000317$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_GetLocalToWorldsWithBurst_00000317$BurstDirectCall(InstanceManager_GetLocalToWorldsWithBurst_00000317$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12999};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_GetLocalToWorldsWithBurst_00000317$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/GetWorldTransformsWithBurst_00000319$PostfixBurstDelegate
class CORDL_TYPE InstanceManager_GetWorldTransformsWithBurst_00000319$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1814811d0, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  result, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1805522b0, size 0xe0, virtual true, abstract: false, final false
inline void Invoke(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  result) ;

static inline ::MA::Flora::InstanceManager_GetWorldTransformsWithBurst_00000319$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x18147e780, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_GetWorldTransformsWithBurst_00000319$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetWorldTransformsWithBurst_00000319$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_GetWorldTransformsWithBurst_00000319$PostfixBurstDelegate(InstanceManager_GetWorldTransformsWithBurst_00000319$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetWorldTransformsWithBurst_00000319$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_GetWorldTransformsWithBurst_00000319$PostfixBurstDelegate(InstanceManager_GetWorldTransformsWithBurst_00000319$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13000};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_GetWorldTransformsWithBurst_00000319$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/GetWorldTransformsWithBurst_00000319$BurstDirectCall
class CORDL_TYPE InstanceManager_GetWorldTransformsWithBurst_00000319$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x181480f30, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x181480e00, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x181481050, size 0x180, virtual false, abstract: false, final false
static inline void Invoke(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  result) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_GetWorldTransformsWithBurst_00000319$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetWorldTransformsWithBurst_00000319$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_GetWorldTransformsWithBurst_00000319$BurstDirectCall(InstanceManager_GetWorldTransformsWithBurst_00000319$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetWorldTransformsWithBurst_00000319$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_GetWorldTransformsWithBurst_00000319$BurstDirectCall(InstanceManager_GetWorldTransformsWithBurst_00000319$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13001};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_GetWorldTransformsWithBurst_00000319$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/GetPositionsWithBurst_0000031B$PostfixBurstDelegate
class CORDL_TYPE InstanceManager_GetPositionsWithBurst_0000031B$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x181480470, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  result, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1805522b0, size 0xe0, virtual true, abstract: false, final false
inline void Invoke(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  result) ;

static inline ::MA::Flora::InstanceManager_GetPositionsWithBurst_0000031B$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x18147e780, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_GetPositionsWithBurst_0000031B$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetPositionsWithBurst_0000031B$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_GetPositionsWithBurst_0000031B$PostfixBurstDelegate(InstanceManager_GetPositionsWithBurst_0000031B$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetPositionsWithBurst_0000031B$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_GetPositionsWithBurst_0000031B$PostfixBurstDelegate(InstanceManager_GetPositionsWithBurst_0000031B$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13002};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_GetPositionsWithBurst_0000031B$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/GetPositionsWithBurst_0000031B$BurstDirectCall
class CORDL_TYPE InstanceManager_GetPositionsWithBurst_0000031B$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x181480080, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x18147ff50, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1814801a0, size 0x2d0, virtual false, abstract: false, final false
static inline void Invoke(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  result) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_GetPositionsWithBurst_0000031B$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetPositionsWithBurst_0000031B$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_GetPositionsWithBurst_0000031B$BurstDirectCall(InstanceManager_GetPositionsWithBurst_0000031B$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetPositionsWithBurst_0000031B$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_GetPositionsWithBurst_0000031B$BurstDirectCall(InstanceManager_GetPositionsWithBurst_0000031B$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13003};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_GetPositionsWithBurst_0000031B$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/GetBoundsWithBurst_0000031E$PostfixBurstDelegate
class CORDL_TYPE InstanceManager_GetBoundsWithBurst_0000031E$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18147e5d0, size 0x1b0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Bounds>>  result, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1805522b0, size 0xe0, virtual true, abstract: false, final false
inline void Invoke(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Bounds>>  result) ;

static inline ::MA::Flora::InstanceManager_GetBoundsWithBurst_0000031E$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x18147e780, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_GetBoundsWithBurst_0000031E$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetBoundsWithBurst_0000031E$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_GetBoundsWithBurst_0000031E$PostfixBurstDelegate(InstanceManager_GetBoundsWithBurst_0000031E$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetBoundsWithBurst_0000031E$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_GetBoundsWithBurst_0000031E$PostfixBurstDelegate(InstanceManager_GetBoundsWithBurst_0000031E$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13004};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_GetBoundsWithBurst_0000031E$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/GetBoundsWithBurst_0000031E$BurstDirectCall
class CORDL_TYPE InstanceManager_GetBoundsWithBurst_0000031E$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x18147e1d0, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x18147e0a0, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x18147e2f0, size 0x2e0, virtual false, abstract: false, final false
static inline void Invoke(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Bounds>>  result) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_GetBoundsWithBurst_0000031E$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetBoundsWithBurst_0000031E$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_GetBoundsWithBurst_0000031E$BurstDirectCall(InstanceManager_GetBoundsWithBurst_0000031E$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetBoundsWithBurst_0000031E$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_GetBoundsWithBurst_0000031E$BurstDirectCall(InstanceManager_GetBoundsWithBurst_0000031E$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13005};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_GetBoundsWithBurst_0000031E$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/SetInstanceInContainerIndicesWithBurst_00000324$PostfixBurstDelegate
class CORDL_TYPE InstanceManager_SetInstanceInContainerIndicesWithBurst_00000324$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x181487b90, size 0x1c0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::MA::Flora::FloraInstanceHandle*  instances, int32_t  instanceCount, ::by_ref<::MA::Flora::EntityObjectRef_1<::UnityW<::MA::Flora::FloraInstanceContainer>>>  instanceContainer, int32_t  startIndex, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1805522b0, size 0xe0, virtual true, abstract: false, final false
inline void Invoke(::MA::Flora::FloraInstanceHandle*  instances, int32_t  instanceCount, ::by_ref<::MA::Flora::EntityObjectRef_1<::UnityW<::MA::Flora::FloraInstanceContainer>>>  instanceContainer, int32_t  startIndex) ;

static inline ::MA::Flora::InstanceManager_SetInstanceInContainerIndicesWithBurst_00000324$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x181487d50, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_SetInstanceInContainerIndicesWithBurst_00000324$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_SetInstanceInContainerIndicesWithBurst_00000324$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_SetInstanceInContainerIndicesWithBurst_00000324$PostfixBurstDelegate(InstanceManager_SetInstanceInContainerIndicesWithBurst_00000324$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_SetInstanceInContainerIndicesWithBurst_00000324$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_SetInstanceInContainerIndicesWithBurst_00000324$PostfixBurstDelegate(InstanceManager_SetInstanceInContainerIndicesWithBurst_00000324$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13006};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_SetInstanceInContainerIndicesWithBurst_00000324$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/SetInstanceInContainerIndicesWithBurst_00000324$BurstDirectCall
class CORDL_TYPE InstanceManager_SetInstanceInContainerIndicesWithBurst_00000324$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x181487880, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x181487750, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1814879a0, size 0x1f0, virtual false, abstract: false, final false
static inline void Invoke(::MA::Flora::FloraInstanceHandle*  instances, int32_t  instanceCount, ::by_ref<::MA::Flora::EntityObjectRef_1<::UnityW<::MA::Flora::FloraInstanceContainer>>>  instanceContainer, int32_t  startIndex) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_SetInstanceInContainerIndicesWithBurst_00000324$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_SetInstanceInContainerIndicesWithBurst_00000324$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_SetInstanceInContainerIndicesWithBurst_00000324$BurstDirectCall(InstanceManager_SetInstanceInContainerIndicesWithBurst_00000324$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_SetInstanceInContainerIndicesWithBurst_00000324$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_SetInstanceInContainerIndicesWithBurst_00000324$BurstDirectCall(InstanceManager_SetInstanceInContainerIndicesWithBurst_00000324$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13007};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_SetInstanceInContainerIndicesWithBurst_00000324$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/GetInstanceContainerIndexMapWithBurst_00000327$PostfixBurstDelegate
class CORDL_TYPE InstanceManager_GetInstanceContainerIndexMapWithBurst_00000327$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18147f2c0, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,int32_t>>  result, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1805522b0, size 0xe0, virtual true, abstract: false, final false
inline void Invoke(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,int32_t>>  result) ;

static inline ::MA::Flora::InstanceManager_GetInstanceContainerIndexMapWithBurst_00000327$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x18147e780, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_GetInstanceContainerIndexMapWithBurst_00000327$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetInstanceContainerIndexMapWithBurst_00000327$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_GetInstanceContainerIndexMapWithBurst_00000327$PostfixBurstDelegate(InstanceManager_GetInstanceContainerIndexMapWithBurst_00000327$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetInstanceContainerIndexMapWithBurst_00000327$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_GetInstanceContainerIndexMapWithBurst_00000327$PostfixBurstDelegate(InstanceManager_GetInstanceContainerIndexMapWithBurst_00000327$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13008};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_GetInstanceContainerIndexMapWithBurst_00000327$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/GetInstanceContainerIndexMapWithBurst_00000327$BurstDirectCall
class CORDL_TYPE InstanceManager_GetInstanceContainerIndexMapWithBurst_00000327$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x18147eef0, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x18147edc0, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x18147f010, size 0x2b0, virtual false, abstract: false, final false
static inline void Invoke(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,int32_t>>  result) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_GetInstanceContainerIndexMapWithBurst_00000327$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetInstanceContainerIndexMapWithBurst_00000327$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_GetInstanceContainerIndexMapWithBurst_00000327$BurstDirectCall(InstanceManager_GetInstanceContainerIndexMapWithBurst_00000327$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetInstanceContainerIndexMapWithBurst_00000327$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_GetInstanceContainerIndexMapWithBurst_00000327$BurstDirectCall(InstanceManager_GetInstanceContainerIndexMapWithBurst_00000327$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13009};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_GetInstanceContainerIndexMapWithBurst_00000327$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/GetInstanceInContainersAndIndicesWithBurst_00000329$PostfixBurstDelegate
class CORDL_TYPE InstanceManager_GetInstanceInContainersAndIndicesWithBurst_00000329$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18147f820, size 0x210, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  indices, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::InstanceInContainer>>  result, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x181308320, size 0xd10, virtual true, abstract: false, final false
inline void Invoke(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  indices, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::InstanceInContainer>>  result) ;

static inline ::MA::Flora::InstanceManager_GetInstanceInContainersAndIndicesWithBurst_00000329$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x18147fa30, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_GetInstanceInContainersAndIndicesWithBurst_00000329$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetInstanceInContainersAndIndicesWithBurst_00000329$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_GetInstanceInContainersAndIndicesWithBurst_00000329$PostfixBurstDelegate(InstanceManager_GetInstanceInContainersAndIndicesWithBurst_00000329$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetInstanceInContainersAndIndicesWithBurst_00000329$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_GetInstanceInContainersAndIndicesWithBurst_00000329$PostfixBurstDelegate(InstanceManager_GetInstanceInContainersAndIndicesWithBurst_00000329$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13010};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_GetInstanceInContainersAndIndicesWithBurst_00000329$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/GetInstanceInContainersAndIndicesWithBurst_00000329$BurstDirectCall
class CORDL_TYPE InstanceManager_GetInstanceInContainersAndIndicesWithBurst_00000329$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x18147f560, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x18147f430, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x18147f680, size 0x1a0, virtual false, abstract: false, final false
static inline void Invoke(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  indices, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::InstanceInContainer>>  result) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_GetInstanceInContainersAndIndicesWithBurst_00000329$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetInstanceInContainersAndIndicesWithBurst_00000329$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_GetInstanceInContainersAndIndicesWithBurst_00000329$BurstDirectCall(InstanceManager_GetInstanceInContainersAndIndicesWithBurst_00000329$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_GetInstanceInContainersAndIndicesWithBurst_00000329$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_GetInstanceInContainersAndIndicesWithBurst_00000329$BurstDirectCall(InstanceManager_GetInstanceInContainersAndIndicesWithBurst_00000329$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13011};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_GetInstanceInContainersAndIndicesWithBurst_00000329$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/InstantiateInstancesWithBurst_0000032A$PostfixBurstDelegate
class CORDL_TYPE InstanceManager_InstantiateInstancesWithBurst_0000032A$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x181484960, size 0x1e0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instances, ::MA::Flora::FloraInstanceTransform*  transforms, int32_t  instanceCount, ::by_ref<::MA::Flora::InstanceManager_InstantiateParams>  parameters, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x181308320, size 0xd10, virtual true, abstract: false, final false
inline void Invoke(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instances, ::MA::Flora::FloraInstanceTransform*  transforms, int32_t  instanceCount, ::by_ref<::MA::Flora::InstanceManager_InstantiateParams>  parameters) ;

static inline ::MA::Flora::InstanceManager_InstantiateInstancesWithBurst_0000032A$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x181484b40, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_InstantiateInstancesWithBurst_0000032A$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_InstantiateInstancesWithBurst_0000032A$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_InstantiateInstancesWithBurst_0000032A$PostfixBurstDelegate(InstanceManager_InstantiateInstancesWithBurst_0000032A$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_InstantiateInstancesWithBurst_0000032A$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_InstantiateInstancesWithBurst_0000032A$PostfixBurstDelegate(InstanceManager_InstantiateInstancesWithBurst_0000032A$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13012};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_InstantiateInstancesWithBurst_0000032A$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/InstantiateInstancesWithBurst_0000032A$BurstDirectCall
class CORDL_TYPE InstanceManager_InstantiateInstancesWithBurst_0000032A$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x1814846a0, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x181484570, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1814847c0, size 0x1a0, virtual false, abstract: false, final false
static inline void Invoke(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instances, ::MA::Flora::FloraInstanceTransform*  transforms, int32_t  instanceCount, ::by_ref<::MA::Flora::InstanceManager_InstantiateParams>  parameters) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_InstantiateInstancesWithBurst_0000032A$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_InstantiateInstancesWithBurst_0000032A$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_InstantiateInstancesWithBurst_0000032A$BurstDirectCall(InstanceManager_InstantiateInstancesWithBurst_0000032A$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_InstantiateInstancesWithBurst_0000032A$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_InstantiateInstancesWithBurst_0000032A$BurstDirectCall(InstanceManager_InstantiateInstancesWithBurst_0000032A$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13013};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_InstantiateInstancesWithBurst_0000032A$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/InstantiateInstancesWithBurst_0000032B$PostfixBurstDelegate
class CORDL_TYPE InstanceManager_InstantiateInstancesWithBurst_0000032B$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x181484960, size 0x1e0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instances, ::MA::Flora::FloraLocalToWorld*  localToWorlds, int32_t  count, ::by_ref<::MA::Flora::InstanceManager_InstantiateParams>  parameters, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x181308320, size 0xd10, virtual true, abstract: false, final false
inline void Invoke(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instances, ::MA::Flora::FloraLocalToWorld*  localToWorlds, int32_t  count, ::by_ref<::MA::Flora::InstanceManager_InstantiateParams>  parameters) ;

static inline ::MA::Flora::InstanceManager_InstantiateInstancesWithBurst_0000032B$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x181484b40, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_InstantiateInstancesWithBurst_0000032B$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_InstantiateInstancesWithBurst_0000032B$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_InstantiateInstancesWithBurst_0000032B$PostfixBurstDelegate(InstanceManager_InstantiateInstancesWithBurst_0000032B$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_InstantiateInstancesWithBurst_0000032B$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_InstantiateInstancesWithBurst_0000032B$PostfixBurstDelegate(InstanceManager_InstantiateInstancesWithBurst_0000032B$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13014};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_InstantiateInstancesWithBurst_0000032B$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/InstantiateInstancesWithBurst_0000032B$BurstDirectCall
class CORDL_TYPE InstanceManager_InstantiateInstancesWithBurst_0000032B$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x181484d30, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x181484c00, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x181484e50, size 0x1a0, virtual false, abstract: false, final false
static inline void Invoke(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instances, ::MA::Flora::FloraLocalToWorld*  localToWorlds, int32_t  count, ::by_ref<::MA::Flora::InstanceManager_InstantiateParams>  parameters) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_InstantiateInstancesWithBurst_0000032B$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_InstantiateInstancesWithBurst_0000032B$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_InstantiateInstancesWithBurst_0000032B$BurstDirectCall(InstanceManager_InstantiateInstancesWithBurst_0000032B$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_InstantiateInstancesWithBurst_0000032B$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_InstantiateInstancesWithBurst_0000032B$BurstDirectCall(InstanceManager_InstantiateInstancesWithBurst_0000032B$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13015};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_InstantiateInstancesWithBurst_0000032B$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/MarkInstanceTransformsDirtyWithBurst_0000032D$PostfixBurstDelegate
class CORDL_TYPE InstanceManager_MarkInstanceTransformsDirtyWithBurst_0000032D$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x181485590, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1804f6ae0, size 0xc0, virtual true, abstract: false, final false
inline void Invoke(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances) ;

static inline ::MA::Flora::InstanceManager_MarkInstanceTransformsDirtyWithBurst_0000032D$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1805827c0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_MarkInstanceTransformsDirtyWithBurst_0000032D$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_MarkInstanceTransformsDirtyWithBurst_0000032D$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_MarkInstanceTransformsDirtyWithBurst_0000032D$PostfixBurstDelegate(InstanceManager_MarkInstanceTransformsDirtyWithBurst_0000032D$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_MarkInstanceTransformsDirtyWithBurst_0000032D$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_MarkInstanceTransformsDirtyWithBurst_0000032D$PostfixBurstDelegate(InstanceManager_MarkInstanceTransformsDirtyWithBurst_0000032D$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13016};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_MarkInstanceTransformsDirtyWithBurst_0000032D$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/MarkInstanceTransformsDirtyWithBurst_0000032D$BurstDirectCall
class CORDL_TYPE InstanceManager_MarkInstanceTransformsDirtyWithBurst_0000032D$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x181485300, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x1814851d0, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x181485420, size 0x170, virtual false, abstract: false, final false
static inline void Invoke(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_MarkInstanceTransformsDirtyWithBurst_0000032D$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_MarkInstanceTransformsDirtyWithBurst_0000032D$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_MarkInstanceTransformsDirtyWithBurst_0000032D$BurstDirectCall(InstanceManager_MarkInstanceTransformsDirtyWithBurst_0000032D$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_MarkInstanceTransformsDirtyWithBurst_0000032D$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_MarkInstanceTransformsDirtyWithBurst_0000032D$BurstDirectCall(InstanceManager_MarkInstanceTransformsDirtyWithBurst_0000032D$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13017};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_MarkInstanceTransformsDirtyWithBurst_0000032D$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/WriteLocalToWorldsBatched_00000335$PostfixBurstDelegate
class CORDL_TYPE InstanceManager_WriteLocalToWorldsBatched_00000335$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18149a460, size 0xb0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instances, ::MA::Flora::FloraLocalToWorld*  srcLocalToWorlds, int32_t  count, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1805522b0, size 0xe0, virtual true, abstract: false, final false
inline void Invoke(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instances, ::MA::Flora::FloraLocalToWorld*  srcLocalToWorlds, int32_t  count) ;

static inline ::MA::Flora::InstanceManager_WriteLocalToWorldsBatched_00000335$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x18149a510, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_WriteLocalToWorldsBatched_00000335$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_WriteLocalToWorldsBatched_00000335$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_WriteLocalToWorldsBatched_00000335$PostfixBurstDelegate(InstanceManager_WriteLocalToWorldsBatched_00000335$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_WriteLocalToWorldsBatched_00000335$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_WriteLocalToWorldsBatched_00000335$PostfixBurstDelegate(InstanceManager_WriteLocalToWorldsBatched_00000335$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13018};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_WriteLocalToWorldsBatched_00000335$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceManager/WriteLocalToWorldsBatched_00000335$BurstDirectCall
class CORDL_TYPE InstanceManager_WriteLocalToWorldsBatched_00000335$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x18149a1c0, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x18149a090, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x18149a2e0, size 0x180, virtual false, abstract: false, final false
static inline void Invoke(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instances, ::MA::Flora::FloraLocalToWorld*  srcLocalToWorlds, int32_t  count) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager_WriteLocalToWorldsBatched_00000335$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_WriteLocalToWorldsBatched_00000335$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceManager_WriteLocalToWorldsBatched_00000335$BurstDirectCall(InstanceManager_WriteLocalToWorldsBatched_00000335$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceManager_WriteLocalToWorldsBatched_00000335$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceManager_WriteLocalToWorldsBatched_00000335$BurstDirectCall(InstanceManager_WriteLocalToWorldsBatched_00000335$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13019};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceManager_WriteLocalToWorldsBatched_00000335$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.AABB, MA.Flora.ArchetypeIndex, MA.Flora.ArchetypeKey, MA.Flora.BufferScatterData`1<T>, MA.Flora.CellLocation, MA.Flora.ChunkIndex, MA.Flora.CullingGrid, MA.Flora.FloraInstanceHandle, MA.Flora.FloraInstanceTransform, MA.Flora.GraphicsBufferRef, MA.Flora.GraphicsMatrix, MA.Flora.InstanceBuffer, MA.Flora.InstanceInCullingChunk, MA.Flora.InstanceManager::ChunkLightProbeScatterData, MA.Flora.NativeBitSet, MA.Flora.NativeBufferArray`1<T>, MA.Flora.NativeDataReference`1<T>, MA.Flora.NativeScatterList`1<T>, MA.Flora.PackedArchetypeData, MA.Flora.TemplateIndex, MA.Flora.TemplateManager, Unity.Burst.SharedStatic`1<T>, Unity.Collections.DoubleRewindableAllocators, Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, Unity.Collections.NativeParallelHashMap`2<TKey, TValue>, Unity.Collections.NativeParallelMultiHashMap`2<TKey, TValue>, Unity.Jobs.JobHandle, Unity.Mathematics.float4, Unity.Mathematics.uint2, Unity.Mathematics.uint4, Unity.Profiling.ProfilerMarker, UnityEngine.EntityId
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceManager
struct CORDL_TYPE InstanceManager {
public:
// Declarations
using AddTagsToInstanceWithBurst_00000289$BurstDirectCall = ::MA::Flora::InstanceManager_AddTagsToInstanceWithBurst_00000289$BurstDirectCall;

using AddTagsToInstanceWithBurst_00000289$PostfixBurstDelegate = ::MA::Flora::InstanceManager_AddTagsToInstanceWithBurst_00000289$PostfixBurstDelegate;

using AddTagsToInstancesBatchWithBurst_00000286$BurstDirectCall = ::MA::Flora::InstanceManager_AddTagsToInstancesBatchWithBurst_00000286$BurstDirectCall;

using AddTagsToInstancesBatchWithBurst_00000286$PostfixBurstDelegate = ::MA::Flora::InstanceManager_AddTagsToInstancesBatchWithBurst_00000286$PostfixBurstDelegate;

using AddTagsToInstancesWithBurst_0000028A$BurstDirectCall = ::MA::Flora::InstanceManager_AddTagsToInstancesWithBurst_0000028A$BurstDirectCall;

using AddTagsToInstancesWithBurst_0000028A$PostfixBurstDelegate = ::MA::Flora::InstanceManager_AddTagsToInstancesWithBurst_0000028A$PostfixBurstDelegate;

using ArchetypeStore = ::MA::Flora::InstanceManager_ArchetypeStore;

using ChunkLightProbeScatterData = ::MA::Flora::InstanceManager_ChunkLightProbeScatterData;

using ChunkStore = ::MA::Flora::InstanceManager_ChunkStore;

using ComputeBoundsForInstancesJob = ::MA::Flora::InstanceManager_ComputeBoundsForInstancesJob;

using ContainerTransformBatch = ::MA::Flora::InstanceManager_ContainerTransformBatch;

using CopyLocalToWorldPreviousJob = ::MA::Flora::InstanceManager_CopyLocalToWorldPreviousJob;

using DestroyAllInstancesInSceneWithBurst_00000276$BurstDirectCall = ::MA::Flora::InstanceManager_DestroyAllInstancesInSceneWithBurst_00000276$BurstDirectCall;

using DestroyAllInstancesInSceneWithBurst_00000276$PostfixBurstDelegate = ::MA::Flora::InstanceManager_DestroyAllInstancesInSceneWithBurst_00000276$PostfixBurstDelegate;

using DestroyWithBurst_00000312$BurstDirectCall = ::MA::Flora::InstanceManager_DestroyWithBurst_00000312$BurstDirectCall;

using DestroyWithBurst_00000312$PostfixBurstDelegate = ::MA::Flora::InstanceManager_DestroyWithBurst_00000312$PostfixBurstDelegate;

using GatherInstanceInChunkForInstances_0000027A$BurstDirectCall = ::MA::Flora::InstanceManager_GatherInstanceInChunkForInstances_0000027A$BurstDirectCall;

using GatherInstanceInChunkForInstances_0000027A$PostfixBurstDelegate = ::MA::Flora::InstanceManager_GatherInstanceInChunkForInstances_0000027A$PostfixBurstDelegate;

using GatherProbePositionsJob = ::MA::Flora::InstanceManager_GatherProbePositionsJob;

using GetBoundsWithBurst_0000031E$BurstDirectCall = ::MA::Flora::InstanceManager_GetBoundsWithBurst_0000031E$BurstDirectCall;

using GetBoundsWithBurst_0000031E$PostfixBurstDelegate = ::MA::Flora::InstanceManager_GetBoundsWithBurst_0000031E$PostfixBurstDelegate;

using GetDetailInstanceMapWithBurst_000002A8$BurstDirectCall = ::MA::Flora::InstanceManager_GetDetailInstanceMapWithBurst_000002A8$BurstDirectCall;

using GetDetailInstanceMapWithBurst_000002A8$PostfixBurstDelegate = ::MA::Flora::InstanceManager_GetDetailInstanceMapWithBurst_000002A8$PostfixBurstDelegate;

using GetInstanceContainerIndexMapWithBurst_00000327$BurstDirectCall = ::MA::Flora::InstanceManager_GetInstanceContainerIndexMapWithBurst_00000327$BurstDirectCall;

using GetInstanceContainerIndexMapWithBurst_00000327$PostfixBurstDelegate = ::MA::Flora::InstanceManager_GetInstanceContainerIndexMapWithBurst_00000327$PostfixBurstDelegate;

using GetInstanceInContainersAndIndicesWithBurst_00000329$BurstDirectCall = ::MA::Flora::InstanceManager_GetInstanceInContainersAndIndicesWithBurst_00000329$BurstDirectCall;

using GetInstanceInContainersAndIndicesWithBurst_00000329$PostfixBurstDelegate = ::MA::Flora::InstanceManager_GetInstanceInContainersAndIndicesWithBurst_00000329$PostfixBurstDelegate;

using GetLocalToWorldsWithBurst_00000317$BurstDirectCall = ::MA::Flora::InstanceManager_GetLocalToWorldsWithBurst_00000317$BurstDirectCall;

using GetLocalToWorldsWithBurst_00000317$PostfixBurstDelegate = ::MA::Flora::InstanceManager_GetLocalToWorldsWithBurst_00000317$PostfixBurstDelegate;

using GetPositionsWithBurst_0000031B$BurstDirectCall = ::MA::Flora::InstanceManager_GetPositionsWithBurst_0000031B$BurstDirectCall;

using GetPositionsWithBurst_0000031B$PostfixBurstDelegate = ::MA::Flora::InstanceManager_GetPositionsWithBurst_0000031B$PostfixBurstDelegate;

using GetValidTreeInTerrainsAndIndicesWithBurst_000002AC$BurstDirectCall = ::MA::Flora::InstanceManager_GetValidTreeInTerrainsAndIndicesWithBurst_000002AC$BurstDirectCall;

using GetValidTreeInTerrainsAndIndicesWithBurst_000002AC$PostfixBurstDelegate = ::MA::Flora::InstanceManager_GetValidTreeInTerrainsAndIndicesWithBurst_000002AC$PostfixBurstDelegate;

using GetValidTreeInTerrainsWithBurst_000002AA$BurstDirectCall = ::MA::Flora::InstanceManager_GetValidTreeInTerrainsWithBurst_000002AA$BurstDirectCall;

using GetValidTreeInTerrainsWithBurst_000002AA$PostfixBurstDelegate = ::MA::Flora::InstanceManager_GetValidTreeInTerrainsWithBurst_000002AA$PostfixBurstDelegate;

using GetWorldTransformsWithBurst_00000319$BurstDirectCall = ::MA::Flora::InstanceManager_GetWorldTransformsWithBurst_00000319$BurstDirectCall;

using GetWorldTransformsWithBurst_00000319$PostfixBurstDelegate = ::MA::Flora::InstanceManager_GetWorldTransformsWithBurst_00000319$PostfixBurstDelegate;

using InitializeFrameWithBurst_00000296$BurstDirectCall = ::MA::Flora::InstanceManager_InitializeFrameWithBurst_00000296$BurstDirectCall;

using InitializeFrameWithBurst_00000296$PostfixBurstDelegate = ::MA::Flora::InstanceManager_InitializeFrameWithBurst_00000296$PostfixBurstDelegate;

using InstanceBatchFromInstanceChunkData_0000027B$BurstDirectCall = ::MA::Flora::InstanceManager_InstanceBatchFromInstanceChunkData_0000027B$BurstDirectCall;

using InstanceBatchFromInstanceChunkData_0000027B$PostfixBurstDelegate = ::MA::Flora::InstanceManager_InstanceBatchFromInstanceChunkData_0000027B$PostfixBurstDelegate;

using InstanceBatchInChunk = ::MA::Flora::InstanceManager_InstanceBatchInChunk;

using InstanceInContainerIndexPair = ::MA::Flora::InstanceManager_InstanceInContainerIndexPair;

using InstantiateInstancesWithBurst_0000032A$BurstDirectCall = ::MA::Flora::InstanceManager_InstantiateInstancesWithBurst_0000032A$BurstDirectCall;

using InstantiateInstancesWithBurst_0000032A$PostfixBurstDelegate = ::MA::Flora::InstanceManager_InstantiateInstancesWithBurst_0000032A$PostfixBurstDelegate;

using InstantiateInstancesWithBurst_0000032B$BurstDirectCall = ::MA::Flora::InstanceManager_InstantiateInstancesWithBurst_0000032B$BurstDirectCall;

using InstantiateInstancesWithBurst_0000032B$PostfixBurstDelegate = ::MA::Flora::InstanceManager_InstantiateInstancesWithBurst_0000032B$PostfixBurstDelegate;

using InstantiateParams = ::MA::Flora::InstanceManager_InstantiateParams;

using MarkInstanceTransformsDirtyWithBurst_0000032D$BurstDirectCall = ::MA::Flora::InstanceManager_MarkInstanceTransformsDirtyWithBurst_0000032D$BurstDirectCall;

using MarkInstanceTransformsDirtyWithBurst_0000032D$PostfixBurstDelegate = ::MA::Flora::InstanceManager_MarkInstanceTransformsDirtyWithBurst_0000032D$PostfixBurstDelegate;

using MoveInstancesToNewArchetypeBatchWithBurst_00000281$BurstDirectCall = ::MA::Flora::InstanceManager_MoveInstancesToNewArchetypeBatchWithBurst_00000281$BurstDirectCall;

using MoveInstancesToNewArchetypeBatchWithBurst_00000281$PostfixBurstDelegate = ::MA::Flora::InstanceManager_MoveInstancesToNewArchetypeBatchWithBurst_00000281$PostfixBurstDelegate;

using OnPostLateUpdateWithBurst_00000299$BurstDirectCall = ::MA::Flora::InstanceManager_OnPostLateUpdateWithBurst_00000299$BurstDirectCall;

using OnPostLateUpdateWithBurst_00000299$PostfixBurstDelegate = ::MA::Flora::InstanceManager_OnPostLateUpdateWithBurst_00000299$PostfixBurstDelegate;

using RemoveTagsFromInstanceWithBurst_00000290$BurstDirectCall = ::MA::Flora::InstanceManager_RemoveTagsFromInstanceWithBurst_00000290$BurstDirectCall;

using RemoveTagsFromInstanceWithBurst_00000290$PostfixBurstDelegate = ::MA::Flora::InstanceManager_RemoveTagsFromInstanceWithBurst_00000290$PostfixBurstDelegate;

using RemoveTagsFromInstancesBatchWithBurst_0000028D$BurstDirectCall = ::MA::Flora::InstanceManager_RemoveTagsFromInstancesBatchWithBurst_0000028D$BurstDirectCall;

using RemoveTagsFromInstancesBatchWithBurst_0000028D$PostfixBurstDelegate = ::MA::Flora::InstanceManager_RemoveTagsFromInstancesBatchWithBurst_0000028D$PostfixBurstDelegate;

using RemoveTagsFromInstancesWithBurst_00000291$BurstDirectCall = ::MA::Flora::InstanceManager_RemoveTagsFromInstancesWithBurst_00000291$BurstDirectCall;

using RemoveTagsFromInstancesWithBurst_00000291$PostfixBurstDelegate = ::MA::Flora::InstanceManager_RemoveTagsFromInstancesWithBurst_00000291$PostfixBurstDelegate;

using ScatterArchetypeDataJob = ::MA::Flora::InstanceManager_ScatterArchetypeDataJob;

using ScatterEntityIdsJob = ::MA::Flora::InstanceManager_ScatterEntityIdsJob;

using ScatterInitDynamicMatricesJob = ::MA::Flora::InstanceManager_ScatterInitDynamicMatricesJob;

using ScatterLightmapSTJob = ::MA::Flora::InstanceManager_ScatterLightmapSTJob;

using ScatterProbeDataJob = ::MA::Flora::InstanceManager_ScatterProbeDataJob;

using ScatterRandomIdsJob = ::MA::Flora::InstanceManager_ScatterRandomIdsJob;

using ScatterStaticMatricesJob = ::MA::Flora::InstanceManager_ScatterStaticMatricesJob;

using ScatterUpdateDynamicMatricesJob = ::MA::Flora::InstanceManager_ScatterUpdateDynamicMatricesJob;

using ScatterVariationColorJob = ::MA::Flora::InstanceManager_ScatterVariationColorJob;

using ScheduleUploadsWithBurst_000002C2$BurstDirectCall = ::MA::Flora::InstanceManager_ScheduleUploadsWithBurst_000002C2$BurstDirectCall;

using ScheduleUploadsWithBurst_000002C2$PostfixBurstDelegate = ::MA::Flora::InstanceManager_ScheduleUploadsWithBurst_000002C2$PostfixBurstDelegate;

using SetInstanceInContainerIndicesWithBurst_00000324$BurstDirectCall = ::MA::Flora::InstanceManager_SetInstanceInContainerIndicesWithBurst_00000324$BurstDirectCall;

using SetInstanceInContainerIndicesWithBurst_00000324$PostfixBurstDelegate = ::MA::Flora::InstanceManager_SetInstanceInContainerIndicesWithBurst_00000324$PostfixBurstDelegate;

using SetTerrainTreeIndicesWithBurst_000002AE$BurstDirectCall = ::MA::Flora::InstanceManager_SetTerrainTreeIndicesWithBurst_000002AE$BurstDirectCall;

using SetTerrainTreeIndicesWithBurst_000002AE$PostfixBurstDelegate = ::MA::Flora::InstanceManager_SetTerrainTreeIndicesWithBurst_000002AE$PostfixBurstDelegate;

using SortInstanceInChunk_00000279$BurstDirectCall = ::MA::Flora::InstanceManager_SortInstanceInChunk_00000279$BurstDirectCall;

using SortInstanceInChunk_00000279$PostfixBurstDelegate = ::MA::Flora::InstanceManager_SortInstanceInChunk_00000279$PostfixBurstDelegate;

using TreeInTerrainIndexPair = ::MA::Flora::InstanceManager_TreeInTerrainIndexPair;

using UpdateLocalToWorldsJob = ::MA::Flora::InstanceManager_UpdateLocalToWorldsJob;

using UpdateLocalTransformsJob = ::MA::Flora::InstanceManager_UpdateLocalTransformsJob;

using UpdateTrackedContainerTransformsJob = ::MA::Flora::InstanceManager_UpdateTrackedContainerTransformsJob;

using UpdateWorldTransformsJob = ::MA::Flora::InstanceManager_UpdateWorldTransformsJob;

using WriteLocalToWorldsBatched_00000335$BurstDirectCall = ::MA::Flora::InstanceManager_WriteLocalToWorldsBatched_00000335$BurstDirectCall;

using WriteLocalToWorldsBatched_00000335$PostfixBurstDelegate = ::MA::Flora::InstanceManager_WriteLocalToWorldsBatched_00000335$PostfixBurstDelegate;

using __InteropDelegates = ::MA::Flora::InstanceManager___InteropDelegates;

using __c__DisplayClass380_0 = ::MA::Flora::InstanceManager___c__DisplayClass380_0;

/// @brief Field AllocateInstancesMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AllocateInstancesMarker, put=setStaticF_AllocateInstancesMarker)) ::Unity::Profiling::ProfilerMarker  AllocateInstancesMarker;

 __declspec(property(get=get_ArchetypeDataBuffer)) ::MA::Flora::GraphicsBufferRef  ArchetypeDataBuffer;

 __declspec(property(get=get_ContentVersion)) uint32_t  ContentVersion;

/// @brief Field ConvertAndUpdateLocalToWorldsMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ConvertAndUpdateLocalToWorldsMarker, put=setStaticF_ConvertAndUpdateLocalToWorldsMarker)) ::Unity::Profiling::ProfilerMarker  ConvertAndUpdateLocalToWorldsMarker;

 __declspec(property(get=get_DataDependencies, put=set_DataDependencies)) ::Unity::Jobs::JobHandle  DataDependencies;

/// @brief Field DestroyInstancesMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DestroyInstancesMarker, put=setStaticF_DestroyInstancesMarker)) ::Unity::Profiling::ProfilerMarker  DestroyInstancesMarker;

 __declspec(property(get=get_ForceLightProbeUpdate, put=set_ForceLightProbeUpdate)) bool  ForceLightProbeUpdate;

 __declspec(property(get=get_FrameAllocator)) ::Unity::Collections::RewindableAllocator  FrameAllocator;

 __declspec(property(get=get_FrameAllocatorHandle)) ::Unity::Collections::AllocatorManager_AllocatorHandle  FrameAllocatorHandle;

 __declspec(property(get=get_FrameVersion)) uint32_t  FrameVersion;

/// @brief Field InitializeFrameMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InitializeFrameMarker, put=setStaticF_InitializeFrameMarker)) ::Unity::Profiling::ProfilerMarker  InitializeFrameMarker;

 __declspec(property(get=get_InstanceAABBs)) ::Unity::Collections::NativeArray_1<::MA::Flora::AABB>  InstanceAABBs;

 __declspec(property(get=get_InstanceFlippedWinding)) ::Unity::Collections::NativeArray_1<uint8_t>  InstanceFlippedWinding;

 __declspec(property(get=get_InstanceHandles)) ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  InstanceHandles;

 __declspec(property(get=get_InstanceInCullingChunks)) ::Unity::Collections::NativeArray_1<::MA::Flora::InstanceInCullingChunk>  InstanceInCullingChunks;

 __declspec(property(get=get_InstanceLightmapSTs)) ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  InstanceLightmapSTs;

 __declspec(property(get=get_InstanceLocalToWorld)) ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  InstanceLocalToWorld;

 __declspec(property(get=get_InstanceLocations)) ::Unity::Collections::NativeArray_1<::MA::Flora::CellLocation>  InstanceLocations;

 __declspec(property(get=get_InstanceMovedLastFrame)) ::Unity::Collections::NativeArray_1<uint8_t>  InstanceMovedLastFrame;

 __declspec(property(get=get_InstanceMovedThisFrame)) ::Unity::Collections::NativeArray_1<uint8_t>  InstanceMovedThisFrame;

 __declspec(property(get=get_InstancePrevLocalToWorld)) ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  InstancePrevLocalToWorld;

 __declspec(property(get=get_InstanceRandomIDs)) ::Unity::Collections::NativeArray_1<float_t>  InstanceRandomIDs;

 __declspec(property(get=get_InstanceVariationColors)) ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  InstanceVariationColors;

 __declspec(property(get=get_InstancesAllocated)) int32_t  InstancesAllocated;

/// @brief Field InstantiateTransformsMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InstantiateTransformsMarker, put=setStaticF_InstantiateTransformsMarker)) ::Unity::Profiling::ProfilerMarker  InstantiateTransformsMarker;

 __declspec(property(get=get_MaxChunkCount)) int32_t  MaxChunkCount;

/// @brief Field PostLateUpdateMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PostLateUpdateMarker, put=setStaticF_PostLateUpdateMarker)) ::Unity::Profiling::ProfilerMarker  PostLateUpdateMarker;

 __declspec(property(get=get_Self)) ::MA::Flora::InstanceManager*  Self;

/// @brief Field SubmitToGpuMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SubmitToGpuMarker, put=setStaticF_SubmitToGpuMarker)) ::Unity::Profiling::ProfilerMarker  SubmitToGpuMarker;

 __declspec(property(get=get_TerrainDetailChunks)) ::MA::Flora::NativeBitSet  TerrainDetailChunks;

/// @brief Field UpdateLocalToWorldsMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UpdateLocalToWorldsMarker, put=setStaticF_UpdateLocalToWorldsMarker)) ::Unity::Profiling::ProfilerMarker  UpdateLocalToWorldsMarker;

/// @brief Field _InstantiateDetailsFromBurstInternal_1_BurstFP, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__InstantiateDetailsFromBurstInternal_1_BurstFP, put=setStaticF__InstantiateDetailsFromBurstInternal_1_BurstFP)) ::Unity::Burst::SharedStatic_1<uint64_t>  _InstantiateDetailsFromBurstInternal_1_BurstFP;

/// @brief Field _InstantiateTreesFromBurst_0_BurstFP, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__InstantiateTreesFromBurst_0_BurstFP, put=setStaticF__InstantiateTreesFromBurst_0_BurstFP)) ::Unity::Burst::SharedStatic_1<uint64_t>  _InstantiateTreesFromBurst_0_BurstFP;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method AddChunkToArchetype, addr 0x181466200, size 0x1d0, virtual false, abstract: false, final false
inline void AddChunkToArchetype(::MA::Flora::ArchetypeIndex  archetype, ::MA::Flora::ChunkIndex  chunk) ;

/// @brief Method AddChunkToArchetypeFreeSlotList, addr 0x181466120, size 0xe0, virtual false, abstract: false, final false
inline void AddChunkToArchetypeFreeSlotList(::MA::Flora::ArchetypeIndex  archetype, ::MA::Flora::ChunkIndex  chunk) ;

/// @brief Method AddTagsToBatch, addr 0x1814663d0, size 0x160, virtual false, abstract: false, final false
inline void AddTagsToBatch(::by_ref<::MA::Flora::InstanceManager_InstanceBatchInChunk>  batch, ::MA::Flora::InstanceTag  tags) ;

/// @brief Method AddTagsToInstance, addr 0x181466550, size 0x120, virtual false, abstract: false, final false
inline void AddTagsToInstance(::MA::Flora::FloraInstanceHandle  instance, ::MA::Flora::InstanceTag  tags) ;

/// @brief Method AddTagsToInstanceWithBurst, addr 0x181466540, size 0x10, virtual false, abstract: false, final false
static inline void AddTagsToInstanceWithBurst(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instance, ::MA::Flora::InstanceTag  tags) ;

/// @brief Method AddTagsToInstanceWithBurst$BurstManaged, addr 0x181466530, size 0x10, virtual false, abstract: false, final false
static inline void AddTagsToInstanceWithBurst$BurstManaged(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instance, ::MA::Flora::InstanceTag  tags) ;

/// @brief Method AddTagsToInstances, addr 0x1814669b0, size 0x100, virtual false, abstract: false, final false
inline void AddTagsToInstances(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::MA::Flora::InstanceTag  tags) ;

/// @brief Method AddTagsToInstancesBatch, addr 0x181466690, size 0x1c0, virtual false, abstract: false, final false
inline void AddTagsToInstancesBatch(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::InstanceManager_InstanceBatchInChunk>*  sortedInstanceBatchList, ::MA::Flora::InstanceTag  tags) ;

/// @brief Method AddTagsToInstancesBatchWithBurst, addr 0x181466680, size 0x10, virtual false, abstract: false, final false
static inline void AddTagsToInstancesBatchWithBurst(::MA::Flora::InstanceManager*  data, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::InstanceManager_InstanceBatchInChunk>*  sortedInstanceBatchList, ::MA::Flora::InstanceTag  tags) ;

/// @brief Method AddTagsToInstancesBatchWithBurst$BurstManaged, addr 0x181466670, size 0x10, virtual false, abstract: false, final false
static inline void AddTagsToInstancesBatchWithBurst$BurstManaged(::MA::Flora::InstanceManager*  data, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::InstanceManager_InstanceBatchInChunk>*  sortedInstanceBatchList, ::MA::Flora::InstanceTag  tags) ;

/// @brief Method AddTagsToInstancesWithBurst, addr 0x1814669a0, size 0x10, virtual false, abstract: false, final false
static inline void AddTagsToInstancesWithBurst(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instances, int32_t  count, ::MA::Flora::InstanceTag  tags) ;

/// @brief Method AddTagsToInstancesWithBurst$BurstManaged, addr 0x181466850, size 0x150, virtual false, abstract: false, final false
static inline void AddTagsToInstancesWithBurst$BurstManaged(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instances, int32_t  count, ::MA::Flora::InstanceTag  tags) ;

/// @brief Method AllocateChunk, addr 0x181466cb0, size 0x220, virtual false, abstract: false, final false
inline ::MA::Flora::ChunkIndex AllocateChunk() ;

/// @brief Method AllocateChunkForArchetype, addr 0x181466ab0, size 0x200, virtual false, abstract: false, final false
inline ::MA::Flora::ChunkIndex AllocateChunkForArchetype(::MA::Flora::ArchetypeIndex  archetype) ;

/// @brief Method AllocateInstances, addr 0x181466ed0, size 0xb0, virtual false, abstract: false, final false
inline void AllocateInstances(::MA::Flora::ChunkIndex  chunk, int32_t  baseIndex, int32_t  count, ::MA::Flora::FloraInstanceHandle*  outputEntities) ;

/// @brief Method AllocateInstances, addr 0x181466f80, size 0x780, virtual false, abstract: false, final false
inline void AllocateInstances(::MA::Flora::FloraInstanceHandle*  instances, ::MA::Flora::FloraLocalToWorld*  localToWorlds, int32_t  remaining, ::by_ref<::MA::Flora::InstanceManager_InstantiateParams>  parameters) ;

/// @brief Method AllocateSpaceIntoChunk, addr 0x181467700, size 0xe0, virtual false, abstract: false, final false
inline int32_t AllocateSpaceIntoChunk(::MA::Flora::ArchetypeIndex  archetype, ::MA::Flora::ChunkIndex  chunk, int32_t  count, ::by_ref<int32_t>  outIndex) ;

/// @brief Method AllocateTrackedContainerSlot, addr 0x1814677e0, size 0xd0, virtual false, abstract: false, final false
inline int32_t AllocateTrackedContainerSlot(::UnityEngine::EntityId  containerEntity) ;

/// @brief Method AppendTrackedContainerInstances, addr 0x1814678b0, size 0x1c0, virtual false, abstract: false, final false
inline void AppendTrackedContainerInstances(::UnityEngine::EntityId  containerEntity, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  handles, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  localTransforms) ;

/// @brief Method CalculateInstanceBounds, addr 0x181467a70, size 0x660, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds CalculateInstanceBounds(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Mathematics::float4x4  inSpace, bool  useInSpace) ;

/// @brief Method CheckChunkIndexCount, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void CheckChunkIndexCount(::MA::Flora::ChunkIndex  chunk, int32_t  indexInChunk, int32_t  count) ;

/// @brief Method CheckInstance, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void CheckInstance(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method ChunkHasLightProbes, addr 0x1814680d0, size 0x20, virtual false, abstract: false, final false
inline bool ChunkHasLightProbes(::MA::Flora::ChunkIndex  chunk) ;

/// @brief Method ChunkHasLightmapST, addr 0x1814680f0, size 0x20, virtual false, abstract: false, final false
inline bool ChunkHasLightmapST(::MA::Flora::ChunkIndex  chunk) ;

/// @brief Method ClearTrackedContainerInstances, addr 0x181468110, size 0x1c0, virtual false, abstract: false, final false
inline void ClearTrackedContainerInstances(::UnityEngine::EntityId  containerEntity) ;

/// @brief Method Clone, addr 0x1814682d0, size 0x1e0, virtual false, abstract: false, final false
inline void Clone(::by_ref<::MA::Flora::InstanceManager_InstanceBatchInChunk>  srcBatch, ::MA::Flora::ArchetypeIndex  dstArchetype, ::MA::Flora::ChunkIndex  dstChunk) ;

/// @brief Method CopyInstanceFlags, addr 0x1814684b0, size 0x130, virtual false, abstract: false, final false
inline void CopyInstanceFlags(::MA::Flora::ChunkIndex  srcChunk, int32_t  srcIndexInChunk, ::MA::Flora::ChunkIndex  dstChunk, int32_t  dstIndexInChunk, int32_t  count) ;

/// @brief Method CopyInstances, addr 0x1814685e0, size 0x3b0, virtual false, abstract: false, final false
inline void CopyInstances(::MA::Flora::ChunkIndex  srcChunk, int32_t  srcIndexInChunk, ::MA::Flora::ChunkIndex  dstChunk, int32_t  dstIndexInChunk, int32_t  count) ;

/// @brief Method CreateInstance, addr 0x181468fd0, size 0x2e0, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceHandle CreateInstance(::UnityEngine::GameObject*  identitySource, ::UnityEngine::GameObject*  renderSource, ::UnityEngine::Transform*  transform, int32_t  lightmapIndex, ::Unity::Mathematics::float4  lightmapST) ;

/// @brief Method CreateInstance, addr 0x181469560, size 0x1d0, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceHandle CreateInstance(::UnityEngine::GameObject*  source, ::UnityEngine::GameObject*  owner, ::MA::Flora::FloraLocalToWorld  localToWorld) ;

/// @brief Method CreateInstance, addr 0x1814692b0, size 0x2b0, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceHandle CreateInstance(::UnityEngine::GameObject*  source, ::UnityEngine::Transform*  parent, ::UnityEngine::EntityId  containerEntity, ::MA::Flora::FloraInstanceTransform  localInstanceTransform) ;

/// @brief Method CreateInstance, addr 0x181468ae0, size 0x290, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceHandle CreateInstance(::UnityEngine::GameObject*  source, ::UnityEngine::Transform*  parent, ::MA::Flora::FloraInstanceTransform  localInstanceTransform) ;

/// @brief Method CreateInstance, addr 0x181468d70, size 0x260, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceHandle CreateInstance(::UnityEngine::GameObject*  source, ::UnityEngine::Transform*  transform) ;

/// @brief Method CreateInstanceBatchList, addr 0x181468990, size 0x150, virtual false, abstract: false, final false
inline bool CreateInstanceBatchList(::MA::Flora::FloraInstanceHandle*  instances, int32_t  count, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::InstanceManager_InstanceBatchInChunk>>  instanceBatchList) ;

/// @brief Method CreateInstances, addr 0x181469b00, size 0x30, virtual false, abstract: false, final false
inline void CreateInstances(::MA::Flora::FloraInstanceHandle*  instances, ::MA::Flora::FloraLocalToWorld*  localToWorlds, int32_t  instanceCount, ::by_ref<::MA::Flora::InstanceManager_InstantiateParams>  parameters) ;

/// @brief Method CreateInstances, addr 0x18146a080, size 0x30, virtual false, abstract: false, final false
inline void CreateInstances(::MA::Flora::FloraInstanceHandle*  instances, ::MA::Flora::FloraInstanceTransform*  transforms, int32_t  instanceCount, ::by_ref<::MA::Flora::InstanceManager_InstantiateParams>  parameters) ;

/// @brief Method CreateInstances, addr 0x181469b30, size 0x2c0, virtual false, abstract: false, final false
inline void CreateInstances(::UnityEngine::GameObject*  source, ::UnityEngine::Transform*  parent, ::UnityEngine::EntityId  containerEntity, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  localTransforms) ;

/// @brief Method CreateInstances, addr 0x181469df0, size 0x290, virtual false, abstract: false, final false
inline void CreateInstances(::UnityEngine::GameObject*  source, ::UnityEngine::Transform*  parent, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  localTransforms) ;

/// @brief Method CreateInstances, addr 0x181469730, size 0x200, virtual false, abstract: false, final false
inline void CreateInstances(::UnityEngine::GameObject*  source, ::UnityEngine::GameObject*  sceneObject, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>  localToWorlds) ;

/// @brief Method CreateInstances, addr 0x181469930, size 0x1d0, virtual false, abstract: false, final false
inline void CreateInstances(::UnityEngine::GameObject*  source, ::UnityEngine::GameObject*  sceneObject, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  localTransforms) ;

/// @brief Method DeallocateInstances, addr 0x18146a160, size 0x70, virtual false, abstract: false, final false
inline void DeallocateInstances(::MA::Flora::ArchetypeIndex  archetype, ::MA::Flora::ChunkIndex  chunk, int32_t  indexInChunk, int32_t  batchCount) ;

/// @brief Method DeallocateInstancesInChunk, addr 0x18146a0b0, size 0xb0, virtual false, abstract: false, final false
inline void DeallocateInstancesInChunk(::MA::Flora::ArchetypeIndex  archetype, ::by_ref<::MA::Flora::InstanceManager_InstanceBatchInChunk>  batch) ;

/// @brief Method Destroy, addr 0x18146aa40, size 0x30, virtual false, abstract: false, final false
inline void Destroy(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method Destroy, addr 0x18146aa20, size 0x20, virtual false, abstract: false, final false
inline void Destroy(::MA::Flora::FloraInstanceHandle*  instances, int32_t  instanceCount) ;

/// @brief Method Destroy, addr 0x18146a9e0, size 0x40, virtual false, abstract: false, final false
inline void Destroy(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances) ;

/// @brief Method DestroyAllInstancesInScene, addr 0x18146a520, size 0x20, virtual false, abstract: false, final false
inline void DestroyAllInstancesInScene(::UnityEngine::SceneManagement::Scene  scene) ;

/// @brief Method DestroyAllInstancesInSceneInternal, addr 0x18146a1d0, size 0x340, virtual false, abstract: false, final false
inline void DestroyAllInstancesInSceneInternal(::UnityEngine::SceneManagement::Scene  scene) ;

/// @brief Method DestroyAllInstancesInSceneWithBurst, addr 0x18146a520, size 0x20, virtual false, abstract: false, final false
static inline void DestroyAllInstancesInSceneWithBurst(::MA::Flora::InstanceManager*  im, ::UnityEngine::SceneManagement::Scene  scene) ;

/// @brief Method DestroyAllInstancesInSceneWithBurst$BurstManaged, addr 0x18146a510, size 0x10, virtual false, abstract: false, final false
static inline void DestroyAllInstancesInSceneWithBurst$BurstManaged(::MA::Flora::InstanceManager*  im, ::UnityEngine::SceneManagement::Scene  scene) ;

/// @brief Method DestroyArchetype, addr 0x18146a540, size 0x280, virtual false, abstract: false, final false
inline void DestroyArchetype(::MA::Flora::ArchetypeIndex  archetype) ;

/// @brief Method DestroyBatch, addr 0x18146a7c0, size 0x70, virtual false, abstract: false, final false
inline void DestroyBatch(::by_ref<::MA::Flora::InstanceManager_InstanceBatchInChunk>  batch) ;

/// @brief Method DestroyInstances, addr 0x18146a830, size 0x190, virtual false, abstract: false, final false
inline void DestroyInstances(::MA::Flora::FloraInstanceHandle*  instances, int32_t  count) ;

/// @brief Method DestroyWithBurst, addr 0x18146a9d0, size 0x10, virtual false, abstract: false, final false
static inline void DestroyWithBurst(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instances, int32_t  instanceCount) ;

/// @brief Method DestroyWithBurst$BurstManaged, addr 0x18146a9c0, size 0x10, virtual false, abstract: false, final false
static inline void DestroyWithBurst$BurstManaged(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instances, int32_t  instanceCount) ;

/// @brief Method DispatchInstanceUploads, addr 0x18146aa70, size 0x5c0, virtual false, abstract: false, final false
inline void DispatchInstanceUploads(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method Dispose, addr 0x18146b0b0, size 0x480, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method DisposeTrackedContainers, addr 0x18146b030, size 0x80, virtual false, abstract: false, final false
inline void DisposeTrackedContainers() ;

/// @brief Method EnsureTrackedContainerCapacity, addr 0x18146b530, size 0xc0, virtual false, abstract: false, final false
inline void EnsureTrackedContainerCapacity(int32_t  minCapacity) ;

/// @brief Method Exists, addr 0x181465700, size 0x50, virtual false, abstract: false, final false
inline bool Exists(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method Exists, addr 0x181465750, size 0x40, virtual false, abstract: false, final false
inline bool Exists(int32_t  instanceIndex) ;

/// @brief Method FindOrCreateArchetype, addr 0x18146b760, size 0x290, virtual false, abstract: false, final false
inline ::MA::Flora::ArchetypeIndex FindOrCreateArchetype(::MA::Flora::ArchetypeKey  archetypeKey) ;

/// @brief Method FindOrCreateArchetype, addr 0x18146b6a0, size 0xc0, virtual false, abstract: false, final false
inline ::MA::Flora::ArchetypeIndex FindOrCreateArchetype(::by_ref<::MA::Flora::InstanceManager_InstantiateParams>  instantiateParams) ;

/// @brief Method FindOrCreateArchetype, addr 0x18146b5f0, size 0xb0, virtual false, abstract: false, final false
inline ::MA::Flora::ArchetypeIndex FindOrCreateArchetype(::MA::Flora::InstanceTag  tags, ::UnityEngine::SceneManagement::Scene  scene, uint8_t  layer, float_t  maxRenderDistance, int32_t  lightmapIndex, uint64_t  sceneCullingMask, ::MA::Flora::TemplateIndex  _cordl_template, ::UnityEngine::EntityId  containerEntity) ;

/// @brief Method FlushPendingSpatialUpdates, addr 0x18146ba70, size 0x40, virtual false, abstract: false, final false
inline void FlushPendingSpatialUpdates() ;

/// @brief Method FlushPendingSpatialUpdatesInternal, addr 0x18146b9f0, size 0x80, virtual false, abstract: false, final false
inline void FlushPendingSpatialUpdatesInternal() ;

/// @brief Method GatherInstanceInChunkForInstances, addr 0x18146bb10, size 0x10, virtual false, abstract: false, final false
static inline void GatherInstanceInChunkForInstances(::MA::Flora::FloraInstanceHandle*  instances, ::MA::Flora::InstanceInChunk*  instanceChunkData, int32_t  instanceCount) ;

/// @brief Method GatherInstanceInChunkForInstances$BurstManaged, addr 0x18146bab0, size 0x60, virtual false, abstract: false, final false
static inline void GatherInstanceInChunkForInstances$BurstManaged(::MA::Flora::FloraInstanceHandle*  instances, ::MA::Flora::InstanceInChunk*  instanceChunkData, int32_t  instanceCount) ;

/// @brief Method GetBounds, addr 0x18146bc90, size 0x80, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Bounds> GetBounds(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method GetBounds, addr 0x18146bd10, size 0xd0, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds GetBounds(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetBoundsWithBurst, addr 0x18146bc80, size 0x10, virtual false, abstract: false, final false
static inline void GetBoundsWithBurst(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Bounds>>  result) ;

/// @brief Method GetBoundsWithBurst$BurstManaged, addr 0x18146bb20, size 0x160, virtual false, abstract: false, final false
static inline void GetBoundsWithBurst$BurstManaged(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Bounds>>  result) ;

/// @brief Method GetChunkWithFreeSpace, addr 0x18146bde0, size 0xc0, virtual false, abstract: false, final false
inline ::MA::Flora::ChunkIndex GetChunkWithFreeSpace(::MA::Flora::ArchetypeIndex  archetype) ;

/// @brief Method GetChunksWithTags, addr 0x18146bea0, size 0x1f0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex> GetChunksWithTags(::MA::Flora::InstanceTag  tags, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator, ::by_ref<int32_t>  instanceCount) ;

/// @brief Method GetDetailInstanceMap, addr 0x18146c1e0, size 0x80, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeParallelMultiHashMap_2<::MA::Flora::DetailInTerrain,::MA::Flora::FloraInstanceHandle> GetDetailInstanceMap(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method GetDetailInstanceMapWithBurst, addr 0x18146c1d0, size 0x10, virtual false, abstract: false, final false
static inline void GetDetailInstanceMapWithBurst(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<::MA::Flora::DetailInTerrain,::MA::Flora::FloraInstanceHandle>>  result) ;

/// @brief Method GetDetailInstanceMapWithBurst$BurstManaged, addr 0x18146c090, size 0x140, virtual false, abstract: false, final false
static inline void GetDetailInstanceMapWithBurst$BurstManaged(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<::MA::Flora::DetailInTerrain,::MA::Flora::FloraInstanceHandle>>  result) ;

/// @brief Method GetDetailPrototypeIndex, addr 0x18146c260, size 0xb0, virtual false, abstract: false, final false
inline int32_t GetDetailPrototypeIndex(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetFirstInstanceBatchInChunk, addr 0x18146c310, size 0x170, virtual false, abstract: false, final false
inline ::MA::Flora::InstanceManager_InstanceBatchInChunk GetFirstInstanceBatchInChunk(::MA::Flora::FloraInstanceHandle*  instances, int32_t  count) ;

/// @brief Method GetIdentitySourceObject, addr 0x18146c480, size 0x90, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> GetIdentitySourceObject(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetIndexInInstanceContainer, addr 0x18146c510, size 0x80, virtual false, abstract: false, final false
inline int32_t GetIndexInInstanceContainer(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetInstanceAABBsRW, addr 0x181465790, size 0x20, virtual false, abstract: false, final false
inline ::MA::Flora::AABB* GetInstanceAABBsRW(::MA::Flora::ChunkIndex  chunk, int32_t  indexInChunk, int32_t  count) ;

/// @brief Method GetInstanceCellLocationsRW, addr 0x1814657b0, size 0x20, virtual false, abstract: false, final false
inline ::MA::Flora::CellLocation* GetInstanceCellLocationsRW(::MA::Flora::ChunkIndex  chunk, int32_t  indexInChunk, int32_t  count) ;

/// @brief Method GetInstanceContainerIndexMap, addr 0x18146c6d0, size 0x80, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,int32_t> GetInstanceContainerIndexMap(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method GetInstanceContainerIndexMapWithBurst, addr 0x18146c6c0, size 0x10, virtual false, abstract: false, final false
static inline void GetInstanceContainerIndexMapWithBurst(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,int32_t>>  result) ;

/// @brief Method GetInstanceContainerIndexMapWithBurst$BurstManaged, addr 0x18146c590, size 0x130, virtual false, abstract: false, final false
static inline void GetInstanceContainerIndexMapWithBurst$BurstManaged(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,int32_t>>  result) ;

/// @brief Method GetInstanceContainers, addr 0x18146c750, size 0x240, virtual false, abstract: false, final false
inline void GetInstanceContainers(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::System::Collections::Generic::List_1<::UnityW<::MA::Flora::FloraInstanceContainer>>*  containers) ;

/// @brief Method GetInstanceFlippedWinding, addr 0x1814657d0, size 0x20, virtual false, abstract: false, final false
inline uint8_t* GetInstanceFlippedWinding(::MA::Flora::ChunkIndex  chunk, int32_t  indexInChunk, int32_t  count) ;

/// @brief Method GetInstanceHandlesRW, addr 0x1814657f0, size 0x20, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceHandle* GetInstanceHandlesRW(::MA::Flora::ChunkIndex  chunk, int32_t  indexInChunk, int32_t  count) ;

/// @brief Method GetInstanceInContainersAndIndices, addr 0x18146cdd0, size 0x130, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::InstanceInContainer> GetInstanceInContainersAndIndices(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  indices) ;

/// @brief Method GetInstanceInContainersAndIndicesWithBurst, addr 0x18146cdc0, size 0x10, virtual false, abstract: false, final false
static inline void GetInstanceInContainersAndIndicesWithBurst(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  indices, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::InstanceInContainer>>  result) ;

/// @brief Method GetInstanceInContainersAndIndicesWithBurst$BurstManaged, addr 0x18146c990, size 0x430, virtual false, abstract: false, final false
static inline void GetInstanceInContainersAndIndicesWithBurst$BurstManaged(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  indices, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::InstanceInContainer>>  result) ;

/// @brief Method GetInstanceInCullingChunksRW, addr 0x181465810, size 0x20, virtual false, abstract: false, final false
inline ::MA::Flora::InstanceInCullingChunk* GetInstanceInCullingChunksRW(::MA::Flora::ChunkIndex  chunk, int32_t  indexInChunk, int32_t  count) ;

/// @brief Method GetInstanceLightmapSTsRW, addr 0x181465830, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4* GetInstanceLightmapSTsRW(::MA::Flora::ChunkIndex  chunk, int32_t  indexInChunk, int32_t  count) ;

/// @brief Method GetInstanceLocalToWorldsRW, addr 0x181465850, size 0x20, virtual false, abstract: false, final false
inline ::MA::Flora::GraphicsMatrix* GetInstanceLocalToWorldsRW(::MA::Flora::ChunkIndex  chunk, int32_t  indexInChunk, int32_t  count) ;

/// @brief Method GetInstanceMovedLastFrame, addr 0x181465870, size 0x20, virtual false, abstract: false, final false
inline uint8_t* GetInstanceMovedLastFrame(::MA::Flora::ChunkIndex  chunk, int32_t  indexInChunk, int32_t  count) ;

/// @brief Method GetInstanceMovedThisFrame, addr 0x181465890, size 0x20, virtual false, abstract: false, final false
inline uint8_t* GetInstanceMovedThisFrame(::MA::Flora::ChunkIndex  chunk, int32_t  indexInChunk, int32_t  count) ;

/// @brief Method GetInstancePrevLocalToWorldsRW, addr 0x1814658b0, size 0x20, virtual false, abstract: false, final false
inline ::MA::Flora::GraphicsMatrix* GetInstancePrevLocalToWorldsRW(::MA::Flora::ChunkIndex  chunk, int32_t  indexInChunk, int32_t  count) ;

/// @brief Method GetInstanceRandomIDsRW, addr 0x1814658d0, size 0x20, virtual false, abstract: false, final false
inline float_t* GetInstanceRandomIDsRW(::MA::Flora::ChunkIndex  chunk, int32_t  indexInChunk, int32_t  count) ;

/// @brief Method GetInstanceVariationColorsRW, addr 0x1814658f0, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4* GetInstanceVariationColorsRW(::MA::Flora::ChunkIndex  chunk, int32_t  indexInChunk, int32_t  count) ;

/// @brief Method GetLocalToWorld, addr 0x18146cf00, size 0x160, virtual false, abstract: false, final false
inline ::MA::Flora::FloraLocalToWorld GetLocalToWorld(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetLocalToWorlds, addr 0x18146d250, size 0x80, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld> GetLocalToWorlds(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method GetLocalToWorldsWithBurst, addr 0x18146d240, size 0x10, virtual false, abstract: false, final false
static inline void GetLocalToWorldsWithBurst(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>  result) ;

/// @brief Method GetLocalToWorldsWithBurst$BurstManaged, addr 0x18146d060, size 0x1e0, virtual false, abstract: false, final false
static inline void GetLocalToWorldsWithBurst$BurstManaged(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>  result) ;

/// @brief Method GetName, addr 0x18146d2d0, size 0x20, virtual false, abstract: false, final false
inline ::StringW GetName(::MA::Flora::FloraInstanceHandle  entity) ;

/// @brief Method GetParentInstanceContainer, addr 0x18146d2f0, size 0x70, virtual false, abstract: false, final false
inline ::UnityW<::MA::Flora::FloraInstanceContainer> GetParentInstanceContainer(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetPositions, addr 0x18146d4b0, size 0x80, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> GetPositions(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method GetPositionsWithBurst, addr 0x18146d4a0, size 0x10, virtual false, abstract: false, final false
static inline void GetPositionsWithBurst(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  result) ;

/// @brief Method GetPositionsWithBurst$BurstManaged, addr 0x18146d360, size 0x140, virtual false, abstract: false, final false
static inline void GetPositionsWithBurst$BurstManaged(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  result) ;

/// @brief Method GetRandomID, addr 0x18146d530, size 0x50, virtual false, abstract: false, final false
inline float_t GetRandomID(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetRenderSourceObject, addr 0x18146d580, size 0x90, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> GetRenderSourceObject(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetSceneGameObject, addr 0x18146d610, size 0x60, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> GetSceneGameObject(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetSourceInstanceTags, addr 0x18146d670, size 0x40, virtual false, abstract: false, final false
static inline ::MA::Flora::InstanceTag GetSourceInstanceTags(::UnityEngine::GameObject*  source) ;

/// @brief Method GetTerrain, addr 0x18146d6b0, size 0x110, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Terrain> GetTerrain(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetTreeIndex, addr 0x18146d7c0, size 0xa0, virtual false, abstract: false, final false
inline int32_t GetTreeIndex(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetValidTreeInTerrains, addr 0x18146e070, size 0x80, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::TreeInTerrain> GetValidTreeInTerrains(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method GetValidTreeInTerrainsAndIndices, addr 0x18146dc70, size 0x90, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::TreeInTerrain> GetValidTreeInTerrainsAndIndices(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  indices) ;

/// @brief Method GetValidTreeInTerrainsAndIndicesWithBurst, addr 0x18146dc60, size 0x10, virtual false, abstract: false, final false
static inline void GetValidTreeInTerrainsAndIndicesWithBurst(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  indices, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::TreeInTerrain>>  result) ;

/// @brief Method GetValidTreeInTerrainsAndIndicesWithBurst$BurstManaged, addr 0x18146d860, size 0x400, virtual false, abstract: false, final false
static inline void GetValidTreeInTerrainsAndIndicesWithBurst$BurstManaged(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  indices, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::TreeInTerrain>>  result) ;

/// @brief Method GetValidTreeInTerrainsWithBurst, addr 0x18146e060, size 0x10, virtual false, abstract: false, final false
static inline void GetValidTreeInTerrainsWithBurst(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::TreeInTerrain>>  result) ;

/// @brief Method GetValidTreeInTerrainsWithBurst$BurstManaged, addr 0x18146dd00, size 0x360, virtual false, abstract: false, final false
static inline void GetValidTreeInTerrainsWithBurst$BurstManaged(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::TreeInTerrain>>  result) ;

/// @brief Method GetVariationColor, addr 0x18146e0f0, size 0x90, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 GetVariationColor(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetWorldTransforms, addr 0x18146e3a0, size 0x80, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform> GetWorldTransforms(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method GetWorldTransformsWithBurst, addr 0x18146e390, size 0x10, virtual false, abstract: false, final false
static inline void GetWorldTransformsWithBurst(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  result) ;

/// @brief Method GetWorldTransformsWithBurst$BurstManaged, addr 0x18146e180, size 0x210, virtual false, abstract: false, final false
static inline void GetWorldTransformsWithBurst$BurstManaged(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  result) ;

/// @brief Method HasPendingLightmapSTUpload, addr 0x18146e420, size 0x20, virtual false, abstract: false, final false
inline bool HasPendingLightmapSTUpload(::MA::Flora::ChunkIndex  chunk) ;

/// @brief Method HasPendingSpatialUpdate, addr 0x18146e440, size 0x20, virtual false, abstract: false, final false
inline bool HasPendingSpatialUpdate(::MA::Flora::ChunkIndex  chunk) ;

/// @brief Method HasPendingTransformUpload, addr 0x18146e460, size 0x20, virtual false, abstract: false, final false
inline bool HasPendingTransformUpload(::MA::Flora::ChunkIndex  chunk) ;

/// @brief Method HasTag, addr 0x18146e480, size 0xb0, virtual false, abstract: false, final false
inline bool HasTag(::MA::Flora::FloraInstanceHandle  instance, ::MA::Flora::InstanceTag  tag) ;

/// @brief Method IncrementFrameVersion, addr 0x18146e530, size 0x20, virtual false, abstract: false, final false
inline void IncrementFrameVersion() ;

/// @brief Method Initialize, addr 0x18146e990, size 0xa00, virtual false, abstract: false, final false
inline void Initialize(::by_ref<::MA::Flora::InstanceContext>  instanceContext) ;

/// @brief Method InitializeFrame, addr 0x18146e720, size 0xc0, virtual false, abstract: false, final false
inline void InitializeFrame() ;

/// @brief Method InitializeFrameInternal, addr 0x18146e550, size 0x1b0, virtual false, abstract: false, final false
inline void InitializeFrameInternal() ;

/// @brief Method InitializeFrameWithBurst, addr 0x18146e710, size 0x10, virtual false, abstract: false, final false
static inline void InitializeFrameWithBurst(::MA::Flora::InstanceManager*  data) ;

/// @brief Method InitializeFrameWithBurst$BurstManaged, addr 0x18146e700, size 0x10, virtual false, abstract: false, final false
static inline void InitializeFrameWithBurst$BurstManaged(::MA::Flora::InstanceManager*  data) ;

/// @brief Method InitializeTrackedContainers, addr 0x18146e7e0, size 0x1b0, virtual false, abstract: false, final false
inline void InitializeTrackedContainers() ;

/// @brief Method InstanceBatchFromInstanceChunkData, addr 0x18146f570, size 0x10, virtual false, abstract: false, final false
static inline void InstanceBatchFromInstanceChunkData(::by_ref<::MA::Flora::InstanceInChunk*>  chunkData, int32_t  chunkCount, ::MA::Flora::InstanceManager_InstanceBatchInChunk*  instanceBatchList, int32_t*  currentBatchIndex, int32_t*  foundError) ;

/// @brief Method InstanceBatchFromInstanceChunkData$BurstManaged, addr 0x18146f390, size 0x1e0, virtual false, abstract: false, final false
static inline void InstanceBatchFromInstanceChunkData$BurstManaged(::by_ref<::MA::Flora::InstanceInChunk*>  chunkData, int32_t  chunkCount, ::MA::Flora::InstanceManager_InstanceBatchInChunk*  instanceBatchList, int32_t*  currentBatchIndex, int32_t*  foundError) ;

/// @brief Method InstantiateDetails, addr 0x18146f680, size 0x3a0, virtual false, abstract: false, final false
inline void InstantiateDetails(::UnityEngine::Terrain*  terrain, ::by_ref<::MA::Flora::TerrainDetailPrototype>  prototype, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>  localToWorld) ;

/// @brief Method InstantiateDetailsFromBurst, addr 0x18146f5b0, size 0xd0, virtual false, abstract: false, final false
inline void InstantiateDetailsFromBurst(::UnityEngine::EntityId  terrain, ::MA::Flora::TerrainDetailPrototype*  prototype, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>  localToWorld) ;

/// @brief Method InstantiateDetailsFromBurstInternal, addr 0x18146f580, size 0x30, virtual false, abstract: false, final false
static inline void InstantiateDetailsFromBurstInternal(::by_ref<::MA::Flora::InstanceManager*>  data, ::by_ref<::UnityEngine::EntityId>  terrain, ::by_ref<::MA::Flora::TerrainDetailPrototype*>  prototype, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>  matrices) ;

/// @brief Method InstantiateInstancesWithBurst, addr 0x18146fe70, size 0x10, virtual false, abstract: false, final false
static inline void InstantiateInstancesWithBurst(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instances, ::MA::Flora::FloraLocalToWorld*  localToWorlds, int32_t  count, ::by_ref<::MA::Flora::InstanceManager_InstantiateParams>  parameters) ;

/// @brief Method InstantiateInstancesWithBurst, addr 0x18146fe80, size 0x10, virtual false, abstract: false, final false
static inline void InstantiateInstancesWithBurst(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instances, ::MA::Flora::FloraInstanceTransform*  transforms, int32_t  instanceCount, ::by_ref<::MA::Flora::InstanceManager_InstantiateParams>  parameters) ;

/// @brief Method InstantiateInstancesWithBurst$BurstManaged, addr 0x18146fe60, size 0x10, virtual false, abstract: false, final false
static inline void InstantiateInstancesWithBurst$BurstManaged(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instances, ::MA::Flora::FloraLocalToWorld*  localToWorlds, int32_t  count, ::by_ref<::MA::Flora::InstanceManager_InstantiateParams>  parameters) ;

/// @brief Method InstantiateInstancesWithBurst$BurstManaged, addr 0x18146fa20, size 0x440, virtual false, abstract: false, final false
static inline void InstantiateInstancesWithBurst$BurstManaged(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instances, ::MA::Flora::FloraInstanceTransform*  transforms, int32_t  instanceCount, ::by_ref<::MA::Flora::InstanceManager_InstantiateParams>  parameters) ;

/// @brief Method InstantiateTrees, addr 0x18146ffc0, size 0x2b0, virtual false, abstract: false, final false
inline void InstantiateTrees(::UnityEngine::Terrain*  terrain, ::UnityEngine::GameObject*  prefab, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>  localToWorld) ;

/// @brief Method InstantiateTreesFromBurst, addr 0x18146fe90, size 0x30, virtual false, abstract: false, final false
static inline void InstantiateTreesFromBurst(::by_ref<::MA::Flora::InstanceManager*>  data, ::by_ref<::UnityEngine::EntityId>  terrainId, ::by_ref<::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::GameObject>>>  prefab, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>  matrices) ;

/// @brief Method InstantiateTreesWithBurst, addr 0x18146fec0, size 0x100, virtual false, abstract: false, final false
inline void InstantiateTreesWithBurst(::UnityEngine::EntityId  terrainId, ::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::GameObject>>  prefab, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>  localToWorld) ;

/// @brief Method IsEnabled, addr 0x181470270, size 0xa0, virtual false, abstract: false, final false
inline bool IsEnabled(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method MarkChunkTemplateDataDirty, addr 0x181470310, size 0xe0, virtual false, abstract: false, final false
inline void MarkChunkTemplateDataDirty(::MA::Flora::ChunkIndex  chunk) ;

/// @brief Method MarkChunkTransformDirty, addr 0x1814703f0, size 0x80, virtual false, abstract: false, final false
inline void MarkChunkTransformDirty(::MA::Flora::ChunkIndex  chunk) ;

/// @brief Method MarkInstanceTransformsDirty, addr 0x181470540, size 0x40, virtual false, abstract: false, final false
inline void MarkInstanceTransformsDirty(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances) ;

/// @brief Method MarkInstanceTransformsDirtyWithBurst, addr 0x181470530, size 0x10, virtual false, abstract: false, final false
static inline void MarkInstanceTransformsDirtyWithBurst(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances) ;

/// @brief Method MarkInstanceTransformsDirtyWithBurst$BurstManaged, addr 0x181470470, size 0xc0, virtual false, abstract: false, final false
static inline void MarkInstanceTransformsDirtyWithBurst$BurstManaged(::MA::Flora::InstanceManager*  data, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances) ;

/// @brief Method MarkInstanceTransformsInternal, addr 0x181470580, size 0xc0, virtual false, abstract: false, final false
inline void MarkInstanceTransformsInternal(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances) ;

/// @brief Method MarkTrackedContainerChunkCacheDirty, addr 0x181470640, size 0x60, virtual false, abstract: false, final false
inline void MarkTrackedContainerChunkCacheDirty(::UnityEngine::EntityId  containerEntity) ;

/// @brief Method MarkTrackedContainerChunkCacheDirty, addr 0x1814706a0, size 0xb0, virtual false, abstract: false, final false
inline void MarkTrackedContainerChunkCacheDirty(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method Move, addr 0x181470e70, size 0x230, virtual false, abstract: false, final false
inline int32_t Move(::MA::Flora::InstanceManager_InstanceBatchInChunk  srcBatch, ::MA::Flora::ChunkIndex  dstChunk) ;

/// @brief Method Move, addr 0x181470de0, size 0x90, virtual false, abstract: false, final false
inline void Move(::MA::Flora::FloraInstanceHandle  instance, ::MA::Flora::ArchetypeIndex  dstArchetype) ;

/// @brief Method Move, addr 0x1814710a0, size 0x80, virtual false, abstract: false, final false
inline void Move(::MA::Flora::FloraInstanceHandle  instance, ::MA::Flora::ChunkIndex  dstChunk) ;

/// @brief Method Move, addr 0x181471120, size 0xc0, virtual false, abstract: false, final false
inline void Move(::MA::Flora::InstanceManager_InstanceBatchInChunk  srcBatch, ::MA::Flora::ArchetypeIndex  dstArchetype) ;

/// @brief Method MoveInstancesToNewArchetype, addr 0x181470910, size 0x130, virtual false, abstract: false, final false
inline void MoveInstancesToNewArchetype(::MA::Flora::FloraInstanceHandle*  instances, int32_t  count, ::MA::Flora::ArchetypeIndex  dstArchetype) ;

/// @brief Method MoveInstancesToNewArchetype, addr 0x181470850, size 0xc0, virtual false, abstract: false, final false
inline void MoveInstancesToNewArchetype(::MA::Flora::FloraInstanceHandle*  instances, int32_t  count, ::MA::Flora::ArchetypeKey  dstArchetypeKey) ;

/// @brief Method MoveInstancesToNewArchetypeBatch, addr 0x181470770, size 0xe0, virtual false, abstract: false, final false
inline void MoveInstancesToNewArchetypeBatch(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::InstanceManager_InstanceBatchInChunk>*  sortedInstanceBatchList, ::MA::Flora::ArchetypeIndex  dstArchetype) ;

/// @brief Method MoveInstancesToNewArchetypeBatchWithBurst, addr 0x181470760, size 0x10, virtual false, abstract: false, final false
static inline void MoveInstancesToNewArchetypeBatchWithBurst(::MA::Flora::InstanceManager*  data, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::InstanceManager_InstanceBatchInChunk>*  sortedInstanceBatchList, ::by_ref<::MA::Flora::ArchetypeIndex>  dstArchetype) ;

/// @brief Method MoveInstancesToNewArchetypeBatchWithBurst$BurstManaged, addr 0x181470750, size 0x10, virtual false, abstract: false, final false
static inline void MoveInstancesToNewArchetypeBatchWithBurst$BurstManaged(::MA::Flora::InstanceManager*  data, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::InstanceManager_InstanceBatchInChunk>*  sortedInstanceBatchList, ::by_ref<::MA::Flora::ArchetypeIndex>  dstArchetype) ;

/// @brief Method MoveInstancesToNewTemplate, addr 0x181470a40, size 0x3a0, virtual false, abstract: false, final false
inline void MoveInstancesToNewTemplate(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::MA::Flora::TemplateIndex  _cordl_template, int32_t  lightmapIndex, ::Unity::Mathematics::float4  lightmapST) ;

/// @brief Method NewChunkScatterData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::MA::Flora::BufferScatterData_1<T> NewChunkScatterData(int32_t  chunkCount) ;

/// @brief Method NewFrameArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> NewFrameArray(::Unity::Collections::NativeArray_1<T>  array) ;

/// @brief Method NewFrameArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> NewFrameArray(int32_t  length, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method NewFrameArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> NewFrameArray(T*  ptr, int32_t  length) ;

/// @brief Method NewFrameData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T* NewFrameData(int32_t  length, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method NewFrameList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::Unity::Collections::NativeList_1<T> NewFrameList(int32_t  length) ;

/// @brief Method NewFrameStruct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T* NewFrameStruct(int32_t  length, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method NormalizeMutableTags, addr 0x1814711e0, size 0x10, virtual false, abstract: false, final false
static inline ::MA::Flora::InstanceTag NormalizeMutableTags(::MA::Flora::InstanceTag  tags) ;

/// @brief Method OnPostLateUpdate, addr 0x1814712c0, size 0x20, virtual false, abstract: false, final false
inline void OnPostLateUpdate() ;

/// @brief Method OnPostLateUpdateInternal, addr 0x1814711f0, size 0xc0, virtual false, abstract: false, final false
inline void OnPostLateUpdateInternal() ;

/// @brief Method OnPostLateUpdateWithBurst, addr 0x1814712c0, size 0x20, virtual false, abstract: false, final false
static inline void OnPostLateUpdateWithBurst(::MA::Flora::InstanceManager*  data) ;

/// @brief Method OnPostLateUpdateWithBurst$BurstManaged, addr 0x1814712b0, size 0x10, virtual false, abstract: false, final false
static inline void OnPostLateUpdateWithBurst$BurstManaged(::MA::Flora::InstanceManager*  data) ;

/// @brief Method OnTemplateHandleStateChanged, addr 0x1814712e0, size 0x3c0, virtual false, abstract: false, final false
inline void OnTemplateHandleStateChanged(::MA::Flora::TemplateIndex  _cordl_template, ::MA::Flora::TemplateStateChangeMask  changeMask, ::MA::Flora::TemplateLayoutIndex  oldState, ::MA::Flora::TemplateLayoutIndex  newState) ;

/// @brief Method RebuildTrackedContainerChunkCache, addr 0x1814716a0, size 0x250, virtual false, abstract: false, final false
inline void RebuildTrackedContainerChunkCache(int32_t  slot) ;

/// @brief Method RecomputeInstanceWorldBounds, addr 0x1814718f0, size 0x340, virtual false, abstract: false, final false
inline void RecomputeInstanceWorldBounds(::MA::Flora::ChunkIndex  chunk, int32_t  indexInChunk, int32_t  count) ;

/// @brief Method RefreshChunkTemplateData, addr 0x181471c30, size 0xa0, virtual false, abstract: false, final false
inline void RefreshChunkTemplateData(::MA::Flora::ChunkIndex  chunk) ;

/// @brief Method RegisterTrackedContainer, addr 0x181471cd0, size 0x220, virtual false, abstract: false, final false
inline void RegisterTrackedContainer(::UnityEngine::EntityId  containerEntity, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  handles, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  localTransforms) ;

/// @brief Method ReleaseChunk, addr 0x181471ef0, size 0x240, virtual false, abstract: false, final false
inline void ReleaseChunk(::MA::Flora::ArchetypeIndex  archetype, ::MA::Flora::ChunkIndex  chunk) ;

/// @brief Method RemoveChunkFromArchetype, addr 0x181472240, size 0x210, virtual false, abstract: false, final false
inline void RemoveChunkFromArchetype(::MA::Flora::ArchetypeIndex  archetype, ::MA::Flora::ChunkIndex  chunk) ;

/// @brief Method RemoveChunkFromArchetypeFreeSlotList, addr 0x181472130, size 0x110, virtual false, abstract: false, final false
inline void RemoveChunkFromArchetypeFreeSlotList(::MA::Flora::ArchetypeIndex  archetype, ::MA::Flora::ChunkIndex  chunk) ;

/// @brief Method RemoveInstancesInChunk, addr 0x181472450, size 0x230, virtual false, abstract: false, final false
inline void RemoveInstancesInChunk(::MA::Flora::ArchetypeIndex  archetype, ::by_ref<::MA::Flora::InstanceManager_InstanceBatchInChunk>  batchInChunk) ;

/// @brief Method RemoveTagsFromBatch, addr 0x181472680, size 0x160, virtual false, abstract: false, final false
inline void RemoveTagsFromBatch(::by_ref<::MA::Flora::InstanceManager_InstanceBatchInChunk>  batch, ::MA::Flora::InstanceTag  tags) ;

/// @brief Method RemoveTagsFromInstance, addr 0x181472800, size 0x120, virtual false, abstract: false, final false
inline void RemoveTagsFromInstance(::MA::Flora::FloraInstanceHandle  instance, ::MA::Flora::InstanceTag  tags) ;

/// @brief Method RemoveTagsFromInstanceWithBurst, addr 0x1814727f0, size 0x10, virtual false, abstract: false, final false
static inline void RemoveTagsFromInstanceWithBurst(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instance, ::MA::Flora::InstanceTag  tags) ;

/// @brief Method RemoveTagsFromInstanceWithBurst$BurstManaged, addr 0x1814727e0, size 0x10, virtual false, abstract: false, final false
static inline void RemoveTagsFromInstanceWithBurst$BurstManaged(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instance, ::MA::Flora::InstanceTag  tags) ;

/// @brief Method RemoveTagsFromInstances, addr 0x181472c80, size 0x100, virtual false, abstract: false, final false
inline void RemoveTagsFromInstances(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::MA::Flora::InstanceTag  tags) ;

/// @brief Method RemoveTagsFromInstancesBatch, addr 0x181472940, size 0x1d0, virtual false, abstract: false, final false
inline void RemoveTagsFromInstancesBatch(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::InstanceManager_InstanceBatchInChunk>*  sortedInstanceBatchList, ::MA::Flora::InstanceTag  tags) ;

/// @brief Method RemoveTagsFromInstancesBatchWithBurst, addr 0x181472930, size 0x10, virtual false, abstract: false, final false
static inline void RemoveTagsFromInstancesBatchWithBurst(::MA::Flora::InstanceManager*  data, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::InstanceManager_InstanceBatchInChunk>*  sortedInstanceBatchList, ::MA::Flora::InstanceTag  tags) ;

/// @brief Method RemoveTagsFromInstancesBatchWithBurst$BurstManaged, addr 0x181472920, size 0x10, virtual false, abstract: false, final false
static inline void RemoveTagsFromInstancesBatchWithBurst$BurstManaged(::MA::Flora::InstanceManager*  data, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::InstanceManager_InstanceBatchInChunk>*  sortedInstanceBatchList, ::MA::Flora::InstanceTag  tags) ;

/// @brief Method RemoveTagsFromInstancesWithBurst, addr 0x181472c70, size 0x10, virtual false, abstract: false, final false
static inline void RemoveTagsFromInstancesWithBurst(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instances, int32_t  count, ::MA::Flora::InstanceTag  tags) ;

/// @brief Method RemoveTagsFromInstancesWithBurst$BurstManaged, addr 0x181472b10, size 0x160, virtual false, abstract: false, final false
static inline void RemoveTagsFromInstancesWithBurst$BurstManaged(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instances, int32_t  count, ::MA::Flora::InstanceTag  tags) ;

/// @brief Method RemoveTrackedContainerInstance, addr 0x181472d80, size 0x160, virtual false, abstract: false, final false
inline void RemoveTrackedContainerInstance(::UnityEngine::EntityId  containerEntity, int32_t  index) ;

/// @brief Method ScheduleScatterArchetypeData, addr 0x181472ee0, size 0x180, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleScatterArchetypeData(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method ScheduleScatterInitDynamicMatrices, addr 0x181473060, size 0x3a0, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleScatterInitDynamicMatrices(::MA::Flora::NativeBitSet  initChunks, ::MA::Flora::NativeBitSet  updateChunks, ::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method ScheduleScatterInstanceInit, addr 0x181473400, size 0x200, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleScatterInstanceInit(::MA::Flora::NativeBitSet  dirtyChunks, ::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method ScheduleScatterLightmapSTs, addr 0x181473600, size 0x1c0, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleScatterLightmapSTs(::MA::Flora::NativeBitSet  dirtyChunks, ::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method ScheduleScatterStaticMatrices, addr 0x1814737c0, size 0x180, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleScatterStaticMatrices(::MA::Flora::NativeBitSet  dirtyChunks, ::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method ScheduleScatterVariationColors, addr 0x181473940, size 0x1c0, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleScatterVariationColors(::MA::Flora::NativeBitSet  dirtyChunks, ::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method ScheduleUpdateLocalToWorlds, addr 0x181473b00, size 0x1d0, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleUpdateLocalToWorlds(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>  localToWorlds, ::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method ScheduleUpdateLocalTransforms, addr 0x181473cd0, size 0x2a0, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleUpdateLocalTransforms(::MA::Flora::FloraLocalToWorld  parentLocalToWorld, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  transforms, ::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method ScheduleUpdateTrackedContainerTransforms, addr 0x181473f70, size 0x760, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleUpdateTrackedContainerTransforms(::by_ref<::MA::InternalBridge::UnityTransformDispatchData>  containerTransformData, ::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method ScheduleUpdateWorldTransforms, addr 0x1814746d0, size 0x1d0, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleUpdateWorldTransforms(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  transforms, ::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method ScheduleUploadLightProbes, addr 0x1814748a0, size 0x430, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleUploadLightProbes(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method ScheduleUploadsInternal, addr 0x181474cd0, size 0x370, virtual false, abstract: false, final false
inline void ScheduleUploadsInternal() ;

/// @brief Method ScheduleUploadsWithBurst, addr 0x181475050, size 0x10, virtual false, abstract: false, final false
static inline void ScheduleUploadsWithBurst(::MA::Flora::InstanceManager*  data) ;

/// @brief Method ScheduleUploadsWithBurst$BurstManaged, addr 0x181475040, size 0x10, virtual false, abstract: false, final false
static inline void ScheduleUploadsWithBurst$BurstManaged(::MA::Flora::InstanceManager*  data) ;

/// @brief Method SetArchetypeDataDirty, addr 0x181475060, size 0x90, virtual false, abstract: false, final false
inline void SetArchetypeDataDirty(::MA::Flora::ArchetypeIndex  archetype) ;

/// @brief Method SetChunkCount, addr 0x1814750f0, size 0x160, virtual false, abstract: false, final false
inline void SetChunkCount(::MA::Flora::ArchetypeIndex  archetype, ::MA::Flora::ChunkIndex  chunk, int32_t  newCount) ;

/// @brief Method SetEnabled, addr 0x181475250, size 0x40, virtual false, abstract: false, final false
inline void SetEnabled(::MA::Flora::FloraInstanceHandle  instance, bool  enabled) ;

/// @brief Method SetEnabled, addr 0x181475290, size 0x60, virtual false, abstract: false, final false
inline void SetEnabled(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, bool  enabled) ;

/// @brief Method SetInstanceInContainer, addr 0x181475400, size 0x80, virtual false, abstract: false, final false
inline void SetInstanceInContainer(::MA::Flora::FloraInstanceHandle  instance, ::MA::Flora::FloraInstanceContainer*  instanceContainer, int32_t  startIndex) ;

/// @brief Method SetInstanceInContainerIndices, addr 0x181475380, size 0x80, virtual false, abstract: false, final false
inline void SetInstanceInContainerIndices(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::MA::Flora::FloraInstanceContainer*  instanceContainer, int32_t  startIndex) ;

/// @brief Method SetInstanceInContainerIndicesWithBurst, addr 0x181475370, size 0x10, virtual false, abstract: false, final false
static inline void SetInstanceInContainerIndicesWithBurst(::MA::Flora::FloraInstanceHandle*  instances, int32_t  instanceCount, ::by_ref<::MA::Flora::EntityObjectRef_1<::UnityW<::MA::Flora::FloraInstanceContainer>>>  instanceContainer, int32_t  startIndex) ;

/// @brief Method SetInstanceInContainerIndicesWithBurst$BurstManaged, addr 0x1814752f0, size 0x80, virtual false, abstract: false, final false
static inline void SetInstanceInContainerIndicesWithBurst$BurstManaged(::MA::Flora::FloraInstanceHandle*  instances, int32_t  instanceCount, ::by_ref<::MA::Flora::EntityObjectRef_1<::UnityW<::MA::Flora::FloraInstanceContainer>>>  instanceContainer, int32_t  startIndex) ;

/// @brief Method SetName, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void SetName(::MA::Flora::FloraInstanceHandle  instance, ::by_ref<::Unity::Collections::FixedString64Bytes>  name) ;

/// @brief Method SetTerrainDetailLayerIndex, addr 0x181475480, size 0xe0, virtual false, abstract: false, final false
inline void SetTerrainDetailLayerIndex(::UnityEngine::EntityId  terrainEntity, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, int32_t  layerIndex) ;

/// @brief Method SetTerrainTreeIndices, addr 0x181475600, size 0x90, virtual false, abstract: false, final false
inline void SetTerrainTreeIndices(::UnityEngine::EntityId  terrainEntity, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::NativeArray_1<int32_t>  indices) ;

/// @brief Method SetTerrainTreeIndicesWithBurst, addr 0x1814755f0, size 0x10, virtual false, abstract: false, final false
static inline void SetTerrainTreeIndicesWithBurst(::by_ref<::UnityEngine::EntityId>  terrainEntity, ::MA::Flora::FloraInstanceHandle*  instances, int32_t*  indices, int32_t  instanceCount) ;

/// @brief Method SetTerrainTreeIndicesWithBurst$BurstManaged, addr 0x181475560, size 0x90, virtual false, abstract: false, final false
static inline void SetTerrainTreeIndicesWithBurst$BurstManaged(::by_ref<::UnityEngine::EntityId>  terrainEntity, ::MA::Flora::FloraInstanceHandle*  instances, int32_t*  indices, int32_t  instanceCount) ;

/// @brief Method SetVariationColor, addr 0x181475690, size 0xa0, virtual false, abstract: false, final false
inline void SetVariationColor(::MA::Flora::FloraInstanceHandle  instance, ::Unity::Mathematics::float4  color) ;

/// @brief Method SetVariationColors, addr 0x181475820, size 0x170, virtual false, abstract: false, final false
inline void SetVariationColors(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  colors) ;

/// @brief Method SetVariationColorsWithBurst, addr 0x181475730, size 0xf0, virtual false, abstract: false, final false
static inline void SetVariationColorsWithBurst(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instances, ::Unity::Mathematics::float4*  colors, int32_t  count) ;

/// @brief Method SortInstanceInChunk, addr 0x1814759a0, size 0x10, virtual false, abstract: false, final false
static inline void SortInstanceInChunk(::MA::Flora::InstanceInChunk*  instanceInChunks, int32_t  count) ;

/// @brief Method SortInstanceInChunk$BurstManaged, addr 0x181475990, size 0x10, virtual false, abstract: false, final false
static inline void SortInstanceInChunk$BurstManaged(::MA::Flora::InstanceInChunk*  instanceInChunks, int32_t  count) ;

/// @brief Method SubmitToGpu, addr 0x1814759b0, size 0x2d0, virtual false, abstract: false, final false
inline void SubmitToGpu(::UnityEngine::Rendering::BatchRendererGroup*  batchRendererGroup) ;

/// @brief Method SyncJobsForMainThread, addr 0x181465910, size 0x30, virtual false, abstract: false, final false
inline void SyncJobsForMainThread() ;

/// @brief Method TemplateBufferTypeChanged, addr 0x181475c80, size 0x350, virtual false, abstract: false, final false
inline void TemplateBufferTypeChanged(::MA::Flora::ChunkIndex  chunk, ::MA::Flora::TemplateIndex  _cordl_template, bool  updateBatchAllocation) ;

/// @brief Method TryGetArchetypeChunkWithFreeSlots, addr 0x181475fd0, size 0xc0, virtual false, abstract: false, final false
inline bool TryGetArchetypeChunkWithFreeSlots(::MA::Flora::ArchetypeIndex  archetype, ::by_ref<::MA::Flora::ChunkIndex>  chunk) ;

/// @brief Method TryGetTrackedContainerSlot, addr 0x181476090, size 0x60, virtual false, abstract: false, final false
inline bool TryGetTrackedContainerSlot(::UnityEngine::EntityId  containerEntity, ::by_ref<int32_t>  slot) ;

/// @brief Method UnregisterTrackedContainer, addr 0x181476230, size 0x200, virtual false, abstract: false, final false
inline void UnregisterTrackedContainer(::UnityEngine::EntityId  containerEntity) ;

/// @brief Method UpdateContentVersion, addr 0x181476430, size 0x60, virtual false, abstract: false, final false
inline void UpdateContentVersion() ;

/// @brief Method UpdateInstanceTransformData, addr 0x181465940, size 0x3a0, virtual false, abstract: false, final false
inline void UpdateInstanceTransformData(::MA::Flora::InstanceInChunk  instanceInChunk, int32_t  instanceIndex, ::MA::Flora::FloraLocalToWorld  localToWorld) ;

/// @brief Method UpdateInstancesLightmapData, addr 0x181476490, size 0x3a0, virtual false, abstract: false, final false
inline void UpdateInstancesLightmapData(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, int32_t  lightmapIndex, ::Unity::Mathematics::float4  lightmapST) ;

/// @brief Method UpdateLocalToWorld, addr 0x181476830, size 0x140, virtual false, abstract: false, final false
inline void UpdateLocalToWorld(::MA::Flora::FloraInstanceHandle  instance, ::MA::Flora::FloraLocalToWorld  localToWorld) ;

/// @brief Method UpdateLocalToWorlds, addr 0x181476970, size 0x190, virtual false, abstract: false, final false
inline void UpdateLocalToWorlds(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>  localToWorlds) ;

/// @brief Method UpdateLocalTransforms, addr 0x181476b00, size 0x2b0, virtual false, abstract: false, final false
inline void UpdateLocalTransforms(::MA::Flora::FloraLocalToWorld  parentLocalToWorld, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  transforms) ;

/// @brief Method UpdateTrackedContainerLocalTransforms, addr 0x181476db0, size 0x170, virtual false, abstract: false, final false
inline void UpdateTrackedContainerLocalTransforms(::UnityEngine::EntityId  containerEntity, ::Unity::Collections::NativeArray_1<int32_t>  indices, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  localTransforms) ;

/// @brief Method UpdateTrackedContainerLocalTransforms, addr 0x181476f20, size 0x190, virtual false, abstract: false, final false
inline void UpdateTrackedContainerLocalTransforms(::UnityEngine::EntityId  containerEntity, int32_t  startIndex, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  localTransforms) ;

/// @brief Method UpdateWorldTransforms, addr 0x1814770b0, size 0x190, virtual false, abstract: false, final false
inline void UpdateWorldTransforms(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  transforms) ;

/// @brief Method WriteLocalToWorldsBatched, addr 0x1814775e0, size 0x10, virtual false, abstract: false, final false
static inline void WriteLocalToWorldsBatched(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instances, ::MA::Flora::FloraLocalToWorld*  srcLocalToWorlds, int32_t  count) ;

/// @brief Method WriteLocalToWorldsBatched$BurstManaged, addr 0x181477240, size 0x3a0, virtual false, abstract: false, final false
static inline void WriteLocalToWorldsBatched$BurstManaged(::MA::Flora::InstanceManager*  data, ::MA::Flora::FloraInstanceHandle*  instances, ::MA::Flora::FloraLocalToWorld*  srcLocalToWorlds, int32_t  count) ;

/// @brief Method _EarlyInitInterop, addr 0x1814775f0, size 0x50, virtual false, abstract: false, final false
static inline void _EarlyInitInterop() ;

/// @brief Method _InstantiateDetailsFromBurstInternal, addr 0x181477660, size 0x80, virtual false, abstract: false, final false
static inline void _InstantiateDetailsFromBurstInternal(::MA::Flora::InstanceManager*  data, ::by_ref<::UnityEngine::EntityId>  terrain, ::MA::Flora::TerrainDetailPrototype*  prototype, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>  matrices) ;

/// @brief Method _InstantiateDetailsFromBurstInternal_1_ForwardFromBurst, addr 0x181477640, size 0x20, virtual false, abstract: false, final false
static inline void _InstantiateDetailsFromBurstInternal_1_ForwardFromBurst(::by_ref<::MA::Flora::InstanceManager*>  data, ::by_ref<::UnityEngine::EntityId>  terrain, ::by_ref<::MA::Flora::TerrainDetailPrototype*>  prototype, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>  matrices) ;

/// @brief Method _InstantiateDetailsFromBurstInternal_1_ForwardFromManaged, addr 0x181477640, size 0x20, virtual false, abstract: false, final false
static inline void _InstantiateDetailsFromBurstInternal_1_ForwardFromManaged(::by_ref<::MA::Flora::InstanceManager*>  data, ::by_ref<::UnityEngine::EntityId>  terrain, ::by_ref<::MA::Flora::TerrainDetailPrototype*>  prototype, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>  matrices) ;

/// @brief Method _InstantiateTreesFromBurst, addr 0x181477700, size 0xc0, virtual false, abstract: false, final false
static inline void _InstantiateTreesFromBurst(::MA::Flora::InstanceManager*  data, ::by_ref<::UnityEngine::EntityId>  terrainId, ::by_ref<::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::GameObject>>>  prefab, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>  matrices) ;

/// @brief Method _InstantiateTreesFromBurst_0_ForwardFromBurst, addr 0x1814776e0, size 0x20, virtual false, abstract: false, final false
static inline void _InstantiateTreesFromBurst_0_ForwardFromBurst(::by_ref<::MA::Flora::InstanceManager*>  data, ::by_ref<::UnityEngine::EntityId>  terrainId, ::by_ref<::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::GameObject>>>  prefab, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>  matrices) ;

/// @brief Method _InstantiateTreesFromBurst_0_ForwardFromManaged, addr 0x1814776e0, size 0x20, virtual false, abstract: false, final false
static inline void _InstantiateTreesFromBurst_0_ForwardFromManaged(::by_ref<::MA::Flora::InstanceManager*>  data, ::by_ref<::UnityEngine::EntityId>  terrainId, ::by_ref<::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::GameObject>>>  prefab, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>  matrices) ;

/// @brief Method _LateInitInterop, addr 0x1814777c0, size 0xb0, virtual false, abstract: false, final false
static inline void _LateInitInterop() ;

/// @brief Method <WriteLocalToWorldsBatched>g__FlushBatch|380_0, addr 0x1814760f0, size 0x140, virtual false, abstract: false, final false
static inline void _WriteLocalToWorldsBatched_g__FlushBatch_380_0(::by_ref<::MA::Flora::InstanceManager___c__DisplayClass380_0>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method __InteropIsBurst, addr 0x181477870, size 0x10, virtual false, abstract: false, final false
static inline void __InteropIsBurst(::by_ref<bool>  status) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_AllocateInstancesMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_ConvertAndUpdateLocalToWorldsMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_DestroyInstancesMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_InitializeFrameMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_InstantiateTransformsMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_PostLateUpdateMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_SubmitToGpuMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_UpdateLocalToWorldsMarker() ;

static inline ::Unity::Burst::SharedStatic_1<uint64_t> getStaticF__InstantiateDetailsFromBurstInternal_1_BurstFP() ;

static inline ::Unity::Burst::SharedStatic_1<uint64_t> getStaticF__InstantiateTreesFromBurst_0_BurstFP() ;

/// @brief Method get_ArchetypeDataBuffer, addr 0x181465ce0, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::GraphicsBufferRef get_ArchetypeDataBuffer() ;

/// @brief Method get_ContentVersion, addr 0x181465cf0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_ContentVersion() ;

/// @brief Method get_DataDependencies, addr 0x181465d00, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle get_DataDependencies() ;

/// @brief Method get_ForceLightProbeUpdate, addr 0x181465d10, size 0x10, virtual false, abstract: false, final false
inline bool get_ForceLightProbeUpdate() ;

/// @brief Method get_FrameAllocator, addr 0x1807c0330, size 0x30, virtual false, abstract: false, final false
inline ::by_ref<::Unity::Collections::RewindableAllocator> get_FrameAllocator() ;

/// @brief Method get_FrameAllocatorHandle, addr 0x181454360, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Collections::AllocatorManager_AllocatorHandle get_FrameAllocatorHandle() ;

/// @brief Method get_FrameVersion, addr 0x181465d20, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_FrameVersion() ;

/// @brief Method get_InstanceAABBs, addr 0x180371680, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::AABB> get_InstanceAABBs() ;

/// @brief Method get_InstanceFlippedWinding, addr 0x181465d30, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<uint8_t> get_InstanceFlippedWinding() ;

/// @brief Method get_InstanceHandles, addr 0x181465d40, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle> get_InstanceHandles() ;

/// @brief Method get_InstanceInCullingChunks, addr 0x181465d50, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::InstanceInCullingChunk> get_InstanceInCullingChunks() ;

/// @brief Method get_InstanceLightmapSTs, addr 0x181465d60, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4> get_InstanceLightmapSTs() ;

/// @brief Method get_InstanceLocalToWorld, addr 0x181465d70, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix> get_InstanceLocalToWorld() ;

/// @brief Method get_InstanceLocations, addr 0x181465d80, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::CellLocation> get_InstanceLocations() ;

/// @brief Method get_InstanceMovedLastFrame, addr 0x181465d90, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<uint8_t> get_InstanceMovedLastFrame() ;

/// @brief Method get_InstanceMovedThisFrame, addr 0x181465da0, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<uint8_t> get_InstanceMovedThisFrame() ;

/// @brief Method get_InstancePrevLocalToWorld, addr 0x181465db0, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix> get_InstancePrevLocalToWorld() ;

/// @brief Method get_InstanceRandomIDs, addr 0x181465dc0, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<float_t> get_InstanceRandomIDs() ;

/// @brief Method get_InstanceVariationColors, addr 0x181465dd0, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4> get_InstanceVariationColors() ;

/// @brief Method get_InstancesAllocated, addr 0x181477ce0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_InstancesAllocated() ;

/// @brief Method get_MaxChunkCount, addr 0x181477d10, size 0x8c0, virtual false, abstract: false, final false
inline int32_t get_MaxChunkCount() ;

/// @brief Method get_Self, addr 0x1802e0ba0, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::InstanceManager* get_Self() ;

/// @brief Method get_TerrainDetailChunks, addr 0x180371810, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::NativeBitSet get_TerrainDetailChunks() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

static inline void setStaticF_AllocateInstancesMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_ConvertAndUpdateLocalToWorldsMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_DestroyInstancesMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_InitializeFrameMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_InstantiateTransformsMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_PostLateUpdateMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_SubmitToGpuMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_UpdateLocalToWorldsMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF__InstantiateDetailsFromBurstInternal_1_BurstFP(::Unity::Burst::SharedStatic_1<uint64_t>  value) ;

static inline void setStaticF__InstantiateTreesFromBurst_0_BurstFP(::Unity::Burst::SharedStatic_1<uint64_t>  value) ;

/// @brief Method set_DataDependencies, addr 0x181465de0, size 0x10, virtual false, abstract: false, final false
inline void set_DataDependencies(::Unity::Jobs::JobHandle  value) ;

/// @brief Method set_ForceLightProbeUpdate, addr 0x181465df0, size 0x40, virtual false, abstract: false, final false
inline void set_ForceLightProbeUpdate(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceManager() ;

// Ctor Parameters [CppParam { name: "m_NextTrackedContainerSlot", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_TrackedContainerFreeList", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_TrackedContainerSlotByEntity", ty: "::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_TrackedContainerAllocated", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_TrackedContainerChunkCacheDirty", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_TrackedContainerEntities", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>", modifiers: "", def_value: None }, CppParam { name: "m_TrackedContainerHandles", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraInstanceHandle>", modifiers: "", def_value: None }, CppParam { name: "m_TrackedContainerLocalTransforms", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraInstanceTransform>", modifiers: "", def_value: None }, CppParam { name: "m_TrackedContainerChunks", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::ChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "m_NextChunkIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ChunkFreeList", ty: "::Unity::Collections::NativeList_1<::MA::Flora::ChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "m_ChunkAllocated", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_ChunkEnabled", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_ChunkStatic", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_ChunkDynamic", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_ChunkHasProbes", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_ChunkHasRandomValue", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_ChunkHasColorVariation", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_ChunkHasLightmapST", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_DirtyChunkTransforms", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_PendingSpatialUpdates", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_PendingInstanceUpload", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_PendingVariationColorUpload", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_PendingLightmapSTUpload", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_PendingTransformUpload", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_TerrainDetailChunks", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_ArchetypeDataBuffer", ty: "::MA::Flora::GraphicsBufferRef", modifiers: "", def_value: None }, CppParam { name: "m_InstanceHandles", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>", modifiers: "", def_value: None }, CppParam { name: "m_InstanceLocalToWorld", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>", modifiers: "", def_value: None }, CppParam { name: "m_InstancePrevLocalToWorld", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>", modifiers: "", def_value: None }, CppParam { name: "m_InstanceAABBs", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::AABB>", modifiers: "", def_value: None }, CppParam { name: "m_InstanceLocations", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CellLocation>", modifiers: "", def_value: None }, CppParam { name: "m_InstanceInCullingChunks", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::InstanceInCullingChunk>", modifiers: "", def_value: None }, CppParam { name: "m_InstanceRandomIDs", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "m_InstanceVariationColors", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>", modifiers: "", def_value: None }, CppParam { name: "m_InstanceLightmapSTs", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>", modifiers: "", def_value: None }, CppParam { name: "m_InstanceMovedThisFrame", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_InstanceMovedLastFrame", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_InstanceFlippedWinding", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "_ForceLightProbeUpdate_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_NextArchetypeIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ArchetypeFreeList", ty: "::Unity::Collections::NativeList_1<::MA::Flora::ArchetypeIndex>", modifiers: "", def_value: None }, CppParam { name: "m_ArchetypeLookup", ty: "::Unity::Collections::NativeParallelHashMap_2<::MA::Flora::ArchetypeKey,::MA::Flora::ArchetypeIndex>", modifiers: "", def_value: None }, CppParam { name: "m_ArchetypeAllocated", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_ArchetypeDataDirty", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_ArchetypeDefaultVariationColors", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>", modifiers: "", def_value: None }, CppParam { name: "m_ArchetypeChunks", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::ChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "m_ArchetypeChunksWithFreeSlots", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::ChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "m_SceneHandleArchetypes", ty: "::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::MA::Flora::ArchetypeIndex>", modifiers: "", def_value: None }, CppParam { name: "m_TemplateArchetypes", ty: "::Unity::Collections::NativeParallelMultiHashMap_2<::MA::Flora::TemplateIndex,::MA::Flora::ArchetypeIndex>", modifiers: "", def_value: None }, CppParam { name: "m_CachedArchetype", ty: "::MA::Flora::ArchetypeIndex", modifiers: "", def_value: None }, CppParam { name: "m_CachedArchetypeKey", ty: "::MA::Flora::ArchetypeKey", modifiers: "", def_value: None }, CppParam { name: "m_CullingGrid", ty: "::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>", modifiers: "", def_value: None }, CppParam { name: "m_TemplateManager", ty: "::MA::Flora::NativeDataReference_1<::MA::Flora::TemplateManager>", modifiers: "", def_value: None }, CppParam { name: "m_InstanceBuffer", ty: "::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceBuffer>", modifiers: "", def_value: None }, CppParam { name: "m_IsInitialized", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_FrameVersion", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_ContentVersion", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_FrameAllocators", ty: "::Unity::Collections::DoubleRewindableAllocators", modifiers: "", def_value: None }, CppParam { name: "m_DataDependencies", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: None }, CppParam { name: "m_PendingArchetypeDataUploads", ty: "::MA::Flora::NativeScatterList_1<::MA::Flora::PackedArchetypeData>", modifiers: "", def_value: None }, CppParam { name: "m_InstanceRandomIdScatterData", ty: "::MA::Flora::BufferScatterData_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "m_InstanceEntityIdScatterData", ty: "::MA::Flora::BufferScatterData_1<::Unity::Mathematics::uint2>", modifiers: "", def_value: None }, CppParam { name: "m_InstanceColorVariationScatterData", ty: "::MA::Flora::BufferScatterData_1<::Unity::Mathematics::uint4>", modifiers: "", def_value: None }, CppParam { name: "m_InstanceLightmapSTScatterData", ty: "::MA::Flora::BufferScatterData_1<::Unity::Mathematics::uint4>", modifiers: "", def_value: None }, CppParam { name: "m_InstanceStaticMatrixScatterData", ty: "::MA::Flora::BufferScatterData_1<::MA::Flora::GraphicsMatrix>", modifiers: "", def_value: None }, CppParam { name: "m_InstanceInitDynamicMatrixScatterData", ty: "::MA::Flora::BufferScatterData_1<::MA::Flora::GraphicsMatrix>", modifiers: "", def_value: None }, CppParam { name: "m_InstanceUpdateDynamicMatrixScatterData", ty: "::MA::Flora::BufferScatterData_1<::MA::Flora::GraphicsMatrix>", modifiers: "", def_value: None }, CppParam { name: "m_InstanceLightProbeScatterData", ty: "::MA::Flora::InstanceManager_ChunkLightProbeScatterData", modifiers: "", def_value: None }]
constexpr InstanceManager(int32_t  m_NextTrackedContainerSlot, ::Unity::Collections::NativeList_1<int32_t>  m_TrackedContainerFreeList, ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,int32_t>  m_TrackedContainerSlotByEntity, ::MA::Flora::NativeBitSet  m_TrackedContainerAllocated, ::MA::Flora::NativeBitSet  m_TrackedContainerChunkCacheDirty, ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  m_TrackedContainerEntities, ::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraInstanceHandle>  m_TrackedContainerHandles, ::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraInstanceTransform>  m_TrackedContainerLocalTransforms, ::MA::Flora::NativeBufferArray_1<::MA::Flora::ChunkIndex>  m_TrackedContainerChunks, int32_t  m_NextChunkIndex, ::Unity::Collections::NativeList_1<::MA::Flora::ChunkIndex>  m_ChunkFreeList, ::MA::Flora::NativeBitSet  m_ChunkAllocated, ::MA::Flora::NativeBitSet  m_ChunkEnabled, ::MA::Flora::NativeBitSet  m_ChunkStatic, ::MA::Flora::NativeBitSet  m_ChunkDynamic, ::MA::Flora::NativeBitSet  m_ChunkHasProbes, ::MA::Flora::NativeBitSet  m_ChunkHasRandomValue, ::MA::Flora::NativeBitSet  m_ChunkHasColorVariation, ::MA::Flora::NativeBitSet  m_ChunkHasLightmapST, ::MA::Flora::NativeBitSet  m_DirtyChunkTransforms, ::MA::Flora::NativeBitSet  m_PendingSpatialUpdates, ::MA::Flora::NativeBitSet  m_PendingInstanceUpload, ::MA::Flora::NativeBitSet  m_PendingVariationColorUpload, ::MA::Flora::NativeBitSet  m_PendingLightmapSTUpload, ::MA::Flora::NativeBitSet  m_PendingTransformUpload, ::MA::Flora::NativeBitSet  m_TerrainDetailChunks, ::MA::Flora::GraphicsBufferRef  m_ArchetypeDataBuffer, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  m_InstanceHandles, ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  m_InstanceLocalToWorld, ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  m_InstancePrevLocalToWorld, ::Unity::Collections::NativeArray_1<::MA::Flora::AABB>  m_InstanceAABBs, ::Unity::Collections::NativeArray_1<::MA::Flora::CellLocation>  m_InstanceLocations, ::Unity::Collections::NativeArray_1<::MA::Flora::InstanceInCullingChunk>  m_InstanceInCullingChunks, ::Unity::Collections::NativeArray_1<float_t>  m_InstanceRandomIDs, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  m_InstanceVariationColors, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  m_InstanceLightmapSTs, ::Unity::Collections::NativeArray_1<uint8_t>  m_InstanceMovedThisFrame, ::Unity::Collections::NativeArray_1<uint8_t>  m_InstanceMovedLastFrame, ::Unity::Collections::NativeArray_1<uint8_t>  m_InstanceFlippedWinding, bool  _ForceLightProbeUpdate_k__BackingField, int32_t  m_NextArchetypeIndex, ::Unity::Collections::NativeList_1<::MA::Flora::ArchetypeIndex>  m_ArchetypeFreeList, ::Unity::Collections::NativeParallelHashMap_2<::MA::Flora::ArchetypeKey,::MA::Flora::ArchetypeIndex>  m_ArchetypeLookup, ::MA::Flora::NativeBitSet  m_ArchetypeAllocated, ::MA::Flora::NativeBitSet  m_ArchetypeDataDirty, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  m_ArchetypeDefaultVariationColors, ::MA::Flora::NativeBufferArray_1<::MA::Flora::ChunkIndex>  m_ArchetypeChunks, ::MA::Flora::NativeBufferArray_1<::MA::Flora::ChunkIndex>  m_ArchetypeChunksWithFreeSlots, ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::MA::Flora::ArchetypeIndex>  m_SceneHandleArchetypes, ::Unity::Collections::NativeParallelMultiHashMap_2<::MA::Flora::TemplateIndex,::MA::Flora::ArchetypeIndex>  m_TemplateArchetypes, ::MA::Flora::ArchetypeIndex  m_CachedArchetype, ::MA::Flora::ArchetypeKey  m_CachedArchetypeKey, ::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>  m_CullingGrid, ::MA::Flora::NativeDataReference_1<::MA::Flora::TemplateManager>  m_TemplateManager, ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceBuffer>  m_InstanceBuffer, bool  m_IsInitialized, uint32_t  m_FrameVersion, uint32_t  m_ContentVersion, ::Unity::Collections::DoubleRewindableAllocators  m_FrameAllocators, ::Unity::Jobs::JobHandle  m_DataDependencies, ::MA::Flora::NativeScatterList_1<::MA::Flora::PackedArchetypeData>  m_PendingArchetypeDataUploads, ::MA::Flora::BufferScatterData_1<uint32_t>  m_InstanceRandomIdScatterData, ::MA::Flora::BufferScatterData_1<::Unity::Mathematics::uint2>  m_InstanceEntityIdScatterData, ::MA::Flora::BufferScatterData_1<::Unity::Mathematics::uint4>  m_InstanceColorVariationScatterData, ::MA::Flora::BufferScatterData_1<::Unity::Mathematics::uint4>  m_InstanceLightmapSTScatterData, ::MA::Flora::BufferScatterData_1<::MA::Flora::GraphicsMatrix>  m_InstanceStaticMatrixScatterData, ::MA::Flora::BufferScatterData_1<::MA::Flora::GraphicsMatrix>  m_InstanceInitDynamicMatrixScatterData, ::MA::Flora::BufferScatterData_1<::MA::Flora::GraphicsMatrix>  m_InstanceUpdateDynamicMatrixScatterData, ::MA::Flora::InstanceManager_ChunkLightProbeScatterData  m_InstanceLightProbeScatterData) noexcept;

/// @brief Field ArchetypeInitialCapacity offset 0xffffffff size 0x4
static constexpr int32_t  ArchetypeInitialCapacity{static_cast<int32_t>(0x10)};

/// @brief Field BatchingMinSize offset 0xffffffff size 0x4
static constexpr int32_t  BatchingMinSize{static_cast<int32_t>(0x10)};

/// @brief Field ChunkCapacity offset 0xffffffff size 0x4
static constexpr int32_t  ChunkCapacity{static_cast<int32_t>(0x40)};

/// @brief Field ChunkGrowPageSize offset 0xffffffff size 0x4
static constexpr int32_t  ChunkGrowPageSize{static_cast<int32_t>(0x1000)};

/// @brief Field ChunkInitialCapacity offset 0xffffffff size 0x4
static constexpr int32_t  ChunkInitialCapacity{static_cast<int32_t>(0x8)};

/// @brief Field ChunkInitialInstanceCapacity offset 0xffffffff size 0x4
static constexpr int32_t  ChunkInitialInstanceCapacity{static_cast<int32_t>(0x200)};

/// @brief Field ChunkMask offset 0xffffffff size 0x4
static constexpr int32_t  ChunkMask{static_cast<int32_t>(0x3f)};

/// @brief Field ChunkShift offset 0xffffffff size 0x4
static constexpr int32_t  ChunkShift{static_cast<int32_t>(0x6)};

/// @brief Field InitialFrameAllocatorSize offset 0xffffffff size 0x4
static constexpr int32_t  InitialFrameAllocatorSize{static_cast<int32_t>(0x1000000)};

/// @brief Field InstanceGrowPageSize offset 0xffffffff size 0x4
static constexpr int32_t  InstanceGrowPageSize{static_cast<int32_t>(0x40000)};

/// @brief Field MaxPossibleArchetypeCount offset 0xffffffff size 0x4
static constexpr int32_t  MaxPossibleArchetypeCount{static_cast<int32_t>(0x80000)};

/// @brief Field MaxPossibleChunkCount offset 0xffffffff size 0x4
static constexpr int32_t  MaxPossibleChunkCount{static_cast<int32_t>(0x80000)};

/// @brief Field MemCpyThreshold offset 0xffffffff size 0x4
static constexpr int32_t  MemCpyThreshold{static_cast<int32_t>(0x8)};

/// @brief Field TrackedContainerInitialCapacity offset 0xffffffff size 0x4
static constexpr int32_t  TrackedContainerInitialCapacity{static_cast<int32_t>(0x8)};

/// @brief Field UpdateJobBatchSize offset 0xffffffff size 0x4
static constexpr int32_t  UpdateJobBatchSize{static_cast<int32_t>(0x100)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13020};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x3e0};

/// @brief Field m_NextTrackedContainerSlot, offset: 0x0, size: 0x4, def value: None
 int32_t  m_NextTrackedContainerSlot;

/// @brief Field m_TrackedContainerFreeList, offset: 0x8, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<int32_t>  m_TrackedContainerFreeList;

/// @brief Field m_TrackedContainerSlotByEntity, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,int32_t>  m_TrackedContainerSlotByEntity;

/// @brief Field m_TrackedContainerAllocated, offset: 0x20, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_TrackedContainerAllocated;

/// @brief Field m_TrackedContainerChunkCacheDirty, offset: 0x28, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_TrackedContainerChunkCacheDirty;

/// @brief Field m_TrackedContainerEntities, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  m_TrackedContainerEntities;

/// @brief Field m_TrackedContainerHandles, offset: 0x40, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraInstanceHandle>  m_TrackedContainerHandles;

/// @brief Field m_TrackedContainerLocalTransforms, offset: 0x50, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraInstanceTransform>  m_TrackedContainerLocalTransforms;

/// @brief Field m_TrackedContainerChunks, offset: 0x60, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::ChunkIndex>  m_TrackedContainerChunks;

/// @brief Field m_NextChunkIndex, offset: 0x70, size: 0x4, def value: None
 int32_t  m_NextChunkIndex;

/// @brief Field m_ChunkFreeList, offset: 0x78, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::MA::Flora::ChunkIndex>  m_ChunkFreeList;

/// @brief Field m_ChunkAllocated, offset: 0x80, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_ChunkAllocated;

/// @brief Field m_ChunkEnabled, offset: 0x88, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_ChunkEnabled;

/// @brief Field m_ChunkStatic, offset: 0x90, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_ChunkStatic;

/// @brief Field m_ChunkDynamic, offset: 0x98, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_ChunkDynamic;

/// @brief Field m_ChunkHasProbes, offset: 0xa0, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_ChunkHasProbes;

/// @brief Field m_ChunkHasRandomValue, offset: 0xa8, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_ChunkHasRandomValue;

/// @brief Field m_ChunkHasColorVariation, offset: 0xb0, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_ChunkHasColorVariation;

/// @brief Field m_ChunkHasLightmapST, offset: 0xb8, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_ChunkHasLightmapST;

/// @brief Field m_DirtyChunkTransforms, offset: 0xc0, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_DirtyChunkTransforms;

/// @brief Field m_PendingSpatialUpdates, offset: 0xc8, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_PendingSpatialUpdates;

/// @brief Field m_PendingInstanceUpload, offset: 0xd0, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_PendingInstanceUpload;

/// @brief Field m_PendingVariationColorUpload, offset: 0xd8, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_PendingVariationColorUpload;

/// @brief Field m_PendingLightmapSTUpload, offset: 0xe0, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_PendingLightmapSTUpload;

/// @brief Field m_PendingTransformUpload, offset: 0xe8, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_PendingTransformUpload;

/// @brief Field m_TerrainDetailChunks, offset: 0xf0, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_TerrainDetailChunks;

/// @brief Field m_ArchetypeDataBuffer, offset: 0xf8, size: 0x4, def value: None
 ::MA::Flora::GraphicsBufferRef  m_ArchetypeDataBuffer;

/// @brief Field m_InstanceHandles, offset: 0x100, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  m_InstanceHandles;

/// @brief Field m_InstanceLocalToWorld, offset: 0x110, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  m_InstanceLocalToWorld;

/// @brief Field m_InstancePrevLocalToWorld, offset: 0x120, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  m_InstancePrevLocalToWorld;

/// @brief Field m_InstanceAABBs, offset: 0x130, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::AABB>  m_InstanceAABBs;

/// @brief Field m_InstanceLocations, offset: 0x140, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::CellLocation>  m_InstanceLocations;

/// @brief Field m_InstanceInCullingChunks, offset: 0x150, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::InstanceInCullingChunk>  m_InstanceInCullingChunks;

/// @brief Field m_InstanceRandomIDs, offset: 0x160, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<float_t>  m_InstanceRandomIDs;

/// @brief Field m_InstanceVariationColors, offset: 0x170, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  m_InstanceVariationColors;

/// @brief Field m_InstanceLightmapSTs, offset: 0x180, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  m_InstanceLightmapSTs;

/// @brief Field m_InstanceMovedThisFrame, offset: 0x190, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  m_InstanceMovedThisFrame;

/// @brief Field m_InstanceMovedLastFrame, offset: 0x1a0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  m_InstanceMovedLastFrame;

/// @brief Field m_InstanceFlippedWinding, offset: 0x1b0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  m_InstanceFlippedWinding;

/// @brief Field <ForceLightProbeUpdate>k__BackingField, offset: 0x1c0, size: 0x1, def value: None
 bool  _ForceLightProbeUpdate_k__BackingField;

/// @brief Field m_NextArchetypeIndex, offset: 0x1c4, size: 0x4, def value: None
 int32_t  m_NextArchetypeIndex;

/// @brief Field m_ArchetypeFreeList, offset: 0x1c8, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::MA::Flora::ArchetypeIndex>  m_ArchetypeFreeList;

/// @brief Field m_ArchetypeLookup, offset: 0x1d0, size: 0x10, def value: None
 ::Unity::Collections::NativeParallelHashMap_2<::MA::Flora::ArchetypeKey,::MA::Flora::ArchetypeIndex>  m_ArchetypeLookup;

/// @brief Field m_ArchetypeAllocated, offset: 0x1e0, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_ArchetypeAllocated;

/// @brief Field m_ArchetypeDataDirty, offset: 0x1e8, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_ArchetypeDataDirty;

/// @brief Field m_ArchetypeDefaultVariationColors, offset: 0x1f0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  m_ArchetypeDefaultVariationColors;

/// @brief Field m_ArchetypeChunks, offset: 0x200, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::ChunkIndex>  m_ArchetypeChunks;

/// @brief Field m_ArchetypeChunksWithFreeSlots, offset: 0x210, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::ChunkIndex>  m_ArchetypeChunksWithFreeSlots;

/// @brief Field m_SceneHandleArchetypes, offset: 0x220, size: 0x10, def value: None
 ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::MA::Flora::ArchetypeIndex>  m_SceneHandleArchetypes;

/// @brief Field m_TemplateArchetypes, offset: 0x230, size: 0x10, def value: None
 ::Unity::Collections::NativeParallelMultiHashMap_2<::MA::Flora::TemplateIndex,::MA::Flora::ArchetypeIndex>  m_TemplateArchetypes;

/// @brief Field m_CachedArchetype, offset: 0x240, size: 0x4, def value: None
 ::MA::Flora::ArchetypeIndex  m_CachedArchetype;

/// @brief Field m_CachedArchetypeKey, offset: 0x244, size: 0x18, def value: None
 ::MA::Flora::ArchetypeKey  m_CachedArchetypeKey;

/// @brief Field m_CullingGrid, offset: 0x260, size: 0x8, def value: None
 ::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>  m_CullingGrid;

/// @brief Field m_TemplateManager, offset: 0x268, size: 0x8, def value: None
 ::MA::Flora::NativeDataReference_1<::MA::Flora::TemplateManager>  m_TemplateManager;

/// @brief Field m_InstanceBuffer, offset: 0x270, size: 0x8, def value: None
 ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceBuffer>  m_InstanceBuffer;

/// @brief Field m_IsInitialized, offset: 0x278, size: 0x1, def value: None
 bool  m_IsInitialized;

/// @brief Field m_FrameVersion, offset: 0x27c, size: 0x4, def value: None
 uint32_t  m_FrameVersion;

/// @brief Field m_ContentVersion, offset: 0x280, size: 0x4, def value: None
 uint32_t  m_ContentVersion;

/// @brief Field m_FrameAllocators, offset: 0x288, size: 0x28, def value: None
 ::Unity::Collections::DoubleRewindableAllocators  m_FrameAllocators;

/// @brief Field m_DataDependencies, offset: 0x2b0, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  m_DataDependencies;

/// @brief Field m_PendingArchetypeDataUploads, offset: 0x2c0, size: 0x10, def value: None
 ::MA::Flora::NativeScatterList_1<::MA::Flora::PackedArchetypeData>  m_PendingArchetypeDataUploads;

/// @brief Field m_InstanceRandomIdScatterData, offset: 0x2d0, size: 0x20, def value: None
 ::MA::Flora::BufferScatterData_1<uint32_t>  m_InstanceRandomIdScatterData;

/// @brief Field m_InstanceEntityIdScatterData, offset: 0x2f0, size: 0x20, def value: None
 ::MA::Flora::BufferScatterData_1<::Unity::Mathematics::uint2>  m_InstanceEntityIdScatterData;

/// @brief Field m_InstanceColorVariationScatterData, offset: 0x310, size: 0x20, def value: None
 ::MA::Flora::BufferScatterData_1<::Unity::Mathematics::uint4>  m_InstanceColorVariationScatterData;

/// @brief Field m_InstanceLightmapSTScatterData, offset: 0x330, size: 0x20, def value: None
 ::MA::Flora::BufferScatterData_1<::Unity::Mathematics::uint4>  m_InstanceLightmapSTScatterData;

/// @brief Field m_InstanceStaticMatrixScatterData, offset: 0x350, size: 0x20, def value: None
 ::MA::Flora::BufferScatterData_1<::MA::Flora::GraphicsMatrix>  m_InstanceStaticMatrixScatterData;

/// @brief Field m_InstanceInitDynamicMatrixScatterData, offset: 0x370, size: 0x20, def value: None
 ::MA::Flora::BufferScatterData_1<::MA::Flora::GraphicsMatrix>  m_InstanceInitDynamicMatrixScatterData;

/// @brief Field m_InstanceUpdateDynamicMatrixScatterData, offset: 0x390, size: 0x20, def value: None
 ::MA::Flora::BufferScatterData_1<::MA::Flora::GraphicsMatrix>  m_InstanceUpdateDynamicMatrixScatterData;

/// @brief Field m_InstanceLightProbeScatterData, offset: 0x3b0, size: 0x30, def value: None
 ::MA::Flora::InstanceManager_ChunkLightProbeScatterData  m_InstanceLightProbeScatterData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceManager, m_NextTrackedContainerSlot) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_TrackedContainerFreeList) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_TrackedContainerSlotByEntity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_TrackedContainerAllocated) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_TrackedContainerChunkCacheDirty) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_TrackedContainerEntities) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_TrackedContainerHandles) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_TrackedContainerLocalTransforms) == 0x50, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_TrackedContainerChunks) == 0x60, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_NextChunkIndex) == 0x70, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_ChunkFreeList) == 0x78, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_ChunkAllocated) == 0x80, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_ChunkEnabled) == 0x88, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_ChunkStatic) == 0x90, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_ChunkDynamic) == 0x98, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_ChunkHasProbes) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_ChunkHasRandomValue) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_ChunkHasColorVariation) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_ChunkHasLightmapST) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_DirtyChunkTransforms) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_PendingSpatialUpdates) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_PendingInstanceUpload) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_PendingVariationColorUpload) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_PendingLightmapSTUpload) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_PendingTransformUpload) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_TerrainDetailChunks) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_ArchetypeDataBuffer) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_InstanceHandles) == 0x100, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_InstanceLocalToWorld) == 0x110, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_InstancePrevLocalToWorld) == 0x120, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_InstanceAABBs) == 0x130, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_InstanceLocations) == 0x140, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_InstanceInCullingChunks) == 0x150, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_InstanceRandomIDs) == 0x160, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_InstanceVariationColors) == 0x170, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_InstanceLightmapSTs) == 0x180, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_InstanceMovedThisFrame) == 0x190, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_InstanceMovedLastFrame) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_InstanceFlippedWinding) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, _ForceLightProbeUpdate_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_NextArchetypeIndex) == 0x1c4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_ArchetypeFreeList) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_ArchetypeLookup) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_ArchetypeAllocated) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_ArchetypeDataDirty) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_ArchetypeDefaultVariationColors) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_ArchetypeChunks) == 0x200, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_ArchetypeChunksWithFreeSlots) == 0x210, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_SceneHandleArchetypes) == 0x220, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_TemplateArchetypes) == 0x230, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_CachedArchetype) == 0x240, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_CachedArchetypeKey) == 0x244, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_CullingGrid) == 0x260, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_TemplateManager) == 0x268, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_InstanceBuffer) == 0x270, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_IsInitialized) == 0x278, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_FrameVersion) == 0x27c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_ContentVersion) == 0x280, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_FrameAllocators) == 0x288, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_DataDependencies) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_PendingArchetypeDataUploads) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_InstanceRandomIdScatterData) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_InstanceEntityIdScatterData) == 0x2f0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_InstanceColorVariationScatterData) == 0x310, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_InstanceLightmapSTScatterData) == 0x330, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_InstanceStaticMatrixScatterData) == 0x350, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_InstanceInitDynamicMatrixScatterData) == 0x370, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_InstanceUpdateDynamicMatrixScatterData) == 0x390, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceManager, m_InstanceLightProbeScatterData) == 0x3b0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceManager) == 0x3e0, "Size mismatch!");

} // namespace end def MA::Flora
