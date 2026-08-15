#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUResidentDrawer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeHashSet_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUResidentDrawerSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__SmallEntityIdArray_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUResidentDrawer)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeHashSet_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeList_1;
}
namespace Unity::Jobs {
class IJobParallelForBatch;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering {
class DebugDisplayGPUResidentDrawer;
}
namespace UnityEngine::Rendering {
class DebugRendererBatcherStats;
}
namespace UnityEngine::Rendering {
struct GPUDrivenPackedMaterialData;
}
namespace UnityEngine::Rendering {
class GPUDrivenProcessor;
}
namespace UnityEngine::Rendering {
class GPUResidentBatcher;
}
namespace UnityEngine::Rendering {
struct GPUResidentDrawerSettings;
}
namespace UnityEngine::Rendering {
struct GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawer_Strings;
}
namespace UnityEngine::Rendering {
struct InstanceHandle;
}
namespace UnityEngine::Rendering {
struct OccluderParameters;
}
namespace UnityEngine::Rendering {
struct OccluderSubviewUpdate;
}
namespace UnityEngine::Rendering {
struct OcclusionCullingSettings;
}
namespace UnityEngine::Rendering {
struct RenderRequestBatcherContext;
}
namespace UnityEngine::Rendering {
class RenderersBatchersContext;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine::Rendering {
struct SubviewOcclusionTest;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct EntityId;
}
namespace UnityEngine {
struct LogType;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class ObjectDispatcher;
}
namespace UnityEngine {
struct TypeDispatchData;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class GPUResidentDrawer;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawer_Strings;
}
namespace UnityEngine::Rendering {
struct GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::GPUResidentDrawer*);
MARK_REF_T(::UnityEngine::Rendering::GPUResidentDrawer_Strings*);
MARK_VAL_T(::UnityEngine::Rendering::GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUResidentDrawer*, "UnityEngine.Rendering", "GPUResidentDrawer");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUResidentDrawer_Strings*, "UnityEngine.Rendering", "GPUResidentDrawer/Strings");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob, "UnityEngine.Rendering", "GPUResidentDrawer/FindRenderersFromMaterialOrMeshJob");
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUResidentDrawer/Strings
class CORDL_TYPE GPUResidentDrawer_Strings : public ::System::Object {
public:
// Declarations
/// @brief Field allowInEditModeDisabled, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_allowInEditModeDisabled, put=setStaticF_allowInEditModeDisabled)) ::StringW  allowInEditModeDisabled;

/// @brief Field batchRendererGroupShaderStrippingModeInvalid, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_batchRendererGroupShaderStrippingModeInvalid, put=setStaticF_batchRendererGroupShaderStrippingModeInvalid)) ::StringW  batchRendererGroupShaderStrippingModeInvalid;

/// @brief Field drawerModeDisabled, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_drawerModeDisabled, put=setStaticF_drawerModeDisabled)) ::StringW  drawerModeDisabled;

/// @brief Field kernelNotPresent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kernelNotPresent, put=setStaticF_kernelNotPresent)) ::StringW  kernelNotPresent;

/// @brief Field notGPUResidentRenderPipeline, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_notGPUResidentRenderPipeline, put=setStaticF_notGPUResidentRenderPipeline)) ::StringW  notGPUResidentRenderPipeline;

/// @brief Field rawBufferNotSupportedByPlatform, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_rawBufferNotSupportedByPlatform, put=setStaticF_rawBufferNotSupportedByPlatform)) ::StringW  rawBufferNotSupportedByPlatform;

/// @brief Field visionOSNotSupported, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_visionOSNotSupported, put=setStaticF_visionOSNotSupported)) ::StringW  visionOSNotSupported;

static inline ::StringW getStaticF_allowInEditModeDisabled() ;

static inline ::StringW getStaticF_batchRendererGroupShaderStrippingModeInvalid() ;

static inline ::StringW getStaticF_drawerModeDisabled() ;

static inline ::StringW getStaticF_kernelNotPresent() ;

static inline ::StringW getStaticF_notGPUResidentRenderPipeline() ;

static inline ::StringW getStaticF_rawBufferNotSupportedByPlatform() ;

static inline ::StringW getStaticF_visionOSNotSupported() ;

static inline void setStaticF_allowInEditModeDisabled(::StringW  value) ;

static inline void setStaticF_batchRendererGroupShaderStrippingModeInvalid(::StringW  value) ;

static inline void setStaticF_drawerModeDisabled(::StringW  value) ;

static inline void setStaticF_kernelNotPresent(::StringW  value) ;

static inline void setStaticF_notGPUResidentRenderPipeline(::StringW  value) ;

static inline void setStaticF_rawBufferNotSupportedByPlatform(::StringW  value) ;

static inline void setStaticF_visionOSNotSupported(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GPUResidentDrawer_Strings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawer_Strings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GPUResidentDrawer_Strings(GPUResidentDrawer_Strings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawer_Strings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GPUResidentDrawer_Strings(GPUResidentDrawer_Strings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17680};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::GPUResidentDrawer_Strings) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies Unity.Collections.NativeArray`1::ReadOnly<T>, Unity.Collections.NativeHashSet`1::ReadOnly<T>, Unity.Collections.NativeList`1::ParallelWriter<T>, UnityEngine.EntityId, UnityEngine.Rendering.SmallEntityIdArray
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUResidentDrawer/FindRenderersFromMaterialOrMeshJob
struct CORDL_TYPE GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
constexpr operator  ::Unity::Jobs::IJobParallelForBatch*() ;

/// @brief Method Execute, addr 0x18208e190, size 0x260, virtual true, abstract: false, final true
inline void Execute(int32_t  startIndex, int32_t  count) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
constexpr ::Unity::Jobs::IJobParallelForBatch* i___Unity__Jobs__IJobParallelForBatch() ;

// Ctor Parameters []
// @brief default ctor
constexpr GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob() ;

// Ctor Parameters [CppParam { name: "materialIDs", ty: "::Unity::Collections::NativeHashSet_1_ReadOnly<::UnityEngine::EntityId>", modifiers: "", def_value: None }, CppParam { name: "materialIDArrays", ty: "::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallEntityIdArray>", modifiers: "", def_value: None }, CppParam { name: "meshIDs", ty: "::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>", modifiers: "", def_value: None }, CppParam { name: "meshIDArray", ty: "::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>", modifiers: "", def_value: None }, CppParam { name: "rendererGroupIDs", ty: "::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>", modifiers: "", def_value: None }, CppParam { name: "sortedExcludeRendererIDs", ty: "::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>", modifiers: "", def_value: None }, CppParam { name: "selectedRenderGroupsForMaterials", ty: "::Unity::Collections::NativeList_1_ParallelWriter<::UnityEngine::EntityId>", modifiers: "", def_value: None }, CppParam { name: "selectedRenderGroupsForMeshes", ty: "::Unity::Collections::NativeList_1_ParallelWriter<::UnityEngine::EntityId>", modifiers: "", def_value: None }]
constexpr GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob(::Unity::Collections::NativeHashSet_1_ReadOnly<::UnityEngine::EntityId>  materialIDs, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallEntityIdArray>  materialIDArrays, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>  meshIDs, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>  meshIDArray, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>  rendererGroupIDs, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>  sortedExcludeRendererIDs, ::Unity::Collections::NativeList_1_ParallelWriter<::UnityEngine::EntityId>  selectedRenderGroupsForMaterials, ::Unity::Collections::NativeList_1_ParallelWriter<::UnityEngine::EntityId>  selectedRenderGroupsForMeshes) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17681};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field k_BatchSize offset 0xffffffff size 0x4
static constexpr int32_t  k_BatchSize{static_cast<int32_t>(0x80)};

/// @brief Field materialIDs, offset: 0x0, size: 0x8, def value: None
 ::Unity::Collections::NativeHashSet_1_ReadOnly<::UnityEngine::EntityId>  materialIDs;

/// @brief Field materialIDArrays, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallEntityIdArray>  materialIDArrays;

/// @brief Field meshIDs, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>  meshIDs;

/// @brief Field meshIDArray, offset: 0x28, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>  meshIDArray;

/// @brief Field rendererGroupIDs, offset: 0x38, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>  rendererGroupIDs;

/// @brief Field sortedExcludeRendererIDs, offset: 0x48, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>  sortedExcludeRendererIDs;

/// @brief Field selectedRenderGroupsForMaterials, offset: 0x58, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1_ParallelWriter<::UnityEngine::EntityId>  selectedRenderGroupsForMaterials;

/// @brief Field selectedRenderGroupsForMeshes, offset: 0x60, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1_ParallelWriter<::UnityEngine::EntityId>  selectedRenderGroupsForMeshes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob, materialIDs) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob, materialIDArrays) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob, meshIDs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob, meshIDArray) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob, rendererGroupIDs) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob, sortedExcludeRendererIDs) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob, selectedRenderGroupsForMaterials) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob, selectedRenderGroupsForMeshes) == 0x60, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob) == 0x68, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.IntPtr, System.Object, UnityEngine.Rendering.GPUResidentDrawerSettings
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUResidentDrawer
class CORDL_TYPE GPUResidentDrawer : public ::System::Object {
public:
// Declarations
using FindRenderersFromMaterialOrMeshJob = ::UnityEngine::Rendering::GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob;

using Strings = ::UnityEngine::Rendering::GPUResidentDrawer_Strings;

/// @brief Field <ForceOcclusion>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__ForceOcclusion_k__BackingField, put=setStaticF__ForceOcclusion_k__BackingField)) bool  _ForceOcclusion_k__BackingField;

/// @brief Field <MaintainContext>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__MaintainContext_k__BackingField, put=setStaticF__MaintainContext_k__BackingField)) bool  _MaintainContext_k__BackingField;

 __declspec(property(get=get_batcher)) ::UnityEngine::Rendering::GPUResidentBatcher*  batcher;

/// @brief Field m_Batcher, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Batcher, put=__cordl_internal_set_m_Batcher)) ::UnityEngine::Rendering::GPUResidentBatcher*  m_Batcher;

/// @brief Field m_BatchersContext, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BatchersContext, put=__cordl_internal_set_m_BatchersContext)) ::UnityEngine::Rendering::RenderersBatchersContext*  m_BatchersContext;

/// @brief Field m_ContextIntPtr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ContextIntPtr, put=__cordl_internal_set_m_ContextIntPtr)) ::System::IntPtr  m_ContextIntPtr;

/// @brief Field m_Dispatcher, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Dispatcher, put=__cordl_internal_set_m_Dispatcher)) ::UnityEngine::ObjectDispatcher*  m_Dispatcher;

/// @brief Field m_GPUDrivenProcessor, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GPUDrivenProcessor, put=__cordl_internal_set_m_GPUDrivenProcessor)) ::UnityEngine::Rendering::GPUDrivenProcessor*  m_GPUDrivenProcessor;

/// @brief Field m_Settings, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_Settings, put=__cordl_internal_set_m_Settings)) ::UnityEngine::Rendering::GPUResidentDrawerSettings  m_Settings;

/// @brief Field s_Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Instance, put=setStaticF_s_Instance)) ::UnityEngine::Rendering::GPUResidentDrawer*  s_Instance;

 __declspec(property(get=get_settings)) ::UnityEngine::Rendering::GPUResidentDrawerSettings  settings;

/// @brief Method AppendNewInstance, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::InstanceHandle AppendNewInstance(int32_t  rendererGroupID, ::by_ref<::UnityEngine::Matrix4x4>  instanceTransform) ;

/// @brief Method ClassifyMaterials, addr 0x182090310, size 0x150, virtual false, abstract: false, final false
inline void ClassifyMaterials(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  materials, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>  unsupportedMaterials, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>  supportedMaterials, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  supportedPackedMaterialDatas, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method CleanUp, addr 0x182090460, size 0x60, virtual false, abstract: false, final false
static inline void CleanUp() ;

/// @brief Method Dispose, addr 0x1820904c0, size 0x410, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method FindRenderersFromMaterialsOrMeshes, addr 0x1820908d0, size 0x250, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>,::Unity::Collections::NativeList_1<::UnityEngine::EntityId>> FindRenderersFromMaterialsOrMeshes(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  sortedExcludeRenderers, ::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>  materials, ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  meshes, ::Unity::Collections::Allocator  rendererListAllocator) ;

/// @brief Method FindUnsupportedRenderers, addr 0x182090b20, size 0x1c0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeList_1<::UnityEngine::EntityId> FindUnsupportedRenderers(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  unsupportedMaterials) ;

/// @brief Method FreeInstances, addr 0x182090ce0, size 0x60, virtual false, abstract: false, final false
inline void FreeInstances(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances) ;

/// @brief Method FreeRendererGroupInstances, addr 0x182090d40, size 0x90, virtual false, abstract: false, final false
inline void FreeRendererGroupInstances(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  rendererGroupIDs, ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  unsupportedRendererGroupIDs) ;

/// @brief Method GetDebugStats, addr 0x182090dd0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::DebugRendererBatcherStats* GetDebugStats() ;

/// @brief Method GetGlobalSettingsFromRPAsset, addr 0x182090e00, size 0x120, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::GPUResidentDrawerSettings GetGlobalSettingsFromRPAsset() ;

/// @brief Method GetMaterialsWithChangedPackedMaterial, addr 0x182090f20, size 0xc0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId> GetMaterialsWithChangedPackedMaterial(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  materials, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>  packedMaterialDatas, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method InsertIntoPlayerLoop, addr 0x182090fe0, size 0x330, virtual false, abstract: false, final false
inline void InsertIntoPlayerLoop() ;

/// @brief Method InstanceOcclusionTest, addr 0x182091310, size 0xa0, virtual false, abstract: false, final false
static inline void InstanceOcclusionTest(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>  settings, ::System::ReadOnlySpan_1<::UnityEngine::Rendering::SubviewOcclusionTest>  subviewOcclusionTests) ;

/// @brief Method IsEnabled, addr 0x1820913b0, size 0x20, virtual false, abstract: false, final false
static inline bool IsEnabled() ;

/// @brief Method IsForcedOnViaCommandLine, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
static inline bool IsForcedOnViaCommandLine() ;

/// @brief Method IsGPUResidentDrawerSupportedBySRP, addr 0x1820913d0, size 0x160, virtual false, abstract: false, final false
static inline bool IsGPUResidentDrawerSupportedBySRP(::UnityEngine::Rendering::GPUResidentDrawerSettings  settings, ::by_ref<::StringW>  message, ::by_ref<::UnityEngine::LogType>  severity) ;

/// @brief Method IsInstanceOcclusionCullingEnabled, addr 0x182091530, size 0x50, virtual false, abstract: false, final false
static inline bool IsInstanceOcclusionCullingEnabled() ;

/// @brief Method IsOcclusionForcedOnViaCommandLine, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
static inline bool IsOcclusionForcedOnViaCommandLine() ;

/// @brief Method IsProjectSupported, addr 0x182091670, size 0xd0, virtual false, abstract: false, final false
static inline bool IsProjectSupported() ;

/// @brief Method IsProjectSupported, addr 0x182091580, size 0xf0, virtual false, abstract: false, final false
static inline bool IsProjectSupported(::by_ref<::StringW>  message, ::by_ref<::UnityEngine::LogType>  severity) ;

/// @brief Method LogMessage, addr 0x182091740, size 0x30, virtual false, abstract: false, final false
static inline void LogMessage(::StringW  message, ::UnityEngine::LogType  severity) ;

static inline ::UnityEngine::Rendering::GPUResidentDrawer* New_ctor(::UnityEngine::Rendering::GPUResidentDrawerSettings  settings, int32_t  maxInstanceCount, int32_t  maxTreeInstanceCount) ;

/// @brief Method OnBeginCameraRendering, addr 0x182091770, size 0x20, virtual false, abstract: false, final false
inline void OnBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera) ;

/// @brief Method OnBeginContextRendering, addr 0x182091790, size 0x60, virtual false, abstract: false, final false
inline void OnBeginContextRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*  cameras) ;

/// @brief Method OnEndCameraRendering, addr 0x182091770, size 0x20, virtual false, abstract: false, final false
inline void OnEndCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera) ;

/// @brief Method OnEndContextRendering, addr 0x1820917f0, size 0x70, virtual false, abstract: false, final false
inline void OnEndContextRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*  cameras) ;

/// @brief Method OnSceneLoaded, addr 0x182091860, size 0x20, virtual false, abstract: false, final false
inline void OnSceneLoaded(::UnityEngine::SceneManagement::Scene  scene, ::UnityEngine::SceneManagement::LoadSceneMode  mode) ;

/// @brief Method OnSetupAmbientProbe, addr 0x182091880, size 0x30, virtual false, abstract: false, final false
static inline void OnSetupAmbientProbe() ;

/// @brief Method PostCullBeginCameraRendering, addr 0x180631430, size 0xa670, virtual false, abstract: false, final false
static inline void PostCullBeginCameraRendering(::UnityEngine::Rendering::RenderRequestBatcherContext  context) ;

/// @brief Method PostPostLateUpdate, addr 0x1820918d0, size 0xa40, virtual false, abstract: false, final false
inline void PostPostLateUpdate() ;

/// @brief Method PostPostLateUpdateStatic, addr 0x1820918b0, size 0x20, virtual false, abstract: false, final false
static inline void PostPostLateUpdateStatic() ;

/// @brief Method ProcessCameras, addr 0x182092310, size 0x50, virtual false, abstract: false, final false
inline void ProcessCameras(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  changedIDs, ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  destroyedIDs) ;

/// @brief Method ProcessLODGroups, addr 0x182092360, size 0x80, virtual false, abstract: false, final false
inline void ProcessLODGroups(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  changedID, ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  destroyed, ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  transformedID) ;

/// @brief Method ProcessMaterials, addr 0x1820923e0, size 0x70, virtual false, abstract: false, final false
inline void ProcessMaterials(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  destroyedID, ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  unsupportedMaterials) ;

/// @brief Method ProcessMeshes, addr 0x182092450, size 0x100, virtual false, abstract: false, final false
inline void ProcessMeshes(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  destroyedID) ;

/// @brief Method ProcessRendererMaterialAndMeshChanges, addr 0x182092550, size 0x710, virtual false, abstract: false, final false
inline void ProcessRendererMaterialAndMeshChanges(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  excludedRenderers, ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  changedMaterials, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>  changedPackedMaterialDatas, ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  changedMeshes) ;

/// @brief Method ProcessRenderers, addr 0x182092c60, size 0x340, virtual false, abstract: false, final false
inline void ProcessRenderers(::UnityEngine::TypeDispatchData  rendererChanges, ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  unsupportedRenderers) ;

/// @brief Method Recreate, addr 0x182092fa0, size 0x2d0, virtual false, abstract: false, final false
static inline void Recreate(::UnityEngine::Rendering::GPUResidentDrawerSettings  settings) ;

/// @brief Method Reinitialize, addr 0x182093270, size 0x40, virtual false, abstract: false, final false
static inline void Reinitialize() ;

/// @brief Method ReinitializeIfNeeded, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void ReinitializeIfNeeded() ;

/// @brief Method RemoveFromPlayerLoop, addr 0x1820932b0, size 0x270, virtual false, abstract: false, final false
inline void RemoveFromPlayerLoop() ;

/// @brief Method RenderDebugOccluderOverlay, addr 0x182093520, size 0x60, virtual false, abstract: false, final false
static inline void RenderDebugOccluderOverlay(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*  debugSettings, ::UnityEngine::Vector2  screenPos, float_t  maxHeight, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  colorBuffer) ;

/// @brief Method RenderDebugOcclusionTestOverlay, addr 0x182093580, size 0x50, virtual false, abstract: false, final false
static inline void RenderDebugOcclusionTestOverlay(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*  debugSettings, int32_t  viewInstanceID, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  colorBuffer) ;

/// @brief Method ScheduleQueryMeshInstancesJob, addr 0x1820935d0, size 0x40, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleQueryMeshInstancesJob(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  sortedMeshIDs, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>  instances) ;

/// @brief Method ScheduleQueryRendererGroupInstancesJob, addr 0x182093610, size 0x40, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleQueryRendererGroupInstancesJob(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  rendererGroupIDs, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances) ;

/// @brief Method ScheduleQueryRendererGroupInstancesJob, addr 0x1820936c0, size 0x40, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleQueryRendererGroupInstancesJob(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  rendererGroupIDs, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>  instances) ;

/// @brief Method ScheduleQueryRendererGroupInstancesJob, addr 0x182093650, size 0x70, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleQueryRendererGroupInstancesJob(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  rendererGroupIDs, ::Unity::Collections::NativeArray_1<int32_t>  instancesOffset, ::Unity::Collections::NativeArray_1<int32_t>  instancesCount, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>  instances) ;

/// @brief Method TransformInstances, addr 0x182093700, size 0x30, virtual false, abstract: false, final false
inline void TransformInstances(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  localToWorldMatrices) ;

/// @brief Method UpdateInstanceOccluders, addr 0x182093730, size 0x90, virtual false, abstract: false, final false
static inline void UpdateInstanceOccluders(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::by_ref<::UnityEngine::Rendering::OccluderParameters>  occluderParameters, ::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>  occluderSubviewUpdates) ;

constexpr ::UnityEngine::Rendering::GPUResidentBatcher* const& __cordl_internal_get_m_Batcher() const;

constexpr ::UnityEngine::Rendering::GPUResidentBatcher*& __cordl_internal_get_m_Batcher() ;

constexpr ::UnityEngine::Rendering::RenderersBatchersContext* const& __cordl_internal_get_m_BatchersContext() const;

constexpr ::UnityEngine::Rendering::RenderersBatchersContext*& __cordl_internal_get_m_BatchersContext() ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_ContextIntPtr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_ContextIntPtr() ;

constexpr ::UnityEngine::ObjectDispatcher* const& __cordl_internal_get_m_Dispatcher() const;

constexpr ::UnityEngine::ObjectDispatcher*& __cordl_internal_get_m_Dispatcher() ;

constexpr ::UnityEngine::Rendering::GPUDrivenProcessor* const& __cordl_internal_get_m_GPUDrivenProcessor() const;

constexpr ::UnityEngine::Rendering::GPUDrivenProcessor*& __cordl_internal_get_m_GPUDrivenProcessor() ;

constexpr ::UnityEngine::Rendering::GPUResidentDrawerSettings const& __cordl_internal_get_m_Settings() const;

constexpr ::UnityEngine::Rendering::GPUResidentDrawerSettings& __cordl_internal_get_m_Settings() ;

constexpr void __cordl_internal_set_m_Batcher(::UnityEngine::Rendering::GPUResidentBatcher*  value) ;

constexpr void __cordl_internal_set_m_BatchersContext(::UnityEngine::Rendering::RenderersBatchersContext*  value) ;

constexpr void __cordl_internal_set_m_ContextIntPtr(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_m_Dispatcher(::UnityEngine::ObjectDispatcher*  value) ;

constexpr void __cordl_internal_set_m_GPUDrivenProcessor(::UnityEngine::Rendering::GPUDrivenProcessor*  value) ;

constexpr void __cordl_internal_set_m_Settings(::UnityEngine::Rendering::GPUResidentDrawerSettings  value) ;

/// @brief Method .ctor, addr 0x1820937c0, size 0x420, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::GPUResidentDrawerSettings  settings, int32_t  maxInstanceCount, int32_t  maxTreeInstanceCount) ;

static inline bool getStaticF__ForceOcclusion_k__BackingField() ;

static inline bool getStaticF__MaintainContext_k__BackingField() ;

static inline ::UnityEngine::Rendering::GPUResidentDrawer* getStaticF_s_Instance() ;

/// @brief Method get_ForceOcclusion, addr 0x182093be0, size 0x20, virtual false, abstract: false, final false
static inline bool get_ForceOcclusion() ;

/// @brief Method get_MaintainContext, addr 0x182093c00, size 0x20, virtual false, abstract: false, final false
static inline bool get_MaintainContext() ;

/// @brief Method get_batcher, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::GPUResidentBatcher* get_batcher() ;

/// @brief Method get_instance, addr 0x182093c20, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::GPUResidentDrawer* get_instance() ;

/// @brief Method get_settings, addr 0x1804e66a0, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::GPUResidentDrawerSettings get_settings() ;

static inline void setStaticF__ForceOcclusion_k__BackingField(bool  value) ;

static inline void setStaticF__MaintainContext_k__BackingField(bool  value) ;

static inline void setStaticF_s_Instance(::UnityEngine::Rendering::GPUResidentDrawer*  value) ;

/// @brief Method set_ForceOcclusion, addr 0x182093c40, size 0x20, virtual false, abstract: false, final false
static inline void set_ForceOcclusion(bool  value) ;

/// @brief Method set_MaintainContext, addr 0x182093c60, size 0x20, virtual false, abstract: false, final false
static inline void set_MaintainContext(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GPUResidentDrawer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GPUResidentDrawer(GPUResidentDrawer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GPUResidentDrawer(GPUResidentDrawer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17682};

/// @brief Field m_ContextIntPtr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_ContextIntPtr;

/// @brief Field m_Settings, offset: 0x18, size: 0x18, def value: None
 ::UnityEngine::Rendering::GPUResidentDrawerSettings  ___m_Settings;

/// @brief Field m_GPUDrivenProcessor, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Rendering::GPUDrivenProcessor*  ___m_GPUDrivenProcessor;

/// @brief Field m_BatchersContext, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Rendering::RenderersBatchersContext*  ___m_BatchersContext;

/// @brief Field m_Batcher, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Rendering::GPUResidentBatcher*  ___m_Batcher;

/// @brief Field m_Dispatcher, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::ObjectDispatcher*  ___m_Dispatcher;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer, ___m_ContextIntPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer, ___m_Settings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer, ___m_GPUDrivenProcessor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer, ___m_BatchersContext) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer, ___m_Batcher) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer, ___m_Dispatcher) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::GPUResidentDrawer) == 0x50, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
