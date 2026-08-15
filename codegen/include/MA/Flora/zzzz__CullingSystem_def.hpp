#pragma once
// IWYU pragma private; include "MA/Flora/CullingSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__AnimatedCrossFadeData_def.hpp"
#include "MA/Flora/zzzz__ArchetypeIndex_def.hpp"
#include "MA/Flora/zzzz__BlockLocation_def.hpp"
#include "MA/Flora/zzzz__CellIndex_def.hpp"
#include "MA/Flora/zzzz__CullingChunkIndex_def.hpp"
#include "MA/Flora/zzzz__CullingGrid_def.hpp"
#include "MA/Flora/zzzz__CullingLayoutCounts_def.hpp"
#include "MA/Flora/zzzz__CullingScratchBuffers_def.hpp"
#include "MA/Flora/zzzz__DrawBatchIndex_def.hpp"
#include "MA/Flora/zzzz__DrawBatch_def.hpp"
#include "MA/Flora/zzzz__DrawBinConfig_def.hpp"
#include "MA/Flora/zzzz__DrawManager_def.hpp"
#include "MA/Flora/zzzz__DrawRangeIndex_def.hpp"
#include "MA/Flora/zzzz__DrawRangeKey_def.hpp"
#include "MA/Flora/zzzz__DrawVisibilityMask_def.hpp"
#include "MA/Flora/zzzz__FloraInstanceHandle_def.hpp"
#include "MA/Flora/zzzz__FrustumPlaneCuller_def.hpp"
#include "MA/Flora/zzzz__FrustumSIMDPacket_def.hpp"
#include "MA/Flora/zzzz__IndirectCullingOutput_def.hpp"
#include "MA/Flora/zzzz__IndirectCullingRequestHandles_def.hpp"
#include "MA/Flora/zzzz__IndirectCullingRequest_def.hpp"
#include "MA/Flora/zzzz__InstanceBuffer_def.hpp"
#include "MA/Flora/zzzz__InstanceManager_def.hpp"
#include "MA/Flora/zzzz__InstanceOcclusionTestSubviewSettings_def.hpp"
#include "MA/Flora/zzzz__NativeBitSet_def.hpp"
#include "MA/Flora/zzzz__NativeBufferArray_1_def.hpp"
#include "MA/Flora/zzzz__NativeDataReference_1_def.hpp"
#include "MA/Flora/zzzz__OccluderHandles_def.hpp"
#include "MA/Flora/zzzz__OccluderParameters_def.hpp"
#include "MA/Flora/zzzz__OcclusionCullingDebugShaderVariables_def.hpp"
#include "MA/Flora/zzzz__ReceiverSphereCuller_def.hpp"
#include "MA/Flora/zzzz__StreamingSphereManager_def.hpp"
#include "MA/Flora/zzzz__TemplateManager_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeHashMap_2_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3x3_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingOutputDrawCommands_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingViewType_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchID_def.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionCullingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__SphericalHarmonicsL2_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__GraphicsBufferHandle_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CullingSystem)
namespace MA::Flora {
struct AnimatedCrossFadeData;
}
namespace MA::Flora {
struct CullingLayoutCounts;
}
namespace MA::Flora {
struct CullingSystemSetup;
}
namespace MA::Flora {
struct CullingSystem_BuildDeterministicBatchCommands;
}
namespace MA::Flora {
struct CullingSystem_BuildLightmapPartitions;
}
namespace MA::Flora {
struct CullingSystem_ComputeOutputOffsetsAndCounts;
}
namespace MA::Flora {
struct CullingSystem_ComputeTemplateChunkOffsets;
}
namespace MA::Flora {
struct CullingSystem_CountDrawCommandsPerTemplate;
}
namespace MA::Flora {
struct CullingSystem_CullChunks;
}
namespace MA::Flora {
struct CullingSystem_CullGrid;
}
namespace MA::Flora {
class CullingSystem_DispatchIndirectCullingPassData;
}
namespace MA::Flora {
struct CullingSystem_FilterChunksByAuthoringEntityId;
}
namespace MA::Flora {
struct CullingSystem_GatherIncludeExcludeBitsJob;
}
namespace MA::Flora {
struct CullingSystem_GatherVisibleAuthoringEntityIds;
}
namespace MA::Flora {
struct CullingSystem_IncludeExcludeListFilter;
}
namespace MA::Flora {
class CullingSystem_OcclusionOverlayPassData;
}
namespace MA::Flora {
class CullingSystem_OcclusionTestOverlayPassData;
}
namespace MA::Flora {
class CullingSystem_OcclusionTestOverlaySetupPassData;
}
namespace MA::Flora {
struct CullingSystem_OrderVisibleChunksByTemplate;
}
namespace MA::Flora {
struct CullingSystem_ReduceVisibleChunksByTemplate;
}
namespace MA::Flora {
struct CullingSystem_ReorderIncludedInstanceBits;
}
namespace MA::Flora {
struct CullingSystem_SetupFrustumCullingInputs;
}
namespace MA::Flora {
class CullingSystem_UpdateOccludersPassData;
}
namespace MA::Flora {
struct CullingSystem_WriteCullingOutputPerTemplate;
}
namespace MA::Flora {
class CullingSystem___c;
}
namespace MA::Flora {
class FloraAdditionalCameraSettings;
}
namespace MA::Flora {
class FloraRenderPipeline;
}
namespace MA::Flora {
struct FrustumPlaneCuller;
}
namespace MA::Flora {
struct GridCullCounts;
}
namespace MA::Flora {
struct IndirectCullingOutput;
}
namespace MA::Flora {
class IndirectCullingPass;
}
namespace MA::Flora {
struct IndirectCullingRequestParameters;
}
namespace MA::Flora {
class IndirectCullingRequest;
}
namespace MA::Flora {
struct InstanceContext;
}
namespace MA::Flora {
struct InstanceOcclusionTestSubviewSettings;
}
namespace MA::Flora {
struct OccluderHandles;
}
namespace MA::Flora {
struct OccluderParameters;
}
namespace MA::Flora {
struct OcclusionContext;
}
namespace MA::Flora {
class OcclusionCuller;
}
namespace MA::Flora {
struct ReceiverPlanes;
}
namespace MA::Flora {
struct ReceiverSphereCuller;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Jobs {
class IJobParallelFor;
}
namespace Unity::Jobs {
class IJob;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template<typename PassData,typename ContextType>
class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class ComputeGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RasterGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering {
struct BatchCullingContext;
}
namespace UnityEngine::Rendering {
struct BatchCullingOutput;
}
namespace UnityEngine::Rendering {
struct BatchCullingViewType;
}
namespace UnityEngine::Rendering {
class BatchRendererGroup;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct OccluderSubviewUpdate;
}
namespace UnityEngine::Rendering {
struct OcclusionCullingSettings;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
struct SubviewOcclusionTest;
}
namespace UnityEngine::Rendering {
class VolumeStack;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
struct EntityId;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace MA::Flora {
class CullingSystem;
}
namespace MA::Flora {
class CullingSystem_DispatchIndirectCullingPassData;
}
namespace MA::Flora {
class CullingSystem_OcclusionOverlayPassData;
}
namespace MA::Flora {
class CullingSystem_OcclusionTestOverlayPassData;
}
namespace MA::Flora {
class CullingSystem_OcclusionTestOverlaySetupPassData;
}
namespace MA::Flora {
class CullingSystem_UpdateOccludersPassData;
}
namespace MA::Flora {
class CullingSystem___c;
}
namespace MA::Flora {
struct CullingSystem_BuildDeterministicBatchCommands;
}
namespace MA::Flora {
struct CullingSystem_BuildLightmapPartitions;
}
namespace MA::Flora {
struct CullingSystem_ComputeOutputOffsetsAndCounts;
}
namespace MA::Flora {
struct CullingSystem_ComputeTemplateChunkOffsets;
}
namespace MA::Flora {
struct CullingSystem_CountDrawCommandsPerTemplate;
}
namespace MA::Flora {
struct CullingSystem_CullChunks;
}
namespace MA::Flora {
struct CullingSystem_CullGrid;
}
namespace MA::Flora {
struct CullingSystem_FilterChunksByAuthoringEntityId;
}
namespace MA::Flora {
struct CullingSystem_GatherIncludeExcludeBitsJob;
}
namespace MA::Flora {
struct CullingSystem_GatherVisibleAuthoringEntityIds;
}
namespace MA::Flora {
struct CullingSystem_IncludeExcludeListFilter;
}
namespace MA::Flora {
struct CullingSystem_OrderVisibleChunksByTemplate;
}
namespace MA::Flora {
struct CullingSystem_ReduceVisibleChunksByTemplate;
}
namespace MA::Flora {
struct CullingSystem_ReorderIncludedInstanceBits;
}
namespace MA::Flora {
struct CullingSystem_SetupFrustumCullingInputs;
}
namespace MA::Flora {
struct CullingSystem_WriteCullingOutputPerTemplate;
}
// Write type traits
MARK_REF_T(::MA::Flora::CullingSystem*);
MARK_REF_T(::MA::Flora::CullingSystem_DispatchIndirectCullingPassData*);
MARK_REF_T(::MA::Flora::CullingSystem_OcclusionOverlayPassData*);
MARK_REF_T(::MA::Flora::CullingSystem_OcclusionTestOverlayPassData*);
MARK_REF_T(::MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData*);
MARK_REF_T(::MA::Flora::CullingSystem_UpdateOccludersPassData*);
MARK_REF_T(::MA::Flora::CullingSystem___c*);
MARK_VAL_T(::MA::Flora::CullingSystem_BuildDeterministicBatchCommands);
MARK_VAL_T(::MA::Flora::CullingSystem_BuildLightmapPartitions);
MARK_VAL_T(::MA::Flora::CullingSystem_ComputeOutputOffsetsAndCounts);
MARK_VAL_T(::MA::Flora::CullingSystem_ComputeTemplateChunkOffsets);
MARK_VAL_T(::MA::Flora::CullingSystem_CountDrawCommandsPerTemplate);
MARK_VAL_T(::MA::Flora::CullingSystem_CullChunks);
MARK_VAL_T(::MA::Flora::CullingSystem_CullGrid);
MARK_VAL_T(::MA::Flora::CullingSystem_FilterChunksByAuthoringEntityId);
MARK_VAL_T(::MA::Flora::CullingSystem_GatherIncludeExcludeBitsJob);
MARK_VAL_T(::MA::Flora::CullingSystem_GatherVisibleAuthoringEntityIds);
MARK_VAL_T(::MA::Flora::CullingSystem_IncludeExcludeListFilter);
MARK_VAL_T(::MA::Flora::CullingSystem_OrderVisibleChunksByTemplate);
MARK_VAL_T(::MA::Flora::CullingSystem_ReduceVisibleChunksByTemplate);
MARK_VAL_T(::MA::Flora::CullingSystem_ReorderIncludedInstanceBits);
MARK_VAL_T(::MA::Flora::CullingSystem_SetupFrustumCullingInputs);
MARK_VAL_T(::MA::Flora::CullingSystem_WriteCullingOutputPerTemplate);
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingSystem*, "MA.Flora", "CullingSystem");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingSystem_DispatchIndirectCullingPassData*, "MA.Flora", "CullingSystem/DispatchIndirectCullingPassData");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingSystem_OcclusionOverlayPassData*, "MA.Flora", "CullingSystem/OcclusionOverlayPassData");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingSystem_OcclusionTestOverlayPassData*, "MA.Flora", "CullingSystem/OcclusionTestOverlayPassData");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData*, "MA.Flora", "CullingSystem/OcclusionTestOverlaySetupPassData");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingSystem_UpdateOccludersPassData*, "MA.Flora", "CullingSystem/UpdateOccludersPassData");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingSystem___c*, "MA.Flora", "CullingSystem/<>c");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingSystem_BuildDeterministicBatchCommands, "MA.Flora", "CullingSystem/BuildDeterministicBatchCommands");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingSystem_BuildLightmapPartitions, "MA.Flora", "CullingSystem/BuildLightmapPartitions");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingSystem_ComputeOutputOffsetsAndCounts, "MA.Flora", "CullingSystem/ComputeOutputOffsetsAndCounts");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingSystem_ComputeTemplateChunkOffsets, "MA.Flora", "CullingSystem/ComputeTemplateChunkOffsets");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingSystem_CountDrawCommandsPerTemplate, "MA.Flora", "CullingSystem/CountDrawCommandsPerTemplate");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingSystem_CullChunks, "MA.Flora", "CullingSystem/CullChunks");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingSystem_CullGrid, "MA.Flora", "CullingSystem/CullGrid");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingSystem_FilterChunksByAuthoringEntityId, "MA.Flora", "CullingSystem/FilterChunksByAuthoringEntityId");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingSystem_GatherIncludeExcludeBitsJob, "MA.Flora", "CullingSystem/GatherIncludeExcludeBitsJob");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingSystem_GatherVisibleAuthoringEntityIds, "MA.Flora", "CullingSystem/GatherVisibleAuthoringEntityIds");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingSystem_IncludeExcludeListFilter, "MA.Flora", "CullingSystem/IncludeExcludeListFilter");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingSystem_OrderVisibleChunksByTemplate, "MA.Flora", "CullingSystem/OrderVisibleChunksByTemplate");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingSystem_ReduceVisibleChunksByTemplate, "MA.Flora", "CullingSystem/ReduceVisibleChunksByTemplate");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingSystem_ReorderIncludedInstanceBits, "MA.Flora", "CullingSystem/ReorderIncludedInstanceBits");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingSystem_SetupFrustumCullingInputs, "MA.Flora", "CullingSystem/SetupFrustumCullingInputs");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingSystem_WriteCullingOutputPerTemplate, "MA.Flora", "CullingSystem/WriteCullingOutputPerTemplate");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingSystem/IncludeExcludeListFilter
#pragma pack(push, 0)
struct CORDL_TYPE CullingSystem_IncludeExcludeListFilter {
public:
// Declarations
 __declspec(property(get=get_IsEnabled)) bool  IsEnabled;

 __declspec(property(get=get_IsExcludeEmpty)) bool  IsExcludeEmpty;

 __declspec(property(get=get_IsExcludeEnabled)) bool  IsExcludeEnabled;

 __declspec(property(get=get_IsIncludeEmpty)) bool  IsIncludeEmpty;

 __declspec(property(get=get_IsIncludeEnabled)) bool  IsIncludeEnabled;

/// @brief Method Dispose, addr 0x1802e1e90, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  dependencies) ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method InstanceIncluded, addr 0x1802f6470, size 0x10, virtual false, abstract: false, final false
inline bool InstanceIncluded(int32_t  instanceIndex) ;

/// @brief Method get_IsEnabled, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsEnabled() ;

/// @brief Method get_IsExcludeEmpty, addr 0x1802f6470, size 0x10, virtual false, abstract: false, final false
inline bool get_IsExcludeEmpty() ;

/// @brief Method get_IsExcludeEnabled, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsExcludeEnabled() ;

/// @brief Method get_IsIncludeEmpty, addr 0x1802f6470, size 0x10, virtual false, abstract: false, final false
inline bool get_IsIncludeEmpty() ;

/// @brief Method get_IsIncludeEnabled, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsIncludeEnabled() ;

// Ctor Parameters []
// @brief default ctor
constexpr CullingSystem_IncludeExcludeListFilter() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13140};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::MA::Flora::CullingSystem_IncludeExcludeListFilter) == 0x1, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.CullingChunkIndex, MA.Flora.CullingSystem::IncludeExcludeListFilter, MA.Flora.FloraInstanceHandle, Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingSystem/GatherIncludeExcludeBitsJob
struct CORDL_TYPE CullingSystem_GatherIncludeExcludeBitsJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0x1814bfc30, size 0x70, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr CullingSystem_GatherIncludeExcludeBitsJob() ;

// Ctor Parameters [CppParam { name: "IncludeExcludeListFilter", ty: "::MA::Flora::CullingSystem_IncludeExcludeListFilter", modifiers: "", def_value: None }, CppParam { name: "Chunks", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "ChunkCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "InstanceIndices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "InstanceHandles", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>", modifiers: "", def_value: None }, CppParam { name: "IncludedInstances", ty: "::Unity::Collections::NativeArray_1<uint64_t>", modifiers: "", def_value: None }]
constexpr CullingSystem_GatherIncludeExcludeBitsJob(::MA::Flora::CullingSystem_IncludeExcludeListFilter  IncludeExcludeListFilter, ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  Chunks, ::Unity::Collections::NativeArray_1<int32_t>  ChunkCounts, ::Unity::Collections::NativeArray_1<int32_t>  InstanceIndices, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  InstanceHandles, ::Unity::Collections::NativeArray_1<uint64_t>  IncludedInstances) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13137};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field IncludeExcludeListFilter, offset: 0x0, size: 0x1, def value: None
 ::MA::Flora::CullingSystem_IncludeExcludeListFilter  IncludeExcludeListFilter;

/// @brief Field Chunks, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  Chunks;

/// @brief Field ChunkCounts, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ChunkCounts;

/// @brief Field InstanceIndices, offset: 0x28, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  InstanceIndices;

/// @brief Field InstanceHandles, offset: 0x38, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  InstanceHandles;

/// @brief Field IncludedInstances, offset: 0x48, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint64_t>  IncludedInstances;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingSystem_GatherIncludeExcludeBitsJob, IncludeExcludeListFilter) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_GatherIncludeExcludeBitsJob, Chunks) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_GatherIncludeExcludeBitsJob, ChunkCounts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_GatherIncludeExcludeBitsJob, InstanceIndices) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_GatherIncludeExcludeBitsJob, InstanceHandles) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_GatherIncludeExcludeBitsJob, IncludedInstances) == 0x48, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingSystem_GatherIncludeExcludeBitsJob) == 0x58, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.CullingChunkIndex, MA.Flora.FloraInstanceHandle, Unity.Collections.NativeArray`1<T>, UnityEngine.EntityId
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingSystem/GatherVisibleAuthoringEntityIds
struct CORDL_TYPE CullingSystem_GatherVisibleAuthoringEntityIds {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0x1814bfca0, size 0xb0, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr CullingSystem_GatherVisibleAuthoringEntityIds() ;

// Ctor Parameters [CppParam { name: "Chunks", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "ChunkCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "InstanceHandles", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>", modifiers: "", def_value: None }, CppParam { name: "AuthoringEntityIds", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>", modifiers: "", def_value: None }]
constexpr CullingSystem_GatherVisibleAuthoringEntityIds(::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  Chunks, ::Unity::Collections::NativeArray_1<int32_t>  ChunkCounts, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  InstanceHandles, ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  AuthoringEntityIds) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13138};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field Chunks, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  Chunks;

/// @brief Field ChunkCounts, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ChunkCounts;

/// @brief Field InstanceHandles, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  InstanceHandles;

/// @brief Field AuthoringEntityIds, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  AuthoringEntityIds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingSystem_GatherVisibleAuthoringEntityIds, Chunks) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_GatherVisibleAuthoringEntityIds, ChunkCounts) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_GatherVisibleAuthoringEntityIds, InstanceHandles) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_GatherVisibleAuthoringEntityIds, AuthoringEntityIds) == 0x30, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingSystem_GatherVisibleAuthoringEntityIds) == 0x40, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.CullingChunkIndex, Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingSystem/FilterChunksByAuthoringEntityId
struct CORDL_TYPE CullingSystem_FilterChunksByAuthoringEntityId {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0x1814bd550, size 0x80, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr CullingSystem_FilterChunksByAuthoringEntityId() ;

// Ctor Parameters [CppParam { name: "Chunks", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "ChunkCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "FilteredSceneObjects", ty: "::Unity::Collections::NativeArray_1<bool>", modifiers: "", def_value: None }, CppParam { name: "IncludedInstances", ty: "::Unity::Collections::NativeArray_1<uint64_t>", modifiers: "", def_value: None }]
constexpr CullingSystem_FilterChunksByAuthoringEntityId(::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  Chunks, ::Unity::Collections::NativeArray_1<int32_t>  ChunkCounts, ::Unity::Collections::NativeArray_1<bool>  FilteredSceneObjects, ::Unity::Collections::NativeArray_1<uint64_t>  IncludedInstances) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13139};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field Chunks, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  Chunks;

/// @brief Field ChunkCounts, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ChunkCounts;

/// @brief Field FilteredSceneObjects, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<bool>  FilteredSceneObjects;

/// @brief Field IncludedInstances, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint64_t>  IncludedInstances;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingSystem_FilterChunksByAuthoringEntityId, Chunks) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_FilterChunksByAuthoringEntityId, ChunkCounts) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_FilterChunksByAuthoringEntityId, FilteredSceneObjects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_FilterChunksByAuthoringEntityId, IncludedInstances) == 0x30, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingSystem_FilterChunksByAuthoringEntityId) == 0x40, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingSystem/SetupFrustumCullingInputs
struct CORDL_TYPE CullingSystem_SetupFrustumCullingInputs {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0x1814c0c80, size 0x1e0, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr CullingSystem_SetupFrustumCullingInputs() ;

// Ctor Parameters [CppParam { name: "LODBias", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "MeshLodThreshold", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Context", ty: "::UnityEngine::Rendering::BatchCullingContext*", modifiers: "", def_value: None }, CppParam { name: "ReceiverPlanes", ty: "::MA::Flora::ReceiverPlanes*", modifiers: "", def_value: None }, CppParam { name: "ReceiverSphereCuller", ty: "::MA::Flora::ReceiverSphereCuller*", modifiers: "", def_value: None }, CppParam { name: "FrustumPlaneCuller", ty: "::MA::Flora::FrustumPlaneCuller*", modifiers: "", def_value: None }, CppParam { name: "ScreenRelativeMetric", ty: "float_t*", modifiers: "", def_value: None }, CppParam { name: "MeshLodSelectionConstant", ty: "float_t*", modifiers: "", def_value: None }]
constexpr CullingSystem_SetupFrustumCullingInputs(float_t  LODBias, float_t  MeshLodThreshold, ::UnityEngine::Rendering::BatchCullingContext*  Context, ::MA::Flora::ReceiverPlanes*  ReceiverPlanes, ::MA::Flora::ReceiverSphereCuller*  ReceiverSphereCuller, ::MA::Flora::FrustumPlaneCuller*  FrustumPlaneCuller, float_t*  ScreenRelativeMetric, float_t*  MeshLodSelectionConstant) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13141};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field LODBias, offset: 0x0, size: 0x4, def value: None
 float_t  LODBias;

/// @brief Field MeshLodThreshold, offset: 0x4, size: 0x4, def value: None
 float_t  MeshLodThreshold;

/// @brief Field Context, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Rendering::BatchCullingContext*  Context;

/// @brief Field ReceiverPlanes, offset: 0x10, size: 0x8, def value: None
 ::MA::Flora::ReceiverPlanes*  ReceiverPlanes;

/// @brief Field ReceiverSphereCuller, offset: 0x18, size: 0x8, def value: None
 ::MA::Flora::ReceiverSphereCuller*  ReceiverSphereCuller;

/// @brief Field FrustumPlaneCuller, offset: 0x20, size: 0x8, def value: None
 ::MA::Flora::FrustumPlaneCuller*  FrustumPlaneCuller;

/// @brief Field ScreenRelativeMetric, offset: 0x28, size: 0x8, def value: None
 float_t*  ScreenRelativeMetric;

/// @brief Field MeshLodSelectionConstant, offset: 0x30, size: 0x8, def value: None
 float_t*  MeshLodSelectionConstant;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingSystem_SetupFrustumCullingInputs, LODBias) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_SetupFrustumCullingInputs, MeshLodThreshold) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_SetupFrustumCullingInputs, Context) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_SetupFrustumCullingInputs, ReceiverPlanes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_SetupFrustumCullingInputs, ReceiverSphereCuller) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_SetupFrustumCullingInputs, FrustumPlaneCuller) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_SetupFrustumCullingInputs, ScreenRelativeMetric) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_SetupFrustumCullingInputs, MeshLodSelectionConstant) == 0x30, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingSystem_SetupFrustumCullingInputs) == 0x38, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.BlockLocation, MA.Flora.CullingChunkIndex, MA.Flora.FrustumPlaneCuller::SplitInfo, MA.Flora.FrustumSIMDPacket, MA.Flora.NativeBitSet, MA.Flora.NativeBufferArray`1<T>, MA.Flora.ReceiverSphereCuller::SplitInfo, System.IntPtr, Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, Unity.Mathematics.float3x3, UnityEngine.Plane
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingSystem/CullGrid
struct CORDL_TYPE CullingSystem_CullGrid {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0x1814b0750, size 0x7e0, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr CullingSystem_CullGrid() ;

// Ctor Parameters [CppParam { name: "FrustumPlanePackets", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::FrustumSIMDPacket>", modifiers: "", def_value: None }, CppParam { name: "FrustumSplitInfos", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::FrustumPlaneCuller_SplitInfo>", modifiers: "", def_value: None }, CppParam { name: "LightFacingFrustumPlanes", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Plane>", modifiers: "", def_value: None }, CppParam { name: "ReceiverSplitInfos", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::ReceiverSphereCuller_SplitInfo>", modifiers: "", def_value: None }, CppParam { name: "WorldToLightSpaceRotation", ty: "::Unity::Mathematics::float3x3", modifiers: "", def_value: None }, CppParam { name: "OcclusionBuffer", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "Blocks", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "BlockLocations", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::BlockLocation>", modifiers: "", def_value: None }, CppParam { name: "Cells", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "CellInstanceCount", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "CellChunks", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "OutCellVisibility", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "OutCullingChunks", ty: "::Unity::Collections::NativeList_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "OutCullingCounts", ty: "::MA::Flora::GridCullCounts*", modifiers: "", def_value: None }]
constexpr CullingSystem_CullGrid(::Unity::Collections::NativeArray_1<::MA::Flora::FrustumSIMDPacket>  FrustumPlanePackets, ::Unity::Collections::NativeArray_1<::MA::Flora::FrustumPlaneCuller_SplitInfo>  FrustumSplitInfos, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  LightFacingFrustumPlanes, ::Unity::Collections::NativeArray_1<::MA::Flora::ReceiverSphereCuller_SplitInfo>  ReceiverSplitInfos, ::Unity::Mathematics::float3x3  WorldToLightSpaceRotation, ::System::IntPtr  OcclusionBuffer, ::MA::Flora::NativeBitSet  Blocks, ::Unity::Collections::NativeArray_1<::MA::Flora::BlockLocation>  BlockLocations, ::MA::Flora::NativeBitSet  Cells, ::Unity::Collections::NativeArray_1<int32_t>  CellInstanceCount, ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>  CellChunks, ::Unity::Collections::NativeArray_1<uint8_t>  OutCellVisibility, ::Unity::Collections::NativeList_1<::MA::Flora::CullingChunkIndex>  OutCullingChunks, ::MA::Flora::GridCullCounts*  OutCullingCounts) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13142};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xd0};

/// @brief Field FrustumPlanePackets, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::FrustumSIMDPacket>  FrustumPlanePackets;

/// @brief Field FrustumSplitInfos, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::FrustumPlaneCuller_SplitInfo>  FrustumSplitInfos;

/// @brief Field LightFacingFrustumPlanes, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  LightFacingFrustumPlanes;

/// @brief Field ReceiverSplitInfos, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::ReceiverSphereCuller_SplitInfo>  ReceiverSplitInfos;

/// @brief Field WorldToLightSpaceRotation, offset: 0x40, size: 0x24, def value: None
 ::Unity::Mathematics::float3x3  WorldToLightSpaceRotation;

/// @brief Field OcclusionBuffer, offset: 0x68, size: 0x8, def value: None
 ::System::IntPtr  OcclusionBuffer;

/// @brief Field Blocks, offset: 0x70, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  Blocks;

/// @brief Field BlockLocations, offset: 0x78, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::BlockLocation>  BlockLocations;

/// @brief Field Cells, offset: 0x88, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  Cells;

/// @brief Field CellInstanceCount, offset: 0x90, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  CellInstanceCount;

/// @brief Field CellChunks, offset: 0xa0, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>  CellChunks;

/// @brief Field OutCellVisibility, offset: 0xb0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  OutCellVisibility;

/// @brief Field OutCullingChunks, offset: 0xc0, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::MA::Flora::CullingChunkIndex>  OutCullingChunks;

/// @brief Field OutCullingCounts, offset: 0xc8, size: 0x8, def value: None
 ::MA::Flora::GridCullCounts*  OutCullingCounts;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingSystem_CullGrid, FrustumPlanePackets) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_CullGrid, FrustumSplitInfos) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_CullGrid, LightFacingFrustumPlanes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_CullGrid, ReceiverSplitInfos) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_CullGrid, WorldToLightSpaceRotation) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_CullGrid, OcclusionBuffer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_CullGrid, Blocks) == 0x70, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_CullGrid, BlockLocations) == 0x78, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_CullGrid, Cells) == 0x88, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_CullGrid, CellInstanceCount) == 0x90, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_CullGrid, CellChunks) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_CullGrid, OutCellVisibility) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_CullGrid, OutCullingChunks) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_CullGrid, OutCullingCounts) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingSystem_CullGrid) == 0xd0, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.ArchetypeIndex, MA.Flora.CellIndex, MA.Flora.CullingChunkIndex, MA.Flora.DrawBinConfig, MA.Flora.DrawVisibilityMask, Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.BatchCullingViewType
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingSystem/CullChunks
struct CORDL_TYPE CullingSystem_CullChunks {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0x1814b04e0, size 0x270, virtual true, abstract: false, final true
inline void Execute(int32_t  chunkDrawIndex) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr CullingSystem_CullChunks() ;

// Ctor Parameters [CppParam { name: "ViewType", ty: "::UnityEngine::Rendering::BatchCullingViewType", modifiers: "", def_value: None }, CppParam { name: "BinConfig", ty: "::MA::Flora::DrawBinConfig", modifiers: "", def_value: None }, CppParam { name: "CullingLayerMask", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "CellVisibility", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "Chunks", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "ChunkCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "ChunkCells", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CellIndex>", modifiers: "", def_value: None }, CppParam { name: "ChunkFlags", ty: "::Unity::Collections::NativeArray_1<uint64_t>", modifiers: "", def_value: None }, CppParam { name: "ChunkArchetypes", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>", modifiers: "", def_value: None }, CppParam { name: "ChunkVisibility", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>", modifiers: "", def_value: None }]
constexpr CullingSystem_CullChunks(::UnityEngine::Rendering::BatchCullingViewType  ViewType, ::MA::Flora::DrawBinConfig  BinConfig, uint32_t  CullingLayerMask, ::Unity::Collections::NativeArray_1<uint8_t>  CellVisibility, ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  Chunks, ::Unity::Collections::NativeArray_1<int32_t>  ChunkCounts, ::Unity::Collections::NativeArray_1<::MA::Flora::CellIndex>  ChunkCells, ::Unity::Collections::NativeArray_1<uint64_t>  ChunkFlags, ::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>  ChunkArchetypes, ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>  ChunkVisibility) noexcept;

/// @brief Field BatchSize offset 0xffffffff size 0x4
static constexpr int32_t  BatchSize{static_cast<int32_t>(0x40)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13143};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field ViewType, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::Rendering::BatchCullingViewType  ViewType;

/// @brief Field BinConfig, offset: 0x4, size: 0x8, def value: None
 ::MA::Flora::DrawBinConfig  BinConfig;

/// @brief Field CullingLayerMask, offset: 0xc, size: 0x4, def value: None
 uint32_t  CullingLayerMask;

/// @brief Field CellVisibility, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  CellVisibility;

/// @brief Field Chunks, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  Chunks;

/// @brief Field ChunkCounts, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ChunkCounts;

/// @brief Field ChunkCells, offset: 0x40, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::CellIndex>  ChunkCells;

/// @brief Field ChunkFlags, offset: 0x50, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint64_t>  ChunkFlags;

/// @brief Field ChunkArchetypes, offset: 0x60, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>  ChunkArchetypes;

/// @brief Field ChunkVisibility, offset: 0x70, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>  ChunkVisibility;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingSystem_CullChunks, ViewType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_CullChunks, BinConfig) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_CullChunks, CullingLayerMask) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_CullChunks, CellVisibility) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_CullChunks, Chunks) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_CullChunks, ChunkCounts) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_CullChunks, ChunkCells) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_CullChunks, ChunkFlags) == 0x50, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_CullChunks, ChunkArchetypes) == 0x60, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_CullChunks, ChunkVisibility) == 0x70, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingSystem_CullChunks) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.ArchetypeIndex, MA.Flora.CullingChunkIndex, MA.Flora.CullingLayoutCounts, MA.Flora.DrawVisibilityMask, Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingSystem/ReduceVisibleChunksByTemplate
struct CORDL_TYPE CullingSystem_ReduceVisibleChunksByTemplate {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0x1814c0b10, size 0x140, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr CullingSystem_ReduceVisibleChunksByTemplate() ;

// Ctor Parameters [CppParam { name: "VisibleChunks", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "ChunkCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "ChunkArchetypes", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>", modifiers: "", def_value: None }, CppParam { name: "ChunkVisibility", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>", modifiers: "", def_value: None }, CppParam { name: "TemplateVisibleChunks", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "TemplateVisibleInstances", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "TemplateVisibility", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>", modifiers: "", def_value: None }, CppParam { name: "TemplateChunkStateFlags", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "ExactCounts", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CullingLayoutCounts>", modifiers: "", def_value: None }]
constexpr CullingSystem_ReduceVisibleChunksByTemplate(::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  VisibleChunks, ::Unity::Collections::NativeArray_1<int32_t>  ChunkCounts, ::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>  ChunkArchetypes, ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>  ChunkVisibility, ::Unity::Collections::NativeArray_1<int32_t>  TemplateVisibleChunks, ::Unity::Collections::NativeArray_1<int32_t>  TemplateVisibleInstances, ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>  TemplateVisibility, ::Unity::Collections::NativeArray_1<uint8_t>  TemplateChunkStateFlags, ::Unity::Collections::NativeArray_1<::MA::Flora::CullingLayoutCounts>  ExactCounts) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13144};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field VisibleChunks, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  VisibleChunks;

/// @brief Field ChunkCounts, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ChunkCounts;

/// @brief Field ChunkArchetypes, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>  ChunkArchetypes;

/// @brief Field ChunkVisibility, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>  ChunkVisibility;

/// @brief Field TemplateVisibleChunks, offset: 0x40, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  TemplateVisibleChunks;

/// @brief Field TemplateVisibleInstances, offset: 0x50, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  TemplateVisibleInstances;

/// @brief Field TemplateVisibility, offset: 0x60, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>  TemplateVisibility;

/// @brief Field TemplateChunkStateFlags, offset: 0x70, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  TemplateChunkStateFlags;

/// @brief Field ExactCounts, offset: 0x80, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::CullingLayoutCounts>  ExactCounts;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingSystem_ReduceVisibleChunksByTemplate, VisibleChunks) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_ReduceVisibleChunksByTemplate, ChunkCounts) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_ReduceVisibleChunksByTemplate, ChunkArchetypes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_ReduceVisibleChunksByTemplate, ChunkVisibility) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_ReduceVisibleChunksByTemplate, TemplateVisibleChunks) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_ReduceVisibleChunksByTemplate, TemplateVisibleInstances) == 0x50, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_ReduceVisibleChunksByTemplate, TemplateVisibility) == 0x60, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_ReduceVisibleChunksByTemplate, TemplateChunkStateFlags) == 0x70, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_ReduceVisibleChunksByTemplate, ExactCounts) == 0x80, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingSystem_ReduceVisibleChunksByTemplate) == 0x90, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.NativeBitSet, Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingSystem/ComputeTemplateChunkOffsets
struct CORDL_TYPE CullingSystem_ComputeTemplateChunkOffsets {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0x1814b00a0, size 0xc0, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr CullingSystem_ComputeTemplateChunkOffsets() ;

// Ctor Parameters [CppParam { name: "Templates", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "TemplateVisibleChunks", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "TemplateDrawChunkOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
constexpr CullingSystem_ComputeTemplateChunkOffsets(::MA::Flora::NativeBitSet  Templates, ::Unity::Collections::NativeArray_1<int32_t>  TemplateVisibleChunks, ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawChunkOffsets) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13145};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field Templates, offset: 0x0, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  Templates;

/// @brief Field TemplateVisibleChunks, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  TemplateVisibleChunks;

/// @brief Field TemplateDrawChunkOffsets, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawChunkOffsets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingSystem_ComputeTemplateChunkOffsets, Templates) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_ComputeTemplateChunkOffsets, TemplateVisibleChunks) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_ComputeTemplateChunkOffsets, TemplateDrawChunkOffsets) == 0x18, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingSystem_ComputeTemplateChunkOffsets) == 0x28, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.ArchetypeIndex, MA.Flora.CullingChunkIndex, MA.Flora.DrawVisibilityMask, MA.Flora.NativeBitSet, Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingSystem/OrderVisibleChunksByTemplate
struct CORDL_TYPE CullingSystem_OrderVisibleChunksByTemplate {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0x1814c05c0, size 0x170, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr CullingSystem_OrderVisibleChunksByTemplate() ;

// Ctor Parameters [CppParam { name: "Templates", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "TemplateDrawChunkOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "VisibleChunks", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "ChunkVisibility", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>", modifiers: "", def_value: None }, CppParam { name: "ChunkArchetypes", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>", modifiers: "", def_value: None }, CppParam { name: "TemplateChunkWriteCursors", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "OrderedVisibleChunks", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "OrderedVisibleChunkSourceIndices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
constexpr CullingSystem_OrderVisibleChunksByTemplate(::MA::Flora::NativeBitSet  Templates, ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawChunkOffsets, ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  VisibleChunks, ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>  ChunkVisibility, ::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>  ChunkArchetypes, ::Unity::Collections::NativeArray_1<int32_t>  TemplateChunkWriteCursors, ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  OrderedVisibleChunks, ::Unity::Collections::NativeArray_1<int32_t>  OrderedVisibleChunkSourceIndices) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13146};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field Templates, offset: 0x0, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  Templates;

/// @brief Field TemplateDrawChunkOffsets, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawChunkOffsets;

/// @brief Field VisibleChunks, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  VisibleChunks;

/// @brief Field ChunkVisibility, offset: 0x28, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>  ChunkVisibility;

/// @brief Field ChunkArchetypes, offset: 0x38, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>  ChunkArchetypes;

/// @brief Field TemplateChunkWriteCursors, offset: 0x48, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  TemplateChunkWriteCursors;

/// @brief Field OrderedVisibleChunks, offset: 0x58, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  OrderedVisibleChunks;

/// @brief Field OrderedVisibleChunkSourceIndices, offset: 0x68, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  OrderedVisibleChunkSourceIndices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingSystem_OrderVisibleChunksByTemplate, Templates) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_OrderVisibleChunksByTemplate, TemplateDrawChunkOffsets) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_OrderVisibleChunksByTemplate, VisibleChunks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_OrderVisibleChunksByTemplate, ChunkVisibility) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_OrderVisibleChunksByTemplate, ChunkArchetypes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_OrderVisibleChunksByTemplate, TemplateChunkWriteCursors) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_OrderVisibleChunksByTemplate, OrderedVisibleChunks) == 0x58, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_OrderVisibleChunksByTemplate, OrderedVisibleChunkSourceIndices) == 0x68, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingSystem_OrderVisibleChunksByTemplate) == 0x78, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.ArchetypeIndex, MA.Flora.CullingChunkIndex, MA.Flora.NativeBitSet, Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingSystem/BuildLightmapPartitions
struct CORDL_TYPE CullingSystem_BuildLightmapPartitions {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0x1814af700, size 0x460, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr CullingSystem_BuildLightmapPartitions() ;

// Ctor Parameters [CppParam { name: "Templates", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "TemplateDrawChunkOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "TemplateVisibleChunks", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "OrderedVisibleChunks", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "ChunkArchetypes", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>", modifiers: "", def_value: None }, CppParam { name: "ChunkCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "OrderedVisibleChunkLightmapPartitions", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "TemplateLightmapPartitionCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "TemplateLightmapIndices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "TemplateLightmapVisibleInstanceCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
constexpr CullingSystem_BuildLightmapPartitions(::MA::Flora::NativeBitSet  Templates, ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawChunkOffsets, ::Unity::Collections::NativeArray_1<int32_t>  TemplateVisibleChunks, ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  OrderedVisibleChunks, ::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>  ChunkArchetypes, ::Unity::Collections::NativeArray_1<int32_t>  ChunkCounts, ::Unity::Collections::NativeArray_1<int32_t>  OrderedVisibleChunkLightmapPartitions, ::Unity::Collections::NativeArray_1<int32_t>  TemplateLightmapPartitionCounts, ::Unity::Collections::NativeArray_1<int32_t>  TemplateLightmapIndices, ::Unity::Collections::NativeArray_1<int32_t>  TemplateLightmapVisibleInstanceCounts) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13147};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x98};

/// @brief Field Templates, offset: 0x0, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  Templates;

/// @brief Field TemplateDrawChunkOffsets, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawChunkOffsets;

/// @brief Field TemplateVisibleChunks, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  TemplateVisibleChunks;

/// @brief Field OrderedVisibleChunks, offset: 0x28, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  OrderedVisibleChunks;

/// @brief Field ChunkArchetypes, offset: 0x38, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>  ChunkArchetypes;

/// @brief Field ChunkCounts, offset: 0x48, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ChunkCounts;

/// @brief Field OrderedVisibleChunkLightmapPartitions, offset: 0x58, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  OrderedVisibleChunkLightmapPartitions;

/// @brief Field TemplateLightmapPartitionCounts, offset: 0x68, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  TemplateLightmapPartitionCounts;

/// @brief Field TemplateLightmapIndices, offset: 0x78, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  TemplateLightmapIndices;

/// @brief Field TemplateLightmapVisibleInstanceCounts, offset: 0x88, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  TemplateLightmapVisibleInstanceCounts;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingSystem_BuildLightmapPartitions, Templates) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_BuildLightmapPartitions, TemplateDrawChunkOffsets) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_BuildLightmapPartitions, TemplateVisibleChunks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_BuildLightmapPartitions, OrderedVisibleChunks) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_BuildLightmapPartitions, ChunkArchetypes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_BuildLightmapPartitions, ChunkCounts) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_BuildLightmapPartitions, OrderedVisibleChunkLightmapPartitions) == 0x58, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_BuildLightmapPartitions, TemplateLightmapPartitionCounts) == 0x68, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_BuildLightmapPartitions, TemplateLightmapIndices) == 0x78, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_BuildLightmapPartitions, TemplateLightmapVisibleInstanceCounts) == 0x88, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingSystem_BuildLightmapPartitions) == 0x98, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.DrawBatch, MA.Flora.DrawBatchIndex, MA.Flora.DrawRangeIndex, MA.Flora.DrawVisibilityMask, MA.Flora.NativeBitSet, MA.Flora.NativeBufferArray`1<T>, Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.BatchID
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingSystem/CountDrawCommandsPerTemplate
struct CORDL_TYPE CullingSystem_CountDrawCommandsPerTemplate {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0x1814b0160, size 0x380, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr CullingSystem_CountDrawCommandsPerTemplate() ;

// Ctor Parameters [CppParam { name: "Templates", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "DrawBatches", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatch>", modifiers: "", def_value: None }, CppParam { name: "BatchIDs", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchID>", modifiers: "", def_value: None }, CppParam { name: "DrawBatchRangeIndices", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawRangeIndex>", modifiers: "", def_value: None }, CppParam { name: "TemplateDrawIndicesPerLod", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: None }, CppParam { name: "TemplateVisibility", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>", modifiers: "", def_value: None }, CppParam { name: "TemplateChunkStateFlags", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "TemplateVisibleInstances", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "TemplateLightmapPartitionCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "TemplateStateMask", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "TemplateEmittedStateFlags", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "TemplateDrawCommandCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "RangeCommandCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
constexpr CullingSystem_CountDrawCommandsPerTemplate(::MA::Flora::NativeBitSet  Templates, ::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatch>  DrawBatches, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchID>  BatchIDs, ::Unity::Collections::NativeArray_1<::MA::Flora::DrawRangeIndex>  DrawBatchRangeIndices, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  TemplateDrawIndicesPerLod, ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>  TemplateVisibility, ::Unity::Collections::NativeArray_1<uint8_t>  TemplateChunkStateFlags, ::Unity::Collections::NativeArray_1<int32_t>  TemplateVisibleInstances, ::Unity::Collections::NativeArray_1<int32_t>  TemplateLightmapPartitionCounts, ::Unity::Collections::NativeArray_1<uint8_t>  TemplateStateMask, ::Unity::Collections::NativeArray_1<uint8_t>  TemplateEmittedStateFlags, ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawCommandCounts, ::Unity::Collections::NativeArray_1<int32_t>  RangeCommandCounts) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13148};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc8};

/// @brief Field Templates, offset: 0x0, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  Templates;

/// @brief Field DrawBatches, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatch>  DrawBatches;

/// @brief Field BatchIDs, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchID>  BatchIDs;

/// @brief Field DrawBatchRangeIndices, offset: 0x28, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::DrawRangeIndex>  DrawBatchRangeIndices;

/// @brief Field TemplateDrawIndicesPerLod, offset: 0x38, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  TemplateDrawIndicesPerLod;

/// @brief Field TemplateVisibility, offset: 0x48, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>  TemplateVisibility;

/// @brief Field TemplateChunkStateFlags, offset: 0x58, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  TemplateChunkStateFlags;

/// @brief Field TemplateVisibleInstances, offset: 0x68, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  TemplateVisibleInstances;

/// @brief Field TemplateLightmapPartitionCounts, offset: 0x78, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  TemplateLightmapPartitionCounts;

/// @brief Field TemplateStateMask, offset: 0x88, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  TemplateStateMask;

/// @brief Field TemplateEmittedStateFlags, offset: 0x98, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  TemplateEmittedStateFlags;

/// @brief Field TemplateDrawCommandCounts, offset: 0xa8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawCommandCounts;

/// @brief Field RangeCommandCounts, offset: 0xb8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  RangeCommandCounts;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingSystem_CountDrawCommandsPerTemplate, Templates) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_CountDrawCommandsPerTemplate, DrawBatches) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_CountDrawCommandsPerTemplate, BatchIDs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_CountDrawCommandsPerTemplate, DrawBatchRangeIndices) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_CountDrawCommandsPerTemplate, TemplateDrawIndicesPerLod) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_CountDrawCommandsPerTemplate, TemplateVisibility) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_CountDrawCommandsPerTemplate, TemplateChunkStateFlags) == 0x58, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_CountDrawCommandsPerTemplate, TemplateVisibleInstances) == 0x68, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_CountDrawCommandsPerTemplate, TemplateLightmapPartitionCounts) == 0x78, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_CountDrawCommandsPerTemplate, TemplateStateMask) == 0x88, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_CountDrawCommandsPerTemplate, TemplateEmittedStateFlags) == 0x98, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_CountDrawCommandsPerTemplate, TemplateDrawCommandCounts) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_CountDrawCommandsPerTemplate, RangeCommandCounts) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingSystem_CountDrawCommandsPerTemplate) == 0xc8, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.CullingLayoutCounts, MA.Flora.DrawBinConfig, MA.Flora.DrawVisibilityMask, MA.Flora.NativeBitSet, Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingSystem/ComputeOutputOffsetsAndCounts
struct CORDL_TYPE CullingSystem_ComputeOutputOffsetsAndCounts {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0x1814afb60, size 0x540, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr CullingSystem_ComputeOutputOffsetsAndCounts() ;

// Ctor Parameters [CppParam { name: "BinConfig", ty: "::MA::Flora::DrawBinConfig", modifiers: "", def_value: None }, CppParam { name: "Templates", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "TemplateVisibility", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>", modifiers: "", def_value: None }, CppParam { name: "TemplateStateMask", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "TemplateVisibleChunks", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "TemplateDrawChunkOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "TemplateLightmapPartitionCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "TemplateLightmapVisibleInstanceCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "TemplateDrawCommandCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "RangeCommandCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "InputCounts", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CullingLayoutCounts>", modifiers: "", def_value: None }, CppParam { name: "TemplateDrawBinOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "TemplateDrawCommandOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "TemplateVisibleInstanceOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "RangeCommandOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "OutputCounts", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CullingLayoutCounts>", modifiers: "", def_value: None }]
constexpr CullingSystem_ComputeOutputOffsetsAndCounts(::MA::Flora::DrawBinConfig  BinConfig, ::MA::Flora::NativeBitSet  Templates, ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>  TemplateVisibility, ::Unity::Collections::NativeArray_1<uint8_t>  TemplateStateMask, ::Unity::Collections::NativeArray_1<int32_t>  TemplateVisibleChunks, ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawChunkOffsets, ::Unity::Collections::NativeArray_1<int32_t>  TemplateLightmapPartitionCounts, ::Unity::Collections::NativeArray_1<int32_t>  TemplateLightmapVisibleInstanceCounts, ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawCommandCounts, ::Unity::Collections::NativeArray_1<int32_t>  RangeCommandCounts, ::Unity::Collections::NativeArray_1<::MA::Flora::CullingLayoutCounts>  InputCounts, ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawBinOffsets, ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawCommandOffsets, ::Unity::Collections::NativeArray_1<int32_t>  TemplateVisibleInstanceOffsets, ::Unity::Collections::NativeArray_1<int32_t>  RangeCommandOffsets, ::Unity::Collections::NativeArray_1<::MA::Flora::CullingLayoutCounts>  OutputCounts) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13149};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xf0};

/// @brief Field BinConfig, offset: 0x0, size: 0x8, def value: None
 ::MA::Flora::DrawBinConfig  BinConfig;

/// @brief Field Templates, offset: 0x8, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  Templates;

/// @brief Field TemplateVisibility, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>  TemplateVisibility;

/// @brief Field TemplateStateMask, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  TemplateStateMask;

/// @brief Field TemplateVisibleChunks, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  TemplateVisibleChunks;

/// @brief Field TemplateDrawChunkOffsets, offset: 0x40, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawChunkOffsets;

/// @brief Field TemplateLightmapPartitionCounts, offset: 0x50, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  TemplateLightmapPartitionCounts;

/// @brief Field TemplateLightmapVisibleInstanceCounts, offset: 0x60, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  TemplateLightmapVisibleInstanceCounts;

/// @brief Field TemplateDrawCommandCounts, offset: 0x70, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawCommandCounts;

/// @brief Field RangeCommandCounts, offset: 0x80, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  RangeCommandCounts;

/// @brief Field InputCounts, offset: 0x90, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::CullingLayoutCounts>  InputCounts;

/// @brief Field TemplateDrawBinOffsets, offset: 0xa0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawBinOffsets;

/// @brief Field TemplateDrawCommandOffsets, offset: 0xb0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawCommandOffsets;

/// @brief Field TemplateVisibleInstanceOffsets, offset: 0xc0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  TemplateVisibleInstanceOffsets;

/// @brief Field RangeCommandOffsets, offset: 0xd0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  RangeCommandOffsets;

/// @brief Field OutputCounts, offset: 0xe0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::CullingLayoutCounts>  OutputCounts;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingSystem_ComputeOutputOffsetsAndCounts, BinConfig) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_ComputeOutputOffsetsAndCounts, Templates) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_ComputeOutputOffsetsAndCounts, TemplateVisibility) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_ComputeOutputOffsetsAndCounts, TemplateStateMask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_ComputeOutputOffsetsAndCounts, TemplateVisibleChunks) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_ComputeOutputOffsetsAndCounts, TemplateDrawChunkOffsets) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_ComputeOutputOffsetsAndCounts, TemplateLightmapPartitionCounts) == 0x50, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_ComputeOutputOffsetsAndCounts, TemplateLightmapVisibleInstanceCounts) == 0x60, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_ComputeOutputOffsetsAndCounts, TemplateDrawCommandCounts) == 0x70, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_ComputeOutputOffsetsAndCounts, RangeCommandCounts) == 0x80, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_ComputeOutputOffsetsAndCounts, InputCounts) == 0x90, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_ComputeOutputOffsetsAndCounts, TemplateDrawBinOffsets) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_ComputeOutputOffsetsAndCounts, TemplateDrawCommandOffsets) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_ComputeOutputOffsetsAndCounts, TemplateVisibleInstanceOffsets) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_ComputeOutputOffsetsAndCounts, RangeCommandOffsets) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_ComputeOutputOffsetsAndCounts, OutputCounts) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingSystem_ComputeOutputOffsetsAndCounts) == 0xf0, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingSystem/ReorderIncludedInstanceBits
struct CORDL_TYPE CullingSystem_ReorderIncludedInstanceBits {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0x1814c0c50, size 0x30, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr CullingSystem_ReorderIncludedInstanceBits() ;

// Ctor Parameters [CppParam { name: "OrderedVisibleChunkSourceIndices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "SourceIncludedInstances", ty: "::Unity::Collections::NativeArray_1<uint64_t>", modifiers: "", def_value: None }, CppParam { name: "OutputIncludedInstances", ty: "::Unity::Collections::NativeArray_1<uint64_t>", modifiers: "", def_value: None }]
constexpr CullingSystem_ReorderIncludedInstanceBits(::Unity::Collections::NativeArray_1<int32_t>  OrderedVisibleChunkSourceIndices, ::Unity::Collections::NativeArray_1<uint64_t>  SourceIncludedInstances, ::Unity::Collections::NativeArray_1<uint64_t>  OutputIncludedInstances) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13150};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field OrderedVisibleChunkSourceIndices, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  OrderedVisibleChunkSourceIndices;

/// @brief Field SourceIncludedInstances, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint64_t>  SourceIncludedInstances;

/// @brief Field OutputIncludedInstances, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint64_t>  OutputIncludedInstances;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingSystem_ReorderIncludedInstanceBits, OrderedVisibleChunkSourceIndices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_ReorderIncludedInstanceBits, SourceIncludedInstances) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_ReorderIncludedInstanceBits, OutputIncludedInstances) == 0x20, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingSystem_ReorderIncludedInstanceBits) == 0x30, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.ArchetypeIndex, MA.Flora.CullingChunkIndex, MA.Flora.DrawBatch, MA.Flora.DrawBatchIndex, MA.Flora.DrawBinConfig, MA.Flora.DrawVisibilityMask, MA.Flora.IndirectCullingOutput, MA.Flora.NativeBitSet, MA.Flora.NativeBufferArray`1<T>, Unity.Collections.NativeArray`1<T>, UnityEngine.GraphicsBufferHandle, UnityEngine.Rendering.BatchID
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingSystem/WriteCullingOutputPerTemplate
struct CORDL_TYPE CullingSystem_WriteCullingOutputPerTemplate {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0x1814c17c0, size 0xc50, virtual true, abstract: false, final true
inline void Execute(int32_t  templateIndex) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr CullingSystem_WriteCullingOutputPerTemplate() ;

// Ctor Parameters [CppParam { name: "BinConfig", ty: "::MA::Flora::DrawBinConfig", modifiers: "", def_value: None }, CppParam { name: "VisibilityBufferHandle", ty: "::UnityEngine::GraphicsBufferHandle", modifiers: "", def_value: None }, CppParam { name: "DrawArgsBufferHandle", ty: "::UnityEngine::GraphicsBufferHandle", modifiers: "", def_value: None }, CppParam { name: "Templates", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "DrawBatches", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatch>", modifiers: "", def_value: None }, CppParam { name: "BatchIDs", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchID>", modifiers: "", def_value: None }, CppParam { name: "ChunkArchetypes", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>", modifiers: "", def_value: None }, CppParam { name: "OrderedVisibleChunks", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "OrderedVisibleChunkLightmapPartitions", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "TemplateDrawIndicesPerLod", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: None }, CppParam { name: "ChunkVisibility", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>", modifiers: "", def_value: None }, CppParam { name: "TemplateVisibility", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>", modifiers: "", def_value: None }, CppParam { name: "TemplateStateMask", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "TemplateEmittedStateFlags", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "TemplateVisibleChunks", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "TemplateLightmapPartitionCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "TemplateLightmapIndices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "TemplateLightmapVisibleInstanceCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "TemplateDrawCommandCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "TemplateDrawChunkOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "TemplateDrawBinOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "TemplateDrawCommandOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "TemplateVisibleInstanceOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "CullingViewOutput", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::IndirectCullingOutput>", modifiers: "", def_value: None }]
constexpr CullingSystem_WriteCullingOutputPerTemplate(::MA::Flora::DrawBinConfig  BinConfig, ::UnityEngine::GraphicsBufferHandle  VisibilityBufferHandle, ::UnityEngine::GraphicsBufferHandle  DrawArgsBufferHandle, ::MA::Flora::NativeBitSet  Templates, ::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatch>  DrawBatches, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchID>  BatchIDs, ::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>  ChunkArchetypes, ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  OrderedVisibleChunks, ::Unity::Collections::NativeArray_1<int32_t>  OrderedVisibleChunkLightmapPartitions, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  TemplateDrawIndicesPerLod, ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>  ChunkVisibility, ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>  TemplateVisibility, ::Unity::Collections::NativeArray_1<uint8_t>  TemplateStateMask, ::Unity::Collections::NativeArray_1<uint8_t>  TemplateEmittedStateFlags, ::Unity::Collections::NativeArray_1<int32_t>  TemplateVisibleChunks, ::Unity::Collections::NativeArray_1<int32_t>  TemplateLightmapPartitionCounts, ::Unity::Collections::NativeArray_1<int32_t>  TemplateLightmapIndices, ::Unity::Collections::NativeArray_1<int32_t>  TemplateLightmapVisibleInstanceCounts, ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawCommandCounts, ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawChunkOffsets, ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawBinOffsets, ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawCommandOffsets, ::Unity::Collections::NativeArray_1<int32_t>  TemplateVisibleInstanceOffsets, ::Unity::Collections::NativeArray_1<::MA::Flora::IndirectCullingOutput>  CullingViewOutput) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13151};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x158};

/// @brief Field BinConfig, offset: 0x0, size: 0x8, def value: None
 ::MA::Flora::DrawBinConfig  BinConfig;

/// @brief Field VisibilityBufferHandle, offset: 0x8, size: 0x4, def value: None
 ::UnityEngine::GraphicsBufferHandle  VisibilityBufferHandle;

/// @brief Field DrawArgsBufferHandle, offset: 0xc, size: 0x4, def value: None
 ::UnityEngine::GraphicsBufferHandle  DrawArgsBufferHandle;

/// @brief Field Templates, offset: 0x10, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  Templates;

/// @brief Field DrawBatches, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatch>  DrawBatches;

/// @brief Field BatchIDs, offset: 0x28, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchID>  BatchIDs;

/// @brief Field ChunkArchetypes, offset: 0x38, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>  ChunkArchetypes;

/// @brief Field OrderedVisibleChunks, offset: 0x48, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  OrderedVisibleChunks;

/// @brief Field OrderedVisibleChunkLightmapPartitions, offset: 0x58, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  OrderedVisibleChunkLightmapPartitions;

/// @brief Field TemplateDrawIndicesPerLod, offset: 0x68, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  TemplateDrawIndicesPerLod;

/// @brief Field ChunkVisibility, offset: 0x78, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>  ChunkVisibility;

/// @brief Field TemplateVisibility, offset: 0x88, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>  TemplateVisibility;

/// @brief Field TemplateStateMask, offset: 0x98, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  TemplateStateMask;

/// @brief Field TemplateEmittedStateFlags, offset: 0xa8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  TemplateEmittedStateFlags;

/// @brief Field TemplateVisibleChunks, offset: 0xb8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  TemplateVisibleChunks;

/// @brief Field TemplateLightmapPartitionCounts, offset: 0xc8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  TemplateLightmapPartitionCounts;

/// @brief Field TemplateLightmapIndices, offset: 0xd8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  TemplateLightmapIndices;

/// @brief Field TemplateLightmapVisibleInstanceCounts, offset: 0xe8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  TemplateLightmapVisibleInstanceCounts;

/// @brief Field TemplateDrawCommandCounts, offset: 0xf8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawCommandCounts;

/// @brief Field TemplateDrawChunkOffsets, offset: 0x108, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawChunkOffsets;

/// @brief Field TemplateDrawBinOffsets, offset: 0x118, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawBinOffsets;

/// @brief Field TemplateDrawCommandOffsets, offset: 0x128, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawCommandOffsets;

/// @brief Field TemplateVisibleInstanceOffsets, offset: 0x138, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  TemplateVisibleInstanceOffsets;

/// @brief Field CullingViewOutput, offset: 0x148, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::IndirectCullingOutput>  CullingViewOutput;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingSystem_WriteCullingOutputPerTemplate, BinConfig) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_WriteCullingOutputPerTemplate, VisibilityBufferHandle) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_WriteCullingOutputPerTemplate, DrawArgsBufferHandle) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_WriteCullingOutputPerTemplate, Templates) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_WriteCullingOutputPerTemplate, DrawBatches) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_WriteCullingOutputPerTemplate, BatchIDs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_WriteCullingOutputPerTemplate, ChunkArchetypes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_WriteCullingOutputPerTemplate, OrderedVisibleChunks) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_WriteCullingOutputPerTemplate, OrderedVisibleChunkLightmapPartitions) == 0x58, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_WriteCullingOutputPerTemplate, TemplateDrawIndicesPerLod) == 0x68, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_WriteCullingOutputPerTemplate, ChunkVisibility) == 0x78, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_WriteCullingOutputPerTemplate, TemplateVisibility) == 0x88, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_WriteCullingOutputPerTemplate, TemplateStateMask) == 0x98, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_WriteCullingOutputPerTemplate, TemplateEmittedStateFlags) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_WriteCullingOutputPerTemplate, TemplateVisibleChunks) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_WriteCullingOutputPerTemplate, TemplateLightmapPartitionCounts) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_WriteCullingOutputPerTemplate, TemplateLightmapIndices) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_WriteCullingOutputPerTemplate, TemplateLightmapVisibleInstanceCounts) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_WriteCullingOutputPerTemplate, TemplateDrawCommandCounts) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_WriteCullingOutputPerTemplate, TemplateDrawChunkOffsets) == 0x108, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_WriteCullingOutputPerTemplate, TemplateDrawBinOffsets) == 0x118, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_WriteCullingOutputPerTemplate, TemplateDrawCommandOffsets) == 0x128, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_WriteCullingOutputPerTemplate, TemplateVisibleInstanceOffsets) == 0x138, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_WriteCullingOutputPerTemplate, CullingViewOutput) == 0x148, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingSystem_WriteCullingOutputPerTemplate) == 0x158, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.DrawRangeIndex, MA.Flora.DrawRangeKey, MA.Flora.IndirectCullingOutput, Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.BatchCullingOutputDrawCommands
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingSystem/BuildDeterministicBatchCommands
struct CORDL_TYPE CullingSystem_BuildDeterministicBatchCommands {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0x1814af3f0, size 0x310, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr CullingSystem_BuildDeterministicBatchCommands() ;

// Ctor Parameters [CppParam { name: "UsedDrawRangeCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "CullingViewOutput", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::IndirectCullingOutput>", modifiers: "", def_value: None }, CppParam { name: "DrawBatchRangeIndices", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawRangeIndex>", modifiers: "", def_value: None }, CppParam { name: "DrawRangeKeys", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawRangeKey>", modifiers: "", def_value: None }, CppParam { name: "RangeCommandCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "RangeCommandOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "RangeCommandWriteCursors", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "BatchCullingOutput", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchCullingOutputDrawCommands>", modifiers: "", def_value: None }]
constexpr CullingSystem_BuildDeterministicBatchCommands(int32_t  UsedDrawRangeCount, ::Unity::Collections::NativeArray_1<::MA::Flora::IndirectCullingOutput>  CullingViewOutput, ::Unity::Collections::NativeArray_1<::MA::Flora::DrawRangeIndex>  DrawBatchRangeIndices, ::Unity::Collections::NativeArray_1<::MA::Flora::DrawRangeKey>  DrawRangeKeys, ::Unity::Collections::NativeArray_1<int32_t>  RangeCommandCounts, ::Unity::Collections::NativeArray_1<int32_t>  RangeCommandOffsets, ::Unity::Collections::NativeArray_1<int32_t>  RangeCommandWriteCursors, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchCullingOutputDrawCommands>  BatchCullingOutput) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13152};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field UsedDrawRangeCount, offset: 0x0, size: 0x4, def value: None
 int32_t  UsedDrawRangeCount;

/// @brief Field CullingViewOutput, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::IndirectCullingOutput>  CullingViewOutput;

/// @brief Field DrawBatchRangeIndices, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::DrawRangeIndex>  DrawBatchRangeIndices;

/// @brief Field DrawRangeKeys, offset: 0x28, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::DrawRangeKey>  DrawRangeKeys;

/// @brief Field RangeCommandCounts, offset: 0x38, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  RangeCommandCounts;

/// @brief Field RangeCommandOffsets, offset: 0x48, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  RangeCommandOffsets;

/// @brief Field RangeCommandWriteCursors, offset: 0x58, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  RangeCommandWriteCursors;

/// @brief Field BatchCullingOutput, offset: 0x68, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchCullingOutputDrawCommands>  BatchCullingOutput;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingSystem_BuildDeterministicBatchCommands, UsedDrawRangeCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_BuildDeterministicBatchCommands, CullingViewOutput) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_BuildDeterministicBatchCommands, DrawBatchRangeIndices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_BuildDeterministicBatchCommands, DrawRangeKeys) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_BuildDeterministicBatchCommands, RangeCommandCounts) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_BuildDeterministicBatchCommands, RangeCommandOffsets) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_BuildDeterministicBatchCommands, RangeCommandWriteCursors) == 0x58, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_BuildDeterministicBatchCommands, BatchCullingOutput) == 0x68, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingSystem_BuildDeterministicBatchCommands) == 0x78, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.OccluderHandles, MA.Flora.OccluderParameters, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.CullingSystem/UpdateOccludersPassData
class CORDL_TYPE CullingSystem_UpdateOccludersPassData : public ::System::Object {
public:
// Declarations
/// @brief Field Handles, offset 0x50, size 0x30 
 __declspec(property(get=__cordl_internal_get_Handles, put=__cordl_internal_set_Handles)) ::MA::Flora::OccluderHandles  Handles;

/// @brief Field OcclusionCuller, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OcclusionCuller, put=__cordl_internal_set_OcclusionCuller)) ::MA::Flora::OcclusionCuller*  OcclusionCuller;

/// @brief Field Parameters, offset 0x18, size 0x30 
 __declspec(property(get=__cordl_internal_get_Parameters, put=__cordl_internal_set_Parameters)) ::MA::Flora::OccluderParameters  Parameters;

/// @brief Field SubviewUpdates, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_SubviewUpdates, put=__cordl_internal_set_SubviewUpdates)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::OccluderSubviewUpdate>*  SubviewUpdates;

static inline ::MA::Flora::CullingSystem_UpdateOccludersPassData* New_ctor() ;

constexpr ::MA::Flora::OccluderHandles const& __cordl_internal_get_Handles() const;

constexpr ::MA::Flora::OccluderHandles& __cordl_internal_get_Handles() ;

constexpr ::MA::Flora::OcclusionCuller* const& __cordl_internal_get_OcclusionCuller() const;

constexpr ::MA::Flora::OcclusionCuller*& __cordl_internal_get_OcclusionCuller() ;

constexpr ::MA::Flora::OccluderParameters const& __cordl_internal_get_Parameters() const;

constexpr ::MA::Flora::OccluderParameters& __cordl_internal_get_Parameters() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::OccluderSubviewUpdate>* const& __cordl_internal_get_SubviewUpdates() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::OccluderSubviewUpdate>*& __cordl_internal_get_SubviewUpdates() ;

constexpr void __cordl_internal_set_Handles(::MA::Flora::OccluderHandles  value) ;

constexpr void __cordl_internal_set_OcclusionCuller(::MA::Flora::OcclusionCuller*  value) ;

constexpr void __cordl_internal_set_Parameters(::MA::Flora::OccluderParameters  value) ;

constexpr void __cordl_internal_set_SubviewUpdates(::System::Collections::Generic::List_1<::UnityEngine::Rendering::OccluderSubviewUpdate>*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CullingSystem_UpdateOccludersPassData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CullingSystem_UpdateOccludersPassData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CullingSystem_UpdateOccludersPassData(CullingSystem_UpdateOccludersPassData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CullingSystem_UpdateOccludersPassData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CullingSystem_UpdateOccludersPassData(CullingSystem_UpdateOccludersPassData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13153};

/// @brief Field OcclusionCuller, offset: 0x10, size: 0x8, def value: None
 ::MA::Flora::OcclusionCuller*  ___OcclusionCuller;

/// @brief Field Parameters, offset: 0x18, size: 0x30, def value: None
 ::MA::Flora::OccluderParameters  ___Parameters;

/// @brief Field SubviewUpdates, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Rendering::OccluderSubviewUpdate>*  ___SubviewUpdates;

/// @brief Field Handles, offset: 0x50, size: 0x30, def value: None
 ::MA::Flora::OccluderHandles  ___Handles;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingSystem_UpdateOccludersPassData, ___OcclusionCuller) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_UpdateOccludersPassData, ___Parameters) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_UpdateOccludersPassData, ___SubviewUpdates) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_UpdateOccludersPassData, ___Handles) == 0x50, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingSystem_UpdateOccludersPassData) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.OcclusionCullingDebugShaderVariables, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.CullingSystem/OcclusionTestOverlaySetupPassData
class CORDL_TYPE CullingSystem_OcclusionTestOverlaySetupPassData : public ::System::Object {
public:
// Declarations
/// @brief Field Constants, offset 0x18, size 0xa0 
 __declspec(property(get=__cordl_internal_get_Constants, put=__cordl_internal_set_Constants)) ::MA::Flora::OcclusionCullingDebugShaderVariables  Constants;

/// @brief Field OcclusionCuller, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OcclusionCuller, put=__cordl_internal_set_OcclusionCuller)) ::MA::Flora::OcclusionCuller*  OcclusionCuller;

static inline ::MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData* New_ctor() ;

constexpr ::MA::Flora::OcclusionCullingDebugShaderVariables const& __cordl_internal_get_Constants() const;

constexpr ::MA::Flora::OcclusionCullingDebugShaderVariables& __cordl_internal_get_Constants() ;

constexpr ::MA::Flora::OcclusionCuller* const& __cordl_internal_get_OcclusionCuller() const;

constexpr ::MA::Flora::OcclusionCuller*& __cordl_internal_get_OcclusionCuller() ;

constexpr void __cordl_internal_set_Constants(::MA::Flora::OcclusionCullingDebugShaderVariables  value) ;

constexpr void __cordl_internal_set_OcclusionCuller(::MA::Flora::OcclusionCuller*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CullingSystem_OcclusionTestOverlaySetupPassData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CullingSystem_OcclusionTestOverlaySetupPassData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CullingSystem_OcclusionTestOverlaySetupPassData(CullingSystem_OcclusionTestOverlaySetupPassData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CullingSystem_OcclusionTestOverlaySetupPassData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CullingSystem_OcclusionTestOverlaySetupPassData(CullingSystem_OcclusionTestOverlaySetupPassData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13154};

/// @brief Field OcclusionCuller, offset: 0x10, size: 0x8, def value: None
 ::MA::Flora::OcclusionCuller*  ___OcclusionCuller;

/// @brief Field Constants, offset: 0x18, size: 0xa0, def value: None
 ::MA::Flora::OcclusionCullingDebugShaderVariables  ___Constants;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData, ___OcclusionCuller) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData, ___Constants) == 0x18, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData) == 0xb8, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.BufferHandle
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.CullingSystem/OcclusionTestOverlayPassData
class CORDL_TYPE CullingSystem_OcclusionTestOverlayPassData : public ::System::Object {
public:
// Declarations
/// @brief Field DebugPyramid, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get_DebugPyramid, put=__cordl_internal_set_DebugPyramid)) ::UnityEngine::Rendering::RenderGraphModule::BufferHandle  DebugPyramid;

/// @brief Field OcclusionCuller, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OcclusionCuller, put=__cordl_internal_set_OcclusionCuller)) ::MA::Flora::OcclusionCuller*  OcclusionCuller;

static inline ::MA::Flora::CullingSystem_OcclusionTestOverlayPassData* New_ctor() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::BufferHandle const& __cordl_internal_get_DebugPyramid() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::BufferHandle& __cordl_internal_get_DebugPyramid() ;

constexpr ::MA::Flora::OcclusionCuller* const& __cordl_internal_get_OcclusionCuller() const;

constexpr ::MA::Flora::OcclusionCuller*& __cordl_internal_get_OcclusionCuller() ;

constexpr void __cordl_internal_set_DebugPyramid(::UnityEngine::Rendering::RenderGraphModule::BufferHandle  value) ;

constexpr void __cordl_internal_set_OcclusionCuller(::MA::Flora::OcclusionCuller*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CullingSystem_OcclusionTestOverlayPassData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CullingSystem_OcclusionTestOverlayPassData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CullingSystem_OcclusionTestOverlayPassData(CullingSystem_OcclusionTestOverlayPassData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CullingSystem_OcclusionTestOverlayPassData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CullingSystem_OcclusionTestOverlayPassData(CullingSystem_OcclusionTestOverlayPassData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13155};

/// @brief Field OcclusionCuller, offset: 0x10, size: 0x8, def value: None
 ::MA::Flora::OcclusionCuller*  ___OcclusionCuller;

/// @brief Field DebugPyramid, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::BufferHandle  ___DebugPyramid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingSystem_OcclusionTestOverlayPassData, ___OcclusionCuller) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_OcclusionTestOverlayPassData, ___DebugPyramid) == 0x18, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingSystem_OcclusionTestOverlayPassData) == 0x28, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.Object, UnityEngine.Rect, UnityEngine.Vector2
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.CullingSystem/OcclusionOverlayPassData
class CORDL_TYPE CullingSystem_OcclusionOverlayPassData : public ::System::Object {
public:
// Declarations
/// @brief Field DepthPyramidTexture, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_DepthPyramidTexture, put=__cordl_internal_set_DepthPyramidTexture)) ::UnityEngine::Rendering::RTHandle*  DepthPyramidTexture;

/// @brief Field PassIndex, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_PassIndex, put=__cordl_internal_set_PassIndex)) int32_t  PassIndex;

/// @brief Field ValidRange, offset 0x2c, size 0x8 
 __declspec(property(get=__cordl_internal_get_ValidRange, put=__cordl_internal_set_ValidRange)) ::UnityEngine::Vector2  ValidRange;

/// @brief Field Viewport, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_Viewport, put=__cordl_internal_set_Viewport)) ::UnityEngine::Rect  Viewport;

static inline ::MA::Flora::CullingSystem_OcclusionOverlayPassData* New_ctor() ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_DepthPyramidTexture() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_DepthPyramidTexture() ;

constexpr int32_t const& __cordl_internal_get_PassIndex() const;

constexpr int32_t& __cordl_internal_get_PassIndex() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_ValidRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_ValidRange() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get_Viewport() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get_Viewport() ;

constexpr void __cordl_internal_set_DepthPyramidTexture(::UnityEngine::Rendering::RTHandle*  value) ;

constexpr void __cordl_internal_set_PassIndex(int32_t  value) ;

constexpr void __cordl_internal_set_ValidRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_Viewport(::UnityEngine::Rect  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CullingSystem_OcclusionOverlayPassData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CullingSystem_OcclusionOverlayPassData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CullingSystem_OcclusionOverlayPassData(CullingSystem_OcclusionOverlayPassData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CullingSystem_OcclusionOverlayPassData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CullingSystem_OcclusionOverlayPassData(CullingSystem_OcclusionOverlayPassData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13156};

/// @brief Field DepthPyramidTexture, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ___DepthPyramidTexture;

/// @brief Field Viewport, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Rect  ___Viewport;

/// @brief Field PassIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  ___PassIndex;

/// @brief Field ValidRange, offset: 0x2c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___ValidRange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingSystem_OcclusionOverlayPassData, ___DepthPyramidTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_OcclusionOverlayPassData, ___Viewport) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_OcclusionOverlayPassData, ___PassIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_OcclusionOverlayPassData, ___ValidRange) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingSystem_OcclusionOverlayPassData) == 0x38, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.IndirectCullingRequestHandles, MA.Flora.InstanceOcclusionTestSubviewSettings, MA.Flora.OccluderHandles, System.Object, UnityEngine.Rendering.OcclusionCullingSettings
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.CullingSystem/DispatchIndirectCullingPassData
class CORDL_TYPE CullingSystem_DispatchIndirectCullingPassData : public ::System::Object {
public:
// Declarations
/// @brief Field CullingSystem, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_CullingSystem, put=__cordl_internal_set_CullingSystem)) ::MA::Flora::CullingSystem*  CullingSystem;

/// @brief Field DrawHandles, offset 0x28, size 0x18 
 __declspec(property(get=__cordl_internal_get_DrawHandles, put=__cordl_internal_set_DrawHandles)) ::MA::Flora::IndirectCullingRequestHandles  DrawHandles;

/// @brief Field OccluderHandles, offset 0x50, size 0x30 
 __declspec(property(get=__cordl_internal_get_OccluderHandles, put=__cordl_internal_set_OccluderHandles)) ::MA::Flora::OccluderHandles  OccluderHandles;

/// @brief Field OcclusionTestSubviewSettings, offset 0x80, size 0x14 
 __declspec(property(get=__cordl_internal_get_OcclusionTestSubviewSettings, put=__cordl_internal_set_OcclusionTestSubviewSettings)) ::MA::Flora::InstanceOcclusionTestSubviewSettings  OcclusionTestSubviewSettings;

/// @brief Field Request, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Request, put=__cordl_internal_set_Request)) ::MA::Flora::IndirectCullingRequest*  Request;

/// @brief Field Settings, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get_Settings, put=__cordl_internal_set_Settings)) ::UnityEngine::Rendering::OcclusionCullingSettings  Settings;

/// @brief Field VolumeStack, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_VolumeStack, put=__cordl_internal_set_VolumeStack)) ::UnityEngine::Rendering::VolumeStack*  VolumeStack;

static inline ::MA::Flora::CullingSystem_DispatchIndirectCullingPassData* New_ctor() ;

constexpr ::MA::Flora::CullingSystem* const& __cordl_internal_get_CullingSystem() const;

constexpr ::MA::Flora::CullingSystem*& __cordl_internal_get_CullingSystem() ;

constexpr ::MA::Flora::IndirectCullingRequestHandles const& __cordl_internal_get_DrawHandles() const;

constexpr ::MA::Flora::IndirectCullingRequestHandles& __cordl_internal_get_DrawHandles() ;

constexpr ::MA::Flora::OccluderHandles const& __cordl_internal_get_OccluderHandles() const;

constexpr ::MA::Flora::OccluderHandles& __cordl_internal_get_OccluderHandles() ;

constexpr ::MA::Flora::InstanceOcclusionTestSubviewSettings const& __cordl_internal_get_OcclusionTestSubviewSettings() const;

constexpr ::MA::Flora::InstanceOcclusionTestSubviewSettings& __cordl_internal_get_OcclusionTestSubviewSettings() ;

constexpr ::MA::Flora::IndirectCullingRequest* const& __cordl_internal_get_Request() const;

constexpr ::MA::Flora::IndirectCullingRequest*& __cordl_internal_get_Request() ;

constexpr ::UnityEngine::Rendering::OcclusionCullingSettings const& __cordl_internal_get_Settings() const;

constexpr ::UnityEngine::Rendering::OcclusionCullingSettings& __cordl_internal_get_Settings() ;

constexpr ::UnityEngine::Rendering::VolumeStack* const& __cordl_internal_get_VolumeStack() const;

constexpr ::UnityEngine::Rendering::VolumeStack*& __cordl_internal_get_VolumeStack() ;

constexpr void __cordl_internal_set_CullingSystem(::MA::Flora::CullingSystem*  value) ;

constexpr void __cordl_internal_set_DrawHandles(::MA::Flora::IndirectCullingRequestHandles  value) ;

constexpr void __cordl_internal_set_OccluderHandles(::MA::Flora::OccluderHandles  value) ;

constexpr void __cordl_internal_set_OcclusionTestSubviewSettings(::MA::Flora::InstanceOcclusionTestSubviewSettings  value) ;

constexpr void __cordl_internal_set_Request(::MA::Flora::IndirectCullingRequest*  value) ;

constexpr void __cordl_internal_set_Settings(::UnityEngine::Rendering::OcclusionCullingSettings  value) ;

constexpr void __cordl_internal_set_VolumeStack(::UnityEngine::Rendering::VolumeStack*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CullingSystem_DispatchIndirectCullingPassData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CullingSystem_DispatchIndirectCullingPassData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CullingSystem_DispatchIndirectCullingPassData(CullingSystem_DispatchIndirectCullingPassData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CullingSystem_DispatchIndirectCullingPassData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CullingSystem_DispatchIndirectCullingPassData(CullingSystem_DispatchIndirectCullingPassData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13157};

/// @brief Field CullingSystem, offset: 0x10, size: 0x8, def value: None
 ::MA::Flora::CullingSystem*  ___CullingSystem;

/// @brief Field Request, offset: 0x18, size: 0x8, def value: None
 ::MA::Flora::IndirectCullingRequest*  ___Request;

/// @brief Field VolumeStack, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Rendering::VolumeStack*  ___VolumeStack;

/// @brief Field DrawHandles, offset: 0x28, size: 0x18, def value: None
 ::MA::Flora::IndirectCullingRequestHandles  ___DrawHandles;

/// @brief Field Settings, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Rendering::OcclusionCullingSettings  ___Settings;

/// @brief Field OccluderHandles, offset: 0x50, size: 0x30, def value: None
 ::MA::Flora::OccluderHandles  ___OccluderHandles;

/// @brief Field OcclusionTestSubviewSettings, offset: 0x80, size: 0x14, def value: None
 ::MA::Flora::InstanceOcclusionTestSubviewSettings  ___OcclusionTestSubviewSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingSystem_DispatchIndirectCullingPassData, ___CullingSystem) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_DispatchIndirectCullingPassData, ___Request) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_DispatchIndirectCullingPassData, ___VolumeStack) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_DispatchIndirectCullingPassData, ___DrawHandles) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_DispatchIndirectCullingPassData, ___Settings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_DispatchIndirectCullingPassData, ___OccluderHandles) == 0x50, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem_DispatchIndirectCullingPassData, ___OcclusionTestSubviewSettings) == 0x80, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingSystem_DispatchIndirectCullingPassData) == 0x98, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.CullingSystem/<>c
class CORDL_TYPE CullingSystem___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::MA::Flora::CullingSystem___c*  __9;

/// @brief Field <>9__24_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_0, put=setStaticF___9__24_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_UpdateOccludersPassData*,::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*  __9__24_0;

/// @brief Field <>9__27_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_0, put=setStaticF___9__27_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData*,::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*  __9__27_0;

/// @brief Field <>9__27_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_1, put=setStaticF___9__27_1)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_OcclusionTestOverlayPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  __9__27_1;

/// @brief Field <>9__29_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__29_0, put=setStaticF___9__29_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_OcclusionOverlayPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  __9__29_0;

/// @brief Field <>9__70_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__70_0, put=setStaticF___9__70_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_DispatchIndirectCullingPassData*,::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*  __9__70_0;

static inline ::MA::Flora::CullingSystem___c* New_ctor() ;

/// @brief Method <BuildOcclusionDepth>b__24_0, addr 0x1814c0e60, size 0x310, virtual false, abstract: false, final false
inline void _BuildOcclusionDepth_b__24_0(::MA::Flora::CullingSystem_UpdateOccludersPassData*  data, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*  context) ;

/// @brief Method <DispatchCullingRequest>b__70_0, addr 0x1814c1170, size 0xb0, virtual false, abstract: false, final false
inline void _DispatchCullingRequest_b__70_0(::MA::Flora::CullingSystem_DispatchIndirectCullingPassData*  data, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*  context) ;

/// @brief Method <RenderOcclusionDebugDepthOverlay>b__29_0, addr 0x1814c1220, size 0x1e0, virtual false, abstract: false, final false
inline void _RenderOcclusionDebugDepthOverlay_b__29_0(::MA::Flora::CullingSystem_OcclusionOverlayPassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  ctx) ;

/// @brief Method <RenderOcclusionDebugTestOverlay>b__27_0, addr 0x1814c1400, size 0x1c0, virtual false, abstract: false, final false
inline void _RenderOcclusionDebugTestOverlay_b__27_0(::MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData*  data, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*  ctx) ;

/// @brief Method <RenderOcclusionDebugTestOverlay>b__27_1, addr 0x1814c15c0, size 0xa0, virtual false, abstract: false, final false
inline void _RenderOcclusionDebugTestOverlay_b__27_1(::MA::Flora::CullingSystem_OcclusionTestOverlayPassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  ctx) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::MA::Flora::CullingSystem___c* getStaticF___9() ;

static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_UpdateOccludersPassData*,::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* getStaticF___9__24_0() ;

static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData*,::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* getStaticF___9__27_0() ;

static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_OcclusionTestOverlayPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* getStaticF___9__27_1() ;

static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_OcclusionOverlayPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* getStaticF___9__29_0() ;

static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_DispatchIndirectCullingPassData*,::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* getStaticF___9__70_0() ;

static inline void setStaticF___9(::MA::Flora::CullingSystem___c*  value) ;

static inline void setStaticF___9__24_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_UpdateOccludersPassData*,::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*  value) ;

static inline void setStaticF___9__27_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData*,::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*  value) ;

static inline void setStaticF___9__27_1(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_OcclusionTestOverlayPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  value) ;

static inline void setStaticF___9__29_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_OcclusionOverlayPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  value) ;

static inline void setStaticF___9__70_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_DispatchIndirectCullingPassData*,::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CullingSystem___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CullingSystem___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CullingSystem___c(CullingSystem___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CullingSystem___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CullingSystem___c(CullingSystem___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13158};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::CullingSystem___c) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.AnimatedCrossFadeData, MA.Flora.CullingGrid, MA.Flora.CullingScratchBuffers, MA.Flora.DrawManager, MA.Flora.IndirectCullingRequest, MA.Flora.InstanceBuffer, MA.Flora.InstanceManager, MA.Flora.NativeDataReference`1<T>, MA.Flora.StreamingSphereManager, MA.Flora.TemplateManager, System.Object, Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>, Unity.Collections.NativeHashMap`2<TKey, TValue>, Unity.Profiling.ProfilerMarker, UnityEngine.Rendering.SphericalHarmonicsL2
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.CullingSystem
class CORDL_TYPE CullingSystem : public ::System::Object {
public:
// Declarations
using BuildDeterministicBatchCommands = ::MA::Flora::CullingSystem_BuildDeterministicBatchCommands;

using BuildLightmapPartitions = ::MA::Flora::CullingSystem_BuildLightmapPartitions;

using ComputeOutputOffsetsAndCounts = ::MA::Flora::CullingSystem_ComputeOutputOffsetsAndCounts;

using ComputeTemplateChunkOffsets = ::MA::Flora::CullingSystem_ComputeTemplateChunkOffsets;

using CountDrawCommandsPerTemplate = ::MA::Flora::CullingSystem_CountDrawCommandsPerTemplate;

using CullChunks = ::MA::Flora::CullingSystem_CullChunks;

using CullGrid = ::MA::Flora::CullingSystem_CullGrid;

using DispatchIndirectCullingPassData = ::MA::Flora::CullingSystem_DispatchIndirectCullingPassData;

using FilterChunksByAuthoringEntityId = ::MA::Flora::CullingSystem_FilterChunksByAuthoringEntityId;

using GatherIncludeExcludeBitsJob = ::MA::Flora::CullingSystem_GatherIncludeExcludeBitsJob;

using GatherVisibleAuthoringEntityIds = ::MA::Flora::CullingSystem_GatherVisibleAuthoringEntityIds;

using IncludeExcludeListFilter = ::MA::Flora::CullingSystem_IncludeExcludeListFilter;

using OcclusionOverlayPassData = ::MA::Flora::CullingSystem_OcclusionOverlayPassData;

using OcclusionTestOverlayPassData = ::MA::Flora::CullingSystem_OcclusionTestOverlayPassData;

using OcclusionTestOverlaySetupPassData = ::MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData;

using OrderVisibleChunksByTemplate = ::MA::Flora::CullingSystem_OrderVisibleChunksByTemplate;

using ReduceVisibleChunksByTemplate = ::MA::Flora::CullingSystem_ReduceVisibleChunksByTemplate;

using ReorderIncludedInstanceBits = ::MA::Flora::CullingSystem_ReorderIncludedInstanceBits;

using SetupFrustumCullingInputs = ::MA::Flora::CullingSystem_SetupFrustumCullingInputs;

using UpdateOccludersPassData = ::MA::Flora::CullingSystem_UpdateOccludersPassData;

using WriteCullingOutputPerTemplate = ::MA::Flora::CullingSystem_WriteCullingOutputPerTemplate;

using __c = ::MA::Flora::CullingSystem___c;

/// @brief Field CameraPerformBatchCullingMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CameraPerformBatchCullingMarker, put=setStaticF_CameraPerformBatchCullingMarker)) ::Unity::Profiling::ProfilerMarker  CameraPerformBatchCullingMarker;

/// @brief Field FilteringPerformBatchCullingMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FilteringPerformBatchCullingMarker, put=setStaticF_FilteringPerformBatchCullingMarker)) ::Unity::Profiling::ProfilerMarker  FilteringPerformBatchCullingMarker;

/// @brief Field LightPerformBatchCullingMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LightPerformBatchCullingMarker, put=setStaticF_LightPerformBatchCullingMarker)) ::Unity::Profiling::ProfilerMarker  LightPerformBatchCullingMarker;

/// @brief Field PickingPerformBatchCullingMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PickingPerformBatchCullingMarker, put=setStaticF_PickingPerformBatchCullingMarker)) ::Unity::Profiling::ProfilerMarker  PickingPerformBatchCullingMarker;

/// @brief Field SelectionOutlinePerformBatchCullingMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SelectionOutlinePerformBatchCullingMarker, put=setStaticF_SelectionOutlinePerformBatchCullingMarker)) ::Unity::Profiling::ProfilerMarker  SelectionOutlinePerformBatchCullingMarker;

/// @brief Field UnknownPerformBatchCullingMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UnknownPerformBatchCullingMarker, put=setStaticF_UnknownPerformBatchCullingMarker)) ::Unity::Profiling::ProfilerMarker  UnknownPerformBatchCullingMarker;

/// @brief Field m_AnimatedCrossFadeDatas, offset 0x50, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_AnimatedCrossFadeDatas, put=__cordl_internal_set_m_AnimatedCrossFadeDatas)) ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::AnimatedCrossFadeData>  m_AnimatedCrossFadeDatas;

/// @brief Field m_AnimatedCrossFadeViewMap, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AnimatedCrossFadeViewMap, put=__cordl_internal_set_m_AnimatedCrossFadeViewMap)) ::Unity::Collections::NativeHashMap_2<int32_t,int32_t>  m_AnimatedCrossFadeViewMap;

/// @brief Field m_CachedAmbientProbe, offset 0x70, size 0x6c 
 __declspec(property(get=__cordl_internal_get_m_CachedAmbientProbe, put=__cordl_internal_set_m_CachedAmbientProbe)) ::UnityEngine::Rendering::SphericalHarmonicsL2  m_CachedAmbientProbe;

/// @brief Field m_ContextCullingRequests, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ContextCullingRequests, put=__cordl_internal_set_m_ContextCullingRequests)) ::System::Collections::Generic::List_1<::MA::Flora::IndirectCullingRequest*>*  m_ContextCullingRequests;

/// @brief Field m_CullingGrid, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CullingGrid, put=__cordl_internal_set_m_CullingGrid)) ::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>  m_CullingGrid;

/// @brief Field m_CullingViewRequestPool, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CullingViewRequestPool, put=__cordl_internal_set_m_CullingViewRequestPool)) ::ArrayW<::MA::Flora::IndirectCullingRequest*>  m_CullingViewRequestPool;

/// @brief Field m_DrawManager, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DrawManager, put=__cordl_internal_set_m_DrawManager)) ::MA::Flora::NativeDataReference_1<::MA::Flora::DrawManager>  m_DrawManager;

/// @brief Field m_FrameIndex, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_FrameIndex, put=__cordl_internal_set_m_FrameIndex)) int32_t  m_FrameIndex;

/// @brief Field m_IndirectCullingPass, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_IndirectCullingPass, put=__cordl_internal_set_m_IndirectCullingPass)) ::MA::Flora::IndirectCullingPass*  m_IndirectCullingPass;

/// @brief Field m_InstanceBuffer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InstanceBuffer, put=__cordl_internal_set_m_InstanceBuffer)) ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceBuffer>  m_InstanceBuffer;

/// @brief Field m_InstanceManager, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InstanceManager, put=__cordl_internal_set_m_InstanceManager)) ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>  m_InstanceManager;

/// @brief Field m_NextCullingViewRequestID, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_NextCullingViewRequestID, put=__cordl_internal_set_m_NextCullingViewRequestID)) int32_t  m_NextCullingViewRequestID;

/// @brief Field m_OcclusionCuller, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OcclusionCuller, put=__cordl_internal_set_m_OcclusionCuller)) ::MA::Flora::OcclusionCuller*  m_OcclusionCuller;

/// @brief Field m_OriginalCrossFadeDuration, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_OriginalCrossFadeDuration, put=__cordl_internal_set_m_OriginalCrossFadeDuration)) float_t  m_OriginalCrossFadeDuration;

/// @brief Field m_QueuedCullingRequests, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_QueuedCullingRequests, put=__cordl_internal_set_m_QueuedCullingRequests)) ::System::Collections::Generic::Queue_1<::MA::Flora::IndirectCullingRequest*>*  m_QueuedCullingRequests;

/// @brief Field m_RenderPipeline, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RenderPipeline, put=__cordl_internal_set_m_RenderPipeline)) ::MA::Flora::FloraRenderPipeline*  m_RenderPipeline;

/// @brief Field m_RenderingCameraIsSceneView, offset 0x110, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_RenderingCameraIsSceneView, put=__cordl_internal_set_m_RenderingCameraIsSceneView)) bool  m_RenderingCameraIsSceneView;

/// @brief Field m_RenderingCameraSettings, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RenderingCameraSettings, put=__cordl_internal_set_m_RenderingCameraSettings)) ::UnityW<::MA::Flora::FloraAdditionalCameraSettings>  m_RenderingCameraSettings;

/// @brief Field m_RenderingCameraWantsGPUOcclusionCulling, offset 0x111, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_RenderingCameraWantsGPUOcclusionCulling, put=__cordl_internal_set_m_RenderingCameraWantsGPUOcclusionCulling)) bool  m_RenderingCameraWantsGPUOcclusionCulling;

/// @brief Field m_ScratchBufferPool, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ScratchBufferPool, put=__cordl_internal_set_m_ScratchBufferPool)) ::ArrayW<::MA::Flora::CullingScratchBuffers*>  m_ScratchBufferPool;

/// @brief Field m_StreamingSphereManager, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_StreamingSphereManager, put=__cordl_internal_set_m_StreamingSphereManager)) ::MA::Flora::NativeDataReference_1<::MA::Flora::StreamingSphereManager>  m_StreamingSphereManager;

/// @brief Field m_TemplateManager, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TemplateManager, put=__cordl_internal_set_m_TemplateManager)) ::MA::Flora::NativeDataReference_1<::MA::Flora::TemplateManager>  m_TemplateManager;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AllocateCullingRequest, addr 0x1814b2300, size 0x180, virtual false, abstract: false, final false
inline ::MA::Flora::IndirectCullingRequest* AllocateCullingRequest(::by_ref<::MA::Flora::IndirectCullingRequestParameters>  parameters) ;

/// @brief Method AllocateIndirectCullingOutput, addr 0x1814b2480, size 0xf0, virtual false, abstract: false, final false
static inline ::MA::Flora::IndirectCullingOutput AllocateIndirectCullingOutput(int32_t  drawTemplateCapacity, ::by_ref<::MA::Flora::CullingLayoutCounts>  counts, bool  allocateDebugBinCapacities) ;

/// @brief Method BeginCameraRendering, addr 0x1814b2570, size 0x170, virtual false, abstract: false, final false
inline void BeginCameraRendering(::UnityEngine::Camera*  camera) ;

/// @brief Method BeginContextRendering, addr 0x1814b26e0, size 0x180, virtual false, abstract: false, final false
inline void BeginContextRendering() ;

/// @brief Method BuildOcclusionDepth, addr 0x1814b2860, size 0x40, virtual false, abstract: false, final false
inline bool BuildOcclusionDepth(::UnityEngine::Rendering::CommandBuffer*  cmd, ::MA::Flora::OccluderParameters  input, ::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>  subviews) ;

/// @brief Method BuildOcclusionDepth, addr 0x1814b28a0, size 0x710, virtual false, abstract: false, final false
inline bool BuildOcclusionDepth(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::MA::Flora::OccluderParameters  input, ::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>  subviews) ;

/// @brief Method CleanupStaleAnimatedCrossFadeData, addr 0x1814b2fb0, size 0xd0, virtual false, abstract: false, final false
inline void CleanupStaleAnimatedCrossFadeData() ;

/// @brief Method CleanupStaleCullingRequests, addr 0x1814b3080, size 0xc0, virtual false, abstract: false, final false
inline void CleanupStaleCullingRequests() ;

/// @brief Method DispatchCullingRequest, addr 0x1814b3140, size 0xd50, virtual false, abstract: false, final false
inline void DispatchCullingRequest(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::VolumeStack*  volumeStack, ::MA::Flora::IndirectCullingRequest*  request, ::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>  settings, ::by_ref<::MA::Flora::InstanceOcclusionTestSubviewSettings>  occlusionTestSubviewSettings, ::MA::Flora::OccluderHandles  occluderHandles) ;

/// @brief Method DispatchCullingRequest, addr 0x1814b3e90, size 0x4f0, virtual false, abstract: false, final false
inline void DispatchCullingRequest(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::VolumeStack*  volumeStack, ::MA::Flora::IndirectCullingRequest*  request, ::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>  settings, ::System::Span_1<::UnityEngine::Rendering::SubviewOcclusionTest>  occlusionSubviews) ;

/// @brief Method DispatchQueuedCullingRequests, addr 0x1814b4460, size 0x180, virtual false, abstract: false, final false
inline void DispatchQueuedCullingRequests(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::VolumeStack*  volumeStack, ::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>  indirectCullingSettings, ::System::Span_1<::UnityEngine::Rendering::SubviewOcclusionTest>  occlusionSubviews) ;

/// @brief Method DispatchQueuedCullingRequests, addr 0x1814b4380, size 0xe0, virtual false, abstract: false, final false
inline void DispatchQueuedCullingRequests(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::VolumeStack*  volumeStack, ::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>  settings, ::System::Span_1<::UnityEngine::Rendering::SubviewOcclusionTest>  occlusionSubviews) ;

/// @brief Method Dispose, addr 0x1814b45e0, size 0x180, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method EndCameraRendering, addr 0x1814b4760, size 0x10, virtual false, abstract: false, final false
inline void EndCameraRendering(::UnityEngine::Camera*  camera) ;

/// @brief Method EndContextRendering, addr 0x1814b4770, size 0xb0, virtual false, abstract: false, final false
inline void EndContextRendering() ;

/// @brief Method GetPerformBatchCullingProfilerMarker, addr 0x1814b4820, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Profiling::ProfilerMarker GetPerformBatchCullingProfilerMarker(::UnityEngine::Rendering::BatchCullingViewType  viewType) ;

/// @brief Method GetPickingIncludeExcludeListFilterForCurrentCullingCallback, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::CullingSystem_IncludeExcludeListFilter GetPickingIncludeExcludeListFilterForCurrentCullingCallback(::by_ref<::UnityEngine::Rendering::BatchCullingContext>  cullingContext) ;

static inline ::MA::Flora::CullingSystem* New_ctor(::MA::Flora::CullingSystemSetup  cullingSystemSetup, ::UnityEngine::Rendering::BatchRendererGroup*  batchRendererGroup, ::MA::Flora::InstanceContext  instanceContext) ;

/// @brief Method OnBatchCullingComplete, addr 0x1814b4870, size 0x140, virtual false, abstract: false, final false
inline void OnBatchCullingComplete(int32_t  cullingRequestID) ;

/// @brief Method OnPerformBatchCulling, addr 0x1814b49b0, size 0x3290, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle OnPerformBatchCulling(::UnityEngine::Rendering::BatchRendererGroup*  rendererGroup, ::UnityEngine::Rendering::BatchCullingContext  cc, ::UnityEngine::Rendering::BatchCullingOutput  cullingOutput, ::System::IntPtr  userContext) ;

/// @brief Method PrepareOcclusionForCulling, addr 0x1814b7e20, size 0x50, virtual false, abstract: false, final false
inline void PrepareOcclusionForCulling(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::MA::Flora::OcclusionContext>  occlusionContext, ::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>  settings, ::by_ref<::MA::Flora::InstanceOcclusionTestSubviewSettings>  testSubviewSettings, ::System::Span_1<::UnityW<::UnityEngine::ComputeShader>>  cs) ;

/// @brief Method PrepareOcclusionForCullingDispatch, addr 0x1814b7c40, size 0x1e0, virtual false, abstract: false, final false
inline ::MA::Flora::OccluderHandles PrepareOcclusionForCullingDispatch(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::EntityId  viewId, ::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>  settings, ::by_ref<::MA::Flora::InstanceOcclusionTestSubviewSettings>  occlusionTestSubviewSettings, ::MA::Flora::OccluderHandles  occluderHandles) ;

/// @brief Method RenderOcclusionDebugDepthOverlay, addr 0x1814b7e70, size 0x30, virtual false, abstract: false, final false
inline void RenderOcclusionDebugDepthOverlay(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::EntityId  viewId, ::UnityEngine::Vector2  positionScreen, float_t  maxHeight) ;

/// @brief Method RenderOcclusionDebugDepthOverlay, addr 0x1814b7ea0, size 0x4e0, virtual false, abstract: false, final false
inline void RenderOcclusionDebugDepthOverlay(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::EntityId  viewId, ::UnityEngine::Vector2  positionScreen, float_t  maxHeight, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  colorBuffer) ;

/// @brief Method RenderOcclusionDebugTestOverlay, addr 0x1814b8380, size 0x30, virtual false, abstract: false, final false
inline void RenderOcclusionDebugTestOverlay(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::EntityId  viewId) ;

/// @brief Method RenderOcclusionDebugTestOverlay, addr 0x1814b83b0, size 0x7a0, virtual false, abstract: false, final false
inline void RenderOcclusionDebugTestOverlay(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::EntityId  viewId, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  colorBuffer) ;

/// @brief Method UpdateAmbientLighting, addr 0x1814b8b50, size 0x430, virtual false, abstract: false, final false
inline void UpdateAmbientLighting(bool  forceUpdate) ;

/// @brief Method UpdateOcclusionSilhouettePlanes, addr 0x1814b8f80, size 0x40, virtual false, abstract: false, final false
inline void UpdateOcclusionSilhouettePlanes(::UnityEngine::EntityId  viewId, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  planes) ;

/// @brief Method UpdateViewAnimatedCrossFadeData, addr 0x1814b8fc0, size 0x1d0, virtual false, abstract: false, final false
inline ::MA::Flora::AnimatedCrossFadeData UpdateViewAnimatedCrossFadeData(::MA::Flora::IndirectCullingRequest*  request) ;

constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::AnimatedCrossFadeData> const& __cordl_internal_get_m_AnimatedCrossFadeDatas() const;

constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::AnimatedCrossFadeData>& __cordl_internal_get_m_AnimatedCrossFadeDatas() ;

constexpr ::Unity::Collections::NativeHashMap_2<int32_t,int32_t> const& __cordl_internal_get_m_AnimatedCrossFadeViewMap() const;

constexpr ::Unity::Collections::NativeHashMap_2<int32_t,int32_t>& __cordl_internal_get_m_AnimatedCrossFadeViewMap() ;

constexpr ::UnityEngine::Rendering::SphericalHarmonicsL2 const& __cordl_internal_get_m_CachedAmbientProbe() const;

constexpr ::UnityEngine::Rendering::SphericalHarmonicsL2& __cordl_internal_get_m_CachedAmbientProbe() ;

constexpr ::System::Collections::Generic::List_1<::MA::Flora::IndirectCullingRequest*>* const& __cordl_internal_get_m_ContextCullingRequests() const;

constexpr ::System::Collections::Generic::List_1<::MA::Flora::IndirectCullingRequest*>*& __cordl_internal_get_m_ContextCullingRequests() ;

constexpr ::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid> const& __cordl_internal_get_m_CullingGrid() const;

constexpr ::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>& __cordl_internal_get_m_CullingGrid() ;

constexpr ::ArrayW<::MA::Flora::IndirectCullingRequest*> const& __cordl_internal_get_m_CullingViewRequestPool() const;

constexpr ::ArrayW<::MA::Flora::IndirectCullingRequest*>& __cordl_internal_get_m_CullingViewRequestPool() ;

constexpr ::MA::Flora::NativeDataReference_1<::MA::Flora::DrawManager> const& __cordl_internal_get_m_DrawManager() const;

constexpr ::MA::Flora::NativeDataReference_1<::MA::Flora::DrawManager>& __cordl_internal_get_m_DrawManager() ;

constexpr int32_t const& __cordl_internal_get_m_FrameIndex() const;

constexpr int32_t& __cordl_internal_get_m_FrameIndex() ;

constexpr ::MA::Flora::IndirectCullingPass* const& __cordl_internal_get_m_IndirectCullingPass() const;

constexpr ::MA::Flora::IndirectCullingPass*& __cordl_internal_get_m_IndirectCullingPass() ;

constexpr ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceBuffer> const& __cordl_internal_get_m_InstanceBuffer() const;

constexpr ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceBuffer>& __cordl_internal_get_m_InstanceBuffer() ;

constexpr ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager> const& __cordl_internal_get_m_InstanceManager() const;

constexpr ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>& __cordl_internal_get_m_InstanceManager() ;

constexpr int32_t const& __cordl_internal_get_m_NextCullingViewRequestID() const;

constexpr int32_t& __cordl_internal_get_m_NextCullingViewRequestID() ;

constexpr ::MA::Flora::OcclusionCuller* const& __cordl_internal_get_m_OcclusionCuller() const;

constexpr ::MA::Flora::OcclusionCuller*& __cordl_internal_get_m_OcclusionCuller() ;

constexpr float_t const& __cordl_internal_get_m_OriginalCrossFadeDuration() const;

constexpr float_t& __cordl_internal_get_m_OriginalCrossFadeDuration() ;

constexpr ::System::Collections::Generic::Queue_1<::MA::Flora::IndirectCullingRequest*>* const& __cordl_internal_get_m_QueuedCullingRequests() const;

constexpr ::System::Collections::Generic::Queue_1<::MA::Flora::IndirectCullingRequest*>*& __cordl_internal_get_m_QueuedCullingRequests() ;

constexpr ::MA::Flora::FloraRenderPipeline* const& __cordl_internal_get_m_RenderPipeline() const;

constexpr ::MA::Flora::FloraRenderPipeline*& __cordl_internal_get_m_RenderPipeline() ;

constexpr bool const& __cordl_internal_get_m_RenderingCameraIsSceneView() const;

constexpr bool& __cordl_internal_get_m_RenderingCameraIsSceneView() ;

constexpr ::UnityW<::MA::Flora::FloraAdditionalCameraSettings> const& __cordl_internal_get_m_RenderingCameraSettings() const;

constexpr ::UnityW<::MA::Flora::FloraAdditionalCameraSettings>& __cordl_internal_get_m_RenderingCameraSettings() ;

constexpr bool const& __cordl_internal_get_m_RenderingCameraWantsGPUOcclusionCulling() const;

constexpr bool& __cordl_internal_get_m_RenderingCameraWantsGPUOcclusionCulling() ;

constexpr ::ArrayW<::MA::Flora::CullingScratchBuffers*> const& __cordl_internal_get_m_ScratchBufferPool() const;

constexpr ::ArrayW<::MA::Flora::CullingScratchBuffers*>& __cordl_internal_get_m_ScratchBufferPool() ;

constexpr ::MA::Flora::NativeDataReference_1<::MA::Flora::StreamingSphereManager> const& __cordl_internal_get_m_StreamingSphereManager() const;

constexpr ::MA::Flora::NativeDataReference_1<::MA::Flora::StreamingSphereManager>& __cordl_internal_get_m_StreamingSphereManager() ;

constexpr ::MA::Flora::NativeDataReference_1<::MA::Flora::TemplateManager> const& __cordl_internal_get_m_TemplateManager() const;

constexpr ::MA::Flora::NativeDataReference_1<::MA::Flora::TemplateManager>& __cordl_internal_get_m_TemplateManager() ;

constexpr void __cordl_internal_set_m_AnimatedCrossFadeDatas(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::AnimatedCrossFadeData>  value) ;

constexpr void __cordl_internal_set_m_AnimatedCrossFadeViewMap(::Unity::Collections::NativeHashMap_2<int32_t,int32_t>  value) ;

constexpr void __cordl_internal_set_m_CachedAmbientProbe(::UnityEngine::Rendering::SphericalHarmonicsL2  value) ;

constexpr void __cordl_internal_set_m_ContextCullingRequests(::System::Collections::Generic::List_1<::MA::Flora::IndirectCullingRequest*>*  value) ;

constexpr void __cordl_internal_set_m_CullingGrid(::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>  value) ;

constexpr void __cordl_internal_set_m_CullingViewRequestPool(::ArrayW<::MA::Flora::IndirectCullingRequest*>  value) ;

constexpr void __cordl_internal_set_m_DrawManager(::MA::Flora::NativeDataReference_1<::MA::Flora::DrawManager>  value) ;

constexpr void __cordl_internal_set_m_FrameIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_IndirectCullingPass(::MA::Flora::IndirectCullingPass*  value) ;

constexpr void __cordl_internal_set_m_InstanceBuffer(::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceBuffer>  value) ;

constexpr void __cordl_internal_set_m_InstanceManager(::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>  value) ;

constexpr void __cordl_internal_set_m_NextCullingViewRequestID(int32_t  value) ;

constexpr void __cordl_internal_set_m_OcclusionCuller(::MA::Flora::OcclusionCuller*  value) ;

constexpr void __cordl_internal_set_m_OriginalCrossFadeDuration(float_t  value) ;

constexpr void __cordl_internal_set_m_QueuedCullingRequests(::System::Collections::Generic::Queue_1<::MA::Flora::IndirectCullingRequest*>*  value) ;

constexpr void __cordl_internal_set_m_RenderPipeline(::MA::Flora::FloraRenderPipeline*  value) ;

constexpr void __cordl_internal_set_m_RenderingCameraIsSceneView(bool  value) ;

constexpr void __cordl_internal_set_m_RenderingCameraSettings(::UnityW<::MA::Flora::FloraAdditionalCameraSettings>  value) ;

constexpr void __cordl_internal_set_m_RenderingCameraWantsGPUOcclusionCulling(bool  value) ;

constexpr void __cordl_internal_set_m_ScratchBufferPool(::ArrayW<::MA::Flora::CullingScratchBuffers*>  value) ;

constexpr void __cordl_internal_set_m_StreamingSphereManager(::MA::Flora::NativeDataReference_1<::MA::Flora::StreamingSphereManager>  value) ;

constexpr void __cordl_internal_set_m_TemplateManager(::MA::Flora::NativeDataReference_1<::MA::Flora::TemplateManager>  value) ;

/// @brief Method .ctor, addr 0x1814b92c0, size 0x300, virtual false, abstract: false, final false
inline void _ctor(::MA::Flora::CullingSystemSetup  cullingSystemSetup, ::UnityEngine::Rendering::BatchRendererGroup*  batchRendererGroup, ::MA::Flora::InstanceContext  instanceContext) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_CameraPerformBatchCullingMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_FilteringPerformBatchCullingMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_LightPerformBatchCullingMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_PickingPerformBatchCullingMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_SelectionOutlinePerformBatchCullingMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_UnknownPerformBatchCullingMarker() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_CameraPerformBatchCullingMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_FilteringPerformBatchCullingMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_LightPerformBatchCullingMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_PickingPerformBatchCullingMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_SelectionOutlinePerformBatchCullingMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_UnknownPerformBatchCullingMarker(::Unity::Profiling::ProfilerMarker  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CullingSystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CullingSystem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CullingSystem(CullingSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CullingSystem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CullingSystem(CullingSystem const& ) = delete;

/// @brief Field CullingRequestStaleThreshold offset 0xffffffff size 0x4
static constexpr int32_t  CullingRequestStaleThreshold{static_cast<int32_t>(0x2)};

/// @brief Field StaleAnimatedCrossFadeFrameThreshold offset 0xffffffff size 0x4
static constexpr int32_t  StaleAnimatedCrossFadeFrameThreshold{static_cast<int32_t>(0x8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13159};

/// @brief Field m_InstanceManager, offset: 0x10, size: 0x8, def value: None
 ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>  ___m_InstanceManager;

/// @brief Field m_CullingGrid, offset: 0x18, size: 0x8, def value: None
 ::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>  ___m_CullingGrid;

/// @brief Field m_DrawManager, offset: 0x20, size: 0x8, def value: None
 ::MA::Flora::NativeDataReference_1<::MA::Flora::DrawManager>  ___m_DrawManager;

/// @brief Field m_TemplateManager, offset: 0x28, size: 0x8, def value: None
 ::MA::Flora::NativeDataReference_1<::MA::Flora::TemplateManager>  ___m_TemplateManager;

/// @brief Field m_InstanceBuffer, offset: 0x30, size: 0x8, def value: None
 ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceBuffer>  ___m_InstanceBuffer;

/// @brief Field m_StreamingSphereManager, offset: 0x38, size: 0x8, def value: None
 ::MA::Flora::NativeDataReference_1<::MA::Flora::StreamingSphereManager>  ___m_StreamingSphereManager;

/// @brief Field m_OriginalCrossFadeDuration, offset: 0x40, size: 0x4, def value: None
 float_t  ___m_OriginalCrossFadeDuration;

/// @brief Field m_AnimatedCrossFadeViewMap, offset: 0x48, size: 0x8, def value: None
 ::Unity::Collections::NativeHashMap_2<int32_t,int32_t>  ___m_AnimatedCrossFadeViewMap;

/// @brief Field m_AnimatedCrossFadeDatas, offset: 0x50, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::AnimatedCrossFadeData>  ___m_AnimatedCrossFadeDatas;

/// @brief Field m_RenderPipeline, offset: 0x68, size: 0x8, def value: None
 ::MA::Flora::FloraRenderPipeline*  ___m_RenderPipeline;

/// @brief Field m_CachedAmbientProbe, offset: 0x70, size: 0x6c, def value: None
 ::UnityEngine::Rendering::SphericalHarmonicsL2  ___m_CachedAmbientProbe;

/// @brief Field m_FrameIndex, offset: 0xdc, size: 0x4, def value: None
 int32_t  ___m_FrameIndex;

/// @brief Field m_NextCullingViewRequestID, offset: 0xe0, size: 0x4, def value: None
 int32_t  ___m_NextCullingViewRequestID;

/// @brief Field m_CullingViewRequestPool, offset: 0xe8, size: 0x8, def value: None
 ::ArrayW<::MA::Flora::IndirectCullingRequest*>  ___m_CullingViewRequestPool;

/// @brief Field m_ScratchBufferPool, offset: 0xf0, size: 0x8, def value: None
 ::ArrayW<::MA::Flora::CullingScratchBuffers*>  ___m_ScratchBufferPool;

/// @brief Field m_QueuedCullingRequests, offset: 0xf8, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::MA::Flora::IndirectCullingRequest*>*  ___m_QueuedCullingRequests;

/// @brief Field m_ContextCullingRequests, offset: 0x100, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::MA::Flora::IndirectCullingRequest*>*  ___m_ContextCullingRequests;

/// @brief Field m_RenderingCameraSettings, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::MA::Flora::FloraAdditionalCameraSettings>  ___m_RenderingCameraSettings;

/// @brief Field m_RenderingCameraIsSceneView, offset: 0x110, size: 0x1, def value: None
 bool  ___m_RenderingCameraIsSceneView;

/// @brief Field m_RenderingCameraWantsGPUOcclusionCulling, offset: 0x111, size: 0x1, def value: None
 bool  ___m_RenderingCameraWantsGPUOcclusionCulling;

/// @brief Field m_OcclusionCuller, offset: 0x118, size: 0x8, def value: None
 ::MA::Flora::OcclusionCuller*  ___m_OcclusionCuller;

/// @brief Field m_IndirectCullingPass, offset: 0x120, size: 0x8, def value: None
 ::MA::Flora::IndirectCullingPass*  ___m_IndirectCullingPass;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingSystem, ___m_InstanceManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem, ___m_CullingGrid) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem, ___m_DrawManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem, ___m_TemplateManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem, ___m_InstanceBuffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem, ___m_StreamingSphereManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem, ___m_OriginalCrossFadeDuration) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem, ___m_AnimatedCrossFadeViewMap) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem, ___m_AnimatedCrossFadeDatas) == 0x50, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem, ___m_RenderPipeline) == 0x68, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem, ___m_CachedAmbientProbe) == 0x70, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem, ___m_FrameIndex) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem, ___m_NextCullingViewRequestID) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem, ___m_CullingViewRequestPool) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem, ___m_ScratchBufferPool) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem, ___m_QueuedCullingRequests) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem, ___m_ContextCullingRequests) == 0x100, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem, ___m_RenderingCameraSettings) == 0x108, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem, ___m_RenderingCameraIsSceneView) == 0x110, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem, ___m_RenderingCameraWantsGPUOcclusionCulling) == 0x111, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem, ___m_OcclusionCuller) == 0x118, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystem, ___m_IndirectCullingPass) == 0x120, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingSystem) == 0x128, "Size mismatch!");

} // namespace end def MA::Flora
