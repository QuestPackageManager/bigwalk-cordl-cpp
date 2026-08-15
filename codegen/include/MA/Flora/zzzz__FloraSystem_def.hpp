#pragma once
// IWYU pragma private; include "MA/Flora/FloraSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__FloraRenderPipelineType_def.hpp"
#include "MA/Flora/zzzz__InstanceContext_def.hpp"
#include "MA/Flora/zzzz__ResolvedSystemSettings_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FloraSystem)
namespace MA::Flora {
struct CullingGrid;
}
namespace MA::Flora {
class CullingSystem;
}
namespace MA::Flora {
struct DetailInTerrain;
}
namespace MA::Flora {
struct FloraCullingPipeline;
}
namespace MA::Flora {
class FloraInstanceContainer;
}
namespace MA::Flora {
struct FloraInstanceFilter;
}
namespace MA::Flora {
struct FloraInstanceHandle;
}
namespace MA::Flora {
class FloraInstanceRenderer;
}
namespace MA::Flora {
struct FloraInstanceTransform;
}
namespace MA::Flora {
struct FloraLocalToWorld;
}
namespace MA::Flora {
struct FloraRenderPipelineType;
}
namespace MA::Flora {
class FloraRenderPipeline;
}
namespace MA::Flora {
class FloraRuntimeResources;
}
namespace MA::Flora {
class FloraRuntimeSettings;
}
namespace MA::Flora {
struct FloraSystem_FloraBeginFrame;
}
namespace MA::Flora {
struct FloraSystem_FloraEndFrame;
}
namespace MA::Flora {
struct FloraSystem_FloraPostLateUpdate;
}
namespace MA::Flora {
class FloraSystem_TransformChangedAction;
}
namespace MA::Flora {
struct InstanceInContainer;
}
namespace MA::Flora {
struct InstanceManager;
}
namespace MA::Flora {
class InstanceRendererManager;
}
namespace MA::Flora {
struct InstanceTag;
}
namespace MA::Flora {
template<typename T>
struct NativeDataReference_1;
}
namespace MA::Flora {
struct TreeInTerrain;
}
namespace MA::InternalBridge {
class UnityObjectDispatcher;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
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
struct BatchCullingContext;
}
namespace UnityEngine::Rendering {
struct BatchCullingOutput;
}
namespace UnityEngine::Rendering {
class BatchRendererGroup;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
struct BoundingSphere;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct EntityId;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
struct TerrainChangedFlags;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace MA::Flora {
class FloraSystem;
}
namespace MA::Flora {
class FloraSystem_TransformChangedAction;
}
namespace MA::Flora {
struct FloraSystem_FloraBeginFrame;
}
namespace MA::Flora {
struct FloraSystem_FloraEndFrame;
}
namespace MA::Flora {
struct FloraSystem_FloraPostLateUpdate;
}
// Write type traits
MARK_REF_T(::MA::Flora::FloraSystem*);
MARK_REF_T(::MA::Flora::FloraSystem_TransformChangedAction*);
MARK_VAL_T(::MA::Flora::FloraSystem_FloraBeginFrame);
MARK_VAL_T(::MA::Flora::FloraSystem_FloraEndFrame);
MARK_VAL_T(::MA::Flora::FloraSystem_FloraPostLateUpdate);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraSystem*, "MA.Flora", "FloraSystem");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraSystem_TransformChangedAction*, "MA.Flora", "FloraSystem/TransformChangedAction");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraSystem_FloraBeginFrame, "MA.Flora", "FloraSystem/FloraBeginFrame");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraSystem_FloraEndFrame, "MA.Flora", "FloraSystem/FloraEndFrame");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraSystem_FloraPostLateUpdate, "MA.Flora", "FloraSystem/FloraPostLateUpdate");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.FloraSystem/FloraBeginFrame
#pragma pack(push, 0)
struct CORDL_TYPE FloraSystem_FloraBeginFrame {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FloraSystem_FloraBeginFrame() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13295};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraSystem_FloraBeginFrame) == 0x1, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.FloraSystem/FloraPostLateUpdate
#pragma pack(push, 0)
struct CORDL_TYPE FloraSystem_FloraPostLateUpdate {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FloraSystem_FloraPostLateUpdate() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13296};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraSystem_FloraPostLateUpdate) == 0x1, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.FloraSystem/FloraEndFrame
#pragma pack(push, 0)
struct CORDL_TYPE FloraSystem_FloraEndFrame {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FloraSystem_FloraEndFrame() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13297};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraSystem_FloraEndFrame) == 0x1, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraSystem/TransformChangedAction
class CORDL_TYPE FloraSystem_TransformChangedAction : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1805aae60, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  instanceID, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(int32_t  instanceID) ;

static inline ::MA::Flora::FloraSystem_TransformChangedAction* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x180539220, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraSystem_TransformChangedAction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraSystem_TransformChangedAction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraSystem_TransformChangedAction(FloraSystem_TransformChangedAction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraSystem_TransformChangedAction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraSystem_TransformChangedAction(FloraSystem_TransformChangedAction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13298};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraSystem_TransformChangedAction) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.FloraRenderPipelineType, MA.Flora.InstanceContext, MA.Flora.ResolvedSystemSettings, System.Object, Unity.Profiling.ProfilerMarker
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraSystem
class CORDL_TYPE FloraSystem : public ::System::Object {
public:
// Declarations
using FloraBeginFrame = ::MA::Flora::FloraSystem_FloraBeginFrame;

using FloraEndFrame = ::MA::Flora::FloraSystem_FloraEndFrame;

using FloraPostLateUpdate = ::MA::Flora::FloraSystem_FloraPostLateUpdate;

using TransformChangedAction = ::MA::Flora::FloraSystem_TransformChangedAction;

 __declspec(property(get=get_AllowAdditionalLightShadows)) bool  AllowAdditionalLightShadows;

 __declspec(property(get=get_AllowDensityCulling)) bool  AllowDensityCulling;

 __declspec(property(get=get_AllowDensityCullingOverride, put=set_AllowDensityCullingOverride)) bool  AllowDensityCullingOverride;

 __declspec(property(get=get_AllowGPUOcclusionCulling)) bool  AllowGPUOcclusionCulling;

 __declspec(property(get=get_AllowLegacyLightProbes)) bool  AllowLegacyLightProbes;

 __declspec(property(get=get_AllowPerDetailLightProbes)) bool  AllowPerDetailLightProbes;

 __declspec(property(get=get_AllowPerDetailMotionVectors)) bool  AllowPerDetailMotionVectors;

 __declspec(property(get=get_AllowPerObjectMotionVectors)) bool  AllowPerObjectMotionVectors;

 __declspec(property(get=get_AllowPerTreeLightProbes)) bool  AllowPerTreeLightProbes;

 __declspec(property(get=get_AllowPerTreeMotionVectors)) bool  AllowPerTreeMotionVectors;

 __declspec(property(get=get_BatchRendererGroup)) ::UnityEngine::Rendering::BatchRendererGroup*  BatchRendererGroup;

/// @brief Field BeginFrame, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BeginFrame, put=setStaticF_BeginFrame)) ::System::Action*  BeginFrame;

/// @brief Field BeginRenderingCameraMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BeginRenderingCameraMarker, put=setStaticF_BeginRenderingCameraMarker)) ::Unity::Profiling::ProfilerMarker  BeginRenderingCameraMarker;

/// @brief Field BeginRenderingContextMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BeginRenderingContextMarker, put=setStaticF_BeginRenderingContextMarker)) ::Unity::Profiling::ProfilerMarker  BeginRenderingContextMarker;

 __declspec(property(get=get_CullingGrid)) ::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>  CullingGrid;

 __declspec(property(get=get_CullingPipeline)) ::MA::Flora::FloraCullingPipeline  CullingPipeline;

 __declspec(property(get=get_CullingSystem)) ::MA::Flora::CullingSystem*  CullingSystem;

/// @brief Field DelayCall, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DelayCall, put=setStaticF_DelayCall)) ::System::Action*  DelayCall;

/// @brief Field DidStartRendering, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DidStartRendering, put=setStaticF_DidStartRendering)) ::System::Action_1<::MA::Flora::FloraSystem*>*  DidStartRendering;

 __declspec(property(get=get_FrameAllocator)) ::Unity::Collections::RewindableAllocator  FrameAllocator;

 __declspec(property(get=get_HasInstancesOrObjects)) bool  HasInstancesOrObjects;

/// @brief Field InitializeFrameMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InitializeFrameMarker, put=setStaticF_InitializeFrameMarker)) ::Unity::Profiling::ProfilerMarker  InitializeFrameMarker;

 __declspec(property(get=get_InstanceManager)) ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>  InstanceManager;

 __declspec(property(get=get_MainLightOverride)) ::UnityW<::UnityEngine::Light>  MainLightOverride;

/// @brief Field PerformBatchCullingMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PerformBatchCullingMarker, put=setStaticF_PerformBatchCullingMarker)) ::Unity::Profiling::ProfilerMarker  PerformBatchCullingMarker;

/// @brief Field PostLateUpdate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PostLateUpdate, put=setStaticF_PostLateUpdate)) ::System::Action*  PostLateUpdate;

/// @brief Field PostLateUpdateMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PostLateUpdateMarker, put=setStaticF_PostLateUpdateMarker)) ::Unity::Profiling::ProfilerMarker  PostLateUpdateMarker;

 __declspec(property(get=get_RegisteredInstanceCount)) int32_t  RegisteredInstanceCount;

 __declspec(property(get=get_RenderPipelineType, put=set_RenderPipelineType)) ::MA::Flora::FloraRenderPipelineType  RenderPipelineType;

 __declspec(property(get=get_RenderTerrainFoliage)) bool  RenderTerrainFoliage;

 __declspec(property(get=get_RenderingEnabled)) bool  RenderingEnabled;

 __declspec(property(get=get_Resources)) ::MA::Flora::FloraRuntimeResources*  Resources;

/// @brief Field UpdateTrackingMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UpdateTrackingMarker, put=setStaticF_UpdateTrackingMarker)) ::Unity::Profiling::ProfilerMarker  UpdateTrackingMarker;

/// @brief Field WasCreated, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_WasCreated, put=setStaticF_WasCreated)) ::System::Action_1<::MA::Flora::FloraSystem*>*  WasCreated;

/// @brief Field WillBeDestroyed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_WillBeDestroyed, put=setStaticF_WillBeDestroyed)) ::System::Action_1<::MA::Flora::FloraSystem*>*  WillBeDestroyed;

/// @brief Field WillStopRendering, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_WillStopRendering, put=setStaticF_WillStopRendering)) ::System::Action_1<::MA::Flora::FloraSystem*>*  WillStopRendering;

/// @brief Field <AllowDensityCullingOverride>k__BackingField, offset 0x130, size 0x1 
 __declspec(property(get=__cordl_internal_get__AllowDensityCullingOverride_k__BackingField, put=__cordl_internal_set__AllowDensityCullingOverride_k__BackingField)) bool  _AllowDensityCullingOverride_k__BackingField;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::MA::Flora::FloraSystem*  _Instance_k__BackingField;

/// @brief Field <RenderPipelineType>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__RenderPipelineType_k__BackingField, put=__cordl_internal_set__RenderPipelineType_k__BackingField)) ::MA::Flora::FloraRenderPipelineType  _RenderPipelineType_k__BackingField;

/// @brief Field m_BatchRendererGroup, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BatchRendererGroup, put=__cordl_internal_set_m_BatchRendererGroup)) ::UnityEngine::Rendering::BatchRendererGroup*  m_BatchRendererGroup;

/// @brief Field m_Containers, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Containers, put=__cordl_internal_set_m_Containers)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityW<::MA::Flora::FloraInstanceContainer>>*  m_Containers;

/// @brief Field m_CullingSystem, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CullingSystem, put=__cordl_internal_set_m_CullingSystem)) ::MA::Flora::CullingSystem*  m_CullingSystem;

/// @brief Field m_DisabledTerrains, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DisabledTerrains, put=__cordl_internal_set_m_DisabledTerrains)) ::System::Collections::Generic::HashSet_1<::UnityEngine::EntityId>*  m_DisabledTerrains;

/// @brief Field m_ErrorMaterial, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ErrorMaterial, put=__cordl_internal_set_m_ErrorMaterial)) ::UnityW<::UnityEngine::Material>  m_ErrorMaterial;

/// @brief Field m_InstanceRendererChildren, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InstanceRendererChildren, put=__cordl_internal_set_m_InstanceRendererChildren)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::System::Collections::Generic::HashSet_1<::UnityEngine::EntityId>*>*  m_InstanceRendererChildren;

/// @brief Field m_InstanceRendererManager, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InstanceRendererManager, put=__cordl_internal_set_m_InstanceRendererManager)) ::MA::Flora::InstanceRendererManager*  m_InstanceRendererManager;

/// @brief Field m_InstanceRenderers, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InstanceRenderers, put=__cordl_internal_set_m_InstanceRenderers)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityW<::MA::Flora::FloraInstanceRenderer>>*  m_InstanceRenderers;

/// @brief Field m_LoadingMaterial, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LoadingMaterial, put=__cordl_internal_set_m_LoadingMaterial)) ::UnityW<::UnityEngine::Material>  m_LoadingMaterial;

/// @brief Field m_NativeContext, offset 0xb0, size 0x70 
 __declspec(property(get=__cordl_internal_get_m_NativeContext, put=__cordl_internal_set_m_NativeContext)) ::MA::Flora::InstanceContext  m_NativeContext;

/// @brief Field m_ObjectTracker, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ObjectTracker, put=__cordl_internal_set_m_ObjectTracker)) ::MA::InternalBridge::UnityObjectDispatcher*  m_ObjectTracker;

/// @brief Field m_PickingMaterial, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PickingMaterial, put=__cordl_internal_set_m_PickingMaterial)) ::UnityW<::UnityEngine::Material>  m_PickingMaterial;

/// @brief Field m_RenderPipeline, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RenderPipeline, put=__cordl_internal_set_m_RenderPipeline)) ::MA::Flora::FloraRenderPipeline*  m_RenderPipeline;

/// @brief Field m_Renderers, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Renderers, put=__cordl_internal_set_m_Renderers)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityW<::UnityEngine::Renderer>>*  m_Renderers;

/// @brief Field m_ResolvedSettings, offset 0x30, size 0x1c 
 __declspec(property(get=__cordl_internal_get_m_ResolvedSettings, put=__cordl_internal_set_m_ResolvedSettings)) ::MA::Flora::ResolvedSystemSettings  m_ResolvedSettings;

/// @brief Field m_Resources, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Resources, put=__cordl_internal_set_m_Resources)) ::MA::Flora::FloraRuntimeResources*  m_Resources;

/// @brief Field m_Settings, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Settings, put=__cordl_internal_set_m_Settings)) ::MA::Flora::FloraRuntimeSettings*  m_Settings;

/// @brief Field m_Terrains, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Terrains, put=__cordl_internal_set_m_Terrains)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityW<::UnityEngine::Terrain>>*  m_Terrains;

/// @brief Field m_TransformChangedActions, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TransformChangedActions, put=__cordl_internal_set_m_TransformChangedActions)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::HashSet_1<::MA::Flora::FloraSystem_TransformChangedAction*>*>*  m_TransformChangedActions;

/// @brief Field s_CurrentScriptableRenderContextID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_CurrentScriptableRenderContextID, put=setStaticF_s_CurrentScriptableRenderContextID)) int32_t  s_CurrentScriptableRenderContextID;

/// @brief Field s_UnloadOrPlayModeChangeShutdownRegistered, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_UnloadOrPlayModeChangeShutdownRegistered, put=setStaticF_s_UnloadOrPlayModeChangeShutdownRegistered)) bool  s_UnloadOrPlayModeChangeShutdownRegistered;

/// @brief Method AddTransformChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void AddTransformChangedEvent(::MA::Flora::FloraSystem_TransformChangedAction*  onChanged) ;

/// @brief Method AppendTrackedContainerInstances, addr 0x1814e7e80, size 0x70, virtual false, abstract: false, final false
inline void AppendTrackedContainerInstances(::UnityEngine::EntityId  containerEntity, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  localTransforms) ;

/// @brief Method ApplyTerrainFoliageOwnership, addr 0x1814e7ef0, size 0x50, virtual false, abstract: false, final false
static inline void ApplyTerrainFoliageOwnership(::UnityEngine::Terrain*  terrain, bool  floraOwnsTerrainFoliage) ;

/// @brief Method CalculateInstanceBounds, addr 0x1814e8090, size 0x150, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds CalculateInstanceBounds(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles) ;

/// @brief Method CalculateInstanceBounds, addr 0x1814e7f40, size 0x150, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds CalculateInstanceBounds(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Mathematics::float4x4  inSpace) ;

/// @brief Method CheckGLVersion, addr 0x1814e81e0, size 0x130, virtual false, abstract: false, final false
static inline bool CheckGLVersion() ;

/// @brief Method CleanupSystemBeforeSceneLoad, addr 0x1814e8310, size 0x10, virtual false, abstract: false, final false
static inline void CleanupSystemBeforeSceneLoad() ;

/// @brief Method ClearTrackedContainerInstances, addr 0x1814e8320, size 0x30, virtual false, abstract: false, final false
inline void ClearTrackedContainerInstances(::UnityEngine::EntityId  containerEntity) ;

/// @brief Method CreateContainerInstance, addr 0x1814e8350, size 0x80, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceHandle CreateContainerInstance(::UnityEngine::GameObject*  prefab, ::UnityEngine::Transform*  parent, ::UnityEngine::EntityId  containerEntity, ::MA::Flora::FloraInstanceTransform  localTransform) ;

/// @brief Method CreateContainerInstances, addr 0x1814e83d0, size 0x90, virtual false, abstract: false, final false
inline void CreateContainerInstances(::UnityEngine::GameObject*  prefab, ::UnityEngine::Transform*  parent, ::UnityEngine::EntityId  containerEntity, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  localTransforms) ;

/// @brief Method CreateInstance, addr 0x1814e8680, size 0xb0, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceHandle CreateInstance(::UnityEngine::GameObject*  prefab, ::UnityEngine::GameObject*  owner, ::Unity::Mathematics::float4x4  localToWorld) ;

/// @brief Method CreateInstance, addr 0x1814e8460, size 0x170, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceHandle CreateInstance(::UnityEngine::GameObject*  prefab, ::UnityEngine::Transform*  parent, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, ::UnityEngine::Vector3  localScale) ;

/// @brief Method CreateInstance, addr 0x1814e85d0, size 0xb0, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceHandle CreateInstance(::UnityEngine::GameObject*  prefab, ::UnityEngine::Transform*  parent, ::MA::Flora::FloraInstanceTransform  localTransform) ;

/// @brief Method CreateInstances, addr 0x1814e8900, size 0x110, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle> CreateInstances(::UnityEngine::GameObject*  prefab, ::UnityEngine::GameObject*  owner, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>  matrices) ;

/// @brief Method CreateInstances, addr 0x1814e8a10, size 0xf0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle> CreateInstances(::UnityEngine::GameObject*  prefab, ::UnityEngine::GameObject*  owner, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  transforms) ;

/// @brief Method CreateInstances, addr 0x1814e8730, size 0xf0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle> CreateInstances(::UnityEngine::GameObject*  prefab, ::UnityEngine::Transform*  parent, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  localTransforms) ;

/// @brief Method CreateInstances, addr 0x1814e8b00, size 0xf0, virtual false, abstract: false, final false
inline void CreateInstances(::UnityEngine::GameObject*  prefab, ::UnityEngine::GameObject*  owner, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>  localToWorldMatrices) ;

/// @brief Method CreateInstances, addr 0x1814e8bf0, size 0xe0, virtual false, abstract: false, final false
inline void CreateInstances(::UnityEngine::GameObject*  prefab, ::UnityEngine::GameObject*  owner, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  transforms) ;

/// @brief Method CreateInstances, addr 0x1814e8820, size 0xe0, virtual false, abstract: false, final false
inline void CreateInstances(::UnityEngine::GameObject*  prefab, ::UnityEngine::Transform*  parent, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  localTransforms) ;

/// @brief Method DestroyInstance, addr 0x1814e8cd0, size 0x30, virtual false, abstract: false, final false
inline void DestroyInstance(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method DestroyInstances, addr 0x1814e8d00, size 0x40, virtual false, abstract: false, final false
inline void DestroyInstances(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles) ;

/// @brief Method DisableUnityRenderers, addr 0x1814e8d40, size 0xc0, virtual false, abstract: false, final false
inline void DisableUnityRenderers() ;

/// @brief Method DisableUnityTerrainRendering, addr 0x1814e8e00, size 0xd0, virtual false, abstract: false, final false
inline void DisableUnityTerrainRendering() ;

/// @brief Method Dispose, addr 0x1814e8ed0, size 0x160, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method DomainUnloadOrPlayModeChangeShutdown, addr 0x1814e9030, size 0x430, virtual false, abstract: false, final false
static inline void DomainUnloadOrPlayModeChangeShutdown() ;

/// @brief Method EditorRequiresFrameUpdate, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void EditorRequiresFrameUpdate() ;

/// @brief Method EnableUnityRenderers, addr 0x1814e9460, size 0xc0, virtual false, abstract: false, final false
inline void EnableUnityRenderers() ;

/// @brief Method EnableUnityTerrainRendering, addr 0x1814e9520, size 0xd0, virtual false, abstract: false, final false
inline void EnableUnityTerrainRendering() ;

/// @brief Method FindInstancesInBounds, addr 0x1814e9970, size 0x1b0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> FindInstancesInBounds(::UnityEngine::Bounds  bounds, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method FindInstancesInBoundsMatching, addr 0x1814e95f0, size 0x1c0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> FindInstancesInBoundsMatching(::MA::Flora::FloraInstanceFilter  filter, ::UnityEngine::Bounds  bounds, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method FindInstancesInBoundsMatching, addr 0x1814e97b0, size 0x1c0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> FindInstancesInBoundsMatching(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  prefabGameObjectIDs, ::UnityEngine::Bounds  bounds, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method FindInstancesInPlanes, addr 0x1814e9bd0, size 0xb0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle> FindInstancesInPlanes(::MA::Flora::InstanceTag  includeTags, ::MA::Flora::InstanceTag  excludeTags, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  planes, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method FindInstancesInPlanes, addr 0x1814e9b20, size 0xb0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle> FindInstancesInPlanes(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  planes, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method FindInstancesInSphere, addr 0x1814e9de0, size 0xa0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> FindInstancesInSphere(::UnityEngine::BoundingSphere  sphere, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method FindInstancesInSphereMatching, addr 0x1814e9c80, size 0xb0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> FindInstancesInSphereMatching(::MA::Flora::FloraInstanceFilter  filter, ::UnityEngine::BoundingSphere  sphere, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method FindInstancesInSphereMatching, addr 0x1814e9d30, size 0xb0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> FindInstancesInSphereMatching(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  prefabGameObjectIDs, ::UnityEngine::BoundingSphere  sphere, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method FindInstancesIntersectingBounds, addr 0x1814e9970, size 0x1b0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> FindInstancesIntersectingBounds(::UnityEngine::Bounds  bounds, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method FindInstancesIntersectingBoundsMatching, addr 0x1814e95f0, size 0x1c0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> FindInstancesIntersectingBoundsMatching(::MA::Flora::FloraInstanceFilter  filter, ::UnityEngine::Bounds  bounds, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method FindInstancesIntersectingBoundsMatching, addr 0x1814e9e80, size 0x1f0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> FindInstancesIntersectingBoundsMatching(::Unity::Collections::NativeArray_1<int32_t>  prefabGameObjectIDs, ::UnityEngine::Bounds  bounds, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method FindInstancesIntersectingSphere, addr 0x1814e9de0, size 0xa0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> FindInstancesIntersectingSphere(::UnityEngine::BoundingSphere  sphere, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method FindInstancesIntersectingSphereMatching, addr 0x1814e9c80, size 0xb0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> FindInstancesIntersectingSphereMatching(::MA::Flora::FloraInstanceFilter  filter, ::UnityEngine::BoundingSphere  sphere, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method FindInstancesIntersectingSphereMatching, addr 0x1814ea070, size 0xd0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> FindInstancesIntersectingSphereMatching(::Unity::Collections::NativeArray_1<int32_t>  prefabGameObjectIDs, ::UnityEngine::BoundingSphere  sphere, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method FlushTracking, addr 0x1814ea140, size 0x3d0, virtual false, abstract: false, final false
inline void FlushTracking() ;

/// @brief Method FrameInitialization, addr 0x1814ea510, size 0x1a0, virtual false, abstract: false, final false
inline void FrameInitialization() ;

/// @brief Method FramePostLateUpdate, addr 0x1814ea6b0, size 0x240, virtual false, abstract: false, final false
inline void FramePostLateUpdate() ;

/// @brief Method FramePostPostLateUpdate, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void FramePostPostLateUpdate() ;

/// @brief Method GetActiveContainers, addr 0x1814ea8f0, size 0x110, virtual false, abstract: false, final false
inline void GetActiveContainers(::System::Collections::Generic::List_1<::UnityW<::MA::Flora::FloraInstanceContainer>>*  containers) ;

/// @brief Method GetActiveRenderers, addr 0x1814eaa00, size 0x110, virtual false, abstract: false, final false
inline void GetActiveRenderers(::System::Collections::Generic::List_1<::UnityW<::MA::Flora::FloraInstanceRenderer>>*  instanceRenderers) ;

/// @brief Method GetActiveTerrains, addr 0x1814eab10, size 0x110, virtual false, abstract: false, final false
inline void GetActiveTerrains(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*  terrains) ;

/// @brief Method GetAuthoringGameObjectOf, addr 0x1814eac20, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> GetAuthoringGameObjectOf(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetAuthoringTerrainOf, addr 0x1814eac30, size 0x70, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Terrain> GetAuthoringTerrainOf(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetAuthoringTransformOf, addr 0x1814eaca0, size 0x50, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetAuthoringTransformOf(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetContainerIndexMap, addr 0x1814eacf0, size 0x110, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,int32_t> GetContainerIndexMap(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method GetCurrentRenderPipelineType, addr 0x1814eae00, size 0x70, virtual false, abstract: false, final false
inline ::MA::Flora::FloraRenderPipelineType GetCurrentRenderPipelineType() ;

/// @brief Method GetDetailInstanceMap, addr 0x1814eae70, size 0x110, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeParallelMultiHashMap_2<::MA::Flora::DetailInTerrain,::MA::Flora::FloraInstanceHandle> GetDetailInstanceMap(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method GetIndexInInstanceContainer, addr 0x1814eaf80, size 0xf0, virtual false, abstract: false, final false
inline int32_t GetIndexInInstanceContainer(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetInstanceBounds, addr 0x1814eb170, size 0x110, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Bounds> GetInstanceBounds(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method GetInstanceBounds, addr 0x1814eb070, size 0x100, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds GetInstanceBounds(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetInstanceIdentitySource, addr 0x1814eb280, size 0xf0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> GetInstanceIdentitySource(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetInstanceInContainer, addr 0x1814eb370, size 0x30, virtual false, abstract: false, final false
inline ::MA::Flora::InstanceInContainer GetInstanceInContainer(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetInstanceInContainersWithIndices, addr 0x1814eb3a0, size 0x120, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::InstanceInContainer> GetInstanceInContainersWithIndices(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  originalIndices) ;

/// @brief Method GetInstanceLocalToWorld, addr 0x1814eb720, size 0x100, virtual false, abstract: false, final false
inline ::MA::Flora::FloraLocalToWorld GetInstanceLocalToWorld(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetInstanceLocalToWorldMatrices, addr 0x1814eb4c0, size 0x140, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> GetInstanceLocalToWorldMatrices(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method GetInstanceLocalToWorldMatrix, addr 0x1814eb600, size 0x120, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4x4 GetInstanceLocalToWorldMatrix(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetInstanceLocalToWorlds, addr 0x1814eb820, size 0x110, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld> GetInstanceLocalToWorlds(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method GetInstanceOwnerGameObject, addr 0x1814eb930, size 0xf0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> GetInstanceOwnerGameObject(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetInstanceOwnerTerrain, addr 0x1814eba20, size 0x70, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Terrain> GetInstanceOwnerTerrain(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetInstanceOwnerTransform, addr 0x1814eaca0, size 0x50, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetInstanceOwnerTransform(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetInstanceParentTerrain, addr 0x1814eac30, size 0x70, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Terrain> GetInstanceParentTerrain(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetInstancePosition, addr 0x1814eba90, size 0x120, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 GetInstancePosition(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetInstancePositions, addr 0x1814ebbb0, size 0x110, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> GetInstancePositions(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method GetInstancePrefab, addr 0x1814eb280, size 0xf0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> GetInstancePrefab(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetInstanceRenderSource, addr 0x1814ebcc0, size 0xf0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> GetInstanceRenderSource(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetInstanceRendererObjects, addr 0x1814ebdb0, size 0x30, virtual false, abstract: false, final false
inline void GetInstanceRendererObjects(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  instanceRendererObjects) ;

/// @brief Method GetInstanceTerrainTreeIndex, addr 0x1814ebde0, size 0x60, virtual false, abstract: false, final false
inline int32_t GetInstanceTerrainTreeIndex(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetInstanceVariationColor, addr 0x1814ebe40, size 0x100, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 GetInstanceVariationColor(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetInstanceWorldTransform, addr 0x1814ebf40, size 0x140, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceTransform GetInstanceWorldTransform(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetInstanceWorldTransforms, addr 0x1814ec080, size 0x110, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform> GetInstanceWorldTransforms(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method GetOrCreate, addr 0x1814ec190, size 0x30, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraSystem* GetOrCreate() ;

/// @brief Method GetParentInstanceContainer, addr 0x1814ec1c0, size 0xf0, virtual false, abstract: false, final false
inline ::UnityW<::MA::Flora::FloraInstanceContainer> GetParentInstanceContainer(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetTreeInTerrain, addr 0x1814ec2b0, size 0x30, virtual false, abstract: false, final false
inline ::MA::Flora::TreeInTerrain GetTreeInTerrain(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetTreeInstanceHandle, addr 0x1814ec2e0, size 0x100, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceHandle GetTreeInstanceHandle(::UnityEngine::Terrain*  terrain, int32_t  treeIndex) ;

/// @brief Method GetTreeInstanceHandles, addr 0x1814ec3e0, size 0x120, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle> GetTreeInstanceHandles(::UnityEngine::Terrain*  terrain, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method GetValidTreeInTerrains, addr 0x1814ec620, size 0x110, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::TreeInTerrain> GetValidTreeInTerrains(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method GetValidTreeInTerrainsWithIndices, addr 0x1814ec500, size 0x120, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::TreeInTerrain> GetValidTreeInTerrainsWithIndices(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  originalIndices) ;

/// @brief Method InitializeIfNeeded, addr 0x1814ec730, size 0x1c0, virtual false, abstract: false, final false
static inline void InitializeIfNeeded() ;

/// @brief Method InstanceExists, addr 0x1814ec8f0, size 0x50, virtual false, abstract: false, final false
inline bool InstanceExists(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method InstantiateInstanceRenderer, addr 0x1814ec940, size 0x210, virtual false, abstract: false, final false
inline ::UnityW<::MA::Flora::FloraInstanceRenderer> InstantiateInstanceRenderer(::UnityEngine::GameObject*  prefab, ::UnityEngine::Transform*  parent, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, ::UnityEngine::Vector3  localScale) ;

/// @brief Method IsInstanceEnabled, addr 0x1814ecb50, size 0xf0, virtual false, abstract: false, final false
inline bool IsInstanceEnabled(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method IsSupportedOnSystem, addr 0x1814ecc40, size 0x2f0, virtual false, abstract: false, final false
static inline bool IsSupportedOnSystem(::by_ref<::StringW>  failReason) ;

/// @brief Method IsTerrainRegistered, addr 0x1814ecf30, size 0x80, virtual false, abstract: false, final false
inline bool IsTerrainRegistered(::UnityEngine::Terrain*  terrain) ;

static inline ::MA::Flora::FloraSystem* New_ctor() ;

/// @brief Method OnActiveRenderPipelineCreated, addr 0x1814ecfb0, size 0x10, virtual false, abstract: false, final false
static inline void OnActiveRenderPipelineCreated() ;

/// @brief Method OnActiveRenderPipelineDisposed, addr 0x1814ecfc0, size 0x40, virtual false, abstract: false, final false
static inline void OnActiveRenderPipelineDisposed() ;

/// @brief Method OnBatchCullingComplete, addr 0x1814ed000, size 0x20, virtual false, abstract: false, final false
inline void OnBatchCullingComplete(::System::IntPtr  customCullingResult) ;

/// @brief Method OnBeginCameraRendering, addr 0x1814ed040, size 0xc0, virtual false, abstract: false, final false
inline void OnBeginCameraRendering(::UnityEngine::Camera*  camera) ;

/// @brief Method OnBeginCameraRendering, addr 0x1814ed020, size 0x20, virtual false, abstract: false, final false
static inline void OnBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera) ;

/// @brief Method OnBeginContextRendering, addr 0x1814ed100, size 0xb0, virtual false, abstract: false, final false
inline void OnBeginContextRendering(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*  cameras) ;

/// @brief Method OnBeginContextRendering, addr 0x1814ed1b0, size 0x80, virtual false, abstract: false, final false
static inline void OnBeginContextRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*  cameras) ;

/// @brief Method OnEndCameraRendering, addr 0x1814ed230, size 0x20, virtual false, abstract: false, final false
inline void OnEndCameraRendering(::UnityEngine::Camera*  camera) ;

/// @brief Method OnEndCameraRendering, addr 0x1814ed250, size 0x30, virtual false, abstract: false, final false
static inline void OnEndCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera) ;

/// @brief Method OnEndContextRendering, addr 0x1814ed280, size 0x20, virtual false, abstract: false, final false
inline void OnEndContextRendering(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*  cameras) ;

/// @brief Method OnEndContextRendering, addr 0x1814ed2a0, size 0x90, virtual false, abstract: false, final false
static inline void OnEndContextRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*  cameras) ;

/// @brief Method OnInitialization, addr 0x1814ed330, size 0x20, virtual false, abstract: false, final false
static inline void OnInitialization() ;

/// @brief Method OnLightProbesUpdated, addr 0x1814ed350, size 0x30, virtual false, abstract: false, final false
static inline void OnLightProbesUpdated() ;

/// @brief Method OnPerformBatchCulling, addr 0x1814ed380, size 0x1d0, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle OnPerformBatchCulling(::UnityEngine::Rendering::BatchRendererGroup*  rendererGroup, ::UnityEngine::Rendering::BatchCullingContext  cullingContext, ::UnityEngine::Rendering::BatchCullingOutput  cullingOutput, ::System::IntPtr  userContext) ;

/// @brief Method OnPostLateUpdate, addr 0x1814ed550, size 0x20, virtual false, abstract: false, final false
static inline void OnPostLateUpdate() ;

/// @brief Method OnPostPostLateUpdate, addr 0x180631430, size 0xa670, virtual false, abstract: false, final false
static inline void OnPostPostLateUpdate() ;

/// @brief Method OnSceneLoaded, addr 0x1814ed350, size 0x30, virtual false, abstract: false, final false
static inline void OnSceneLoaded(::UnityEngine::SceneManagement::Scene  scene, ::UnityEngine::SceneManagement::LoadSceneMode  mode) ;

/// @brief Method OnSceneUnloaded, addr 0x1814ed570, size 0xf0, virtual false, abstract: false, final false
static inline void OnSceneUnloaded(::UnityEngine::SceneManagement::Scene  scene) ;

/// @brief Method OnTerrainHeightmapChanged, addr 0x1814ed660, size 0x70, virtual false, abstract: false, final false
static inline void OnTerrainHeightmapChanged(::UnityEngine::Terrain*  terrain, ::UnityEngine::RectInt  region, bool  didSync) ;

/// @brief Method RebuildAmbientLighting, addr 0x1814ed6d0, size 0x20, virtual false, abstract: false, final false
inline void RebuildAmbientLighting() ;

/// @brief Method RefreshInstanceRendererRenderSources, addr 0x1814ed6f0, size 0x170, virtual false, abstract: false, final false
inline void RefreshInstanceRendererRenderSources() ;

/// @brief Method RefreshTemplates, addr 0x1814ed860, size 0x10, virtual false, abstract: false, final false
inline void RefreshTemplates() ;

/// @brief Method RegisterInstanceContainer, addr 0x1814ed870, size 0x1f0, virtual false, abstract: false, final false
inline void RegisterInstanceContainer(::MA::Flora::FloraInstanceContainer*  container) ;

/// @brief Method RegisterInstanceRenderer, addr 0x1814eda60, size 0x440, virtual false, abstract: false, final false
inline void RegisterInstanceRenderer(::MA::Flora::FloraInstanceRenderer*  instanceRenderer) ;

/// @brief Method RegisterTerrain, addr 0x1814edea0, size 0x120, virtual false, abstract: false, final false
inline void RegisterTerrain(::UnityEngine::Terrain*  terrain) ;

/// @brief Method RegisterTerrains, addr 0x1814edfc0, size 0x70, virtual false, abstract: false, final false
inline void RegisterTerrains() ;

/// @brief Method RegisterTerrains, addr 0x1814ee030, size 0x170, virtual false, abstract: false, final false
inline void RegisterTerrains(::ArrayW<::UnityEngine::Terrain*>  terrains) ;

/// @brief Method RegisterUnloadOrPlayModeChangeShutdown, addr 0x1814ee1a0, size 0x3e0, virtual false, abstract: false, final false
static inline void RegisterUnloadOrPlayModeChangeShutdown() ;

/// @brief Method Reinitialize, addr 0x1814ee760, size 0x40, virtual false, abstract: false, final false
static inline void Reinitialize() ;

/// @brief Method ReinitializeCullingSystem, addr 0x1814ee580, size 0x1e0, virtual false, abstract: false, final false
inline void ReinitializeCullingSystem() ;

/// @brief Method RemoveTrackedContainerInstance, addr 0x1814ee7a0, size 0x40, virtual false, abstract: false, final false
inline void RemoveTrackedContainerInstance(::UnityEngine::EntityId  containerEntity, int32_t  index) ;

/// @brief Method RemoveTransformChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void RemoveTransformChangedEvent(::MA::Flora::FloraSystem_TransformChangedAction*  onChanged) ;

/// @brief Method ScheduleUpdateInstanceLocalToWorldMatrices, addr 0x1814ee7e0, size 0xb0, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleUpdateInstanceLocalToWorldMatrices(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>  localToWorldMatrices, ::Unity::Jobs::JobHandle  dependsOn) ;

/// @brief Method ScheduleUpdateInstanceLocalToWorlds, addr 0x1814ee890, size 0xa0, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleUpdateInstanceLocalToWorlds(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>  localToWorlds, ::Unity::Jobs::JobHandle  dependsOn) ;

/// @brief Method ScheduleUpdateInstanceLocalTransforms, addr 0x1814ee930, size 0x170, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleUpdateInstanceLocalTransforms(::UnityEngine::Transform*  parent, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  localTransforms, ::Unity::Jobs::JobHandle  dependsOn) ;

/// @brief Method ScheduleUpdateInstanceWorldTransforms, addr 0x1814eeaa0, size 0xa0, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleUpdateInstanceWorldTransforms(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  worldTransforms, ::Unity::Jobs::JobHandle  dependsOn) ;

/// @brief Method SetEditorDataChanged, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void SetEditorDataChanged() ;

/// @brief Method SetInstanceEnabled, addr 0x1814eeb40, size 0x40, virtual false, abstract: false, final false
inline void SetInstanceEnabled(::MA::Flora::FloraInstanceHandle  instance, bool  enabled) ;

/// @brief Method SetInstanceInContainer, addr 0x1814eebe0, size 0x50, virtual false, abstract: false, final false
inline void SetInstanceInContainer(::MA::Flora::FloraInstanceHandle  instance, ::MA::Flora::FloraInstanceContainer*  instanceContainer, int32_t  index) ;

/// @brief Method SetInstanceInContainerIndices, addr 0x1814eeb80, size 0x60, virtual false, abstract: false, final false
inline void SetInstanceInContainerIndices(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::MA::Flora::FloraInstanceContainer*  instanceContainer, int32_t  firstIndex) ;

/// @brief Method SetInstanceVariationColor, addr 0x1814eec30, size 0x50, virtual false, abstract: false, final false
inline void SetInstanceVariationColor(::MA::Flora::FloraInstanceHandle  instance, ::Unity::Mathematics::float4  color) ;

/// @brief Method SetInstanceVariationColors, addr 0x1814eec80, size 0x50, virtual false, abstract: false, final false
inline void SetInstanceVariationColors(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  colors) ;

/// @brief Method SetInstancesEnabled, addr 0x1814eecd0, size 0x50, virtual false, abstract: false, final false
inline void SetInstancesEnabled(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, bool  enabled) ;

/// @brief Method SetTerrainChanged, addr 0x1814eed20, size 0x80, virtual false, abstract: false, final false
inline void SetTerrainChanged(::UnityEngine::Terrain*  terrain, ::UnityEngine::TerrainChangedFlags  changedFlags) ;

/// @brief Method SetTerrainHeightmapChanged, addr 0x1814eeda0, size 0x60, virtual false, abstract: false, final false
inline void SetTerrainHeightmapChanged(::UnityEngine::Terrain*  terrain) ;

/// @brief Method SetupPlayerLoop, addr 0x1814eee00, size 0x140, virtual false, abstract: false, final false
static inline void SetupPlayerLoop() ;

/// @brief Method SetupRendering, addr 0x1814eef40, size 0x410, virtual false, abstract: false, final false
inline void SetupRendering() ;

/// @brief Method SetupTracking, addr 0x1814ef350, size 0x1b0, virtual false, abstract: false, final false
inline void SetupTracking() ;

/// @brief Method Shutdown, addr 0x1814ecfc0, size 0x40, virtual false, abstract: false, final false
static inline void Shutdown() ;

/// @brief Method TeardownPlayerLoop, addr 0x1814ef500, size 0x50, virtual false, abstract: false, final false
static inline void TeardownPlayerLoop() ;

/// @brief Method TeardownRendering, addr 0x1814ef5f0, size 0x230, virtual false, abstract: false, final false
inline void TeardownRendering() ;

/// @brief Method TeardownRenderingIfEmpty, addr 0x1814ef550, size 0xa0, virtual false, abstract: false, final false
inline void TeardownRenderingIfEmpty() ;

/// @brief Method TeardownTracking, addr 0x1814ef820, size 0x40, virtual false, abstract: false, final false
inline void TeardownTracking() ;

/// @brief Method UnregisterInstanceContainer, addr 0x1814ef860, size 0xe0, virtual false, abstract: false, final false
inline void UnregisterInstanceContainer(::MA::Flora::FloraInstanceContainer*  container) ;

/// @brief Method UnregisterInstanceRenderer, addr 0x1814ef940, size 0x1a0, virtual false, abstract: false, final false
inline void UnregisterInstanceRenderer(::MA::Flora::FloraInstanceRenderer*  instanceRenderer) ;

/// @brief Method UnregisterTerrain, addr 0x1814efb80, size 0x60, virtual false, abstract: false, final false
inline void UnregisterTerrain(::UnityEngine::Terrain*  terrain) ;

/// @brief Method UnregisterTerrain, addr 0x1814efae0, size 0xa0, virtual false, abstract: false, final false
inline void UnregisterTerrain(::UnityEngine::EntityId  terrainEntityId) ;

/// @brief Method UnregisterTerrains, addr 0x1814efbe0, size 0x1b0, virtual false, abstract: false, final false
inline void UnregisterTerrains() ;

/// @brief Method UpdateDebugDisplay, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void UpdateDebugDisplay() ;

/// @brief Method UpdateInstanceLocalToWorld, addr 0x1814efe10, size 0x60, virtual false, abstract: false, final false
inline void UpdateInstanceLocalToWorld(::MA::Flora::FloraInstanceHandle  instance, ::MA::Flora::FloraLocalToWorld  localToWorld) ;

/// @brief Method UpdateInstanceLocalToWorldMatrices, addr 0x1814efd90, size 0x80, virtual false, abstract: false, final false
inline void UpdateInstanceLocalToWorldMatrices(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>  localToWorldMatrices) ;

/// @brief Method UpdateInstanceLocalToWorldMatrix, addr 0x1814efe10, size 0x60, virtual false, abstract: false, final false
inline void UpdateInstanceLocalToWorldMatrix(::MA::Flora::FloraInstanceHandle  instance, ::Unity::Mathematics::float4x4  localToWorldMatrix) ;

/// @brief Method UpdateInstanceLocalToWorlds, addr 0x1814efe70, size 0x70, virtual false, abstract: false, final false
inline void UpdateInstanceLocalToWorlds(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>  localToWorlds) ;

/// @brief Method UpdateInstanceLocalTransform, addr 0x1814efee0, size 0x250, virtual false, abstract: false, final false
inline void UpdateInstanceLocalTransform(::UnityEngine::Transform*  parent, ::MA::Flora::FloraInstanceHandle  instance, ::MA::Flora::FloraInstanceTransform  localInstanceTransform) ;

/// @brief Method UpdateInstanceLocalTransforms, addr 0x1814f0130, size 0x130, virtual false, abstract: false, final false
inline void UpdateInstanceLocalTransforms(::UnityEngine::Transform*  parent, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  localTransforms) ;

/// @brief Method UpdateInstanceWorldTransform, addr 0x1814f0260, size 0xb0, virtual false, abstract: false, final false
inline void UpdateInstanceWorldTransform(::MA::Flora::FloraInstanceHandle  instance, ::MA::Flora::FloraInstanceTransform  worldTransform) ;

/// @brief Method UpdateInstanceWorldTransforms, addr 0x1814f0310, size 0x70, virtual false, abstract: false, final false
inline void UpdateInstanceWorldTransforms(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  worldTransforms) ;

/// @brief Method UpdateSettings, addr 0x1814f0380, size 0x340, virtual false, abstract: false, final false
inline bool UpdateSettings() ;

/// @brief Method UpdateTrackedContainerLocalTransforms, addr 0x1814f0720, size 0x70, virtual false, abstract: false, final false
inline void UpdateTrackedContainerLocalTransforms(::UnityEngine::EntityId  containerEntity, ::Unity::Collections::NativeArray_1<int32_t>  indices, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  localTransforms) ;

/// @brief Method UpdateTrackedContainerLocalTransforms, addr 0x1814f06c0, size 0x60, virtual false, abstract: false, final false
inline void UpdateTrackedContainerLocalTransforms(::UnityEngine::EntityId  containerEntity, int32_t  startIndex, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  localTransforms) ;

/// @brief Method UpdateTracking, addr 0x1814f0790, size 0x1980, virtual false, abstract: false, final false
inline void UpdateTracking() ;

constexpr bool const& __cordl_internal_get__AllowDensityCullingOverride_k__BackingField() const;

constexpr bool& __cordl_internal_get__AllowDensityCullingOverride_k__BackingField() ;

constexpr ::MA::Flora::FloraRenderPipelineType const& __cordl_internal_get__RenderPipelineType_k__BackingField() const;

constexpr ::MA::Flora::FloraRenderPipelineType& __cordl_internal_get__RenderPipelineType_k__BackingField() ;

constexpr ::UnityEngine::Rendering::BatchRendererGroup* const& __cordl_internal_get_m_BatchRendererGroup() const;

constexpr ::UnityEngine::Rendering::BatchRendererGroup*& __cordl_internal_get_m_BatchRendererGroup() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityW<::MA::Flora::FloraInstanceContainer>>* const& __cordl_internal_get_m_Containers() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityW<::MA::Flora::FloraInstanceContainer>>*& __cordl_internal_get_m_Containers() ;

constexpr ::MA::Flora::CullingSystem* const& __cordl_internal_get_m_CullingSystem() const;

constexpr ::MA::Flora::CullingSystem*& __cordl_internal_get_m_CullingSystem() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::EntityId>* const& __cordl_internal_get_m_DisabledTerrains() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::EntityId>*& __cordl_internal_get_m_DisabledTerrains() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_ErrorMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_ErrorMaterial() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::System::Collections::Generic::HashSet_1<::UnityEngine::EntityId>*>* const& __cordl_internal_get_m_InstanceRendererChildren() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::System::Collections::Generic::HashSet_1<::UnityEngine::EntityId>*>*& __cordl_internal_get_m_InstanceRendererChildren() ;

constexpr ::MA::Flora::InstanceRendererManager* const& __cordl_internal_get_m_InstanceRendererManager() const;

constexpr ::MA::Flora::InstanceRendererManager*& __cordl_internal_get_m_InstanceRendererManager() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityW<::MA::Flora::FloraInstanceRenderer>>* const& __cordl_internal_get_m_InstanceRenderers() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityW<::MA::Flora::FloraInstanceRenderer>>*& __cordl_internal_get_m_InstanceRenderers() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_LoadingMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_LoadingMaterial() ;

constexpr ::MA::Flora::InstanceContext const& __cordl_internal_get_m_NativeContext() const;

constexpr ::MA::Flora::InstanceContext& __cordl_internal_get_m_NativeContext() ;

constexpr ::MA::InternalBridge::UnityObjectDispatcher* const& __cordl_internal_get_m_ObjectTracker() const;

constexpr ::MA::InternalBridge::UnityObjectDispatcher*& __cordl_internal_get_m_ObjectTracker() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_PickingMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_PickingMaterial() ;

constexpr ::MA::Flora::FloraRenderPipeline* const& __cordl_internal_get_m_RenderPipeline() const;

constexpr ::MA::Flora::FloraRenderPipeline*& __cordl_internal_get_m_RenderPipeline() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityW<::UnityEngine::Renderer>>* const& __cordl_internal_get_m_Renderers() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityW<::UnityEngine::Renderer>>*& __cordl_internal_get_m_Renderers() ;

constexpr ::MA::Flora::ResolvedSystemSettings const& __cordl_internal_get_m_ResolvedSettings() const;

constexpr ::MA::Flora::ResolvedSystemSettings& __cordl_internal_get_m_ResolvedSettings() ;

constexpr ::MA::Flora::FloraRuntimeResources* const& __cordl_internal_get_m_Resources() const;

constexpr ::MA::Flora::FloraRuntimeResources*& __cordl_internal_get_m_Resources() ;

constexpr ::MA::Flora::FloraRuntimeSettings* const& __cordl_internal_get_m_Settings() const;

constexpr ::MA::Flora::FloraRuntimeSettings*& __cordl_internal_get_m_Settings() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityW<::UnityEngine::Terrain>>* const& __cordl_internal_get_m_Terrains() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityW<::UnityEngine::Terrain>>*& __cordl_internal_get_m_Terrains() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::HashSet_1<::MA::Flora::FloraSystem_TransformChangedAction*>*>* const& __cordl_internal_get_m_TransformChangedActions() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::HashSet_1<::MA::Flora::FloraSystem_TransformChangedAction*>*>*& __cordl_internal_get_m_TransformChangedActions() ;

constexpr void __cordl_internal_set__AllowDensityCullingOverride_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__RenderPipelineType_k__BackingField(::MA::Flora::FloraRenderPipelineType  value) ;

constexpr void __cordl_internal_set_m_BatchRendererGroup(::UnityEngine::Rendering::BatchRendererGroup*  value) ;

constexpr void __cordl_internal_set_m_Containers(::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityW<::MA::Flora::FloraInstanceContainer>>*  value) ;

constexpr void __cordl_internal_set_m_CullingSystem(::MA::Flora::CullingSystem*  value) ;

constexpr void __cordl_internal_set_m_DisabledTerrains(::System::Collections::Generic::HashSet_1<::UnityEngine::EntityId>*  value) ;

constexpr void __cordl_internal_set_m_ErrorMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_m_InstanceRendererChildren(::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::System::Collections::Generic::HashSet_1<::UnityEngine::EntityId>*>*  value) ;

constexpr void __cordl_internal_set_m_InstanceRendererManager(::MA::Flora::InstanceRendererManager*  value) ;

constexpr void __cordl_internal_set_m_InstanceRenderers(::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityW<::MA::Flora::FloraInstanceRenderer>>*  value) ;

constexpr void __cordl_internal_set_m_LoadingMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_m_NativeContext(::MA::Flora::InstanceContext  value) ;

constexpr void __cordl_internal_set_m_ObjectTracker(::MA::InternalBridge::UnityObjectDispatcher*  value) ;

constexpr void __cordl_internal_set_m_PickingMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_m_RenderPipeline(::MA::Flora::FloraRenderPipeline*  value) ;

constexpr void __cordl_internal_set_m_Renderers(::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityW<::UnityEngine::Renderer>>*  value) ;

constexpr void __cordl_internal_set_m_ResolvedSettings(::MA::Flora::ResolvedSystemSettings  value) ;

constexpr void __cordl_internal_set_m_Resources(::MA::Flora::FloraRuntimeResources*  value) ;

constexpr void __cordl_internal_set_m_Settings(::MA::Flora::FloraRuntimeSettings*  value) ;

constexpr void __cordl_internal_set_m_Terrains(::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityW<::UnityEngine::Terrain>>*  value) ;

constexpr void __cordl_internal_set_m_TransformChangedActions(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::HashSet_1<::MA::Flora::FloraSystem_TransformChangedAction*>*>*  value) ;

/// @brief Method .ctor, addr 0x1814f2240, size 0x490, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_BeginFrame, addr 0x1814f26d0, size 0x90, virtual false, abstract: false, final false
static inline void add_BeginFrame(::System::Action*  value) ;

/// @brief Method add_DelayCall, addr 0x1814f2760, size 0x90, virtual false, abstract: false, final false
static inline void add_DelayCall(::System::Action*  value) ;

/// @brief Method add_DidStartRendering, addr 0x1814f27f0, size 0xb0, virtual false, abstract: false, final false
static inline void add_DidStartRendering(::System::Action_1<::MA::Flora::FloraSystem*>*  value) ;

/// @brief Method add_PostLateUpdate, addr 0x1814f28a0, size 0x90, virtual false, abstract: false, final false
static inline void add_PostLateUpdate(::System::Action*  value) ;

/// @brief Method add_WasCreated, addr 0x1814f2930, size 0xb0, virtual false, abstract: false, final false
static inline void add_WasCreated(::System::Action_1<::MA::Flora::FloraSystem*>*  value) ;

/// @brief Method add_WillBeDestroyed, addr 0x1814f29e0, size 0xb0, virtual false, abstract: false, final false
static inline void add_WillBeDestroyed(::System::Action_1<::MA::Flora::FloraSystem*>*  value) ;

/// @brief Method add_WillStopRendering, addr 0x1814f2a90, size 0xb0, virtual false, abstract: false, final false
static inline void add_WillStopRendering(::System::Action_1<::MA::Flora::FloraSystem*>*  value) ;

static inline ::System::Action* getStaticF_BeginFrame() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_BeginRenderingCameraMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_BeginRenderingContextMarker() ;

static inline ::System::Action* getStaticF_DelayCall() ;

static inline ::System::Action_1<::MA::Flora::FloraSystem*>* getStaticF_DidStartRendering() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_InitializeFrameMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_PerformBatchCullingMarker() ;

static inline ::System::Action* getStaticF_PostLateUpdate() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_PostLateUpdateMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_UpdateTrackingMarker() ;

static inline ::System::Action_1<::MA::Flora::FloraSystem*>* getStaticF_WasCreated() ;

static inline ::System::Action_1<::MA::Flora::FloraSystem*>* getStaticF_WillBeDestroyed() ;

static inline ::System::Action_1<::MA::Flora::FloraSystem*>* getStaticF_WillStopRendering() ;

static inline ::MA::Flora::FloraSystem* getStaticF__Instance_k__BackingField() ;

static inline int32_t getStaticF_s_CurrentScriptableRenderContextID() ;

static inline bool getStaticF_s_UnloadOrPlayModeChangeShutdownRegistered() ;

/// @brief Method get_Active, addr 0x1814f2b40, size 0x30, virtual false, abstract: false, final false
static inline bool get_Active() ;

/// @brief Method get_AllowAdditionalLightShadows, addr 0x1803e0b20, size 0x10, virtual false, abstract: false, final false
inline bool get_AllowAdditionalLightShadows() ;

/// @brief Method get_AllowDensityCulling, addr 0x1814f2b80, size 0x20, virtual false, abstract: false, final false
inline bool get_AllowDensityCulling() ;

/// @brief Method get_AllowDensityCullingOverride, addr 0x1814f2b70, size 0x10, virtual false, abstract: false, final false
inline bool get_AllowDensityCullingOverride() ;

/// @brief Method get_AllowGPUOcclusionCulling, addr 0x18049c410, size 0x10, virtual false, abstract: false, final false
inline bool get_AllowGPUOcclusionCulling() ;

/// @brief Method get_AllowLegacyLightProbes, addr 0x1814f2ba0, size 0x10, virtual false, abstract: false, final false
inline bool get_AllowLegacyLightProbes() ;

/// @brief Method get_AllowPerDetailLightProbes, addr 0x1814f2bb0, size 0x10, virtual false, abstract: false, final false
inline bool get_AllowPerDetailLightProbes() ;

/// @brief Method get_AllowPerDetailMotionVectors, addr 0x1814f2bc0, size 0x10, virtual false, abstract: false, final false
inline bool get_AllowPerDetailMotionVectors() ;

/// @brief Method get_AllowPerObjectMotionVectors, addr 0x1803e0b00, size 0x10, virtual false, abstract: false, final false
inline bool get_AllowPerObjectMotionVectors() ;

/// @brief Method get_AllowPerTreeLightProbes, addr 0x18049a520, size 0x10, virtual false, abstract: false, final false
inline bool get_AllowPerTreeLightProbes() ;

/// @brief Method get_AllowPerTreeMotionVectors, addr 0x1803023c0, size 0x10, virtual false, abstract: false, final false
inline bool get_AllowPerTreeMotionVectors() ;

/// @brief Method get_BatchRendererGroup, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::BatchRendererGroup* get_BatchRendererGroup() ;

/// @brief Method get_CullingGrid, addr 0x1814f2bd0, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid> get_CullingGrid() ;

/// @brief Method get_CullingPipeline, addr 0x1802edd00, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::FloraCullingPipeline get_CullingPipeline() ;

/// @brief Method get_CullingSystem, addr 0x1803a74e0, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::CullingSystem* get_CullingSystem() ;

/// @brief Method get_Exists, addr 0x1814f2be0, size 0x20, virtual false, abstract: false, final false
static inline bool get_Exists() ;

/// @brief Method get_FrameAllocator, addr 0x1814f2c00, size 0x30, virtual false, abstract: false, final false
inline ::by_ref<::Unity::Collections::RewindableAllocator> get_FrameAllocator() ;

/// @brief Method get_HasInstancesOrObjects, addr 0x1814f2c30, size 0x90, virtual false, abstract: false, final false
inline bool get_HasInstancesOrObjects() ;

/// @brief Method get_Instance, addr 0x1814f2cd0, size 0x20, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraSystem* get_Instance() ;

/// @brief Method get_InstanceManager, addr 0x1814f2cc0, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager> get_InstanceManager() ;

/// @brief Method get_MainLightOverride, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Light> get_MainLightOverride() ;

/// @brief Method get_RegisteredInstanceCount, addr 0x1814f2cf0, size 0xd0, virtual false, abstract: false, final false
inline int32_t get_RegisteredInstanceCount() ;

/// @brief Method get_RenderPipelineType, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::FloraRenderPipelineType get_RenderPipelineType() ;

/// @brief Method get_RenderTerrainFoliage, addr 0x1814f2dc0, size 0x10, virtual false, abstract: false, final false
inline bool get_RenderTerrainFoliage() ;

/// @brief Method get_RenderingEnabled, addr 0x1814f2dd0, size 0x10, virtual false, abstract: false, final false
inline bool get_RenderingEnabled() ;

/// @brief Method get_Resources, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::FloraRuntimeResources* get_Resources() ;

/// @brief Method remove_BeginFrame, addr 0x1814f2de0, size 0x90, virtual false, abstract: false, final false
static inline void remove_BeginFrame(::System::Action*  value) ;

/// @brief Method remove_DelayCall, addr 0x1814f2e70, size 0x90, virtual false, abstract: false, final false
static inline void remove_DelayCall(::System::Action*  value) ;

/// @brief Method remove_DidStartRendering, addr 0x1814f2f00, size 0xb0, virtual false, abstract: false, final false
static inline void remove_DidStartRendering(::System::Action_1<::MA::Flora::FloraSystem*>*  value) ;

/// @brief Method remove_PostLateUpdate, addr 0x1814f2fb0, size 0x90, virtual false, abstract: false, final false
static inline void remove_PostLateUpdate(::System::Action*  value) ;

/// @brief Method remove_WasCreated, addr 0x1814f3040, size 0xb0, virtual false, abstract: false, final false
static inline void remove_WasCreated(::System::Action_1<::MA::Flora::FloraSystem*>*  value) ;

/// @brief Method remove_WillBeDestroyed, addr 0x1814f30f0, size 0xb0, virtual false, abstract: false, final false
static inline void remove_WillBeDestroyed(::System::Action_1<::MA::Flora::FloraSystem*>*  value) ;

/// @brief Method remove_WillStopRendering, addr 0x1814f31a0, size 0xb0, virtual false, abstract: false, final false
static inline void remove_WillStopRendering(::System::Action_1<::MA::Flora::FloraSystem*>*  value) ;

static inline void setStaticF_BeginFrame(::System::Action*  value) ;

static inline void setStaticF_BeginRenderingCameraMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_BeginRenderingContextMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_DelayCall(::System::Action*  value) ;

static inline void setStaticF_DidStartRendering(::System::Action_1<::MA::Flora::FloraSystem*>*  value) ;

static inline void setStaticF_InitializeFrameMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_PerformBatchCullingMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_PostLateUpdate(::System::Action*  value) ;

static inline void setStaticF_PostLateUpdateMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_UpdateTrackingMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_WasCreated(::System::Action_1<::MA::Flora::FloraSystem*>*  value) ;

static inline void setStaticF_WillBeDestroyed(::System::Action_1<::MA::Flora::FloraSystem*>*  value) ;

static inline void setStaticF_WillStopRendering(::System::Action_1<::MA::Flora::FloraSystem*>*  value) ;

static inline void setStaticF__Instance_k__BackingField(::MA::Flora::FloraSystem*  value) ;

static inline void setStaticF_s_CurrentScriptableRenderContextID(int32_t  value) ;

static inline void setStaticF_s_UnloadOrPlayModeChangeShutdownRegistered(bool  value) ;

/// @brief Method set_AllowDensityCullingOverride, addr 0x1814f3250, size 0x10, virtual false, abstract: false, final false
inline void set_AllowDensityCullingOverride(bool  value) ;

/// @brief Method set_Instance, addr 0x1814f3260, size 0x30, virtual false, abstract: false, final false
static inline void set_Instance(::MA::Flora::FloraSystem*  value) ;

/// @brief Method set_RenderPipelineType, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void set_RenderPipelineType(::MA::Flora::FloraRenderPipelineType  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraSystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraSystem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraSystem(FloraSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraSystem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraSystem(FloraSystem const& ) = delete;

/// @brief Field BeginRenderingCameraMarkerName offset 0xffffffff size 0x8
static constexpr ::ConstString  BeginRenderingCameraMarkerName{u"Flora.BeginRenderingCamera"};

/// @brief Field BeginRenderingContextMarkerName offset 0xffffffff size 0x8
static constexpr ::ConstString  BeginRenderingContextMarkerName{u"Flora.BeginRenderingContext"};

/// @brief Field InitializeFrameMarkerName offset 0xffffffff size 0x8
static constexpr ::ConstString  InitializeFrameMarkerName{u"Flora.InitializeFrame"};

/// @brief Field PerformBatchCullingMarkerName offset 0xffffffff size 0x8
static constexpr ::ConstString  PerformBatchCullingMarkerName{u"Flora.PerformBatchCulling"};

/// @brief Field PostLateUpdateMarkerName offset 0xffffffff size 0x8
static constexpr ::ConstString  PostLateUpdateMarkerName{u"Flora.PostLateUpdate"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13299};

/// @brief Field m_TransformChangedActions, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::HashSet_1<::MA::Flora::FloraSystem_TransformChangedAction*>*>*  ___m_TransformChangedActions;

/// @brief Field <RenderPipelineType>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::MA::Flora::FloraRenderPipelineType  ____RenderPipelineType_k__BackingField;

/// @brief Field m_Resources, offset: 0x20, size: 0x8, def value: None
 ::MA::Flora::FloraRuntimeResources*  ___m_Resources;

/// @brief Field m_Settings, offset: 0x28, size: 0x8, def value: None
 ::MA::Flora::FloraRuntimeSettings*  ___m_Settings;

/// @brief Field m_ResolvedSettings, offset: 0x30, size: 0x1c, def value: None
 ::MA::Flora::ResolvedSystemSettings  ___m_ResolvedSettings;

/// @brief Field m_BatchRendererGroup, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Rendering::BatchRendererGroup*  ___m_BatchRendererGroup;

/// @brief Field m_PickingMaterial, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___m_PickingMaterial;

/// @brief Field m_LoadingMaterial, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___m_LoadingMaterial;

/// @brief Field m_ErrorMaterial, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___m_ErrorMaterial;

/// @brief Field m_InstanceRendererManager, offset: 0x70, size: 0x8, def value: None
 ::MA::Flora::InstanceRendererManager*  ___m_InstanceRendererManager;

/// @brief Field m_CullingSystem, offset: 0x78, size: 0x8, def value: None
 ::MA::Flora::CullingSystem*  ___m_CullingSystem;

/// @brief Field m_DisabledTerrains, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityEngine::EntityId>*  ___m_DisabledTerrains;

/// @brief Field m_Terrains, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityW<::UnityEngine::Terrain>>*  ___m_Terrains;

/// @brief Field m_Containers, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityW<::MA::Flora::FloraInstanceContainer>>*  ___m_Containers;

/// @brief Field m_InstanceRenderers, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityW<::MA::Flora::FloraInstanceRenderer>>*  ___m_InstanceRenderers;

/// @brief Field m_InstanceRendererChildren, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::System::Collections::Generic::HashSet_1<::UnityEngine::EntityId>*>*  ___m_InstanceRendererChildren;

/// @brief Field m_Renderers, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityW<::UnityEngine::Renderer>>*  ___m_Renderers;

/// @brief Field m_NativeContext, offset: 0xb0, size: 0x70, def value: None
 ::MA::Flora::InstanceContext  ___m_NativeContext;

/// @brief Field m_RenderPipeline, offset: 0x120, size: 0x8, def value: None
 ::MA::Flora::FloraRenderPipeline*  ___m_RenderPipeline;

/// @brief Field m_ObjectTracker, offset: 0x128, size: 0x8, def value: None
 ::MA::InternalBridge::UnityObjectDispatcher*  ___m_ObjectTracker;

/// @brief Field <AllowDensityCullingOverride>k__BackingField, offset: 0x130, size: 0x1, def value: None
 bool  ____AllowDensityCullingOverride_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FloraSystem, ___m_TransformChangedActions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSystem, ____RenderPipelineType_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSystem, ___m_Resources) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSystem, ___m_Settings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSystem, ___m_ResolvedSettings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSystem, ___m_BatchRendererGroup) == 0x50, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSystem, ___m_PickingMaterial) == 0x58, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSystem, ___m_LoadingMaterial) == 0x60, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSystem, ___m_ErrorMaterial) == 0x68, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSystem, ___m_InstanceRendererManager) == 0x70, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSystem, ___m_CullingSystem) == 0x78, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSystem, ___m_DisabledTerrains) == 0x80, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSystem, ___m_Terrains) == 0x88, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSystem, ___m_Containers) == 0x90, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSystem, ___m_InstanceRenderers) == 0x98, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSystem, ___m_InstanceRendererChildren) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSystem, ___m_Renderers) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSystem, ___m_NativeContext) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSystem, ___m_RenderPipeline) == 0x120, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSystem, ___m_ObjectTracker) == 0x128, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSystem, ____AllowDensityCullingOverride_k__BackingField) == 0x130, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FloraSystem) == 0x138, "Size mismatch!");

} // namespace end def MA::Flora
