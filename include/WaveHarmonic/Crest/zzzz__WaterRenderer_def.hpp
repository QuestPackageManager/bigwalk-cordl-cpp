#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/WaterRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__ManagerBehaviour_1_def.hpp"
#include "WaveHarmonic/Crest/zzzz__RenderPipeline_def.hpp"
#include "WaveHarmonic/Crest/zzzz__SurfaceRenderer_def.hpp"
#include "WaveHarmonic/Crest/zzzz__VisualizeDataTypes_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterBodyAffects_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterCameraExclusion_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterDataBackgroundMode_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterInjectionPoint_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WaterRenderer)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::Universal::Internal {
class CopyColorPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class CopyDepthPass;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Coroutine;
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
struct Matrix4x4;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture2DArray;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
class WindZone;
}
namespace WaveHarmonic::Crest::Portals {
class PortalRenderer;
}
namespace WaveHarmonic::Crest::Utility::Internal {
template<typename T>
class Stack_1;
}
namespace WaveHarmonic::Crest::Utility {
template<typename T>
class BufferedData_1;
}
namespace WaveHarmonic::Crest {
class AbsorptionLod;
}
namespace WaveHarmonic::Crest {
class AlbedoLod;
}
namespace WaveHarmonic::Crest {
class AnimatedWavesLod;
}
namespace WaveHarmonic::Crest {
struct BIRP_Rendering_FrameBufferFormatOverride;
}
namespace WaveHarmonic::Crest {
class ClipLod;
}
namespace WaveHarmonic::Crest {
class DepthLod;
}
namespace WaveHarmonic::Crest {
class DynamicWavesLod;
}
namespace WaveHarmonic::Crest {
class FlowLod;
}
namespace WaveHarmonic::Crest {
class FoamLod;
}
namespace WaveHarmonic::Crest {
class ICollisionProvider;
}
namespace WaveHarmonic::Crest {
class IDepthProvider;
}
namespace WaveHarmonic::Crest {
class IFlowProvider;
}
namespace WaveHarmonic::Crest {
class ITimeProvider;
}
namespace WaveHarmonic::Crest {
class LevelLod;
}
namespace WaveHarmonic::Crest {
class Lod;
}
namespace WaveHarmonic::Crest {
class MaskRenderer;
}
namespace WaveHarmonic::Crest {
class Meniscus;
}
namespace WaveHarmonic::Crest {
class SampleCollisionHelper;
}
namespace WaveHarmonic::Crest {
class SampleDepthHelper;
}
namespace WaveHarmonic::Crest {
class ScatteringLod;
}
namespace WaveHarmonic::Crest {
class ShadowLod;
}
namespace WaveHarmonic::Crest {
class SurfaceRenderer;
}
namespace WaveHarmonic::Crest {
class TimeProvider;
}
namespace WaveHarmonic::Crest {
class UnderwaterRenderer;
}
namespace WaveHarmonic::Crest {
struct WaterBodyAffects;
}
namespace WaveHarmonic::Crest {
struct WaterCameraExclusion;
}
namespace WaveHarmonic::Crest {
struct WaterDataBackgroundMode;
}
namespace WaveHarmonic::Crest {
struct WaterInjectionPoint;
}
namespace WaveHarmonic::Crest {
class WaterReflections;
}
namespace WaveHarmonic::Crest {
struct WaterRenderer_ActiveModules;
}
namespace WaveHarmonic::Crest {
class WaterRenderer_CopyTargetsRenderPass;
}
namespace WaveHarmonic::Crest {
class WaterRenderer_DebugFields;
}
namespace WaveHarmonic::Crest {
class WaterRenderer_PerCameraData;
}
namespace WaveHarmonic::Crest {
class WaterRenderer_ShaderIDs;
}
namespace WaveHarmonic::Crest {
class WaterRenderer__UpdateSkippedCameras_d__463;
}
namespace WaveHarmonic::Crest {
class WaterRenderer___c;
}
namespace WaveHarmonic::Crest {
class WaterResources;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
struct WaterRenderer_ActiveModules;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
namespace WaveHarmonic::Crest {
class WaterRenderer_CopyTargetsRenderPass;
}
namespace WaveHarmonic::Crest {
class WaterRenderer_DebugFields;
}
namespace WaveHarmonic::Crest {
class WaterRenderer_PerCameraData;
}
namespace WaveHarmonic::Crest {
class WaterRenderer_ShaderIDs;
}
namespace WaveHarmonic::Crest {
class WaterRenderer__UpdateSkippedCameras_d__463;
}
namespace WaveHarmonic::Crest {
class WaterRenderer___c;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::WaterRenderer_ActiveModules);
MARK_REF_T(::WaveHarmonic::Crest::WaterRenderer*);
MARK_REF_T(::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*);
MARK_REF_T(::WaveHarmonic::Crest::WaterRenderer_DebugFields*);
MARK_REF_T(::WaveHarmonic::Crest::WaterRenderer_PerCameraData*);
MARK_REF_T(::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*);
MARK_REF_T(::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463*);
MARK_REF_T(::WaveHarmonic::Crest::WaterRenderer___c*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WaterRenderer_ActiveModules, "WaveHarmonic.Crest", "WaterRenderer/ActiveModules");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WaterRenderer*, "WaveHarmonic.Crest", "WaterRenderer");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*, "WaveHarmonic.Crest", "WaterRenderer/CopyTargetsRenderPass");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WaterRenderer_DebugFields*, "WaveHarmonic.Crest", "WaterRenderer/DebugFields");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WaterRenderer_PerCameraData*, "WaveHarmonic.Crest", "WaterRenderer/PerCameraData");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*, "WaveHarmonic.Crest", "WaterRenderer/ShaderIDs");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463*, "WaveHarmonic.Crest", "WaterRenderer/<UpdateSkippedCameras>d__463");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WaterRenderer___c*, "WaveHarmonic.Crest", "WaterRenderer/<>c");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.WaterRenderer/ShaderIDs
class CORDL_TYPE WaterRenderer_ShaderIDs : public ::System::Object {
public:
// Declarations
/// @brief Field s_Absorption, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Absorption, put=setStaticF_s_Absorption)) int32_t  s_Absorption;

/// @brief Field s_AbsorptionColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_AbsorptionColor, put=setStaticF_s_AbsorptionColor)) int32_t  s_AbsorptionColor;

/// @brief Field s_AmbientTerm, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_AmbientTerm, put=setStaticF_s_AmbientTerm)) int32_t  s_AmbientTerm;

/// @brief Field s_Anisotropy, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Anisotropy, put=setStaticF_s_Anisotropy)) int32_t  s_Anisotropy;

/// @brief Field s_CascadeData, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_CascadeData, put=setStaticF_s_CascadeData)) int32_t  s_CascadeData;

/// @brief Field s_CascadeDataSource, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_CascadeDataSource, put=setStaticF_s_CascadeDataSource)) int32_t  s_CascadeDataSource;

/// @brief Field s_Center, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Center, put=setStaticF_s_Center)) int32_t  s_Center;

/// @brief Field s_CenterDelta, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_CenterDelta, put=setStaticF_s_CenterDelta)) int32_t  s_CenterDelta;

/// @brief Field s_DirectTerm, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_DirectTerm, put=setStaticF_s_DirectTerm)) int32_t  s_DirectTerm;

/// @brief Field s_HorizonNormal, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_HorizonNormal, put=setStaticF_s_HorizonNormal)) int32_t  s_HorizonNormal;

/// @brief Field s_LodChange, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_LodChange, put=setStaticF_s_LodChange)) int32_t  s_LodChange;

/// @brief Field s_LodCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_LodCount, put=setStaticF_s_LodCount)) int32_t  s_LodCount;

/// @brief Field s_MaximumVerticalDisplacement, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_MaximumVerticalDisplacement, put=setStaticF_s_MaximumVerticalDisplacement)) int32_t  s_MaximumVerticalDisplacement;

/// @brief Field s_MeshScaleLerp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_MeshScaleLerp, put=setStaticF_s_MeshScaleLerp)) int32_t  s_MeshScaleLerp;

/// @brief Field s_Occlusion, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Occlusion, put=setStaticF_s_Occlusion)) int32_t  s_Occlusion;

/// @brief Field s_OcclusionUnderwater, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_OcclusionUnderwater, put=setStaticF_s_OcclusionUnderwater)) int32_t  s_OcclusionUnderwater;

/// @brief Field s_PlanarReflectionsEnabled, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_PlanarReflectionsEnabled, put=setStaticF_s_PlanarReflectionsEnabled)) int32_t  s_PlanarReflectionsEnabled;

/// @brief Field s_PrimaryLightDirection, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_PrimaryLightDirection, put=setStaticF_s_PrimaryLightDirection)) int32_t  s_PrimaryLightDirection;

/// @brief Field s_PrimaryLightFallback, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_PrimaryLightFallback, put=setStaticF_s_PrimaryLightFallback)) int32_t  s_PrimaryLightFallback;

/// @brief Field s_PrimaryLightHasCookie, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_PrimaryLightHasCookie, put=setStaticF_s_PrimaryLightHasCookie)) int32_t  s_PrimaryLightHasCookie;

/// @brief Field s_PrimaryLightIntensity, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_PrimaryLightIntensity, put=setStaticF_s_PrimaryLightIntensity)) int32_t  s_PrimaryLightIntensity;

/// @brief Field s_Scale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Scale, put=setStaticF_s_Scale)) int32_t  s_Scale;

/// @brief Field s_ScaleChange, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ScaleChange, put=setStaticF_s_ScaleChange)) int32_t  s_ScaleChange;

/// @brief Field s_Scattering, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Scattering, put=setStaticF_s_Scattering)) int32_t  s_Scattering;

/// @brief Field s_ScreenSpaceShadowTexture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ScreenSpaceShadowTexture, put=setStaticF_s_ScreenSpaceShadowTexture)) int32_t  s_ScreenSpaceShadowTexture;

/// @brief Field s_ShadowsAffectsAmbientFactor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ShadowsAffectsAmbientFactor, put=setStaticF_s_ShadowsAffectsAmbientFactor)) int32_t  s_ShadowsAffectsAmbientFactor;

/// @brief Field s_TemporaryDepthTexture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_TemporaryDepthTexture, put=setStaticF_s_TemporaryDepthTexture)) int32_t  s_TemporaryDepthTexture;

/// @brief Field s_Time, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Time, put=setStaticF_s_Time)) int32_t  s_Time;

/// @brief Field s_VolumeExtinctionLength, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_VolumeExtinctionLength, put=setStaticF_s_VolumeExtinctionLength)) int32_t  s_VolumeExtinctionLength;

/// @brief Field s_WaterDepthAtViewer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_WaterDepthAtViewer, put=setStaticF_s_WaterDepthAtViewer)) int32_t  s_WaterDepthAtViewer;

static inline int32_t getStaticF_s_Absorption() ;

static inline int32_t getStaticF_s_AbsorptionColor() ;

static inline int32_t getStaticF_s_AmbientTerm() ;

static inline int32_t getStaticF_s_Anisotropy() ;

static inline int32_t getStaticF_s_CascadeData() ;

static inline int32_t getStaticF_s_CascadeDataSource() ;

static inline int32_t getStaticF_s_Center() ;

static inline int32_t getStaticF_s_CenterDelta() ;

static inline int32_t getStaticF_s_DirectTerm() ;

static inline int32_t getStaticF_s_HorizonNormal() ;

static inline int32_t getStaticF_s_LodChange() ;

static inline int32_t getStaticF_s_LodCount() ;

static inline int32_t getStaticF_s_MaximumVerticalDisplacement() ;

static inline int32_t getStaticF_s_MeshScaleLerp() ;

static inline int32_t getStaticF_s_Occlusion() ;

static inline int32_t getStaticF_s_OcclusionUnderwater() ;

static inline int32_t getStaticF_s_PlanarReflectionsEnabled() ;

static inline int32_t getStaticF_s_PrimaryLightDirection() ;

static inline int32_t getStaticF_s_PrimaryLightFallback() ;

static inline int32_t getStaticF_s_PrimaryLightHasCookie() ;

static inline int32_t getStaticF_s_PrimaryLightIntensity() ;

static inline int32_t getStaticF_s_Scale() ;

static inline int32_t getStaticF_s_ScaleChange() ;

static inline int32_t getStaticF_s_Scattering() ;

static inline int32_t getStaticF_s_ScreenSpaceShadowTexture() ;

static inline int32_t getStaticF_s_ShadowsAffectsAmbientFactor() ;

static inline int32_t getStaticF_s_TemporaryDepthTexture() ;

static inline int32_t getStaticF_s_Time() ;

static inline int32_t getStaticF_s_VolumeExtinctionLength() ;

static inline int32_t getStaticF_s_WaterDepthAtViewer() ;

static inline void setStaticF_s_Absorption(int32_t  value) ;

static inline void setStaticF_s_AbsorptionColor(int32_t  value) ;

static inline void setStaticF_s_AmbientTerm(int32_t  value) ;

static inline void setStaticF_s_Anisotropy(int32_t  value) ;

static inline void setStaticF_s_CascadeData(int32_t  value) ;

static inline void setStaticF_s_CascadeDataSource(int32_t  value) ;

static inline void setStaticF_s_Center(int32_t  value) ;

static inline void setStaticF_s_CenterDelta(int32_t  value) ;

static inline void setStaticF_s_DirectTerm(int32_t  value) ;

static inline void setStaticF_s_HorizonNormal(int32_t  value) ;

static inline void setStaticF_s_LodChange(int32_t  value) ;

static inline void setStaticF_s_LodCount(int32_t  value) ;

static inline void setStaticF_s_MaximumVerticalDisplacement(int32_t  value) ;

static inline void setStaticF_s_MeshScaleLerp(int32_t  value) ;

static inline void setStaticF_s_Occlusion(int32_t  value) ;

static inline void setStaticF_s_OcclusionUnderwater(int32_t  value) ;

static inline void setStaticF_s_PlanarReflectionsEnabled(int32_t  value) ;

static inline void setStaticF_s_PrimaryLightDirection(int32_t  value) ;

static inline void setStaticF_s_PrimaryLightFallback(int32_t  value) ;

static inline void setStaticF_s_PrimaryLightHasCookie(int32_t  value) ;

static inline void setStaticF_s_PrimaryLightIntensity(int32_t  value) ;

static inline void setStaticF_s_Scale(int32_t  value) ;

static inline void setStaticF_s_ScaleChange(int32_t  value) ;

static inline void setStaticF_s_Scattering(int32_t  value) ;

static inline void setStaticF_s_ScreenSpaceShadowTexture(int32_t  value) ;

static inline void setStaticF_s_ShadowsAffectsAmbientFactor(int32_t  value) ;

static inline void setStaticF_s_TemporaryDepthTexture(int32_t  value) ;

static inline void setStaticF_s_Time(int32_t  value) ;

static inline void setStaticF_s_VolumeExtinctionLength(int32_t  value) ;

static inline void setStaticF_s_WaterDepthAtViewer(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterRenderer_ShaderIDs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterRenderer_ShaderIDs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterRenderer_ShaderIDs(WaterRenderer_ShaderIDs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterRenderer_ShaderIDs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterRenderer_ShaderIDs(WaterRenderer_ShaderIDs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16633};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::WaterRenderer_ShaderIDs) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object, WaveHarmonic.Crest.VisualizeDataTypes
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.WaterRenderer/DebugFields
class CORDL_TYPE WaterRenderer_DebugFields : public ::System::Object {
public:
// Declarations
/// @brief Field _AttachDebugGUI, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get__AttachDebugGUI, put=__cordl_internal_set__AttachDebugGUI)) bool  _AttachDebugGUI;

/// @brief Field _DestroyResourcesInOnDisable, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get__DestroyResourcesInOnDisable, put=__cordl_internal_set__DestroyResourcesInOnDisable)) bool  _DestroyResourcesInOnDisable;

/// @brief Field _DisableFollowViewpoint, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get__DisableFollowViewpoint, put=__cordl_internal_set__DisableFollowViewpoint)) bool  _DisableFollowViewpoint;

/// @brief Field _ForceNoGraphics, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__ForceNoGraphics, put=__cordl_internal_set__ForceNoGraphics)) bool  _ForceNoGraphics;

/// @brief Field _IgnoreWavesForScaleChange, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__IgnoreWavesForScaleChange, put=__cordl_internal_set__IgnoreWavesForScaleChange)) bool  _IgnoreWavesForScaleChange;

/// @brief Field _LogScaleChange, offset 0x26, size 0x1 
 __declspec(property(get=__cordl_internal_get__LogScaleChange, put=__cordl_internal_set__LogScaleChange)) bool  _LogScaleChange;

/// @brief Field _OverrideScale, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get__OverrideScale, put=__cordl_internal_set__OverrideScale)) bool  _OverrideScale;

/// @brief Field _PauseOnScaleChange, offset 0x27, size 0x1 
 __declspec(property(get=__cordl_internal_get__PauseOnScaleChange, put=__cordl_internal_set__PauseOnScaleChange)) bool  _PauseOnScaleChange;

/// @brief Field _ScaleOverride, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__ScaleOverride, put=__cordl_internal_set__ScaleOverride)) int32_t  _ScaleOverride;

/// @brief Field _ShowHiddenObjects, offset 0x23, size 0x1 
 __declspec(property(get=__cordl_internal_get__ShowHiddenObjects, put=__cordl_internal_set__ShowHiddenObjects)) bool  _ShowHiddenObjects;

/// @brief Field _SimulatePaused, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get__SimulatePaused, put=__cordl_internal_set__SimulatePaused)) bool  _SimulatePaused;

/// @brief Field _VisualizeData, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__VisualizeData, put=__cordl_internal_set__VisualizeData)) bool  _VisualizeData;

/// @brief Field _VisualizeDataExposure, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__VisualizeDataExposure, put=__cordl_internal_set__VisualizeDataExposure)) float_t  _VisualizeDataExposure;

/// @brief Field _VisualizeDataRange, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__VisualizeDataRange, put=__cordl_internal_set__VisualizeDataRange)) float_t  _VisualizeDataRange;

/// @brief Field _VisualizeDataSaturate, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__VisualizeDataSaturate, put=__cordl_internal_set__VisualizeDataSaturate)) bool  _VisualizeDataSaturate;

/// @brief Field _VisualizeDataType, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__VisualizeDataType, put=__cordl_internal_set__VisualizeDataType)) ::WaveHarmonic::Crest::VisualizeDataTypes  _VisualizeDataType;

static inline ::WaveHarmonic::Crest::WaterRenderer_DebugFields* New_ctor() ;

constexpr bool const& __cordl_internal_get__AttachDebugGUI() const;

constexpr bool& __cordl_internal_get__AttachDebugGUI() ;

constexpr bool const& __cordl_internal_get__DestroyResourcesInOnDisable() const;

constexpr bool& __cordl_internal_get__DestroyResourcesInOnDisable() ;

constexpr bool const& __cordl_internal_get__DisableFollowViewpoint() const;

constexpr bool& __cordl_internal_get__DisableFollowViewpoint() ;

constexpr bool const& __cordl_internal_get__ForceNoGraphics() const;

constexpr bool& __cordl_internal_get__ForceNoGraphics() ;

constexpr bool const& __cordl_internal_get__IgnoreWavesForScaleChange() const;

constexpr bool& __cordl_internal_get__IgnoreWavesForScaleChange() ;

constexpr bool const& __cordl_internal_get__LogScaleChange() const;

constexpr bool& __cordl_internal_get__LogScaleChange() ;

constexpr bool const& __cordl_internal_get__OverrideScale() const;

constexpr bool& __cordl_internal_get__OverrideScale() ;

constexpr bool const& __cordl_internal_get__PauseOnScaleChange() const;

constexpr bool& __cordl_internal_get__PauseOnScaleChange() ;

constexpr int32_t const& __cordl_internal_get__ScaleOverride() const;

constexpr int32_t& __cordl_internal_get__ScaleOverride() ;

constexpr bool const& __cordl_internal_get__ShowHiddenObjects() const;

constexpr bool& __cordl_internal_get__ShowHiddenObjects() ;

constexpr bool const& __cordl_internal_get__SimulatePaused() const;

constexpr bool& __cordl_internal_get__SimulatePaused() ;

constexpr bool const& __cordl_internal_get__VisualizeData() const;

constexpr bool& __cordl_internal_get__VisualizeData() ;

constexpr float_t const& __cordl_internal_get__VisualizeDataExposure() const;

constexpr float_t& __cordl_internal_get__VisualizeDataExposure() ;

constexpr float_t const& __cordl_internal_get__VisualizeDataRange() const;

constexpr float_t& __cordl_internal_get__VisualizeDataRange() ;

constexpr bool const& __cordl_internal_get__VisualizeDataSaturate() const;

constexpr bool& __cordl_internal_get__VisualizeDataSaturate() ;

constexpr ::WaveHarmonic::Crest::VisualizeDataTypes const& __cordl_internal_get__VisualizeDataType() const;

constexpr ::WaveHarmonic::Crest::VisualizeDataTypes& __cordl_internal_get__VisualizeDataType() ;

constexpr void __cordl_internal_set__AttachDebugGUI(bool  value) ;

constexpr void __cordl_internal_set__DestroyResourcesInOnDisable(bool  value) ;

constexpr void __cordl_internal_set__DisableFollowViewpoint(bool  value) ;

constexpr void __cordl_internal_set__ForceNoGraphics(bool  value) ;

constexpr void __cordl_internal_set__IgnoreWavesForScaleChange(bool  value) ;

constexpr void __cordl_internal_set__LogScaleChange(bool  value) ;

constexpr void __cordl_internal_set__OverrideScale(bool  value) ;

constexpr void __cordl_internal_set__PauseOnScaleChange(bool  value) ;

constexpr void __cordl_internal_set__ScaleOverride(int32_t  value) ;

constexpr void __cordl_internal_set__ShowHiddenObjects(bool  value) ;

constexpr void __cordl_internal_set__SimulatePaused(bool  value) ;

constexpr void __cordl_internal_set__VisualizeData(bool  value) ;

constexpr void __cordl_internal_set__VisualizeDataExposure(float_t  value) ;

constexpr void __cordl_internal_set__VisualizeDataRange(float_t  value) ;

constexpr void __cordl_internal_set__VisualizeDataSaturate(bool  value) ;

constexpr void __cordl_internal_set__VisualizeDataType(::WaveHarmonic::Crest::VisualizeDataTypes  value) ;

/// @brief Method .ctor, addr 0x18258bc70, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterRenderer_DebugFields() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterRenderer_DebugFields", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterRenderer_DebugFields(WaterRenderer_DebugFields && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterRenderer_DebugFields", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterRenderer_DebugFields(WaterRenderer_DebugFields const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16634};

/// @brief Field _VisualizeData, offset: 0x10, size: 0x1, def value: None
 bool  ____VisualizeData;

/// @brief Field _VisualizeDataType, offset: 0x14, size: 0x4, def value: None
 ::WaveHarmonic::Crest::VisualizeDataTypes  ____VisualizeDataType;

/// @brief Field _VisualizeDataExposure, offset: 0x18, size: 0x4, def value: None
 float_t  ____VisualizeDataExposure;

/// @brief Field _VisualizeDataRange, offset: 0x1c, size: 0x4, def value: None
 float_t  ____VisualizeDataRange;

/// @brief Field _VisualizeDataSaturate, offset: 0x20, size: 0x1, def value: None
 bool  ____VisualizeDataSaturate;

/// @brief Field _SimulatePaused, offset: 0x21, size: 0x1, def value: None
 bool  ____SimulatePaused;

/// @brief Field _AttachDebugGUI, offset: 0x22, size: 0x1, def value: None
 bool  ____AttachDebugGUI;

/// @brief Field _ShowHiddenObjects, offset: 0x23, size: 0x1, def value: None
 bool  ____ShowHiddenObjects;

/// @brief Field _DisableFollowViewpoint, offset: 0x24, size: 0x1, def value: None
 bool  ____DisableFollowViewpoint;

/// @brief Field _DestroyResourcesInOnDisable, offset: 0x25, size: 0x1, def value: None
 bool  ____DestroyResourcesInOnDisable;

/// @brief Field _LogScaleChange, offset: 0x26, size: 0x1, def value: None
 bool  ____LogScaleChange;

/// @brief Field _PauseOnScaleChange, offset: 0x27, size: 0x1, def value: None
 bool  ____PauseOnScaleChange;

/// @brief Field _IgnoreWavesForScaleChange, offset: 0x28, size: 0x1, def value: None
 bool  ____IgnoreWavesForScaleChange;

/// @brief Field _OverrideScale, offset: 0x29, size: 0x1, def value: None
 bool  ____OverrideScale;

/// @brief Field _ScaleOverride, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____ScaleOverride;

/// @brief Field _ForceNoGraphics, offset: 0x30, size: 0x1, def value: None
 bool  ____ForceNoGraphics;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer_DebugFields, ____VisualizeData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer_DebugFields, ____VisualizeDataType) == 0x14, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer_DebugFields, ____VisualizeDataExposure) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer_DebugFields, ____VisualizeDataRange) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer_DebugFields, ____VisualizeDataSaturate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer_DebugFields, ____SimulatePaused) == 0x21, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer_DebugFields, ____AttachDebugGUI) == 0x22, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer_DebugFields, ____ShowHiddenObjects) == 0x23, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer_DebugFields, ____DisableFollowViewpoint) == 0x24, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer_DebugFields, ____DestroyResourcesInOnDisable) == 0x25, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer_DebugFields, ____LogScaleChange) == 0x26, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer_DebugFields, ____PauseOnScaleChange) == 0x27, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer_DebugFields, ____IgnoreWavesForScaleChange) == 0x28, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer_DebugFields, ____OverrideScale) == 0x29, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer_DebugFields, ____ScaleOverride) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer_DebugFields, ____ForceNoGraphics) == 0x30, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::WaterRenderer_DebugFields) == 0x38, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.WaterRenderer/CopyTargetsRenderPass
class CORDL_TYPE WaterRenderer_CopyTargetsRenderPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
// Declarations
/// @brief Field _CopyColorMaterial, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__CopyColorMaterial, put=__cordl_internal_set__CopyColorMaterial)) ::UnityW<::UnityEngine::Material>  _CopyColorMaterial;

/// @brief Field _CopyColorPass, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__CopyColorPass, put=__cordl_internal_set__CopyColorPass)) ::UnityEngine::Rendering::Universal::Internal::CopyColorPass*  _CopyColorPass;

/// @brief Field _CopyDepthMaterial, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__CopyDepthMaterial, put=__cordl_internal_set__CopyDepthMaterial)) ::UnityW<::UnityEngine::Material>  _CopyDepthMaterial;

/// @brief Field _CopyDepthPass, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__CopyDepthPass, put=__cordl_internal_set__CopyDepthPass)) ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*  _CopyDepthPass;

/// @brief Field _CopyDepthShader, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__CopyDepthShader, put=__cordl_internal_set__CopyDepthShader)) ::UnityW<::UnityEngine::Shader>  _CopyDepthShader;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*  _Instance_k__BackingField;

/// @brief Field _SampleColorMaterial, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__SampleColorMaterial, put=__cordl_internal_set__SampleColorMaterial)) ::UnityW<::UnityEngine::Material>  _SampleColorMaterial;

/// @brief Field _Water, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__Water, put=__cordl_internal_set__Water)) ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  _Water;

/// @brief Field s_ActiveRenderPassQueue, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ActiveRenderPassQueue, put=setStaticF_s_ActiveRenderPassQueue)) ::System::Reflection::FieldInfo*  s_ActiveRenderPassQueue;

/// @brief Field s_OpaqueColor, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_OpaqueColor, put=setStaticF_s_OpaqueColor)) ::System::Reflection::FieldInfo*  s_OpaqueColor;

/// @brief Method Destroy, addr 0x18258af80, size 0x40, virtual false, abstract: false, final false
inline void Destroy() ;

/// @brief Method Enable, addr 0x18258afc0, size 0x200, virtual false, abstract: false, final false
static inline void Enable(::WaveHarmonic::Crest::WaterRenderer*  water) ;

static inline ::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass* New_ctor(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method OnBeginCameraRendering, addr 0x18258b1c0, size 0x110, virtual false, abstract: false, final false
inline void OnBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera) ;

/// @brief Method RecordRenderGraph, addr 0x18258b2d0, size 0x260, virtual true, abstract: false, final false
inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  graph, ::UnityEngine::Rendering::ContextContainer*  frame) ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__CopyColorMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__CopyColorMaterial() ;

constexpr ::UnityEngine::Rendering::Universal::Internal::CopyColorPass* const& __cordl_internal_get__CopyColorPass() const;

constexpr ::UnityEngine::Rendering::Universal::Internal::CopyColorPass*& __cordl_internal_get__CopyColorPass() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__CopyDepthMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__CopyDepthMaterial() ;

constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* const& __cordl_internal_get__CopyDepthPass() const;

constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*& __cordl_internal_get__CopyDepthPass() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__CopyDepthShader() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__CopyDepthShader() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__SampleColorMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__SampleColorMaterial() ;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& __cordl_internal_get__Water() const;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& __cordl_internal_get__Water() ;

constexpr void __cordl_internal_set__CopyColorMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__CopyColorPass(::UnityEngine::Rendering::Universal::Internal::CopyColorPass*  value) ;

constexpr void __cordl_internal_set__CopyDepthMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__CopyDepthPass(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*  value) ;

constexpr void __cordl_internal_set__CopyDepthShader(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set__SampleColorMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__Water(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value) ;

/// @brief Method .ctor, addr 0x18258b610, size 0x1c0, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::WaterRenderer*  water) ;

static inline ::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass* getStaticF__Instance_k__BackingField() ;

static inline ::System::Reflection::FieldInfo* getStaticF_s_ActiveRenderPassQueue() ;

static inline ::System::Reflection::FieldInfo* getStaticF_s_OpaqueColor() ;

/// @brief Method get_Instance, addr 0x18258b7d0, size 0x40, virtual false, abstract: false, final false
static inline ::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass* get_Instance() ;

static inline void setStaticF__Instance_k__BackingField(::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*  value) ;

static inline void setStaticF_s_ActiveRenderPassQueue(::System::Reflection::FieldInfo*  value) ;

static inline void setStaticF_s_OpaqueColor(::System::Reflection::FieldInfo*  value) ;

/// @brief Method set_Instance, addr 0x18258b810, size 0x50, virtual false, abstract: false, final false
static inline void set_Instance(::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterRenderer_CopyTargetsRenderPass() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterRenderer_CopyTargetsRenderPass", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterRenderer_CopyTargetsRenderPass(WaterRenderer_CopyTargetsRenderPass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterRenderer_CopyTargetsRenderPass", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterRenderer_CopyTargetsRenderPass(WaterRenderer_CopyTargetsRenderPass const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16635};

/// @brief Field _Water, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  ____Water;

/// @brief Field _CopyDepthPass, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*  ____CopyDepthPass;

/// @brief Field _CopyDepthShader, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ____CopyDepthShader;

/// @brief Field _CopyDepthMaterial, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____CopyDepthMaterial;

/// @brief Field _CopyColorPass, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::Internal::CopyColorPass*  ____CopyColorPass;

/// @brief Field _CopyColorMaterial, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____CopyColorMaterial;

/// @brief Field _SampleColorMaterial, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____SampleColorMaterial;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass, ____Water) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass, ____CopyDepthPass) == 0x68, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass, ____CopyDepthShader) == 0x70, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass, ____CopyDepthMaterial) == 0x78, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass, ____CopyColorPass) == 0x80, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass, ____CopyColorMaterial) == 0x88, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass, ____SampleColorMaterial) == 0x90, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass) == 0x98, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.WaterRenderer/ActiveModules
struct CORDL_TYPE WaterRenderer_ActiveModules {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WaterRenderer_ActiveModules_Unwrapped
enum struct __WaterRenderer_ActiveModules_Unwrapped : int32_t {
__E_Nothing = static_cast<int32_t>(0x0),
__E_Surface = static_cast<int32_t>(0x2),
__E_Volume = static_cast<int32_t>(0x4),
__E_SurfaceAndVolume = static_cast<int32_t>(0x6),
__E_Reflections = static_cast<int32_t>(0x8),
__E_Portal = static_cast<int32_t>(0x10),
__E_Meniscus = static_cast<int32_t>(0x20),
__E_Mask = static_cast<int32_t>(0x40),
__E_Shadows = static_cast<int32_t>(0x80),
__E_Everything = static_cast<int32_t>(0xffffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WaterRenderer_ActiveModules_Unwrapped () const noexcept {
return static_cast<__WaterRenderer_ActiveModules_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WaterRenderer_ActiveModules() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr WaterRenderer_ActiveModules(int32_t  value__) noexcept;

/// @brief Field Everything value: I32(-1)
static ::WaveHarmonic::Crest::WaterRenderer_ActiveModules const Everything;

/// @brief Field Mask value: I32(64)
static ::WaveHarmonic::Crest::WaterRenderer_ActiveModules const Mask;

/// @brief Field Meniscus value: I32(32)
static ::WaveHarmonic::Crest::WaterRenderer_ActiveModules const Meniscus;

/// @brief Field Nothing value: I32(0)
static ::WaveHarmonic::Crest::WaterRenderer_ActiveModules const Nothing;

/// @brief Field Portal value: I32(16)
static ::WaveHarmonic::Crest::WaterRenderer_ActiveModules const Portal;

/// @brief Field Reflections value: I32(8)
static ::WaveHarmonic::Crest::WaterRenderer_ActiveModules const Reflections;

/// @brief Field Shadows value: I32(128)
static ::WaveHarmonic::Crest::WaterRenderer_ActiveModules const Shadows;

/// @brief Field Surface value: I32(2)
static ::WaveHarmonic::Crest::WaterRenderer_ActiveModules const Surface;

/// @brief Field SurfaceAndVolume value: I32(6)
static ::WaveHarmonic::Crest::WaterRenderer_ActiveModules const SurfaceAndVolume;

/// @brief Field Volume value: I32(4)
static ::WaveHarmonic::Crest::WaterRenderer_ActiveModules const Volume;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16636};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer_ActiveModules, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::WaterRenderer_ActiveModules) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object, UnityEngine.Vector3
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.WaterRenderer/PerCameraData
class CORDL_TYPE WaterRenderer_PerCameraData : public ::System::Object {
public:
// Declarations
/// @brief Field _CascadeData, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__CascadeData, put=__cordl_internal_set__CascadeData)) ::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*  _CascadeData;

/// @brief Field _ExecutedThisFrame, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get__ExecutedThisFrame, put=__cordl_internal_set__ExecutedThisFrame)) bool  _ExecutedThisFrame;

/// @brief Field _IsFirstFrameSinceEnabled, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsFirstFrameSinceEnabled, put=__cordl_internal_set__IsFirstFrameSinceEnabled)) bool  _IsFirstFrameSinceEnabled;

/// @brief Field _LastFrame, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__LastFrame, put=__cordl_internal_set__LastFrame)) int32_t  _LastFrame;

/// @brief Field _OldViewpointPosition, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get__OldViewpointPosition, put=__cordl_internal_set__OldViewpointPosition)) ::UnityEngine::Vector3  _OldViewpointPosition;

/// @brief Field _Position, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get__Position, put=__cordl_internal_set__Position)) ::UnityEngine::Vector3  _Position;

/// @brief Field _RenderedThisFrame, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__RenderedThisFrame, put=__cordl_internal_set__RenderedThisFrame)) bool  _RenderedThisFrame;

/// @brief Field _Scale, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__Scale, put=__cordl_internal_set__Scale)) float_t  _Scale;

/// @brief Field _ViewerDistanceToShoreline, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__ViewerDistanceToShoreline, put=__cordl_internal_set__ViewerDistanceToShoreline)) float_t  _ViewerDistanceToShoreline;

/// @brief Field _ViewerHeightAboveWater, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__ViewerHeightAboveWater, put=__cordl_internal_set__ViewerHeightAboveWater)) float_t  _ViewerHeightAboveWater;

/// @brief Field _ViewpointHeightAboveWaterSmooth, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__ViewpointHeightAboveWaterSmooth, put=__cordl_internal_set__ViewpointHeightAboveWaterSmooth)) float_t  _ViewpointHeightAboveWaterSmooth;

static inline ::WaveHarmonic::Crest::WaterRenderer_PerCameraData* New_ctor() ;

constexpr ::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>* const& __cordl_internal_get__CascadeData() const;

constexpr ::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*& __cordl_internal_get__CascadeData() ;

constexpr bool const& __cordl_internal_get__ExecutedThisFrame() const;

constexpr bool& __cordl_internal_get__ExecutedThisFrame() ;

constexpr bool const& __cordl_internal_get__IsFirstFrameSinceEnabled() const;

constexpr bool& __cordl_internal_get__IsFirstFrameSinceEnabled() ;

constexpr int32_t const& __cordl_internal_get__LastFrame() const;

constexpr int32_t& __cordl_internal_get__LastFrame() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__OldViewpointPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__OldViewpointPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__Position() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__Position() ;

constexpr bool const& __cordl_internal_get__RenderedThisFrame() const;

constexpr bool& __cordl_internal_get__RenderedThisFrame() ;

constexpr float_t const& __cordl_internal_get__Scale() const;

constexpr float_t& __cordl_internal_get__Scale() ;

constexpr float_t const& __cordl_internal_get__ViewerDistanceToShoreline() const;

constexpr float_t& __cordl_internal_get__ViewerDistanceToShoreline() ;

constexpr float_t const& __cordl_internal_get__ViewerHeightAboveWater() const;

constexpr float_t& __cordl_internal_get__ViewerHeightAboveWater() ;

constexpr float_t const& __cordl_internal_get__ViewpointHeightAboveWaterSmooth() const;

constexpr float_t& __cordl_internal_get__ViewpointHeightAboveWaterSmooth() ;

constexpr void __cordl_internal_set__CascadeData(::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*  value) ;

constexpr void __cordl_internal_set__ExecutedThisFrame(bool  value) ;

constexpr void __cordl_internal_set__IsFirstFrameSinceEnabled(bool  value) ;

constexpr void __cordl_internal_set__LastFrame(int32_t  value) ;

constexpr void __cordl_internal_set__OldViewpointPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__Position(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__RenderedThisFrame(bool  value) ;

constexpr void __cordl_internal_set__Scale(float_t  value) ;

constexpr void __cordl_internal_set__ViewerDistanceToShoreline(float_t  value) ;

constexpr void __cordl_internal_set__ViewerHeightAboveWater(float_t  value) ;

constexpr void __cordl_internal_set__ViewpointHeightAboveWaterSmooth(float_t  value) ;

/// @brief Method .ctor, addr 0x18258e460, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterRenderer_PerCameraData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterRenderer_PerCameraData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterRenderer_PerCameraData(WaterRenderer_PerCameraData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterRenderer_PerCameraData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterRenderer_PerCameraData(WaterRenderer_PerCameraData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16637};

/// @brief Field _RenderedThisFrame, offset: 0x10, size: 0x1, def value: None
 bool  ____RenderedThisFrame;

/// @brief Field _ExecutedThisFrame, offset: 0x11, size: 0x1, def value: None
 bool  ____ExecutedThisFrame;

/// @brief Field _Scale, offset: 0x14, size: 0x4, def value: None
 float_t  ____Scale;

/// @brief Field _Position, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____Position;

/// @brief Field _OldViewpointPosition, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____OldViewpointPosition;

/// @brief Field _ViewpointHeightAboveWaterSmooth, offset: 0x30, size: 0x4, def value: None
 float_t  ____ViewpointHeightAboveWaterSmooth;

/// @brief Field _IsFirstFrameSinceEnabled, offset: 0x34, size: 0x1, def value: None
 bool  ____IsFirstFrameSinceEnabled;

/// @brief Field _CascadeData, offset: 0x38, size: 0x8, def value: None
 ::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*  ____CascadeData;

/// @brief Field _ViewerHeightAboveWater, offset: 0x40, size: 0x4, def value: None
 float_t  ____ViewerHeightAboveWater;

/// @brief Field _ViewerDistanceToShoreline, offset: 0x44, size: 0x4, def value: None
 float_t  ____ViewerDistanceToShoreline;

/// @brief Field _LastFrame, offset: 0x48, size: 0x4, def value: None
 int32_t  ____LastFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer_PerCameraData, ____RenderedThisFrame) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer_PerCameraData, ____ExecutedThisFrame) == 0x11, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer_PerCameraData, ____Scale) == 0x14, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer_PerCameraData, ____Position) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer_PerCameraData, ____OldViewpointPosition) == 0x24, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer_PerCameraData, ____ViewpointHeightAboveWaterSmooth) == 0x30, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer_PerCameraData, ____IsFirstFrameSinceEnabled) == 0x34, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer_PerCameraData, ____CascadeData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer_PerCameraData, ____ViewerHeightAboveWater) == 0x40, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer_PerCameraData, ____ViewerDistanceToShoreline) == 0x44, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer_PerCameraData, ____LastFrame) == 0x48, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::WaterRenderer_PerCameraData) == 0x50, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.WaterRenderer/<>c
class CORDL_TYPE WaterRenderer___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::WaveHarmonic::Crest::WaterRenderer___c*  __9;

/// @brief Field <>9__424_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__424_0, put=setStaticF___9__424_0)) ::System::Func_1<::ArrayW<::UnityEngine::Vector4>>*  __9__424_0;

static inline ::WaveHarmonic::Crest::WaterRenderer___c* New_ctor() ;

/// @brief Method <InitializePerFrameMaterialParameters>b__424_0, addr 0x1825942b0, size 0x20, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector4> _InitializePerFrameMaterialParameters_b__424_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::WaveHarmonic::Crest::WaterRenderer___c* getStaticF___9() ;

static inline ::System::Func_1<::ArrayW<::UnityEngine::Vector4>>* getStaticF___9__424_0() ;

static inline void setStaticF___9(::WaveHarmonic::Crest::WaterRenderer___c*  value) ;

static inline void setStaticF___9__424_0(::System::Func_1<::ArrayW<::UnityEngine::Vector4>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterRenderer___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterRenderer___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterRenderer___c(WaterRenderer___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterRenderer___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterRenderer___c(WaterRenderer___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16638};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::WaterRenderer___c) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.WaterRenderer/<UpdateSkippedCameras>d__463
class CORDL_TYPE WaterRenderer__UpdateSkippedCameras_d__463 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1825943f0, size 0x1d0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value) ;

/// @brief Method .ctor, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterRenderer__UpdateSkippedCameras_d__463() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterRenderer__UpdateSkippedCameras_d__463", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterRenderer__UpdateSkippedCameras_d__463(WaterRenderer__UpdateSkippedCameras_d__463 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterRenderer__UpdateSkippedCameras_d__463", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterRenderer__UpdateSkippedCameras_d__463(WaterRenderer__UpdateSkippedCameras_d__463 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16639};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463) == 0x28, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies Unity.Profiling.ProfilerMarker, UnityEngine.Matrix4x4, UnityEngine.Plane, UnityEngine.Rendering.ScriptableRenderContext, UnityEngine.Rendering.Universal.RenderPassEvent, UnityEngine.Vector2, UnityEngine.Vector3, WaveHarmonic.Crest.Internal.ManagerBehaviour`1<T>, WaveHarmonic.Crest.RenderPipeline, WaveHarmonic.Crest.SurfaceRenderer::SurfaceSelfIntersectionFixMode, WaveHarmonic.Crest.WaterBodyAffects, WaveHarmonic.Crest.WaterCameraExclusion, WaveHarmonic.Crest.WaterDataBackgroundMode, WaveHarmonic.Crest.WaterInjectionPoint, WaveHarmonic.Crest.WaterRenderer::ActiveModules
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.WaterRenderer
class CORDL_TYPE WaterRenderer : public ::WaveHarmonic::Crest::Internal::ManagerBehaviour_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>> {
public:
// Declarations
using ActiveModules = ::WaveHarmonic::Crest::WaterRenderer_ActiveModules;

using CopyTargetsRenderPass = ::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass;

using DebugFields = ::WaveHarmonic::Crest::WaterRenderer_DebugFields;

using PerCameraData = ::WaveHarmonic::Crest::WaterRenderer_PerCameraData;

using ShaderIDs = ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs;

using _UpdateSkippedCameras_d__463 = ::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463;

using __c = ::WaveHarmonic::Crest::WaterRenderer___c;

 __declspec(property(get=get_AbsorptionLod)) ::WaveHarmonic::Crest::AbsorptionLod*  AbsorptionLod;

 __declspec(property(get=get_Active)) bool  Active;

 __declspec(property(get=get_AlbedoLod)) ::WaveHarmonic::Crest::AlbedoLod*  AlbedoLod;

 __declspec(property(get=get_AllowRenderQueueSorting, put=set_AllowRenderQueueSorting)) bool  AllowRenderQueueSorting;

 __declspec(property(get=get_AnimatedWavesLod)) ::WaveHarmonic::Crest::AnimatedWavesLod*  AnimatedWavesLod;

 __declspec(property(get=get_BlackTextureArray)) ::UnityW<::UnityEngine::Texture2DArray>  BlackTextureArray;

 __declspec(property(get=get_BufferSize)) int32_t  BufferSize;

 __declspec(property(get=get_CameraExclusions, put=set_CameraExclusions)) ::WaveHarmonic::Crest::WaterCameraExclusion  CameraExclusions;

 __declspec(property(get=get_CascadeData, put=set_CascadeData)) ::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*  CascadeData;

 __declspec(property(get=get_CastShadows, put=set_CastShadows)) bool  CastShadows;

 __declspec(property(get=get_CenterOfDetailDisplacementCorrection, put=set_CenterOfDetailDisplacementCorrection)) bool  CenterOfDetailDisplacementCorrection;

 __declspec(property(get=get_ClipLod)) ::WaveHarmonic::Crest::ClipLod*  ClipLod;

 __declspec(property(get=get_CollisionProvider)) ::WaveHarmonic::Crest::ICollisionProvider*  CollisionProvider;

 __declspec(property(get=get_Container)) ::UnityW<::UnityEngine::GameObject>  Container;

 __declspec(property(get=get_CurrentCamera, put=set_CurrentCamera)) ::UnityW<::UnityEngine::Camera>  CurrentCamera;

 __declspec(property(get=get_CurrentTime)) float_t  CurrentTime;

 __declspec(property(get=get_DataBackgroundMode, put=set_DataBackgroundMode)) ::WaveHarmonic::Crest::WaterDataBackgroundMode  DataBackgroundMode;

 __declspec(property(get=get_DefaultExcludes, put=set_DefaultExcludes)) ::WaveHarmonic::Crest::WaterBodyAffects  DefaultExcludes;

 __declspec(property(get=get_DeltaTime)) float_t  DeltaTime;

 __declspec(property(get=get_DepthLod)) ::WaveHarmonic::Crest::DepthLod*  DepthLod;

 __declspec(property(get=get_DepthProvider)) ::WaveHarmonic::Crest::IDepthProvider*  DepthProvider;

 __declspec(property(get=get_DropDetailHeightBasedOnWaves, put=set_DropDetailHeightBasedOnWaves)) float_t  DropDetailHeightBasedOnWaves;

 __declspec(property(get=get_DynamicWavesLod)) ::WaveHarmonic::Crest::DynamicWavesLod*  DynamicWavesLod;

 __declspec(property(get=get_EditorMultipleViewpoints)) bool  EditorMultipleViewpoints;

 __declspec(property(get=get_ExtentsSizeMultiplier, put=set_ExtentsSizeMultiplier)) float_t  ExtentsSizeMultiplier;

 __declspec(property(get=get_FallBackRequired)) bool  FallBackRequired;

 __declspec(property(get=get_FlowLod)) ::WaveHarmonic::Crest::FlowLod*  FlowLod;

 __declspec(property(get=get_FlowProvider)) ::WaveHarmonic::Crest::IFlowProvider*  FlowProvider;

 __declspec(property(get=get_FoamLod)) ::WaveHarmonic::Crest::FoamLod*  FoamLod;

 __declspec(property(get=get_ForceScaleChangeSmoothing, put=set_ForceScaleChangeSmoothing)) bool  ForceScaleChangeSmoothing;

 __declspec(property(get=get_FrameBufferFormatOverride)) ::WaveHarmonic::Crest::BIRP_Rendering_FrameBufferFormatOverride  FrameBufferFormatOverride;

 __declspec(property(get=get_GeometryDownSampleFactor, put=set_GeometryDownSampleFactor)) int32_t  GeometryDownSampleFactor;

 __declspec(property(get=get_Gravity)) float_t  Gravity;

 __declspec(property(get=get_GravityMultiplier, put=set_GravityMultiplier)) float_t  GravityMultiplier;

 __declspec(property(get=get_GravityOverride, put=set_GravityOverride)) float_t  GravityOverride;

 __declspec(property(get=get_InjectionPoint, put=set_InjectionPoint)) ::WaveHarmonic::Crest::WaterInjectionPoint  InjectionPoint;

 __declspec(property(get=get_IsMultipleViewpointMode)) bool  IsMultipleViewpointMode;

 __declspec(property(get=get_IsRunningWithoutGraphics)) bool  IsRunningWithoutGraphics;

 __declspec(property(get=get_IsSeparateViewpointCameraLoop, put=set_IsSeparateViewpointCameraLoop)) bool  IsSeparateViewpointCameraLoop;

 __declspec(property(get=get_IsSingleViewpointMode)) bool  IsSingleViewpointMode;

 __declspec(property(get=get_Layer, put=set_Layer)) int32_t  Layer;

 __declspec(property(get=get_LevelLod)) ::WaveHarmonic::Crest::LevelLod*  LevelLod;

 __declspec(property(get=get_LodLevels, put=set_LodLevels)) int32_t  LodLevels;

 __declspec(property(get=get_LodResolution, put=set_LodResolution)) int32_t  LodResolution;

 __declspec(property(get=get_Material, put=set_Material)) ::UnityW<::UnityEngine::Material>  Material;

 __declspec(property(get=get_Meniscus)) ::WaveHarmonic::Crest::Meniscus*  Meniscus;

 __declspec(property(get=get_MultipleViewpoints)) bool  MultipleViewpoints;

 __declspec(property(get=get_OverrideGravity, put=set_OverrideGravity)) bool  OverrideGravity;

 __declspec(property(get=get_OverrideRenderHDR, put=set_OverrideRenderHDR)) bool  OverrideRenderHDR;

 __declspec(property(get=get_OverrideWindZoneWindDirection, put=set_OverrideWindZoneWindDirection)) bool  OverrideWindZoneWindDirection;

 __declspec(property(get=get_OverrideWindZoneWindSpeed, put=set_OverrideWindZoneWindSpeed)) bool  OverrideWindZoneWindSpeed;

 __declspec(property(get=get_OverrideWindZoneWindTurbulence, put=set_OverrideWindZoneWindTurbulence)) bool  OverrideWindZoneWindTurbulence;

 __declspec(property(get=get_Portals)) ::WaveHarmonic::Crest::Portals::PortalRenderer*  Portals;

 __declspec(property(get=get_Position, put=set_Position)) ::UnityEngine::Vector3  Position;

 __declspec(property(get=get_PrimaryLight, put=set_PrimaryLight)) ::UnityW<::UnityEngine::Light>  PrimaryLight;

 __declspec(property(get=get_Reflections)) ::WaveHarmonic::Crest::WaterReflections*  Reflections;

 __declspec(property(get=get_RenderBeforeTransparency)) bool  RenderBeforeTransparency;

 __declspec(property(get=get_RenderHDR, put=set_RenderHDR)) bool  RenderHDR;

 __declspec(property(get=get_SampleTerrainHeightForScale, put=set_SampleTerrainHeightForScale)) bool  SampleTerrainHeightForScale;

 __declspec(property(get=get_Scale, put=set_Scale)) float_t  Scale;

 __declspec(property(get=get_ScaleCouldDecrease)) bool  ScaleCouldDecrease;

 __declspec(property(get=get_ScaleCouldIncrease)) bool  ScaleCouldIncrease;

 __declspec(property(get=get_ScaleDifferencePower2, put=set_ScaleDifferencePower2)) int32_t  ScaleDifferencePower2;

 __declspec(property(get=get_ScaleRange, put=set_ScaleRange)) ::UnityEngine::Vector2  ScaleRange;

 __declspec(property(get=get_ScatteringLod)) ::WaveHarmonic::Crest::ScatteringLod*  ScatteringLod;

 __declspec(property(get=get_SeaLevel)) float_t  SeaLevel;

 __declspec(property(get=get_ShadowLod)) ::WaveHarmonic::Crest::ShadowLod*  ShadowLod;

 __declspec(property(get=get_SimulationBuffer)) ::UnityEngine::Rendering::CommandBuffer*  SimulationBuffer;

 __declspec(property(get=get_Simulations)) ::System::Collections::Generic::List_1<::WaveHarmonic::Crest::Lod*>*  Simulations;

 __declspec(property(get=get_SupportsRecursiveRendering)) bool  SupportsRecursiveRendering;

 __declspec(property(get=get_Surface)) ::WaveHarmonic::Crest::SurfaceRenderer*  Surface;

 __declspec(property(get=get_TeleportOriginThisFrame)) ::UnityEngine::Vector3  TeleportOriginThisFrame;

 __declspec(property(get=get_TeleportThreshold, put=set_TeleportThreshold)) float_t  TeleportThreshold;

 __declspec(property(get=get_TimeProvider)) ::WaveHarmonic::Crest::ITimeProvider*  TimeProvider;

 __declspec(property(get=get_TimeProviders, put=set_TimeProviders)) ::WaveHarmonic::Crest::Utility::Internal::Stack_1<::WaveHarmonic::Crest::ITimeProvider*>*  TimeProviders;

 __declspec(property(get=get_TimeSliceBoundsUpdateFrameCount, put=set_TimeSliceBoundsUpdateFrameCount)) int32_t  TimeSliceBoundsUpdateFrameCount;

 __declspec(property(get=get_Underwater)) ::WaveHarmonic::Crest::UnderwaterRenderer*  Underwater;

 __declspec(property(get=get_Version)) int32_t  Version;

 __declspec(property(get=get_Viewer, put=set_Viewer)) ::UnityW<::UnityEngine::Camera>  Viewer;

 __declspec(property(get=get_ViewerAltitudeLevelAlpha, put=set_ViewerAltitudeLevelAlpha)) float_t  ViewerAltitudeLevelAlpha;

 __declspec(property(get=get_ViewerDistanceToShoreline, put=set_ViewerDistanceToShoreline)) float_t  ViewerDistanceToShoreline;

 __declspec(property(get=get_ViewerHeightAboveWater, put=set_ViewerHeightAboveWater)) float_t  ViewerHeightAboveWater;

 __declspec(property(get=get_Viewpoint, put=set_Viewpoint)) ::UnityW<::UnityEngine::Transform>  Viewpoint;

 __declspec(property(get=get_ViewpointHeightAboveWater, put=set_ViewpointHeightAboveWater)) float_t  ViewpointHeightAboveWater;

 __declspec(property(get=get_VolumeMaterial, put=set_VolumeMaterial)) ::UnityW<::UnityEngine::Material>  VolumeMaterial;

 __declspec(property(get=get_WaterBodyCulling, put=set_WaterBodyCulling)) bool  WaterBodyCulling;

 __declspec(property(get=get_WindDirection, put=set_WindDirection)) float_t  WindDirection;

 __declspec(property(get=get_WindDirectionOverriden)) bool  WindDirectionOverriden;

 __declspec(property(get=get_WindSpeed, put=set_WindSpeed)) float_t  WindSpeed;

 __declspec(property(get=get_WindSpeedKPH)) float_t  WindSpeedKPH;

 __declspec(property(get=get_WindSpeedOverriden)) bool  WindSpeedOverriden;

 __declspec(property(get=get_WindTurbulence, put=set_WindTurbulence)) float_t  WindTurbulence;

 __declspec(property(get=get_WindTurbulenceOverriden)) bool  WindTurbulenceOverriden;

 __declspec(property(get=get_WindZone, put=set_WindZone)) ::UnityW<::UnityEngine::WindZone>  WindZone;

 __declspec(property(get=get_WriteMotionVectors, put=set_WriteMotionVectors)) bool  WriteMotionVectors;

 __declspec(property(get=get_WriteToColorTexture, put=set_WriteToColorTexture)) bool  WriteToColorTexture;

 __declspec(property(get=get_WriteToDepthTexture, put=set_WriteToDepthTexture)) bool  WriteToDepthTexture;

/// @brief Field _AbsorptionLod, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get__AbsorptionLod, put=__cordl_internal_set__AbsorptionLod)) ::WaveHarmonic::Crest::AbsorptionLod*  _AbsorptionLod;

/// @brief Field _ActiveModules, offset 0x238, size 0x4 
 __declspec(property(get=__cordl_internal_get__ActiveModules, put=__cordl_internal_set__ActiveModules)) ::WaveHarmonic::Crest::WaterRenderer_ActiveModules  _ActiveModules;

/// @brief Field _AlbedoLod, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get__AlbedoLod, put=__cordl_internal_set__AlbedoLod)) ::WaveHarmonic::Crest::AlbedoLod*  _AlbedoLod;

/// @brief Field _AllowRenderQueueSorting, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get__AllowRenderQueueSorting, put=__cordl_internal_set__AllowRenderQueueSorting)) bool  _AllowRenderQueueSorting;

/// @brief Field _AnimatedWavesLod, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__AnimatedWavesLod, put=__cordl_internal_set__AnimatedWavesLod)) ::WaveHarmonic::Crest::AnimatedWavesLod*  _AnimatedWavesLod;

/// @brief Field _BlackTextureArray, offset 0x260, size 0x8 
 __declspec(property(get=__cordl_internal_get__BlackTextureArray, put=__cordl_internal_set__BlackTextureArray)) ::UnityW<::UnityEngine::Texture2DArray>  _BlackTextureArray;

/// @brief Field _Camera, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__Camera, put=__cordl_internal_set__Camera)) ::UnityW<::UnityEngine::Camera>  _Camera;

/// @brief Field _CameraExclusions, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get__CameraExclusions, put=__cordl_internal_set__CameraExclusions)) ::WaveHarmonic::Crest::WaterCameraExclusion  _CameraExclusions;

/// @brief Field _CameraFrustumPlanes, offset 0x248, size 0x8 
 __declspec(property(get=__cordl_internal_get__CameraFrustumPlanes, put=__cordl_internal_set__CameraFrustumPlanes)) ::ArrayW<::UnityEngine::Plane>  _CameraFrustumPlanes;

/// @brief Field _CameraFrustumPoints, offset 0x250, size 0x8 
 __declspec(property(get=__cordl_internal_get__CameraFrustumPoints, put=__cordl_internal_set__CameraFrustumPoints)) ::ArrayW<::UnityEngine::Vector3>  _CameraFrustumPoints;

/// @brief Field _CameraOpaqueTexture, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__CameraOpaqueTexture, put=__cordl_internal_set__CameraOpaqueTexture)) ::UnityEngine::Rendering::RTHandle*  _CameraOpaqueTexture;

/// @brief Field _CameraOpaqueTextureCommands, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__CameraOpaqueTextureCommands, put=__cordl_internal_set__CameraOpaqueTextureCommands)) ::UnityEngine::Rendering::CommandBuffer*  _CameraOpaqueTextureCommands;

/// @brief Field _Cameras, offset 0x298, size 0x8 
 __declspec(property(get=__cordl_internal_get__Cameras, put=__cordl_internal_set__Cameras)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*  _Cameras;

/// @brief Field _CascadeData, offset 0x280, size 0x8 
 __declspec(property(get=__cordl_internal_get__CascadeData, put=__cordl_internal_set__CascadeData)) ::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*  _CascadeData;

/// @brief Field <CascadeData>k__BackingField, offset 0x288, size 0x8 
 __declspec(property(get=__cordl_internal_get__CascadeData_k__BackingField, put=__cordl_internal_set__CascadeData_k__BackingField)) ::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*  _CascadeData_k__BackingField;

/// @brief Field _CastShadows, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__CastShadows, put=__cordl_internal_set__CastShadows)) bool  _CastShadows;

/// @brief Field _CenterOfDetailDisplacementCorrection, offset 0x118, size 0x1 
 __declspec(property(get=__cordl_internal_get__CenterOfDetailDisplacementCorrection, put=__cordl_internal_set__CenterOfDetailDisplacementCorrection)) bool  _CenterOfDetailDisplacementCorrection;

/// @brief Field _CenterOfDetailDisplacementCorrectionHelper, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get__CenterOfDetailDisplacementCorrectionHelper, put=__cordl_internal_set__CenterOfDetailDisplacementCorrectionHelper)) ::WaveHarmonic::Crest::SampleCollisionHelper*  _CenterOfDetailDisplacementCorrectionHelper;

/// @brief Field _ChunkTemplate, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__ChunkTemplate, put=__cordl_internal_set__ChunkTemplate)) ::UnityW<::UnityEngine::GameObject>  _ChunkTemplate;

/// @brief Field _ClipLod, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get__ClipLod, put=__cordl_internal_set__ClipLod)) ::WaveHarmonic::Crest::ClipLod*  _ClipLod;

/// @brief Field _Container, offset 0x218, size 0x8 
 __declspec(property(get=__cordl_internal_get__Container, put=__cordl_internal_set__Container)) ::UnityW<::UnityEngine::GameObject>  _Container;

/// @brief Field _Context, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__Context, put=__cordl_internal_set__Context)) ::UnityEngine::Rendering::ScriptableRenderContext  _Context;

/// @brief Field <CurrentCamera>k__BackingField, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get__CurrentCamera_k__BackingField, put=__cordl_internal_set__CurrentCamera_k__BackingField)) ::UnityW<::UnityEngine::Camera>  _CurrentCamera_k__BackingField;

/// @brief Field _CurrentPerCameraData, offset 0x2a0, size 0x8 
 __declspec(property(get=__cordl_internal_get__CurrentPerCameraData, put=__cordl_internal_set__CurrentPerCameraData)) ::WaveHarmonic::Crest::WaterRenderer_PerCameraData*  _CurrentPerCameraData;

/// @brief Field _DataBackgroundMode, offset 0x114, size 0x4 
 __declspec(property(get=__cordl_internal_get__DataBackgroundMode, put=__cordl_internal_set__DataBackgroundMode)) ::WaveHarmonic::Crest::WaterDataBackgroundMode  _DataBackgroundMode;

/// @brief Field _Debug, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Debug, put=__cordl_internal_set__Debug)) ::WaveHarmonic::Crest::WaterRenderer_DebugFields*  _Debug;

/// @brief Field _DefaultExcludes, offset 0x198, size 0x4 
 __declspec(property(get=__cordl_internal_get__DefaultExcludes, put=__cordl_internal_set__DefaultExcludes)) ::WaveHarmonic::Crest::WaterBodyAffects  _DefaultExcludes;

/// @brief Field _DepthLod, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get__DepthLod, put=__cordl_internal_set__DepthLod)) ::WaveHarmonic::Crest::DepthLod*  _DepthLod;

/// @brief Field _DoneCameraOpaqueTexture, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__DoneCameraOpaqueTexture, put=__cordl_internal_set__DoneCameraOpaqueTexture)) bool  _DoneCameraOpaqueTexture;

/// @brief Field _DoneMatrices, offset 0x55, size 0x1 
 __declspec(property(get=__cordl_internal_get__DoneMatrices, put=__cordl_internal_set__DoneMatrices)) bool  _DoneMatrices;

/// @brief Field _DonePerCameraHeight, offset 0x258, size 0x1 
 __declspec(property(get=__cordl_internal_get__DonePerCameraHeight, put=__cordl_internal_set__DonePerCameraHeight)) bool  _DonePerCameraHeight;

/// @brief Field _DropDetailHeightBasedOnWaves, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get__DropDetailHeightBasedOnWaves, put=__cordl_internal_set__DropDetailHeightBasedOnWaves)) float_t  _DropDetailHeightBasedOnWaves;

/// @brief Field _DynamicWavesLod, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get__DynamicWavesLod, put=__cordl_internal_set__DynamicWavesLod)) ::WaveHarmonic::Crest::DynamicWavesLod*  _DynamicWavesLod;

/// @brief Field _EditorMultipleViewpoints, offset 0x19e, size 0x1 
 __declspec(property(get=__cordl_internal_get__EditorMultipleViewpoints, put=__cordl_internal_set__EditorMultipleViewpoints)) bool  _EditorMultipleViewpoints;

/// @brief Field _EndOfFrame, offset 0x2b8, size 0x8 
 __declspec(property(get=__cordl_internal_get__EndOfFrame, put=__cordl_internal_set__EndOfFrame)) ::UnityEngine::Coroutine*  _EndOfFrame;

/// @brief Field _ExtentsSizeMultiplier, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get__ExtentsSizeMultiplier, put=__cordl_internal_set__ExtentsSizeMultiplier)) float_t  _ExtentsSizeMultiplier;

/// @brief Field _FlowLod, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get__FlowLod, put=__cordl_internal_set__FlowLod)) ::WaveHarmonic::Crest::FlowLod*  _FlowLod;

/// @brief Field _FoamLod, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get__FoamLod, put=__cordl_internal_set__FoamLod)) ::WaveHarmonic::Crest::FoamLod*  _FoamLod;

/// @brief Field _FollowSceneCamera, offset 0x19d, size 0x1 
 __declspec(property(get=__cordl_internal_get__FollowSceneCamera, put=__cordl_internal_set__FollowSceneCamera)) bool  _FollowSceneCamera;

/// @brief Field _ForceScaleChangeSmoothing, offset 0x11a, size 0x1 
 __declspec(property(get=__cordl_internal_get__ForceScaleChangeSmoothing, put=__cordl_internal_set__ForceScaleChangeSmoothing)) bool  _ForceScaleChangeSmoothing;

/// @brief Field _GeneratedSettingsHash, offset 0x274, size 0x4 
 __declspec(property(get=__cordl_internal_get__GeneratedSettingsHash, put=__cordl_internal_set__GeneratedSettingsHash)) int32_t  _GeneratedSettingsHash;

/// @brief Field _GeometryDownSampleFactor, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get__GeometryDownSampleFactor, put=__cordl_internal_set__GeometryDownSampleFactor)) int32_t  _GeometryDownSampleFactor;

/// @brief Field _GravityMultiplier, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get__GravityMultiplier, put=__cordl_internal_set__GravityMultiplier)) float_t  _GravityMultiplier;

/// @brief Field _GravityOverride, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get__GravityOverride, put=__cordl_internal_set__GravityOverride)) float_t  _GravityOverride;

/// @brief Field _HasAnyViewerRendered, offset 0x2c3, size 0x1 
 __declspec(property(get=__cordl_internal_get__HasAnyViewerRendered, put=__cordl_internal_set__HasAnyViewerRendered)) bool  _HasAnyViewerRendered;

/// @brief Field _HasAnyViewpointExecuted, offset 0x2c2, size 0x1 
 __declspec(property(get=__cordl_internal_get__HasAnyViewpointExecuted, put=__cordl_internal_set__HasAnyViewpointExecuted)) bool  _HasAnyViewpointExecuted;

/// @brief Field _HasTeleportedThisFrame, offset 0x1fd, size 0x1 
 __declspec(property(get=__cordl_internal_get__HasTeleportedThisFrame, put=__cordl_internal_set__HasTeleportedThisFrame)) bool  _HasTeleportedThisFrame;

/// @brief Field _HeightQueries, offset 0x19f, size 0x1 
 __declspec(property(get=__cordl_internal_get__HeightQueries, put=__cordl_internal_set__HeightQueries)) bool  _HeightQueries;

/// @brief Field _Initialized, offset 0x270, size 0x1 
 __declspec(property(get=__cordl_internal_get__Initialized, put=__cordl_internal_set__Initialized)) bool  _Initialized;

/// @brief Field _InjectionPoint, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get__InjectionPoint, put=__cordl_internal_set__InjectionPoint)) ::WaveHarmonic::Crest::WaterInjectionPoint  _InjectionPoint;

/// @brief Field _IsEndOfFrame, offset 0x2c0, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsEndOfFrame, put=__cordl_internal_set__IsEndOfFrame)) bool  _IsEndOfFrame;

/// @brief Field _IsFirstFrameSinceEnabled, offset 0x1fc, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsFirstFrameSinceEnabled, put=__cordl_internal_set__IsFirstFrameSinceEnabled)) bool  _IsFirstFrameSinceEnabled;

/// @brief Field <IsSeparateViewpointCameraLoop>k__BackingField, offset 0x2c4, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSeparateViewpointCameraLoop_k__BackingField, put=__cordl_internal_set__IsSeparateViewpointCameraLoop_k__BackingField)) bool  _IsSeparateViewpointCameraLoop_k__BackingField;

/// @brief Field _Layer, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__Layer, put=__cordl_internal_set__Layer)) int32_t  _Layer;

/// @brief Field _LevelLod, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get__LevelLod, put=__cordl_internal_set__LevelLod)) ::WaveHarmonic::Crest::LevelLod*  _LevelLod;

/// @brief Field _Mask, offset 0x240, size 0x8 
 __declspec(property(get=__cordl_internal_get__Mask, put=__cordl_internal_set__Mask)) ::WaveHarmonic::Crest::MaskRenderer*  _Mask;

/// @brief Field _Material, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Material, put=__cordl_internal_set__Material)) ::UnityW<::UnityEngine::Material>  _Material;

/// @brief Field _Meniscus, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get__Meniscus, put=__cordl_internal_set__Meniscus)) ::WaveHarmonic::Crest::Meniscus*  _Meniscus;

/// @brief Field _MultipleViewpoints, offset 0x104, size 0x1 
 __declspec(property(get=__cordl_internal_get__MultipleViewpoints, put=__cordl_internal_set__MultipleViewpoints)) bool  _MultipleViewpoints;

/// @brief Field _OldViewpointPosition, offset 0x200, size 0xc 
 __declspec(property(get=__cordl_internal_get__OldViewpointPosition, put=__cordl_internal_set__OldViewpointPosition)) ::UnityEngine::Vector3  _OldViewpointPosition;

/// @brief Field _OverrideGravity, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get__OverrideGravity, put=__cordl_internal_set__OverrideGravity)) bool  _OverrideGravity;

/// @brief Field _OverrideRenderHDR, offset 0xd7, size 0x1 
 __declspec(property(get=__cordl_internal_get__OverrideRenderHDR, put=__cordl_internal_set__OverrideRenderHDR)) bool  _OverrideRenderHDR;

/// @brief Field _OverrideWindZoneWindDirection, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get__OverrideWindZoneWindDirection, put=__cordl_internal_set__OverrideWindZoneWindDirection)) bool  _OverrideWindZoneWindDirection;

/// @brief Field _OverrideWindZoneWindSpeed, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get__OverrideWindZoneWindSpeed, put=__cordl_internal_set__OverrideWindZoneWindSpeed)) bool  _OverrideWindZoneWindSpeed;

/// @brief Field _OverrideWindZoneWindTurbulence, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get__OverrideWindZoneWindTurbulence, put=__cordl_internal_set__OverrideWindZoneWindTurbulence)) bool  _OverrideWindZoneWindTurbulence;

/// @brief Field _PerCameraData, offset 0x2a8, size 0x8 
 __declspec(property(get=__cordl_internal_get__PerCameraData, put=__cordl_internal_set__PerCameraData)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::WaveHarmonic::Crest::WaterRenderer_PerCameraData*>*  _PerCameraData;

/// @brief Field _PerCameraHeightReady, offset 0x259, size 0x1 
 __declspec(property(get=__cordl_internal_get__PerCameraHeightReady, put=__cordl_internal_set__PerCameraHeightReady)) bool  _PerCameraHeightReady;

/// @brief Field _PerCameraLastFrame, offset 0x2b0, size 0x8 
 __declspec(property(get=__cordl_internal_get__PerCameraLastFrame, put=__cordl_internal_set__PerCameraLastFrame)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,int32_t>*  _PerCameraLastFrame;

/// @brief Field _Portals, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get__Portals, put=__cordl_internal_set__Portals)) ::WaveHarmonic::Crest::Portals::PortalRenderer*  _Portals;

/// @brief Field <Position>k__BackingField, offset 0x20c, size 0xc 
 __declspec(property(get=__cordl_internal_get__Position_k__BackingField, put=__cordl_internal_set__Position_k__BackingField)) ::UnityEngine::Vector3  _Position_k__BackingField;

/// @brief Field _PrimaryLight, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__PrimaryLight, put=__cordl_internal_set__PrimaryLight)) ::UnityW<::UnityEngine::Light>  _PrimaryLight;

/// @brief Field _ProjectionMatrix, offset 0x220, size 0x8 
 __declspec(property(get=__cordl_internal_get__ProjectionMatrix, put=__cordl_internal_set__ProjectionMatrix)) ::ArrayW<::UnityEngine::Matrix4x4>  _ProjectionMatrix;

/// @brief Field _RecursiveActiveModules, offset 0x230, size 0x8 
 __declspec(property(get=__cordl_internal_get__RecursiveActiveModules, put=__cordl_internal_set__RecursiveActiveModules)) ::System::Collections::Generic::Stack_1<::WaveHarmonic::Crest::WaterRenderer_ActiveModules>*  _RecursiveActiveModules;

/// @brief Field _Reflections, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get__Reflections, put=__cordl_internal_set__Reflections)) ::WaveHarmonic::Crest::WaterReflections*  _Reflections;

/// @brief Field _RenderHDR, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get__RenderHDR, put=__cordl_internal_set__RenderHDR)) bool  _RenderHDR;

/// @brief Field _RenderShadows, offset 0x2c1, size 0x1 
 __declspec(property(get=__cordl_internal_get__RenderShadows, put=__cordl_internal_set__RenderShadows)) bool  _RenderShadows;

/// @brief Field _Resolution, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get__Resolution, put=__cordl_internal_set__Resolution)) int32_t  _Resolution;

/// @brief Field _Resources, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get__Resources, put=__cordl_internal_set__Resources)) ::UnityW<::WaveHarmonic::Crest::WaterResources>  _Resources;

/// @brief Field _SampleDepthHelper, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get__SampleDepthHelper, put=__cordl_internal_set__SampleDepthHelper)) ::WaveHarmonic::Crest::SampleDepthHelper*  _SampleDepthHelper;

/// @brief Field _SampleHeightHelper, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get__SampleHeightHelper, put=__cordl_internal_set__SampleHeightHelper)) ::WaveHarmonic::Crest::SampleCollisionHelper*  _SampleHeightHelper;

/// @brief Field _SampleHeightHelperPerCamera, offset 0x1f0, size 0x8 
 __declspec(property(get=__cordl_internal_get__SampleHeightHelperPerCamera, put=__cordl_internal_set__SampleHeightHelperPerCamera)) ::WaveHarmonic::Crest::SampleCollisionHelper*  _SampleHeightHelperPerCamera;

/// @brief Field _SampleTerrainHeightForScale, offset 0x119, size 0x1 
 __declspec(property(get=__cordl_internal_get__SampleTerrainHeightForScale, put=__cordl_internal_set__SampleTerrainHeightForScale)) bool  _SampleTerrainHeightForScale;

/// @brief Field <ScaleDifferencePower2>k__BackingField, offset 0x294, size 0x4 
 __declspec(property(get=__cordl_internal_get__ScaleDifferencePower2_k__BackingField, put=__cordl_internal_set__ScaleDifferencePower2_k__BackingField)) int32_t  _ScaleDifferencePower2_k__BackingField;

/// @brief Field _ScaleRange, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__ScaleRange, put=__cordl_internal_set__ScaleRange)) ::UnityEngine::Vector2  _ScaleRange;

/// @brief Field <Scale>k__BackingField, offset 0x290, size 0x4 
 __declspec(property(get=__cordl_internal_get__Scale_k__BackingField, put=__cordl_internal_set__Scale_k__BackingField)) float_t  _Scale_k__BackingField;

/// @brief Field _ScatteringLod, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get__ScatteringLod, put=__cordl_internal_set__ScatteringLod)) ::WaveHarmonic::Crest::ScatteringLod*  _ScatteringLod;

/// @brief Field _ScreenSpaceShadowMapBuffer, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__ScreenSpaceShadowMapBuffer, put=__cordl_internal_set__ScreenSpaceShadowMapBuffer)) ::UnityEngine::Rendering::CommandBuffer*  _ScreenSpaceShadowMapBuffer;

/// @brief Field _SetUpFor, offset 0x23c, size 0x4 
 __declspec(property(get=__cordl_internal_get__SetUpFor, put=__cordl_internal_set__SetUpFor)) ::WaveHarmonic::Crest::RenderPipeline  _SetUpFor;

/// @brief Field _ShadowLod, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get__ShadowLod, put=__cordl_internal_set__ShadowLod)) ::WaveHarmonic::Crest::ShadowLod*  _ShadowLod;

/// @brief Field _ShowWaterProxyPlane, offset 0x19c, size 0x1 
 __declspec(property(get=__cordl_internal_get__ShowWaterProxyPlane, put=__cordl_internal_set__ShowWaterProxyPlane)) bool  _ShowWaterProxyPlane;

/// @brief Field _SimulationBuffer, offset 0x278, size 0x8 
 __declspec(property(get=__cordl_internal_get__SimulationBuffer, put=__cordl_internal_set__SimulationBuffer)) ::UnityEngine::Rendering::CommandBuffer*  _SimulationBuffer;

/// @brief Field <Simulations>k__BackingField, offset 0x268, size 0x8 
 __declspec(property(get=__cordl_internal_get__Simulations_k__BackingField, put=__cordl_internal_set__Simulations_k__BackingField)) ::System::Collections::Generic::List_1<::WaveHarmonic::Crest::Lod*>*  _Simulations_k__BackingField;

/// @brief Field _Slices, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get__Slices, put=__cordl_internal_set__Slices)) int32_t  _Slices;

/// @brief Field _Surface, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Surface, put=__cordl_internal_set__Surface)) ::WaveHarmonic::Crest::SurfaceRenderer*  _Surface;

/// @brief Field _SurfaceSelfIntersectionFixMode, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__SurfaceSelfIntersectionFixMode, put=__cordl_internal_set__SurfaceSelfIntersectionFixMode)) ::WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode  _SurfaceSelfIntersectionFixMode;

/// @brief Field _TeleportThreshold, offset 0x11c, size 0x4 
 __declspec(property(get=__cordl_internal_get__TeleportThreshold, put=__cordl_internal_set__TeleportThreshold)) float_t  _TeleportThreshold;

/// @brief Field _TeleportTimerForHeightQueries, offset 0x1f8, size 0x4 
 __declspec(property(get=__cordl_internal_get__TeleportTimerForHeightQueries, put=__cordl_internal_set__TeleportTimerForHeightQueries)) float_t  _TeleportTimerForHeightQueries;

/// @brief Field _TimeProvider, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__TimeProvider, put=__cordl_internal_set__TimeProvider)) ::UnityW<::WaveHarmonic::Crest::TimeProvider>  _TimeProvider;

/// @brief Field <TimeProviders>k__BackingField, offset 0x228, size 0x8 
 __declspec(property(get=__cordl_internal_get__TimeProviders_k__BackingField, put=__cordl_internal_set__TimeProviders_k__BackingField)) ::WaveHarmonic::Crest::Utility::Internal::Stack_1<::WaveHarmonic::Crest::ITimeProvider*>*  _TimeProviders_k__BackingField;

/// @brief Field _TimeSliceBoundsUpdateFrameCount, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__TimeSliceBoundsUpdateFrameCount, put=__cordl_internal_set__TimeSliceBoundsUpdateFrameCount)) int32_t  _TimeSliceBoundsUpdateFrameCount;

/// @brief Field _Underwater, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get__Underwater, put=__cordl_internal_set__Underwater)) ::WaveHarmonic::Crest::UnderwaterRenderer*  _Underwater;

/// @brief Field _UpdateColorDepthTexturesBuffer, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__UpdateColorDepthTexturesBuffer, put=__cordl_internal_set__UpdateColorDepthTexturesBuffer)) ::UnityEngine::Rendering::CommandBuffer*  _UpdateColorDepthTexturesBuffer;

/// @brief Field <ViewerAltitudeLevelAlpha>k__BackingField, offset 0x1c0, size 0x4 
 __declspec(property(get=__cordl_internal_get__ViewerAltitudeLevelAlpha_k__BackingField, put=__cordl_internal_set__ViewerAltitudeLevelAlpha_k__BackingField)) float_t  _ViewerAltitudeLevelAlpha_k__BackingField;

/// @brief Field <ViewerDistanceToShoreline>k__BackingField, offset 0x1cc, size 0x4 
 __declspec(property(get=__cordl_internal_get__ViewerDistanceToShoreline_k__BackingField, put=__cordl_internal_set__ViewerDistanceToShoreline_k__BackingField)) float_t  _ViewerDistanceToShoreline_k__BackingField;

/// @brief Field _ViewerHeightAboveWaterPerCamera, offset 0x1e8, size 0x4 
 __declspec(property(get=__cordl_internal_get__ViewerHeightAboveWaterPerCamera, put=__cordl_internal_set__ViewerHeightAboveWaterPerCamera)) float_t  _ViewerHeightAboveWaterPerCamera;

/// @brief Field <ViewerHeightAboveWater>k__BackingField, offset 0x1c4, size 0x4 
 __declspec(property(get=__cordl_internal_get__ViewerHeightAboveWater_k__BackingField, put=__cordl_internal_set__ViewerHeightAboveWater_k__BackingField)) float_t  _ViewerHeightAboveWater_k__BackingField;

/// @brief Field _Viewpoint, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__Viewpoint, put=__cordl_internal_set__Viewpoint)) ::UnityW<::UnityEngine::Transform>  _Viewpoint;

/// @brief Field _ViewpointHeightAboveWaterSmooth, offset 0x1d0, size 0x4 
 __declspec(property(get=__cordl_internal_get__ViewpointHeightAboveWaterSmooth, put=__cordl_internal_set__ViewpointHeightAboveWaterSmooth)) float_t  _ViewpointHeightAboveWaterSmooth;

/// @brief Field <ViewpointHeightAboveWater>k__BackingField, offset 0x1c8, size 0x4 
 __declspec(property(get=__cordl_internal_get__ViewpointHeightAboveWater_k__BackingField, put=__cordl_internal_set__ViewpointHeightAboveWater_k__BackingField)) float_t  _ViewpointHeightAboveWater_k__BackingField;

/// @brief Field _VolumeMaterial, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__VolumeMaterial, put=__cordl_internal_set__VolumeMaterial)) ::UnityW<::UnityEngine::Material>  _VolumeMaterial;

/// @brief Field _WaterBodyCulling, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get__WaterBodyCulling, put=__cordl_internal_set__WaterBodyCulling)) bool  _WaterBodyCulling;

/// @brief Field _WindDirection, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get__WindDirection, put=__cordl_internal_set__WindDirection)) float_t  _WindDirection;

/// @brief Field _WindSpeed, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get__WindSpeed, put=__cordl_internal_set__WindSpeed)) float_t  _WindSpeed;

/// @brief Field _WindTurbulence, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get__WindTurbulence, put=__cordl_internal_set__WindTurbulence)) float_t  _WindTurbulence;

/// @brief Field _WindZone, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__WindZone, put=__cordl_internal_set__WindZone)) ::UnityW<::UnityEngine::WindZone>  _WindZone;

/// @brief Field _WriteMotionVectors, offset 0xd6, size 0x1 
 __declspec(property(get=__cordl_internal_get__WriteMotionVectors, put=__cordl_internal_set__WriteMotionVectors)) bool  _WriteMotionVectors;

/// @brief Field _WriteToColorTexture, offset 0xd4, size 0x1 
 __declspec(property(get=__cordl_internal_get__WriteToColorTexture, put=__cordl_internal_set__WriteToColorTexture)) bool  _WriteToColorTexture;

/// @brief Field _WriteToDepthTexture, offset 0xd5, size 0x1 
 __declspec(property(get=__cordl_internal_get__WriteToDepthTexture, put=__cordl_internal_set__WriteToDepthTexture)) bool  _WriteToDepthTexture;

/// @brief Field s_OnBeforeBuildCommandBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_OnBeforeBuildCommandBuffer, put=setStaticF_s_OnBeforeBuildCommandBuffer)) ::System::Action_2<::UnityW<::WaveHarmonic::Crest::WaterRenderer>,::UnityW<::UnityEngine::Camera>>*  s_OnBeforeBuildCommandBuffer;

/// @brief Field s_OnLoadCameraData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_OnLoadCameraData, put=setStaticF_s_OnLoadCameraData)) ::System::Action_1<::UnityW<::UnityEngine::Camera>>*  s_OnLoadCameraData;

/// @brief Field s_OnRemoveCameraData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_OnRemoveCameraData, put=setStaticF_s_OnRemoveCameraData)) ::System::Action_1<::UnityW<::UnityEngine::Camera>>*  s_OnRemoveCameraData;

/// @brief Field s_OnStoreCameraData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_OnStoreCameraData, put=setStaticF_s_OnStoreCameraData)) ::System::Action_1<::UnityW<::UnityEngine::Camera>>*  s_OnStoreCameraData;

/// @brief Field s_RunUpdateMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_RunUpdateMarker, put=setStaticF_s_RunUpdateMarker)) ::Unity::Profiling::ProfilerMarker  s_RunUpdateMarker;

/// @brief Method CalcGridSize, addr 0x182580560, size 0x40, virtual false, abstract: false, final false
inline float_t CalcGridSize(int32_t  slice) ;

/// @brief Method CalcLodScale, addr 0x1825805a0, size 0x30, virtual false, abstract: false, final false
inline float_t CalcLodScale(float_t  slice) ;

/// @brief Method CalculateAbsorptionValueFromColor, addr 0x1825805d0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 CalculateAbsorptionValueFromColor(::UnityEngine::Color  color) ;

/// @brief Method CalculateSettingsHash, addr 0x182580600, size 0xa0, virtual false, abstract: false, final false
inline int32_t CalculateSettingsHash() ;

/// @brief Method CalculateViewMatrixFromSnappedPositionRHS, addr 0x1825806a0, size 0xc0, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 CalculateViewMatrixFromSnappedPositionRHS(::UnityEngine::Vector3  snapped) ;

/// @brief Method Destroy, addr 0x182580760, size 0x240, virtual false, abstract: false, final false
inline void Destroy() ;

/// @brief Method Disable, addr 0x1825809a0, size 0x460, virtual true, abstract: false, final false
inline void Disable() ;

/// @brief Method Enable, addr 0x182580e00, size 0x6b0, virtual true, abstract: false, final false
inline void Enable() ;

/// @brief Method ExecuteLighting, addr 0x1825814b0, size 0x3a0, virtual false, abstract: false, final false
inline void ExecuteLighting(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera) ;

/// @brief Method ExecuteViewpoint, addr 0x182581850, size 0x660, virtual false, abstract: false, final false
inline void ExecuteViewpoint(::UnityEngine::Camera*  camera) ;

/// @brief Method GetAllowRenderQueueSorting, addr 0x182581eb0, size 0x30, virtual false, abstract: false, final false
inline bool GetAllowRenderQueueSorting() ;

/// @brief Method GetCastShadows, addr 0x182581ee0, size 0x30, virtual false, abstract: false, final false
inline bool GetCastShadows() ;

/// @brief Method GetClosestViewpoint, addr 0x182581f10, size 0x1b0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetClosestViewpoint(::UnityEngine::Vector3  position) ;

/// @brief Method GetLayer, addr 0x1825820c0, size 0x30, virtual false, abstract: false, final false
inline int32_t GetLayer() ;

/// @brief Method GetMaterial, addr 0x1825820f0, size 0x30, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> GetMaterial() ;

/// @brief Method GetPrimaryLight, addr 0x182582120, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Light> GetPrimaryLight() ;

/// @brief Method GetProjectionMatrix, addr 0x182582160, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 GetProjectionMatrix(int32_t  slice) ;

/// @brief Method GetTimeSliceBoundsUpdateFrameCount, addr 0x1825821b0, size 0x30, virtual false, abstract: false, final false
inline int32_t GetTimeSliceBoundsUpdateFrameCount() ;

/// @brief Method GetViewer, addr 0x182582360, size 0x60, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Camera> GetViewer(bool  includeSceneCamera, bool  initial) ;

/// @brief Method GetViewerDistanceToShoreline, addr 0x1825821e0, size 0xc0, virtual false, abstract: false, final false
inline bool GetViewerDistanceToShoreline(::UnityEngine::Camera*  camera, ::by_ref<float_t>  distance) ;

/// @brief Method GetViewerHeightAboveWater, addr 0x1825822a0, size 0xc0, virtual false, abstract: false, final false
inline bool GetViewerHeightAboveWater(::UnityEngine::Camera*  camera, ::by_ref<float_t>  height) ;

/// @brief Method GetViewpoint, addr 0x1825823c0, size 0xc0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetViewpoint() ;

/// @brief Method GetVolumeMaterial, addr 0x182582480, size 0x30, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> GetVolumeMaterial() ;

/// @brief Method GetWaterBodyCulling, addr 0x1825824b0, size 0x30, virtual false, abstract: false, final false
inline bool GetWaterBodyCulling() ;

/// @brief Method GetWindDirection, addr 0x1825824e0, size 0xc0, virtual false, abstract: false, final false
inline float_t GetWindDirection() ;

/// @brief Method GetWindSpeed, addr 0x1825825a0, size 0x60, virtual false, abstract: false, final false
inline float_t GetWindSpeed() ;

/// @brief Method GetWindTurbulence, addr 0x182582600, size 0x60, virtual false, abstract: false, final false
inline float_t GetWindTurbulence() ;

/// @brief Method GetWriteMotionVectors, addr 0x180371720, size 0x10, virtual false, abstract: false, final false
inline bool GetWriteMotionVectors() ;

/// @brief Method GetWriteToColorTexture, addr 0x182582660, size 0x40, virtual false, abstract: false, final false
inline bool GetWriteToColorTexture() ;

/// @brief Method GetWriteToDepthTexture, addr 0x1825826a0, size 0x40, virtual false, abstract: false, final false
inline bool GetWriteToDepthTexture() ;

/// @brief Method HasWater, addr 0x1825826e0, size 0x130, virtual false, abstract: false, final false
inline bool HasWater(::UnityEngine::Vector3  position) ;

/// @brief Method Initialize, addr 0x182582950, size 0xc30, virtual true, abstract: false, final false
inline void Initialize() ;

/// @brief Method InitializeOnLoad, addr 0x182582810, size 0x30, virtual false, abstract: false, final false
static inline void InitializeOnLoad() ;

/// @brief Method InitializePerFrameMaterialParameters, addr 0x182582840, size 0x110, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>* InitializePerFrameMaterialParameters() ;

/// @brief Method IsClosestViewpoint, addr 0x182583580, size 0x240, virtual false, abstract: false, final false
inline bool IsClosestViewpoint(::UnityEngine::Vector3  position) ;

/// @brief Method LateUpdate, addr 0x182584460, size 0x1b0, virtual true, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method LateUpdatePosition, addr 0x1825837c0, size 0x300, virtual false, abstract: false, final false
inline void LateUpdatePosition() ;

/// @brief Method LateUpdateScale, addr 0x182583ac0, size 0x430, virtual false, abstract: false, final false
inline void LateUpdateScale() ;

/// @brief Method LateUpdateViewerHeight, addr 0x182583ef0, size 0x570, virtual false, abstract: false, final false
inline void LateUpdateViewerHeight() ;

/// @brief Method LoadCameraData, addr 0x182584610, size 0x290, virtual false, abstract: false, final false
inline void LoadCameraData(::UnityEngine::Camera*  camera) ;

/// @brief Method MaximumWavelength, addr 0x182584900, size 0x20, virtual false, abstract: false, final false
inline float_t MaximumWavelength(float_t  scale, int32_t  resolution) ;

/// @brief Method MaximumWavelength, addr 0x1825848a0, size 0x60, virtual false, abstract: false, final false
inline float_t MaximumWavelength(int32_t  slice, int32_t  resolution) ;

static inline ::WaveHarmonic::Crest::WaterRenderer* New_ctor() ;

/// @brief Method OnBeginCameraOpaqueTexture, addr 0x182584920, size 0x230, virtual false, abstract: false, final false
inline void OnBeginCameraOpaqueTexture(::UnityEngine::Camera*  camera) ;

/// @brief Method OnBeginCameraRendering, addr 0x182584d50, size 0x80, virtual false, abstract: false, final false
inline void OnBeginCameraRendering(::UnityEngine::Camera*  camera) ;

/// @brief Method OnBeginCameraRendering, addr 0x182584dd0, size 0x6d0, virtual false, abstract: false, final false
inline void OnBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera) ;

/// @brief Method OnBeginCameraRenderingLegacy, addr 0x182584b50, size 0x200, virtual false, abstract: false, final false
inline void OnBeginCameraRenderingLegacy(::UnityEngine::Camera*  camera) ;

/// @brief Method OnDestroy, addr 0x1825854a0, size 0x20, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1825854c0, size 0x40, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEndCameraOpaqueTexture, addr 0x182585500, size 0x40, virtual false, abstract: false, final false
inline void OnEndCameraOpaqueTexture(::UnityEngine::Camera*  camera) ;

/// @brief Method OnEndCameraRendering, addr 0x182585640, size 0x10, virtual false, abstract: false, final false
inline void OnEndCameraRendering(::UnityEngine::Camera*  camera) ;

/// @brief Method OnEndCameraRendering, addr 0x182585650, size 0x200, virtual false, abstract: false, final false
inline void OnEndCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera) ;

/// @brief Method OnEndCameraRenderingLegacy, addr 0x182585540, size 0x100, virtual false, abstract: false, final false
inline void OnEndCameraRenderingLegacy(::UnityEngine::Camera*  camera) ;

/// @brief Method OnLegacyCopyPass, addr 0x182585850, size 0x420, virtual false, abstract: false, final false
inline void OnLegacyCopyPass(::UnityEngine::Camera*  camera) ;

/// @brief Method OnLegacyDestroy, addr 0x182585c70, size 0x40, virtual false, abstract: false, final false
inline void OnLegacyDestroy() ;

/// @brief Method OnMigrate, addr 0x182585cb0, size 0x160, virtual true, abstract: false, final false
inline void OnMigrate() ;

/// @brief Method PruneCameraData, addr 0x182585e10, size 0x190, virtual false, abstract: false, final false
inline void PruneCameraData() ;

/// @brief Method RemoveCameraData, addr 0x182585fa0, size 0x130, virtual false, abstract: false, final false
inline void RemoveCameraData(::UnityEngine::Camera*  camera) ;

/// @brief Method SetAllowRenderQueueSorting, addr 0x1825860d0, size 0x30, virtual false, abstract: false, final false
inline void SetAllowRenderQueueSorting(bool  previous, bool  current) ;

/// @brief Method SetCastShadows, addr 0x182586100, size 0x30, virtual false, abstract: false, final false
inline void SetCastShadows(bool  previous, bool  current) ;

/// @brief Method SetExtentsSizeMultiplier, addr 0x182586130, size 0x40, virtual false, abstract: false, final false
inline void SetExtentsSizeMultiplier(float_t  previous, float_t  current) ;

/// @brief Method SetGeometryDownSampleFactor, addr 0x182586170, size 0x40, virtual false, abstract: false, final false
inline void SetGeometryDownSampleFactor(int32_t  previous, int32_t  current) ;

/// @brief Method SetLayer, addr 0x1825861b0, size 0x30, virtual false, abstract: false, final false
inline void SetLayer(int32_t  previous, int32_t  current) ;

/// @brief Method SetMaterial, addr 0x1825861e0, size 0x30, virtual false, abstract: false, final false
inline void SetMaterial(::UnityEngine::Material*  previous, ::UnityEngine::Material*  current) ;

/// @brief Method SetTimeSliceBoundsUpdateFrameCount, addr 0x182586210, size 0x30, virtual false, abstract: false, final false
inline void SetTimeSliceBoundsUpdateFrameCount(int32_t  previous, int32_t  current) ;

/// @brief Method SetVolumeMaterial, addr 0x182586240, size 0x30, virtual false, abstract: false, final false
inline void SetVolumeMaterial(::UnityEngine::Material*  previous, ::UnityEngine::Material*  current) ;

/// @brief Method SetWaterBodyCulling, addr 0x182586270, size 0x30, virtual false, abstract: false, final false
inline void SetWaterBodyCulling(bool  previous, bool  current) ;

/// @brief Method ShouldExecuteQueries, addr 0x1825862a0, size 0x90, virtual false, abstract: false, final false
inline bool ShouldExecuteQueries(::UnityEngine::Camera*  camera) ;

/// @brief Method ShouldExecuteSkippedFrame, addr 0x182586330, size 0x90, virtual false, abstract: false, final false
inline bool ShouldExecuteSkippedFrame(::UnityEngine::Camera*  camera) ;

/// @brief Method ShouldExecuteViewpoint, addr 0x1825863c0, size 0x40, virtual false, abstract: false, final false
inline bool ShouldExecuteViewpoint(::UnityEngine::Camera*  camera, int32_t  layer, ::WaveHarmonic::Crest::WaterCameraExclusion  exclusion) ;

/// @brief Method ShouldRender, addr 0x182586400, size 0x20, virtual false, abstract: false, final false
static inline bool ShouldRender(::UnityEngine::Camera*  camera) ;

/// @brief Method ShouldRender, addr 0x182586470, size 0xe0, virtual false, abstract: false, final false
static inline bool ShouldRender(::UnityEngine::Camera*  camera, ::WaveHarmonic::Crest::WaterCameraExclusion  exclusion) ;

/// @brief Method ShouldRender, addr 0x182586420, size 0x50, virtual false, abstract: false, final false
static inline bool ShouldRender(::UnityEngine::Camera*  camera, int32_t  layer) ;

/// @brief Method ShouldRender, addr 0x182586550, size 0x130, virtual false, abstract: false, final false
static inline bool ShouldRender(::UnityEngine::Camera*  camera, int32_t  layer, ::WaveHarmonic::Crest::WaterCameraExclusion  exclusion) ;

/// @brief Method StoreCameraData, addr 0x182586680, size 0x1c0, virtual false, abstract: false, final false
inline void StoreCameraData(::UnityEngine::Camera*  camera) ;

/// @brief Method UpdateAbsorptionFromColor, addr 0x1825869b0, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 UpdateAbsorptionFromColor(::UnityEngine::Color  color) ;

/// @brief Method UpdateAbsorptionFromColor, addr 0x182586840, size 0x170, virtual false, abstract: false, final false
static inline void UpdateAbsorptionFromColor(::UnityEngine::Material*  material) ;

/// @brief Method UpdateCameraOpaqueTexture, addr 0x182586aa0, size 0x120, virtual false, abstract: false, final false
inline void UpdateCameraOpaqueTexture(::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::CommandBuffer*  commands) ;

/// @brief Method UpdateMatrices, addr 0x182586bc0, size 0x30, virtual false, abstract: false, final false
inline void UpdateMatrices(::UnityEngine::Camera*  camera) ;

/// @brief Method UpdatePerCameraHeight, addr 0x182586bf0, size 0x1b0, virtual false, abstract: false, final false
inline void UpdatePerCameraHeight(::UnityEngine::Camera*  camera) ;

/// @brief Method UpdatePerFrameMaterialParameters, addr 0x182586da0, size 0x240, virtual false, abstract: false, final false
inline void UpdatePerFrameMaterialParameters(::ArrayW<::UnityEngine::Vector4>  current) ;

/// @brief Method UpdateRenderPipelineTextures, addr 0x182586fe0, size 0xa0, virtual false, abstract: false, final false
inline void UpdateRenderPipelineTextures(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera) ;

/// @brief Method UpdateSkippedCameras, addr 0x182587080, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* UpdateSkippedCameras() ;

/// @brief Method VerifyRequirements, addr 0x1825870d0, size 0xd0, virtual false, abstract: false, final false
inline bool VerifyRequirements() ;

/// @brief Method WritePerFrameMaterialParams, addr 0x1825871a0, size 0x140, virtual false, abstract: false, final false
inline void WritePerFrameMaterialParams(::UnityEngine::Rendering::CommandBuffer*  commands) ;

constexpr ::WaveHarmonic::Crest::AbsorptionLod* const& __cordl_internal_get__AbsorptionLod() const;

constexpr ::WaveHarmonic::Crest::AbsorptionLod*& __cordl_internal_get__AbsorptionLod() ;

constexpr ::WaveHarmonic::Crest::WaterRenderer_ActiveModules const& __cordl_internal_get__ActiveModules() const;

constexpr ::WaveHarmonic::Crest::WaterRenderer_ActiveModules& __cordl_internal_get__ActiveModules() ;

constexpr ::WaveHarmonic::Crest::AlbedoLod* const& __cordl_internal_get__AlbedoLod() const;

constexpr ::WaveHarmonic::Crest::AlbedoLod*& __cordl_internal_get__AlbedoLod() ;

constexpr bool const& __cordl_internal_get__AllowRenderQueueSorting() const;

constexpr bool& __cordl_internal_get__AllowRenderQueueSorting() ;

constexpr ::WaveHarmonic::Crest::AnimatedWavesLod* const& __cordl_internal_get__AnimatedWavesLod() const;

constexpr ::WaveHarmonic::Crest::AnimatedWavesLod*& __cordl_internal_get__AnimatedWavesLod() ;

constexpr ::UnityW<::UnityEngine::Texture2DArray> const& __cordl_internal_get__BlackTextureArray() const;

constexpr ::UnityW<::UnityEngine::Texture2DArray>& __cordl_internal_get__BlackTextureArray() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__Camera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__Camera() ;

constexpr ::WaveHarmonic::Crest::WaterCameraExclusion const& __cordl_internal_get__CameraExclusions() const;

constexpr ::WaveHarmonic::Crest::WaterCameraExclusion& __cordl_internal_get__CameraExclusions() ;

constexpr ::ArrayW<::UnityEngine::Plane> const& __cordl_internal_get__CameraFrustumPlanes() const;

constexpr ::ArrayW<::UnityEngine::Plane>& __cordl_internal_get__CameraFrustumPlanes() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get__CameraFrustumPoints() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get__CameraFrustumPoints() ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get__CameraOpaqueTexture() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get__CameraOpaqueTexture() ;

constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get__CameraOpaqueTextureCommands() const;

constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get__CameraOpaqueTextureCommands() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* const& __cordl_internal_get__Cameras() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*& __cordl_internal_get__Cameras() ;

constexpr ::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>* const& __cordl_internal_get__CascadeData() const;

constexpr ::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*& __cordl_internal_get__CascadeData() ;

constexpr ::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>* const& __cordl_internal_get__CascadeData_k__BackingField() const;

constexpr ::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*& __cordl_internal_get__CascadeData_k__BackingField() ;

constexpr bool const& __cordl_internal_get__CastShadows() const;

constexpr bool& __cordl_internal_get__CastShadows() ;

constexpr bool const& __cordl_internal_get__CenterOfDetailDisplacementCorrection() const;

constexpr bool& __cordl_internal_get__CenterOfDetailDisplacementCorrection() ;

constexpr ::WaveHarmonic::Crest::SampleCollisionHelper* const& __cordl_internal_get__CenterOfDetailDisplacementCorrectionHelper() const;

constexpr ::WaveHarmonic::Crest::SampleCollisionHelper*& __cordl_internal_get__CenterOfDetailDisplacementCorrectionHelper() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__ChunkTemplate() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__ChunkTemplate() ;

constexpr ::WaveHarmonic::Crest::ClipLod* const& __cordl_internal_get__ClipLod() const;

constexpr ::WaveHarmonic::Crest::ClipLod*& __cordl_internal_get__ClipLod() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__Container() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__Container() ;

constexpr ::UnityEngine::Rendering::ScriptableRenderContext const& __cordl_internal_get__Context() const;

constexpr ::UnityEngine::Rendering::ScriptableRenderContext& __cordl_internal_get__Context() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__CurrentCamera_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__CurrentCamera_k__BackingField() ;

constexpr ::WaveHarmonic::Crest::WaterRenderer_PerCameraData* const& __cordl_internal_get__CurrentPerCameraData() const;

constexpr ::WaveHarmonic::Crest::WaterRenderer_PerCameraData*& __cordl_internal_get__CurrentPerCameraData() ;

constexpr ::WaveHarmonic::Crest::WaterDataBackgroundMode const& __cordl_internal_get__DataBackgroundMode() const;

constexpr ::WaveHarmonic::Crest::WaterDataBackgroundMode& __cordl_internal_get__DataBackgroundMode() ;

constexpr ::WaveHarmonic::Crest::WaterRenderer_DebugFields* const& __cordl_internal_get__Debug() const;

constexpr ::WaveHarmonic::Crest::WaterRenderer_DebugFields*& __cordl_internal_get__Debug() ;

constexpr ::WaveHarmonic::Crest::WaterBodyAffects const& __cordl_internal_get__DefaultExcludes() const;

constexpr ::WaveHarmonic::Crest::WaterBodyAffects& __cordl_internal_get__DefaultExcludes() ;

constexpr ::WaveHarmonic::Crest::DepthLod* const& __cordl_internal_get__DepthLod() const;

constexpr ::WaveHarmonic::Crest::DepthLod*& __cordl_internal_get__DepthLod() ;

constexpr bool const& __cordl_internal_get__DoneCameraOpaqueTexture() const;

constexpr bool& __cordl_internal_get__DoneCameraOpaqueTexture() ;

constexpr bool const& __cordl_internal_get__DoneMatrices() const;

constexpr bool& __cordl_internal_get__DoneMatrices() ;

constexpr bool const& __cordl_internal_get__DonePerCameraHeight() const;

constexpr bool& __cordl_internal_get__DonePerCameraHeight() ;

constexpr float_t const& __cordl_internal_get__DropDetailHeightBasedOnWaves() const;

constexpr float_t& __cordl_internal_get__DropDetailHeightBasedOnWaves() ;

constexpr ::WaveHarmonic::Crest::DynamicWavesLod* const& __cordl_internal_get__DynamicWavesLod() const;

constexpr ::WaveHarmonic::Crest::DynamicWavesLod*& __cordl_internal_get__DynamicWavesLod() ;

constexpr bool const& __cordl_internal_get__EditorMultipleViewpoints() const;

constexpr bool& __cordl_internal_get__EditorMultipleViewpoints() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__EndOfFrame() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__EndOfFrame() ;

constexpr float_t const& __cordl_internal_get__ExtentsSizeMultiplier() const;

constexpr float_t& __cordl_internal_get__ExtentsSizeMultiplier() ;

constexpr ::WaveHarmonic::Crest::FlowLod* const& __cordl_internal_get__FlowLod() const;

constexpr ::WaveHarmonic::Crest::FlowLod*& __cordl_internal_get__FlowLod() ;

constexpr ::WaveHarmonic::Crest::FoamLod* const& __cordl_internal_get__FoamLod() const;

constexpr ::WaveHarmonic::Crest::FoamLod*& __cordl_internal_get__FoamLod() ;

constexpr bool const& __cordl_internal_get__FollowSceneCamera() const;

constexpr bool& __cordl_internal_get__FollowSceneCamera() ;

constexpr bool const& __cordl_internal_get__ForceScaleChangeSmoothing() const;

constexpr bool& __cordl_internal_get__ForceScaleChangeSmoothing() ;

constexpr int32_t const& __cordl_internal_get__GeneratedSettingsHash() const;

constexpr int32_t& __cordl_internal_get__GeneratedSettingsHash() ;

constexpr int32_t const& __cordl_internal_get__GeometryDownSampleFactor() const;

constexpr int32_t& __cordl_internal_get__GeometryDownSampleFactor() ;

constexpr float_t const& __cordl_internal_get__GravityMultiplier() const;

constexpr float_t& __cordl_internal_get__GravityMultiplier() ;

constexpr float_t const& __cordl_internal_get__GravityOverride() const;

constexpr float_t& __cordl_internal_get__GravityOverride() ;

constexpr bool const& __cordl_internal_get__HasAnyViewerRendered() const;

constexpr bool& __cordl_internal_get__HasAnyViewerRendered() ;

constexpr bool const& __cordl_internal_get__HasAnyViewpointExecuted() const;

constexpr bool& __cordl_internal_get__HasAnyViewpointExecuted() ;

constexpr bool const& __cordl_internal_get__HasTeleportedThisFrame() const;

constexpr bool& __cordl_internal_get__HasTeleportedThisFrame() ;

constexpr bool const& __cordl_internal_get__HeightQueries() const;

constexpr bool& __cordl_internal_get__HeightQueries() ;

constexpr bool const& __cordl_internal_get__Initialized() const;

constexpr bool& __cordl_internal_get__Initialized() ;

constexpr ::WaveHarmonic::Crest::WaterInjectionPoint const& __cordl_internal_get__InjectionPoint() const;

constexpr ::WaveHarmonic::Crest::WaterInjectionPoint& __cordl_internal_get__InjectionPoint() ;

constexpr bool const& __cordl_internal_get__IsEndOfFrame() const;

constexpr bool& __cordl_internal_get__IsEndOfFrame() ;

constexpr bool const& __cordl_internal_get__IsFirstFrameSinceEnabled() const;

constexpr bool& __cordl_internal_get__IsFirstFrameSinceEnabled() ;

constexpr bool const& __cordl_internal_get__IsSeparateViewpointCameraLoop_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSeparateViewpointCameraLoop_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Layer() const;

constexpr int32_t& __cordl_internal_get__Layer() ;

constexpr ::WaveHarmonic::Crest::LevelLod* const& __cordl_internal_get__LevelLod() const;

constexpr ::WaveHarmonic::Crest::LevelLod*& __cordl_internal_get__LevelLod() ;

constexpr ::WaveHarmonic::Crest::MaskRenderer* const& __cordl_internal_get__Mask() const;

constexpr ::WaveHarmonic::Crest::MaskRenderer*& __cordl_internal_get__Mask() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__Material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__Material() ;

constexpr ::WaveHarmonic::Crest::Meniscus* const& __cordl_internal_get__Meniscus() const;

constexpr ::WaveHarmonic::Crest::Meniscus*& __cordl_internal_get__Meniscus() ;

constexpr bool const& __cordl_internal_get__MultipleViewpoints() const;

constexpr bool& __cordl_internal_get__MultipleViewpoints() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__OldViewpointPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__OldViewpointPosition() ;

constexpr bool const& __cordl_internal_get__OverrideGravity() const;

constexpr bool& __cordl_internal_get__OverrideGravity() ;

constexpr bool const& __cordl_internal_get__OverrideRenderHDR() const;

constexpr bool& __cordl_internal_get__OverrideRenderHDR() ;

constexpr bool const& __cordl_internal_get__OverrideWindZoneWindDirection() const;

constexpr bool& __cordl_internal_get__OverrideWindZoneWindDirection() ;

constexpr bool const& __cordl_internal_get__OverrideWindZoneWindSpeed() const;

constexpr bool& __cordl_internal_get__OverrideWindZoneWindSpeed() ;

constexpr bool const& __cordl_internal_get__OverrideWindZoneWindTurbulence() const;

constexpr bool& __cordl_internal_get__OverrideWindZoneWindTurbulence() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::WaveHarmonic::Crest::WaterRenderer_PerCameraData*>* const& __cordl_internal_get__PerCameraData() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::WaveHarmonic::Crest::WaterRenderer_PerCameraData*>*& __cordl_internal_get__PerCameraData() ;

constexpr bool const& __cordl_internal_get__PerCameraHeightReady() const;

constexpr bool& __cordl_internal_get__PerCameraHeightReady() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,int32_t>* const& __cordl_internal_get__PerCameraLastFrame() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,int32_t>*& __cordl_internal_get__PerCameraLastFrame() ;

constexpr ::WaveHarmonic::Crest::Portals::PortalRenderer* const& __cordl_internal_get__Portals() const;

constexpr ::WaveHarmonic::Crest::Portals::PortalRenderer*& __cordl_internal_get__Portals() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__Position_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__Position_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Light> const& __cordl_internal_get__PrimaryLight() const;

constexpr ::UnityW<::UnityEngine::Light>& __cordl_internal_get__PrimaryLight() ;

constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& __cordl_internal_get__ProjectionMatrix() const;

constexpr ::ArrayW<::UnityEngine::Matrix4x4>& __cordl_internal_get__ProjectionMatrix() ;

constexpr ::System::Collections::Generic::Stack_1<::WaveHarmonic::Crest::WaterRenderer_ActiveModules>* const& __cordl_internal_get__RecursiveActiveModules() const;

constexpr ::System::Collections::Generic::Stack_1<::WaveHarmonic::Crest::WaterRenderer_ActiveModules>*& __cordl_internal_get__RecursiveActiveModules() ;

constexpr ::WaveHarmonic::Crest::WaterReflections* const& __cordl_internal_get__Reflections() const;

constexpr ::WaveHarmonic::Crest::WaterReflections*& __cordl_internal_get__Reflections() ;

constexpr bool const& __cordl_internal_get__RenderHDR() const;

constexpr bool& __cordl_internal_get__RenderHDR() ;

constexpr bool const& __cordl_internal_get__RenderShadows() const;

constexpr bool& __cordl_internal_get__RenderShadows() ;

constexpr int32_t const& __cordl_internal_get__Resolution() const;

constexpr int32_t& __cordl_internal_get__Resolution() ;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterResources> const& __cordl_internal_get__Resources() const;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterResources>& __cordl_internal_get__Resources() ;

constexpr ::WaveHarmonic::Crest::SampleDepthHelper* const& __cordl_internal_get__SampleDepthHelper() const;

constexpr ::WaveHarmonic::Crest::SampleDepthHelper*& __cordl_internal_get__SampleDepthHelper() ;

constexpr ::WaveHarmonic::Crest::SampleCollisionHelper* const& __cordl_internal_get__SampleHeightHelper() const;

constexpr ::WaveHarmonic::Crest::SampleCollisionHelper*& __cordl_internal_get__SampleHeightHelper() ;

constexpr ::WaveHarmonic::Crest::SampleCollisionHelper* const& __cordl_internal_get__SampleHeightHelperPerCamera() const;

constexpr ::WaveHarmonic::Crest::SampleCollisionHelper*& __cordl_internal_get__SampleHeightHelperPerCamera() ;

constexpr bool const& __cordl_internal_get__SampleTerrainHeightForScale() const;

constexpr bool& __cordl_internal_get__SampleTerrainHeightForScale() ;

constexpr int32_t const& __cordl_internal_get__ScaleDifferencePower2_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__ScaleDifferencePower2_k__BackingField() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__ScaleRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__ScaleRange() ;

constexpr float_t const& __cordl_internal_get__Scale_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Scale_k__BackingField() ;

constexpr ::WaveHarmonic::Crest::ScatteringLod* const& __cordl_internal_get__ScatteringLod() const;

constexpr ::WaveHarmonic::Crest::ScatteringLod*& __cordl_internal_get__ScatteringLod() ;

constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get__ScreenSpaceShadowMapBuffer() const;

constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get__ScreenSpaceShadowMapBuffer() ;

constexpr ::WaveHarmonic::Crest::RenderPipeline const& __cordl_internal_get__SetUpFor() const;

constexpr ::WaveHarmonic::Crest::RenderPipeline& __cordl_internal_get__SetUpFor() ;

constexpr ::WaveHarmonic::Crest::ShadowLod* const& __cordl_internal_get__ShadowLod() const;

constexpr ::WaveHarmonic::Crest::ShadowLod*& __cordl_internal_get__ShadowLod() ;

constexpr bool const& __cordl_internal_get__ShowWaterProxyPlane() const;

constexpr bool& __cordl_internal_get__ShowWaterProxyPlane() ;

constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get__SimulationBuffer() const;

constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get__SimulationBuffer() ;

constexpr ::System::Collections::Generic::List_1<::WaveHarmonic::Crest::Lod*>* const& __cordl_internal_get__Simulations_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::WaveHarmonic::Crest::Lod*>*& __cordl_internal_get__Simulations_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Slices() const;

constexpr int32_t& __cordl_internal_get__Slices() ;

constexpr ::WaveHarmonic::Crest::SurfaceRenderer* const& __cordl_internal_get__Surface() const;

constexpr ::WaveHarmonic::Crest::SurfaceRenderer*& __cordl_internal_get__Surface() ;

constexpr ::WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode const& __cordl_internal_get__SurfaceSelfIntersectionFixMode() const;

constexpr ::WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode& __cordl_internal_get__SurfaceSelfIntersectionFixMode() ;

constexpr float_t const& __cordl_internal_get__TeleportThreshold() const;

constexpr float_t& __cordl_internal_get__TeleportThreshold() ;

constexpr float_t const& __cordl_internal_get__TeleportTimerForHeightQueries() const;

constexpr float_t& __cordl_internal_get__TeleportTimerForHeightQueries() ;

constexpr ::UnityW<::WaveHarmonic::Crest::TimeProvider> const& __cordl_internal_get__TimeProvider() const;

constexpr ::UnityW<::WaveHarmonic::Crest::TimeProvider>& __cordl_internal_get__TimeProvider() ;

constexpr ::WaveHarmonic::Crest::Utility::Internal::Stack_1<::WaveHarmonic::Crest::ITimeProvider*>* const& __cordl_internal_get__TimeProviders_k__BackingField() const;

constexpr ::WaveHarmonic::Crest::Utility::Internal::Stack_1<::WaveHarmonic::Crest::ITimeProvider*>*& __cordl_internal_get__TimeProviders_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__TimeSliceBoundsUpdateFrameCount() const;

constexpr int32_t& __cordl_internal_get__TimeSliceBoundsUpdateFrameCount() ;

constexpr ::WaveHarmonic::Crest::UnderwaterRenderer* const& __cordl_internal_get__Underwater() const;

constexpr ::WaveHarmonic::Crest::UnderwaterRenderer*& __cordl_internal_get__Underwater() ;

constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get__UpdateColorDepthTexturesBuffer() const;

constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get__UpdateColorDepthTexturesBuffer() ;

constexpr float_t const& __cordl_internal_get__ViewerAltitudeLevelAlpha_k__BackingField() const;

constexpr float_t& __cordl_internal_get__ViewerAltitudeLevelAlpha_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__ViewerDistanceToShoreline_k__BackingField() const;

constexpr float_t& __cordl_internal_get__ViewerDistanceToShoreline_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__ViewerHeightAboveWaterPerCamera() const;

constexpr float_t& __cordl_internal_get__ViewerHeightAboveWaterPerCamera() ;

constexpr float_t const& __cordl_internal_get__ViewerHeightAboveWater_k__BackingField() const;

constexpr float_t& __cordl_internal_get__ViewerHeightAboveWater_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__Viewpoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__Viewpoint() ;

constexpr float_t const& __cordl_internal_get__ViewpointHeightAboveWaterSmooth() const;

constexpr float_t& __cordl_internal_get__ViewpointHeightAboveWaterSmooth() ;

constexpr float_t const& __cordl_internal_get__ViewpointHeightAboveWater_k__BackingField() const;

constexpr float_t& __cordl_internal_get__ViewpointHeightAboveWater_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__VolumeMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__VolumeMaterial() ;

constexpr bool const& __cordl_internal_get__WaterBodyCulling() const;

constexpr bool& __cordl_internal_get__WaterBodyCulling() ;

constexpr float_t const& __cordl_internal_get__WindDirection() const;

constexpr float_t& __cordl_internal_get__WindDirection() ;

constexpr float_t const& __cordl_internal_get__WindSpeed() const;

constexpr float_t& __cordl_internal_get__WindSpeed() ;

constexpr float_t const& __cordl_internal_get__WindTurbulence() const;

constexpr float_t& __cordl_internal_get__WindTurbulence() ;

constexpr ::UnityW<::UnityEngine::WindZone> const& __cordl_internal_get__WindZone() const;

constexpr ::UnityW<::UnityEngine::WindZone>& __cordl_internal_get__WindZone() ;

constexpr bool const& __cordl_internal_get__WriteMotionVectors() const;

constexpr bool& __cordl_internal_get__WriteMotionVectors() ;

constexpr bool const& __cordl_internal_get__WriteToColorTexture() const;

constexpr bool& __cordl_internal_get__WriteToColorTexture() ;

constexpr bool const& __cordl_internal_get__WriteToDepthTexture() const;

constexpr bool& __cordl_internal_get__WriteToDepthTexture() ;

constexpr void __cordl_internal_set__AbsorptionLod(::WaveHarmonic::Crest::AbsorptionLod*  value) ;

constexpr void __cordl_internal_set__ActiveModules(::WaveHarmonic::Crest::WaterRenderer_ActiveModules  value) ;

constexpr void __cordl_internal_set__AlbedoLod(::WaveHarmonic::Crest::AlbedoLod*  value) ;

constexpr void __cordl_internal_set__AllowRenderQueueSorting(bool  value) ;

constexpr void __cordl_internal_set__AnimatedWavesLod(::WaveHarmonic::Crest::AnimatedWavesLod*  value) ;

constexpr void __cordl_internal_set__BlackTextureArray(::UnityW<::UnityEngine::Texture2DArray>  value) ;

constexpr void __cordl_internal_set__Camera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set__CameraExclusions(::WaveHarmonic::Crest::WaterCameraExclusion  value) ;

constexpr void __cordl_internal_set__CameraFrustumPlanes(::ArrayW<::UnityEngine::Plane>  value) ;

constexpr void __cordl_internal_set__CameraFrustumPoints(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set__CameraOpaqueTexture(::UnityEngine::Rendering::RTHandle*  value) ;

constexpr void __cordl_internal_set__CameraOpaqueTextureCommands(::UnityEngine::Rendering::CommandBuffer*  value) ;

constexpr void __cordl_internal_set__Cameras(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*  value) ;

constexpr void __cordl_internal_set__CascadeData(::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*  value) ;

constexpr void __cordl_internal_set__CascadeData_k__BackingField(::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*  value) ;

constexpr void __cordl_internal_set__CastShadows(bool  value) ;

constexpr void __cordl_internal_set__CenterOfDetailDisplacementCorrection(bool  value) ;

constexpr void __cordl_internal_set__CenterOfDetailDisplacementCorrectionHelper(::WaveHarmonic::Crest::SampleCollisionHelper*  value) ;

constexpr void __cordl_internal_set__ChunkTemplate(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__ClipLod(::WaveHarmonic::Crest::ClipLod*  value) ;

constexpr void __cordl_internal_set__Container(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__Context(::UnityEngine::Rendering::ScriptableRenderContext  value) ;

constexpr void __cordl_internal_set__CurrentCamera_k__BackingField(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set__CurrentPerCameraData(::WaveHarmonic::Crest::WaterRenderer_PerCameraData*  value) ;

constexpr void __cordl_internal_set__DataBackgroundMode(::WaveHarmonic::Crest::WaterDataBackgroundMode  value) ;

constexpr void __cordl_internal_set__Debug(::WaveHarmonic::Crest::WaterRenderer_DebugFields*  value) ;

constexpr void __cordl_internal_set__DefaultExcludes(::WaveHarmonic::Crest::WaterBodyAffects  value) ;

constexpr void __cordl_internal_set__DepthLod(::WaveHarmonic::Crest::DepthLod*  value) ;

constexpr void __cordl_internal_set__DoneCameraOpaqueTexture(bool  value) ;

constexpr void __cordl_internal_set__DoneMatrices(bool  value) ;

constexpr void __cordl_internal_set__DonePerCameraHeight(bool  value) ;

constexpr void __cordl_internal_set__DropDetailHeightBasedOnWaves(float_t  value) ;

constexpr void __cordl_internal_set__DynamicWavesLod(::WaveHarmonic::Crest::DynamicWavesLod*  value) ;

constexpr void __cordl_internal_set__EditorMultipleViewpoints(bool  value) ;

constexpr void __cordl_internal_set__EndOfFrame(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__ExtentsSizeMultiplier(float_t  value) ;

constexpr void __cordl_internal_set__FlowLod(::WaveHarmonic::Crest::FlowLod*  value) ;

constexpr void __cordl_internal_set__FoamLod(::WaveHarmonic::Crest::FoamLod*  value) ;

constexpr void __cordl_internal_set__FollowSceneCamera(bool  value) ;

constexpr void __cordl_internal_set__ForceScaleChangeSmoothing(bool  value) ;

constexpr void __cordl_internal_set__GeneratedSettingsHash(int32_t  value) ;

constexpr void __cordl_internal_set__GeometryDownSampleFactor(int32_t  value) ;

constexpr void __cordl_internal_set__GravityMultiplier(float_t  value) ;

constexpr void __cordl_internal_set__GravityOverride(float_t  value) ;

constexpr void __cordl_internal_set__HasAnyViewerRendered(bool  value) ;

constexpr void __cordl_internal_set__HasAnyViewpointExecuted(bool  value) ;

constexpr void __cordl_internal_set__HasTeleportedThisFrame(bool  value) ;

constexpr void __cordl_internal_set__HeightQueries(bool  value) ;

constexpr void __cordl_internal_set__Initialized(bool  value) ;

constexpr void __cordl_internal_set__InjectionPoint(::WaveHarmonic::Crest::WaterInjectionPoint  value) ;

constexpr void __cordl_internal_set__IsEndOfFrame(bool  value) ;

constexpr void __cordl_internal_set__IsFirstFrameSinceEnabled(bool  value) ;

constexpr void __cordl_internal_set__IsSeparateViewpointCameraLoop_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Layer(int32_t  value) ;

constexpr void __cordl_internal_set__LevelLod(::WaveHarmonic::Crest::LevelLod*  value) ;

constexpr void __cordl_internal_set__Mask(::WaveHarmonic::Crest::MaskRenderer*  value) ;

constexpr void __cordl_internal_set__Material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__Meniscus(::WaveHarmonic::Crest::Meniscus*  value) ;

constexpr void __cordl_internal_set__MultipleViewpoints(bool  value) ;

constexpr void __cordl_internal_set__OldViewpointPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__OverrideGravity(bool  value) ;

constexpr void __cordl_internal_set__OverrideRenderHDR(bool  value) ;

constexpr void __cordl_internal_set__OverrideWindZoneWindDirection(bool  value) ;

constexpr void __cordl_internal_set__OverrideWindZoneWindSpeed(bool  value) ;

constexpr void __cordl_internal_set__OverrideWindZoneWindTurbulence(bool  value) ;

constexpr void __cordl_internal_set__PerCameraData(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::WaveHarmonic::Crest::WaterRenderer_PerCameraData*>*  value) ;

constexpr void __cordl_internal_set__PerCameraHeightReady(bool  value) ;

constexpr void __cordl_internal_set__PerCameraLastFrame(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,int32_t>*  value) ;

constexpr void __cordl_internal_set__Portals(::WaveHarmonic::Crest::Portals::PortalRenderer*  value) ;

constexpr void __cordl_internal_set__Position_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__PrimaryLight(::UnityW<::UnityEngine::Light>  value) ;

constexpr void __cordl_internal_set__ProjectionMatrix(::ArrayW<::UnityEngine::Matrix4x4>  value) ;

constexpr void __cordl_internal_set__RecursiveActiveModules(::System::Collections::Generic::Stack_1<::WaveHarmonic::Crest::WaterRenderer_ActiveModules>*  value) ;

constexpr void __cordl_internal_set__Reflections(::WaveHarmonic::Crest::WaterReflections*  value) ;

constexpr void __cordl_internal_set__RenderHDR(bool  value) ;

constexpr void __cordl_internal_set__RenderShadows(bool  value) ;

constexpr void __cordl_internal_set__Resolution(int32_t  value) ;

constexpr void __cordl_internal_set__Resources(::UnityW<::WaveHarmonic::Crest::WaterResources>  value) ;

constexpr void __cordl_internal_set__SampleDepthHelper(::WaveHarmonic::Crest::SampleDepthHelper*  value) ;

constexpr void __cordl_internal_set__SampleHeightHelper(::WaveHarmonic::Crest::SampleCollisionHelper*  value) ;

constexpr void __cordl_internal_set__SampleHeightHelperPerCamera(::WaveHarmonic::Crest::SampleCollisionHelper*  value) ;

constexpr void __cordl_internal_set__SampleTerrainHeightForScale(bool  value) ;

constexpr void __cordl_internal_set__ScaleDifferencePower2_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__ScaleRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__Scale_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__ScatteringLod(::WaveHarmonic::Crest::ScatteringLod*  value) ;

constexpr void __cordl_internal_set__ScreenSpaceShadowMapBuffer(::UnityEngine::Rendering::CommandBuffer*  value) ;

constexpr void __cordl_internal_set__SetUpFor(::WaveHarmonic::Crest::RenderPipeline  value) ;

constexpr void __cordl_internal_set__ShadowLod(::WaveHarmonic::Crest::ShadowLod*  value) ;

constexpr void __cordl_internal_set__ShowWaterProxyPlane(bool  value) ;

constexpr void __cordl_internal_set__SimulationBuffer(::UnityEngine::Rendering::CommandBuffer*  value) ;

constexpr void __cordl_internal_set__Simulations_k__BackingField(::System::Collections::Generic::List_1<::WaveHarmonic::Crest::Lod*>*  value) ;

constexpr void __cordl_internal_set__Slices(int32_t  value) ;

constexpr void __cordl_internal_set__Surface(::WaveHarmonic::Crest::SurfaceRenderer*  value) ;

constexpr void __cordl_internal_set__SurfaceSelfIntersectionFixMode(::WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode  value) ;

constexpr void __cordl_internal_set__TeleportThreshold(float_t  value) ;

constexpr void __cordl_internal_set__TeleportTimerForHeightQueries(float_t  value) ;

constexpr void __cordl_internal_set__TimeProvider(::UnityW<::WaveHarmonic::Crest::TimeProvider>  value) ;

constexpr void __cordl_internal_set__TimeProviders_k__BackingField(::WaveHarmonic::Crest::Utility::Internal::Stack_1<::WaveHarmonic::Crest::ITimeProvider*>*  value) ;

constexpr void __cordl_internal_set__TimeSliceBoundsUpdateFrameCount(int32_t  value) ;

constexpr void __cordl_internal_set__Underwater(::WaveHarmonic::Crest::UnderwaterRenderer*  value) ;

constexpr void __cordl_internal_set__UpdateColorDepthTexturesBuffer(::UnityEngine::Rendering::CommandBuffer*  value) ;

constexpr void __cordl_internal_set__ViewerAltitudeLevelAlpha_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__ViewerDistanceToShoreline_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__ViewerHeightAboveWaterPerCamera(float_t  value) ;

constexpr void __cordl_internal_set__ViewerHeightAboveWater_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Viewpoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__ViewpointHeightAboveWaterSmooth(float_t  value) ;

constexpr void __cordl_internal_set__ViewpointHeightAboveWater_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__VolumeMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__WaterBodyCulling(bool  value) ;

constexpr void __cordl_internal_set__WindDirection(float_t  value) ;

constexpr void __cordl_internal_set__WindSpeed(float_t  value) ;

constexpr void __cordl_internal_set__WindTurbulence(float_t  value) ;

constexpr void __cordl_internal_set__WindZone(::UnityW<::UnityEngine::WindZone>  value) ;

constexpr void __cordl_internal_set__WriteMotionVectors(bool  value) ;

constexpr void __cordl_internal_set__WriteToColorTexture(bool  value) ;

constexpr void __cordl_internal_set__WriteToDepthTexture(bool  value) ;

/// @brief Method .ctor, addr 0x182587320, size 0x730, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_2<::UnityW<::WaveHarmonic::Crest::WaterRenderer>,::UnityW<::UnityEngine::Camera>>* getStaticF_s_OnBeforeBuildCommandBuffer() ;

static inline ::System::Action_1<::UnityW<::UnityEngine::Camera>>* getStaticF_s_OnLoadCameraData() ;

static inline ::System::Action_1<::UnityW<::UnityEngine::Camera>>* getStaticF_s_OnRemoveCameraData() ;

static inline ::System::Action_1<::UnityW<::UnityEngine::Camera>>* getStaticF_s_OnStoreCameraData() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_RunUpdateMarker() ;

/// @brief Method get_AbsorptionLod, addr 0x180371830, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::AbsorptionLod* get_AbsorptionLod() ;

/// @brief Method get_Active, addr 0x182587a50, size 0x40, virtual false, abstract: false, final false
inline bool get_Active() ;

/// @brief Method get_AlbedoLod, addr 0x180481ba0, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::AlbedoLod* get_AlbedoLod() ;

/// @brief Method get_AllowRenderQueueSorting, addr 0x182581eb0, size 0x30, virtual false, abstract: false, final false
inline bool get_AllowRenderQueueSorting() ;

/// @brief Method get_AnimatedWavesLod, addr 0x180337120, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::AnimatedWavesLod* get_AnimatedWavesLod() ;

/// @brief Method get_BlackTextureArray, addr 0x182587a90, size 0x80, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2DArray> get_BlackTextureArray() ;

/// @brief Method get_BufferSize, addr 0x1802edfe0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_BufferSize() ;

/// @brief Method get_CameraExclusions, addr 0x182193f70, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::WaterCameraExclusion get_CameraExclusions() ;

/// @brief Method get_CascadeData, addr 0x1823bd9f0, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>* get_CascadeData() ;

/// @brief Method get_CastShadows, addr 0x182581ee0, size 0x30, virtual false, abstract: false, final false
inline bool get_CastShadows() ;

/// @brief Method get_CenterOfDetailDisplacementCorrection, addr 0x1820c7fa0, size 0x10, virtual false, abstract: false, final false
inline bool get_CenterOfDetailDisplacementCorrection() ;

/// @brief Method get_ClipLod, addr 0x180481940, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::ClipLod* get_ClipLod() ;

/// @brief Method get_CollisionProvider, addr 0x182587b10, size 0x20, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::ICollisionProvider* get_CollisionProvider() ;

/// @brief Method get_Container, addr 0x1823bce60, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_Container() ;

/// @brief Method get_CurrentCamera, addr 0x180345c30, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Camera> get_CurrentCamera() ;

/// @brief Method get_CurrentTime, addr 0x182587b30, size 0x40, virtual false, abstract: false, final false
inline float_t get_CurrentTime() ;

/// @brief Method get_DataBackgroundMode, addr 0x1818e7a50, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::WaterDataBackgroundMode get_DataBackgroundMode() ;

/// @brief Method get_DefaultExcludes, addr 0x182587b70, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::WaterBodyAffects get_DefaultExcludes() ;

/// @brief Method get_DeltaTime, addr 0x182587b80, size 0x40, virtual false, abstract: false, final false
inline float_t get_DeltaTime() ;

/// @brief Method get_DepthLod, addr 0x180337110, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::DepthLod* get_DepthLod() ;

/// @brief Method get_DepthProvider, addr 0x182587bc0, size 0x20, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::IDepthProvider* get_DepthProvider() ;

/// @brief Method get_DropDetailHeightBasedOnWaves, addr 0x180474c00, size 0x10, virtual false, abstract: false, final false
inline float_t get_DropDetailHeightBasedOnWaves() ;

/// @brief Method get_DynamicWavesLod, addr 0x180474c30, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::DynamicWavesLod* get_DynamicWavesLod() ;

/// @brief Method get_EditorMultipleViewpoints, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
inline bool get_EditorMultipleViewpoints() ;

/// @brief Method get_ExtentsSizeMultiplier, addr 0x180468f70, size 0x10, virtual false, abstract: false, final false
inline float_t get_ExtentsSizeMultiplier() ;

/// @brief Method get_FallBackRequired, addr 0x182587be0, size 0x20, virtual false, abstract: false, final false
inline bool get_FallBackRequired() ;

/// @brief Method get_FlowLod, addr 0x180474c20, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::FlowLod* get_FlowLod() ;

/// @brief Method get_FlowProvider, addr 0x182587c00, size 0x20, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::IFlowProvider* get_FlowProvider() ;

/// @brief Method get_FoamLod, addr 0x1803370f0, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::FoamLod* get_FoamLod() ;

/// @brief Method get_ForceScaleChangeSmoothing, addr 0x182587c20, size 0x10, virtual false, abstract: false, final false
inline bool get_ForceScaleChangeSmoothing() ;

/// @brief Method get_FrameBufferFormatOverride, addr 0x182587c30, size 0x20, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::BIRP_Rendering_FrameBufferFormatOverride get_FrameBufferFormatOverride() ;

/// @brief Method get_FrameCount, addr 0x182587c50, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_FrameCount() ;

/// @brief Method get_GeometryDownSampleFactor, addr 0x181e56da0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_GeometryDownSampleFactor() ;

/// @brief Method get_Gravity, addr 0x182587c60, size 0x50, virtual false, abstract: false, final false
inline float_t get_Gravity() ;

/// @brief Method get_GravityMultiplier, addr 0x18032ef70, size 0x10, virtual false, abstract: false, final false
inline float_t get_GravityMultiplier() ;

/// @brief Method get_GravityOverride, addr 0x1803826d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_GravityOverride() ;

/// @brief Method get_InjectionPoint, addr 0x1813eff30, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::WaterInjectionPoint get_InjectionPoint() ;

/// @brief Method get_IsMultipleViewpointMode, addr 0x182587cb0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsMultipleViewpointMode() ;

/// @brief Method get_IsRunningWithoutGraphics, addr 0x182587cc0, size 0x40, virtual false, abstract: false, final false
inline bool get_IsRunningWithoutGraphics() ;

/// @brief Method get_IsSeparateViewpointCameraLoop, addr 0x182587d00, size 0x10, virtual false, abstract: false, final false
inline bool get_IsSeparateViewpointCameraLoop() ;

/// @brief Method get_IsSingleViewpointMode, addr 0x182587d10, size 0x10, virtual false, abstract: false, final false
inline bool get_IsSingleViewpointMode() ;

/// @brief Method get_Layer, addr 0x1825820c0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_Layer() ;

/// @brief Method get_LevelLod, addr 0x1803370b0, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::LevelLod* get_LevelLod() ;

/// @brief Method get_LodLevels, addr 0x180c314e0, size 0x53a0, virtual false, abstract: false, final false
inline int32_t get_LodLevels() ;

/// @brief Method get_LodResolution, addr 0x181465ce0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_LodResolution() ;

/// @brief Method get_Material, addr 0x1825820f0, size 0x30, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_Material() ;

/// @brief Method get_Meniscus, addr 0x180345c40, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::Meniscus* get_Meniscus() ;

/// @brief Method get_MultipleViewpoints, addr 0x182587cb0, size 0x10, virtual false, abstract: false, final false
inline bool get_MultipleViewpoints() ;

/// @brief Method get_OverrideGravity, addr 0x181fcaac0, size 0x10, virtual false, abstract: false, final false
inline bool get_OverrideGravity() ;

/// @brief Method get_OverrideRenderHDR, addr 0x1803717e0, size 0x10, virtual false, abstract: false, final false
inline bool get_OverrideRenderHDR() ;

/// @brief Method get_OverrideWindZoneWindDirection, addr 0x1803b2c80, size 0x10, virtual false, abstract: false, final false
inline bool get_OverrideWindZoneWindDirection() ;

/// @brief Method get_OverrideWindZoneWindSpeed, addr 0x1805fa960, size 0x10, virtual false, abstract: false, final false
inline bool get_OverrideWindZoneWindSpeed() ;

/// @brief Method get_OverrideWindZoneWindTurbulence, addr 0x18030d8a0, size 0x10, virtual false, abstract: false, final false
inline bool get_OverrideWindZoneWindTurbulence() ;

/// @brief Method get_Portals, addr 0x180345c10, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::Portals::PortalRenderer* get_Portals() ;

/// @brief Method get_Position, addr 0x182587d20, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Position() ;

/// @brief Method get_PrimaryLight, addr 0x182582120, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Light> get_PrimaryLight() ;

/// @brief Method get_Reflections, addr 0x180481bd0, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::WaterReflections* get_Reflections() ;

/// @brief Method get_RenderBeforeTransparency, addr 0x182587d40, size 0x10, virtual false, abstract: false, final false
inline bool get_RenderBeforeTransparency() ;

/// @brief Method get_RenderHDR, addr 0x1805e8f80, size 0x10, virtual false, abstract: false, final false
inline bool get_RenderHDR() ;

/// @brief Method get_RunningHeadless, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
static inline bool get_RunningHeadless() ;

/// @brief Method get_RunningWithoutGraphics, addr 0x182587d50, size 0xd0, virtual false, abstract: false, final false
static inline bool get_RunningWithoutGraphics() ;

/// @brief Method get_SampleTerrainHeightForScale, addr 0x182587e20, size 0x10, virtual false, abstract: false, final false
inline bool get_SampleTerrainHeightForScale() ;

/// @brief Method get_Scale, addr 0x182587e80, size 0x10, virtual false, abstract: false, final false
inline float_t get_Scale() ;

/// @brief Method get_ScaleCouldDecrease, addr 0x182587e30, size 0x20, virtual false, abstract: false, final false
inline bool get_ScaleCouldDecrease() ;

/// @brief Method get_ScaleCouldIncrease, addr 0x182587e50, size 0x30, virtual false, abstract: false, final false
inline bool get_ScaleCouldIncrease() ;

/// @brief Method get_ScaleDifferencePower2, addr 0x18149bba0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_ScaleDifferencePower2() ;

/// @brief Method get_ScaleRange, addr 0x180474bf0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_ScaleRange() ;

/// @brief Method get_ScatteringLod, addr 0x1803459e0, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::ScatteringLod* get_ScatteringLod() ;

/// @brief Method get_SeaLevel, addr 0x182587e90, size 0x20, virtual false, abstract: false, final false
inline float_t get_SeaLevel() ;

/// @brief Method get_ShadowLod, addr 0x180474c10, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::ShadowLod* get_ShadowLod() ;

/// @brief Method get_SimulationBuffer, addr 0x182587eb0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::CommandBuffer* get_SimulationBuffer() ;

/// @brief Method get_Simulations, addr 0x180de9170, size 0xc40, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::WaveHarmonic::Crest::Lod*>* get_Simulations() ;

/// @brief Method get_SupportsRecursiveRendering, addr 0x1802f6470, size 0x10, virtual false, abstract: false, final false
inline bool get_SupportsRecursiveRendering() ;

/// @brief Method get_Surface, addr 0x1803459d0, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::SurfaceRenderer* get_Surface() ;

/// @brief Method get_TeleportOriginThisFrame, addr 0x1802e7410, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_TeleportOriginThisFrame() ;

/// @brief Method get_TeleportThreshold, addr 0x182587ec0, size 0x10, virtual false, abstract: false, final false
inline float_t get_TeleportThreshold() ;

/// @brief Method get_TimeProvider, addr 0x182587ed0, size 0x30, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::ITimeProvider* get_TimeProvider() ;

/// @brief Method get_TimeProviders, addr 0x1823bcae0, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::Utility::Internal::Stack_1<::WaveHarmonic::Crest::ITimeProvider*>* get_TimeProviders() ;

/// @brief Method get_TimeSliceBoundsUpdateFrameCount, addr 0x1825821b0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_TimeSliceBoundsUpdateFrameCount() ;

/// @brief Method get_Underwater, addr 0x180481bb0, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::UnderwaterRenderer* get_Underwater() ;

/// @brief Method get_Version, addr 0x182587f00, size 0x20, virtual true, abstract: false, final false
inline int32_t get_Version() ;

/// @brief Method get_Viewer, addr 0x182587f50, size 0x50, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Camera> get_Viewer() ;

/// @brief Method get_ViewerAltitudeLevelAlpha, addr 0x182587f20, size 0x10, virtual false, abstract: false, final false
inline float_t get_ViewerAltitudeLevelAlpha() ;

/// @brief Method get_ViewerDistanceToShoreline, addr 0x182587f30, size 0x10, virtual false, abstract: false, final false
inline float_t get_ViewerDistanceToShoreline() ;

/// @brief Method get_ViewerHeightAboveWater, addr 0x182587f40, size 0x10, virtual false, abstract: false, final false
inline float_t get_ViewerHeightAboveWater() ;

/// @brief Method get_Viewpoint, addr 0x1825823c0, size 0xc0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_Viewpoint() ;

/// @brief Method get_ViewpointHeightAboveWater, addr 0x182587fa0, size 0x10, virtual false, abstract: false, final false
inline float_t get_ViewpointHeightAboveWater() ;

/// @brief Method get_VolumeMaterial, addr 0x182582480, size 0x30, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_VolumeMaterial() ;

/// @brief Method get_WaterBodyCulling, addr 0x1825824b0, size 0x30, virtual false, abstract: false, final false
inline bool get_WaterBodyCulling() ;

/// @brief Method get_WindDirection, addr 0x182587fe0, size 0xc0, virtual false, abstract: false, final false
inline float_t get_WindDirection() ;

/// @brief Method get_WindDirectionOverriden, addr 0x182587fb0, size 0x30, virtual false, abstract: false, final false
inline bool get_WindDirectionOverriden() ;

/// @brief Method get_WindSpeed, addr 0x1825825a0, size 0x60, virtual false, abstract: false, final false
inline float_t get_WindSpeed() ;

/// @brief Method get_WindSpeedKPH, addr 0x1815234b0, size 0x10, virtual false, abstract: false, final false
inline float_t get_WindSpeedKPH() ;

/// @brief Method get_WindSpeedOverriden, addr 0x1825880a0, size 0x30, virtual false, abstract: false, final false
inline bool get_WindSpeedOverriden() ;

/// @brief Method get_WindTurbulence, addr 0x182582600, size 0x60, virtual false, abstract: false, final false
inline float_t get_WindTurbulence() ;

/// @brief Method get_WindTurbulenceOverriden, addr 0x1825880d0, size 0x30, virtual false, abstract: false, final false
inline bool get_WindTurbulenceOverriden() ;

/// @brief Method get_WindZone, addr 0x1802ec4b0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::WindZone> get_WindZone() ;

/// @brief Method get_WriteMotionVectors, addr 0x180371720, size 0x10, virtual false, abstract: false, final false
inline bool get_WriteMotionVectors() ;

/// @brief Method get_WriteToColorTexture, addr 0x182582660, size 0x40, virtual false, abstract: false, final false
inline bool get_WriteToColorTexture() ;

/// @brief Method get_WriteToDepthTexture, addr 0x1825826a0, size 0x40, virtual false, abstract: false, final false
inline bool get_WriteToDepthTexture() ;

static inline void setStaticF_s_OnBeforeBuildCommandBuffer(::System::Action_2<::UnityW<::WaveHarmonic::Crest::WaterRenderer>,::UnityW<::UnityEngine::Camera>>*  value) ;

static inline void setStaticF_s_OnLoadCameraData(::System::Action_1<::UnityW<::UnityEngine::Camera>>*  value) ;

static inline void setStaticF_s_OnRemoveCameraData(::System::Action_1<::UnityW<::UnityEngine::Camera>>*  value) ;

static inline void setStaticF_s_OnStoreCameraData(::System::Action_1<::UnityW<::UnityEngine::Camera>>*  value) ;

static inline void setStaticF_s_RunUpdateMarker(::Unity::Profiling::ProfilerMarker  value) ;

/// @brief Method set_AllowRenderQueueSorting, addr 0x182588100, size 0x30, virtual false, abstract: false, final false
inline void set_AllowRenderQueueSorting(bool  value) ;

/// @brief Method set_CameraExclusions, addr 0x182194180, size 0x10, virtual false, abstract: false, final false
inline void set_CameraExclusions(::WaveHarmonic::Crest::WaterCameraExclusion  value) ;

/// @brief Method set_CascadeData, addr 0x182588130, size 0x20, virtual false, abstract: false, final false
inline void set_CascadeData(::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*  value) ;

/// @brief Method set_CastShadows, addr 0x182588150, size 0x30, virtual false, abstract: false, final false
inline void set_CastShadows(bool  value) ;

/// @brief Method set_CenterOfDetailDisplacementCorrection, addr 0x182588180, size 0x10, virtual false, abstract: false, final false
inline void set_CenterOfDetailDisplacementCorrection(bool  value) ;

/// @brief Method set_CurrentCamera, addr 0x1803461a0, size 0x20, virtual false, abstract: false, final false
inline void set_CurrentCamera(::UnityEngine::Camera*  value) ;

/// @brief Method set_DataBackgroundMode, addr 0x182588190, size 0x10, virtual false, abstract: false, final false
inline void set_DataBackgroundMode(::WaveHarmonic::Crest::WaterDataBackgroundMode  value) ;

/// @brief Method set_DefaultExcludes, addr 0x1825881a0, size 0x10, virtual false, abstract: false, final false
inline void set_DefaultExcludes(::WaveHarmonic::Crest::WaterBodyAffects  value) ;

/// @brief Method set_DropDetailHeightBasedOnWaves, addr 0x180474cc0, size 0x10, virtual false, abstract: false, final false
inline void set_DropDetailHeightBasedOnWaves(float_t  value) ;

/// @brief Method set_ExtentsSizeMultiplier, addr 0x1825881b0, size 0x50, virtual false, abstract: false, final false
inline void set_ExtentsSizeMultiplier(float_t  value) ;

/// @brief Method set_ForceScaleChangeSmoothing, addr 0x182588200, size 0x10, virtual false, abstract: false, final false
inline void set_ForceScaleChangeSmoothing(bool  value) ;

/// @brief Method set_GeometryDownSampleFactor, addr 0x182588210, size 0x50, virtual false, abstract: false, final false
inline void set_GeometryDownSampleFactor(int32_t  value) ;

/// @brief Method set_GravityMultiplier, addr 0x1803d9990, size 0x10, virtual false, abstract: false, final false
inline void set_GravityMultiplier(float_t  value) ;

/// @brief Method set_GravityOverride, addr 0x182349c90, size 0x10, virtual false, abstract: false, final false
inline void set_GravityOverride(float_t  value) ;

/// @brief Method set_InjectionPoint, addr 0x1813f0060, size 0x10, virtual false, abstract: false, final false
inline void set_InjectionPoint(::WaveHarmonic::Crest::WaterInjectionPoint  value) ;

/// @brief Method set_IsSeparateViewpointCameraLoop, addr 0x182588260, size 0x10, virtual false, abstract: false, final false
inline void set_IsSeparateViewpointCameraLoop(bool  value) ;

/// @brief Method set_Layer, addr 0x182588270, size 0x30, virtual false, abstract: false, final false
inline void set_Layer(int32_t  value) ;

/// @brief Method set_LodLevels, addr 0x1813efff0, size 0x10, virtual false, abstract: false, final false
inline void set_LodLevels(int32_t  value) ;

/// @brief Method set_LodResolution, addr 0x180cbfe10, size 0x10, virtual false, abstract: false, final false
inline void set_LodResolution(int32_t  value) ;

/// @brief Method set_Material, addr 0x1825882a0, size 0x50, virtual false, abstract: false, final false
inline void set_Material(::UnityEngine::Material*  value) ;

/// @brief Method set_OverrideGravity, addr 0x180487390, size 0x10, virtual false, abstract: false, final false
inline void set_OverrideGravity(bool  value) ;

/// @brief Method set_OverrideRenderHDR, addr 0x1825882f0, size 0x10, virtual false, abstract: false, final false
inline void set_OverrideRenderHDR(bool  value) ;

/// @brief Method set_OverrideWindZoneWindDirection, addr 0x1803b30e0, size 0x10, virtual false, abstract: false, final false
inline void set_OverrideWindZoneWindDirection(bool  value) ;

/// @brief Method set_OverrideWindZoneWindSpeed, addr 0x1817eed70, size 0x10, virtual false, abstract: false, final false
inline void set_OverrideWindZoneWindSpeed(bool  value) ;

/// @brief Method set_OverrideWindZoneWindTurbulence, addr 0x18140a480, size 0x10, virtual false, abstract: false, final false
inline void set_OverrideWindZoneWindTurbulence(bool  value) ;

/// @brief Method set_Position, addr 0x182588300, size 0x20, virtual false, abstract: false, final false
inline void set_Position(::UnityEngine::Vector3  value) ;

/// @brief Method set_PrimaryLight, addr 0x1803223c0, size 0x20, virtual false, abstract: false, final false
inline void set_PrimaryLight(::UnityEngine::Light*  value) ;

/// @brief Method set_RenderHDR, addr 0x1805e90d0, size 0x10, virtual false, abstract: false, final false
inline void set_RenderHDR(bool  value) ;

/// @brief Method set_SampleTerrainHeightForScale, addr 0x182588320, size 0x10, virtual false, abstract: false, final false
inline void set_SampleTerrainHeightForScale(bool  value) ;

/// @brief Method set_Scale, addr 0x182588340, size 0x10, virtual false, abstract: false, final false
inline void set_Scale(float_t  value) ;

/// @brief Method set_ScaleDifferencePower2, addr 0x182588330, size 0x10, virtual false, abstract: false, final false
inline void set_ScaleDifferencePower2(int32_t  value) ;

/// @brief Method set_ScaleRange, addr 0x1817f13c0, size 0x10, virtual false, abstract: false, final false
inline void set_ScaleRange(::UnityEngine::Vector2  value) ;

/// @brief Method set_TeleportThreshold, addr 0x182588350, size 0x10, virtual false, abstract: false, final false
inline void set_TeleportThreshold(float_t  value) ;

/// @brief Method set_TimeProviders, addr 0x182588360, size 0x20, virtual false, abstract: false, final false
inline void set_TimeProviders(::WaveHarmonic::Crest::Utility::Internal::Stack_1<::WaveHarmonic::Crest::ITimeProvider*>*  value) ;

/// @brief Method set_TimeSliceBoundsUpdateFrameCount, addr 0x182588380, size 0x30, virtual false, abstract: false, final false
inline void set_TimeSliceBoundsUpdateFrameCount(int32_t  value) ;

/// @brief Method set_Viewer, addr 0x180374490, size 0x20, virtual false, abstract: false, final false
inline void set_Viewer(::UnityEngine::Camera*  value) ;

/// @brief Method set_ViewerAltitudeLevelAlpha, addr 0x1825883b0, size 0x10, virtual false, abstract: false, final false
inline void set_ViewerAltitudeLevelAlpha(float_t  value) ;

/// @brief Method set_ViewerDistanceToShoreline, addr 0x1825883c0, size 0x10, virtual false, abstract: false, final false
inline void set_ViewerDistanceToShoreline(float_t  value) ;

/// @brief Method set_ViewerHeightAboveWater, addr 0x1825883d0, size 0x10, virtual false, abstract: false, final false
inline void set_ViewerHeightAboveWater(float_t  value) ;

/// @brief Method set_Viewpoint, addr 0x180337170, size 0x20, virtual false, abstract: false, final false
inline void set_Viewpoint(::UnityEngine::Transform*  value) ;

/// @brief Method set_ViewpointHeightAboveWater, addr 0x1825883e0, size 0x10, virtual false, abstract: false, final false
inline void set_ViewpointHeightAboveWater(float_t  value) ;

/// @brief Method set_VolumeMaterial, addr 0x1825883f0, size 0x50, virtual false, abstract: false, final false
inline void set_VolumeMaterial(::UnityEngine::Material*  value) ;

/// @brief Method set_WaterBodyCulling, addr 0x182588440, size 0x30, virtual false, abstract: false, final false
inline void set_WaterBodyCulling(bool  value) ;

/// @brief Method set_WindDirection, addr 0x182588470, size 0x10, virtual false, abstract: false, final false
inline void set_WindDirection(float_t  value) ;

/// @brief Method set_WindSpeed, addr 0x182588480, size 0x10, virtual false, abstract: false, final false
inline void set_WindSpeed(float_t  value) ;

/// @brief Method set_WindTurbulence, addr 0x182553b00, size 0x10, virtual false, abstract: false, final false
inline void set_WindTurbulence(float_t  value) ;

/// @brief Method set_WindZone, addr 0x18163ca40, size 0x20, virtual false, abstract: false, final false
inline void set_WindZone(::UnityEngine::WindZone*  value) ;

/// @brief Method set_WriteMotionVectors, addr 0x182588490, size 0x10, virtual false, abstract: false, final false
inline void set_WriteMotionVectors(bool  value) ;

/// @brief Method set_WriteToColorTexture, addr 0x18214f2a0, size 0x10, virtual false, abstract: false, final false
inline void set_WriteToColorTexture(bool  value) ;

/// @brief Method set_WriteToDepthTexture, addr 0x1825884a0, size 0x10, virtual false, abstract: false, final false
inline void set_WriteToDepthTexture(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterRenderer(WaterRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterRenderer(WaterRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16640};

/// @brief Field k_DrawCopyColor offset 0xffffffff size 0x8
static constexpr ::ConstString  k_DrawCopyColor{u"CopyColor"};

/// @brief Field k_DrawCopyDepth offset 0xffffffff size 0x8
static constexpr ::ConstString  k_DrawCopyDepth{u"CopyDepth"};

/// @brief Field k_DrawLodData offset 0xffffffff size 0x8
static constexpr ::ConstString  k_DrawLodData{u"Crest.LodData"};

/// @brief Field k_DrawWater offset 0xffffffff size 0x8
static constexpr ::ConstString  k_DrawWater{u"Crest.DrawWater"};

/// @brief Field k_MaximumWindSpeedKPH offset 0xffffffff size 0x4
static constexpr float_t  k_MaximumWindSpeedKPH{static_cast<float_t>(150.0f)};

/// @brief Field k_RenderAboveSeaLevel offset 0xffffffff size 0x4
static constexpr float_t  k_RenderAboveSeaLevel{static_cast<float_t>(10000.0f)};

/// @brief Field k_RenderBelowSeaLevel offset 0xffffffff size 0x4
static constexpr float_t  k_RenderBelowSeaLevel{static_cast<float_t>(10000.0f)};

/// @brief Field k_RunUpdateMarker offset 0xffffffff size 0x8
static constexpr ::ConstString  k_RunUpdateMarker{u"Crest.WaterRenderer.RunUpdate"};

/// @brief Field k_SurfaceRendererObsoleteMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  k_SurfaceRendererObsoleteMessage{u"This property can now be found on WaterRenderer.Surface"};

/// @brief Field k_WaterRenderPassEvent value: I32(450)
static ::UnityEngine::Rendering::Universal::RenderPassEvent const k_WaterRenderPassEvent;

/// @brief Field _Layer, offset: 0x28, size: 0x4, def value: None
 int32_t  ____Layer;

/// @brief Field _Material, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____Material;

/// @brief Field _VolumeMaterial, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____VolumeMaterial;

/// @brief Field _ChunkTemplate, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____ChunkTemplate;

/// @brief Field _CastShadows, offset: 0x48, size: 0x1, def value: None
 bool  ____CastShadows;

/// @brief Field _WaterBodyCulling, offset: 0x49, size: 0x1, def value: None
 bool  ____WaterBodyCulling;

/// @brief Field _TimeSliceBoundsUpdateFrameCount, offset: 0x4c, size: 0x4, def value: None
 int32_t  ____TimeSliceBoundsUpdateFrameCount;

/// @brief Field _SurfaceSelfIntersectionFixMode, offset: 0x50, size: 0x4, def value: None
 ::WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode  ____SurfaceSelfIntersectionFixMode;

/// @brief Field _AllowRenderQueueSorting, offset: 0x54, size: 0x1, def value: None
 bool  ____AllowRenderQueueSorting;

/// @brief Field _DoneMatrices, offset: 0x55, size: 0x1, def value: None
 bool  ____DoneMatrices;

/// @brief Field _ScreenSpaceShadowMapBuffer, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Rendering::CommandBuffer*  ____ScreenSpaceShadowMapBuffer;

/// @brief Field _UpdateColorDepthTexturesBuffer, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Rendering::CommandBuffer*  ____UpdateColorDepthTexturesBuffer;

/// @brief Field _Context, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Rendering::ScriptableRenderContext  ____Context;

/// @brief Field _DoneCameraOpaqueTexture, offset: 0x70, size: 0x1, def value: None
 bool  ____DoneCameraOpaqueTexture;

/// @brief Field _CameraOpaqueTexture, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ____CameraOpaqueTexture;

/// @brief Field _CameraOpaqueTextureCommands, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Rendering::CommandBuffer*  ____CameraOpaqueTextureCommands;

/// @brief Field _Camera, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____Camera;

/// @brief Field _TimeProvider, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::TimeProvider>  ____TimeProvider;

/// @brief Field _WindZone, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::WindZone>  ____WindZone;

/// @brief Field _OverrideWindZoneWindSpeed, offset: 0xa0, size: 0x1, def value: None
 bool  ____OverrideWindZoneWindSpeed;

/// @brief Field _WindSpeed, offset: 0xa4, size: 0x4, def value: None
 float_t  ____WindSpeed;

/// @brief Field _OverrideWindZoneWindDirection, offset: 0xa8, size: 0x1, def value: None
 bool  ____OverrideWindZoneWindDirection;

/// @brief Field _WindDirection, offset: 0xac, size: 0x4, def value: None
 float_t  ____WindDirection;

/// @brief Field _OverrideWindZoneWindTurbulence, offset: 0xb0, size: 0x1, def value: None
 bool  ____OverrideWindZoneWindTurbulence;

/// @brief Field _WindTurbulence, offset: 0xb4, size: 0x4, def value: None
 float_t  ____WindTurbulence;

/// @brief Field _OverrideGravity, offset: 0xb8, size: 0x1, def value: None
 bool  ____OverrideGravity;

/// @brief Field _GravityOverride, offset: 0xbc, size: 0x4, def value: None
 float_t  ____GravityOverride;

/// @brief Field _GravityMultiplier, offset: 0xc0, size: 0x4, def value: None
 float_t  ____GravityMultiplier;

/// @brief Field _PrimaryLight, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Light>  ____PrimaryLight;

/// @brief Field _InjectionPoint, offset: 0xd0, size: 0x4, def value: None
 ::WaveHarmonic::Crest::WaterInjectionPoint  ____InjectionPoint;

/// @brief Field _WriteToColorTexture, offset: 0xd4, size: 0x1, def value: None
 bool  ____WriteToColorTexture;

/// @brief Field _WriteToDepthTexture, offset: 0xd5, size: 0x1, def value: None
 bool  ____WriteToDepthTexture;

/// @brief Field _WriteMotionVectors, offset: 0xd6, size: 0x1, def value: None
 bool  ____WriteMotionVectors;

/// @brief Field _OverrideRenderHDR, offset: 0xd7, size: 0x1, def value: None
 bool  ____OverrideRenderHDR;

/// @brief Field _RenderHDR, offset: 0xd8, size: 0x1, def value: None
 bool  ____RenderHDR;

/// @brief Field _Surface, offset: 0xe0, size: 0x8, def value: None
 ::WaveHarmonic::Crest::SurfaceRenderer*  ____Surface;

/// @brief Field _ScaleRange, offset: 0xe8, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____ScaleRange;

/// @brief Field _DropDetailHeightBasedOnWaves, offset: 0xf0, size: 0x4, def value: None
 float_t  ____DropDetailHeightBasedOnWaves;

/// @brief Field _Slices, offset: 0xf4, size: 0x4, def value: None
 int32_t  ____Slices;

/// @brief Field _Resolution, offset: 0xf8, size: 0x4, def value: None
 int32_t  ____Resolution;

/// @brief Field _GeometryDownSampleFactor, offset: 0xfc, size: 0x4, def value: None
 int32_t  ____GeometryDownSampleFactor;

/// @brief Field _ExtentsSizeMultiplier, offset: 0x100, size: 0x4, def value: None
 float_t  ____ExtentsSizeMultiplier;

/// @brief Field _MultipleViewpoints, offset: 0x104, size: 0x1, def value: None
 bool  ____MultipleViewpoints;

/// @brief Field _Viewpoint, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____Viewpoint;

/// @brief Field _CameraExclusions, offset: 0x110, size: 0x4, def value: None
 ::WaveHarmonic::Crest::WaterCameraExclusion  ____CameraExclusions;

/// @brief Field _DataBackgroundMode, offset: 0x114, size: 0x4, def value: None
 ::WaveHarmonic::Crest::WaterDataBackgroundMode  ____DataBackgroundMode;

/// @brief Field _CenterOfDetailDisplacementCorrection, offset: 0x118, size: 0x1, def value: None
 bool  ____CenterOfDetailDisplacementCorrection;

/// @brief Field _SampleTerrainHeightForScale, offset: 0x119, size: 0x1, def value: None
 bool  ____SampleTerrainHeightForScale;

/// @brief Field _ForceScaleChangeSmoothing, offset: 0x11a, size: 0x1, def value: None
 bool  ____ForceScaleChangeSmoothing;

/// @brief Field _TeleportThreshold, offset: 0x11c, size: 0x4, def value: None
 float_t  ____TeleportThreshold;

/// @brief Field _AnimatedWavesLod, offset: 0x120, size: 0x8, def value: None
 ::WaveHarmonic::Crest::AnimatedWavesLod*  ____AnimatedWavesLod;

/// @brief Field _DepthLod, offset: 0x128, size: 0x8, def value: None
 ::WaveHarmonic::Crest::DepthLod*  ____DepthLod;

/// @brief Field _LevelLod, offset: 0x130, size: 0x8, def value: None
 ::WaveHarmonic::Crest::LevelLod*  ____LevelLod;

/// @brief Field _FoamLod, offset: 0x138, size: 0x8, def value: None
 ::WaveHarmonic::Crest::FoamLod*  ____FoamLod;

/// @brief Field _DynamicWavesLod, offset: 0x140, size: 0x8, def value: None
 ::WaveHarmonic::Crest::DynamicWavesLod*  ____DynamicWavesLod;

/// @brief Field _FlowLod, offset: 0x148, size: 0x8, def value: None
 ::WaveHarmonic::Crest::FlowLod*  ____FlowLod;

/// @brief Field _ShadowLod, offset: 0x150, size: 0x8, def value: None
 ::WaveHarmonic::Crest::ShadowLod*  ____ShadowLod;

/// @brief Field _AbsorptionLod, offset: 0x158, size: 0x8, def value: None
 ::WaveHarmonic::Crest::AbsorptionLod*  ____AbsorptionLod;

/// @brief Field _ScatteringLod, offset: 0x160, size: 0x8, def value: None
 ::WaveHarmonic::Crest::ScatteringLod*  ____ScatteringLod;

/// @brief Field _ClipLod, offset: 0x168, size: 0x8, def value: None
 ::WaveHarmonic::Crest::ClipLod*  ____ClipLod;

/// @brief Field _AlbedoLod, offset: 0x170, size: 0x8, def value: None
 ::WaveHarmonic::Crest::AlbedoLod*  ____AlbedoLod;

/// @brief Field _Reflections, offset: 0x178, size: 0x8, def value: None
 ::WaveHarmonic::Crest::WaterReflections*  ____Reflections;

/// @brief Field _Underwater, offset: 0x180, size: 0x8, def value: None
 ::WaveHarmonic::Crest::UnderwaterRenderer*  ____Underwater;

/// @brief Field _Meniscus, offset: 0x188, size: 0x8, def value: None
 ::WaveHarmonic::Crest::Meniscus*  ____Meniscus;

/// @brief Field _Portals, offset: 0x190, size: 0x8, def value: None
 ::WaveHarmonic::Crest::Portals::PortalRenderer*  ____Portals;

/// @brief Field _DefaultExcludes, offset: 0x198, size: 0x4, def value: None
 ::WaveHarmonic::Crest::WaterBodyAffects  ____DefaultExcludes;

/// @brief Field _ShowWaterProxyPlane, offset: 0x19c, size: 0x1, def value: None
 bool  ____ShowWaterProxyPlane;

/// @brief Field _FollowSceneCamera, offset: 0x19d, size: 0x1, def value: None
 bool  ____FollowSceneCamera;

/// @brief Field _EditorMultipleViewpoints, offset: 0x19e, size: 0x1, def value: None
 bool  ____EditorMultipleViewpoints;

/// @brief Field _HeightQueries, offset: 0x19f, size: 0x1, def value: None
 bool  ____HeightQueries;

/// @brief Field _Debug, offset: 0x1a0, size: 0x8, def value: None
 ::WaveHarmonic::Crest::WaterRenderer_DebugFields*  ____Debug;

/// @brief Field _Resources, offset: 0x1a8, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::WaterResources>  ____Resources;

/// @brief Field <CurrentCamera>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____CurrentCamera_k__BackingField;

/// @brief Field _CenterOfDetailDisplacementCorrectionHelper, offset: 0x1b8, size: 0x8, def value: None
 ::WaveHarmonic::Crest::SampleCollisionHelper*  ____CenterOfDetailDisplacementCorrectionHelper;

/// @brief Field <ViewerAltitudeLevelAlpha>k__BackingField, offset: 0x1c0, size: 0x4, def value: None
 float_t  ____ViewerAltitudeLevelAlpha_k__BackingField;

/// @brief Field <ViewerHeightAboveWater>k__BackingField, offset: 0x1c4, size: 0x4, def value: None
 float_t  ____ViewerHeightAboveWater_k__BackingField;

/// @brief Field <ViewpointHeightAboveWater>k__BackingField, offset: 0x1c8, size: 0x4, def value: None
 float_t  ____ViewpointHeightAboveWater_k__BackingField;

/// @brief Field <ViewerDistanceToShoreline>k__BackingField, offset: 0x1cc, size: 0x4, def value: None
 float_t  ____ViewerDistanceToShoreline_k__BackingField;

/// @brief Field _ViewpointHeightAboveWaterSmooth, offset: 0x1d0, size: 0x4, def value: None
 float_t  ____ViewpointHeightAboveWaterSmooth;

/// @brief Field _SampleHeightHelper, offset: 0x1d8, size: 0x8, def value: None
 ::WaveHarmonic::Crest::SampleCollisionHelper*  ____SampleHeightHelper;

/// @brief Field _SampleDepthHelper, offset: 0x1e0, size: 0x8, def value: None
 ::WaveHarmonic::Crest::SampleDepthHelper*  ____SampleDepthHelper;

/// @brief Field _ViewerHeightAboveWaterPerCamera, offset: 0x1e8, size: 0x4, def value: None
 float_t  ____ViewerHeightAboveWaterPerCamera;

/// @brief Field _SampleHeightHelperPerCamera, offset: 0x1f0, size: 0x8, def value: None
 ::WaveHarmonic::Crest::SampleCollisionHelper*  ____SampleHeightHelperPerCamera;

/// @brief Field _TeleportTimerForHeightQueries, offset: 0x1f8, size: 0x4, def value: None
 float_t  ____TeleportTimerForHeightQueries;

/// @brief Field _IsFirstFrameSinceEnabled, offset: 0x1fc, size: 0x1, def value: None
 bool  ____IsFirstFrameSinceEnabled;

/// @brief Field _HasTeleportedThisFrame, offset: 0x1fd, size: 0x1, def value: None
 bool  ____HasTeleportedThisFrame;

/// @brief Field _OldViewpointPosition, offset: 0x200, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____OldViewpointPosition;

/// @brief Field <Position>k__BackingField, offset: 0x20c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____Position_k__BackingField;

/// @brief Field _Container, offset: 0x218, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____Container;

/// @brief Field _ProjectionMatrix, offset: 0x220, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Matrix4x4>  ____ProjectionMatrix;

/// @brief Field <TimeProviders>k__BackingField, offset: 0x228, size: 0x8, def value: None
 ::WaveHarmonic::Crest::Utility::Internal::Stack_1<::WaveHarmonic::Crest::ITimeProvider*>*  ____TimeProviders_k__BackingField;

/// @brief Field _RecursiveActiveModules, offset: 0x230, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<::WaveHarmonic::Crest::WaterRenderer_ActiveModules>*  ____RecursiveActiveModules;

/// @brief Field _ActiveModules, offset: 0x238, size: 0x4, def value: None
 ::WaveHarmonic::Crest::WaterRenderer_ActiveModules  ____ActiveModules;

/// @brief Field _SetUpFor, offset: 0x23c, size: 0x4, def value: None
 ::WaveHarmonic::Crest::RenderPipeline  ____SetUpFor;

/// @brief Field _Mask, offset: 0x240, size: 0x8, def value: None
 ::WaveHarmonic::Crest::MaskRenderer*  ____Mask;

/// @brief Field _CameraFrustumPlanes, offset: 0x248, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Plane>  ____CameraFrustumPlanes;

/// @brief Field _CameraFrustumPoints, offset: 0x250, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ____CameraFrustumPoints;

/// @brief Field _DonePerCameraHeight, offset: 0x258, size: 0x1, def value: None
 bool  ____DonePerCameraHeight;

/// @brief Field _PerCameraHeightReady, offset: 0x259, size: 0x1, def value: None
 bool  ____PerCameraHeightReady;

/// @brief Field _BlackTextureArray, offset: 0x260, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2DArray>  ____BlackTextureArray;

/// @brief Field <Simulations>k__BackingField, offset: 0x268, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::WaveHarmonic::Crest::Lod*>*  ____Simulations_k__BackingField;

/// @brief Field _Initialized, offset: 0x270, size: 0x1, def value: None
 bool  ____Initialized;

/// @brief Field _GeneratedSettingsHash, offset: 0x274, size: 0x4, def value: None
 int32_t  ____GeneratedSettingsHash;

/// @brief Field _SimulationBuffer, offset: 0x278, size: 0x8, def value: None
 ::UnityEngine::Rendering::CommandBuffer*  ____SimulationBuffer;

/// @brief Field _CascadeData, offset: 0x280, size: 0x8, def value: None
 ::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*  ____CascadeData;

/// @brief Field <CascadeData>k__BackingField, offset: 0x288, size: 0x8, def value: None
 ::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*  ____CascadeData_k__BackingField;

/// @brief Field <Scale>k__BackingField, offset: 0x290, size: 0x4, def value: None
 float_t  ____Scale_k__BackingField;

/// @brief Field <ScaleDifferencePower2>k__BackingField, offset: 0x294, size: 0x4, def value: None
 int32_t  ____ScaleDifferencePower2_k__BackingField;

/// @brief Field _Cameras, offset: 0x298, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*  ____Cameras;

/// @brief Field _CurrentPerCameraData, offset: 0x2a0, size: 0x8, def value: None
 ::WaveHarmonic::Crest::WaterRenderer_PerCameraData*  ____CurrentPerCameraData;

/// @brief Field _PerCameraData, offset: 0x2a8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::WaveHarmonic::Crest::WaterRenderer_PerCameraData*>*  ____PerCameraData;

/// @brief Field _PerCameraLastFrame, offset: 0x2b0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,int32_t>*  ____PerCameraLastFrame;

/// @brief Field _EndOfFrame, offset: 0x2b8, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____EndOfFrame;

/// @brief Field _IsEndOfFrame, offset: 0x2c0, size: 0x1, def value: None
 bool  ____IsEndOfFrame;

/// @brief Field _RenderShadows, offset: 0x2c1, size: 0x1, def value: None
 bool  ____RenderShadows;

/// @brief Field _HasAnyViewpointExecuted, offset: 0x2c2, size: 0x1, def value: None
 bool  ____HasAnyViewpointExecuted;

/// @brief Field _HasAnyViewerRendered, offset: 0x2c3, size: 0x1, def value: None
 bool  ____HasAnyViewerRendered;

/// @brief Field <IsSeparateViewpointCameraLoop>k__BackingField, offset: 0x2c4, size: 0x1, def value: None
 bool  ____IsSeparateViewpointCameraLoop_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____Layer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____Material) == 0x30, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____VolumeMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____ChunkTemplate) == 0x40, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____CastShadows) == 0x48, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____WaterBodyCulling) == 0x49, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____TimeSliceBoundsUpdateFrameCount) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____SurfaceSelfIntersectionFixMode) == 0x50, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____AllowRenderQueueSorting) == 0x54, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____DoneMatrices) == 0x55, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____ScreenSpaceShadowMapBuffer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____UpdateColorDepthTexturesBuffer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____Context) == 0x68, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____DoneCameraOpaqueTexture) == 0x70, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____CameraOpaqueTexture) == 0x78, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____CameraOpaqueTextureCommands) == 0x80, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____Camera) == 0x88, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____TimeProvider) == 0x90, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____WindZone) == 0x98, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____OverrideWindZoneWindSpeed) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____WindSpeed) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____OverrideWindZoneWindDirection) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____WindDirection) == 0xac, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____OverrideWindZoneWindTurbulence) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____WindTurbulence) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____OverrideGravity) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____GravityOverride) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____GravityMultiplier) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____PrimaryLight) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____InjectionPoint) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____WriteToColorTexture) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____WriteToDepthTexture) == 0xd5, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____WriteMotionVectors) == 0xd6, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____OverrideRenderHDR) == 0xd7, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____RenderHDR) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____Surface) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____ScaleRange) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____DropDetailHeightBasedOnWaves) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____Slices) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____Resolution) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____GeometryDownSampleFactor) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____ExtentsSizeMultiplier) == 0x100, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____MultipleViewpoints) == 0x104, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____Viewpoint) == 0x108, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____CameraExclusions) == 0x110, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____DataBackgroundMode) == 0x114, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____CenterOfDetailDisplacementCorrection) == 0x118, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____SampleTerrainHeightForScale) == 0x119, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____ForceScaleChangeSmoothing) == 0x11a, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____TeleportThreshold) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____AnimatedWavesLod) == 0x120, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____DepthLod) == 0x128, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____LevelLod) == 0x130, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____FoamLod) == 0x138, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____DynamicWavesLod) == 0x140, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____FlowLod) == 0x148, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____ShadowLod) == 0x150, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____AbsorptionLod) == 0x158, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____ScatteringLod) == 0x160, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____ClipLod) == 0x168, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____AlbedoLod) == 0x170, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____Reflections) == 0x178, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____Underwater) == 0x180, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____Meniscus) == 0x188, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____Portals) == 0x190, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____DefaultExcludes) == 0x198, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____ShowWaterProxyPlane) == 0x19c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____FollowSceneCamera) == 0x19d, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____EditorMultipleViewpoints) == 0x19e, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____HeightQueries) == 0x19f, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____Debug) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____Resources) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____CurrentCamera_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____CenterOfDetailDisplacementCorrectionHelper) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____ViewerAltitudeLevelAlpha_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____ViewerHeightAboveWater_k__BackingField) == 0x1c4, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____ViewpointHeightAboveWater_k__BackingField) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____ViewerDistanceToShoreline_k__BackingField) == 0x1cc, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____ViewpointHeightAboveWaterSmooth) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____SampleHeightHelper) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____SampleDepthHelper) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____ViewerHeightAboveWaterPerCamera) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____SampleHeightHelperPerCamera) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____TeleportTimerForHeightQueries) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____IsFirstFrameSinceEnabled) == 0x1fc, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____HasTeleportedThisFrame) == 0x1fd, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____OldViewpointPosition) == 0x200, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____Position_k__BackingField) == 0x20c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____Container) == 0x218, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____ProjectionMatrix) == 0x220, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____TimeProviders_k__BackingField) == 0x228, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____RecursiveActiveModules) == 0x230, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____ActiveModules) == 0x238, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____SetUpFor) == 0x23c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____Mask) == 0x240, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____CameraFrustumPlanes) == 0x248, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____CameraFrustumPoints) == 0x250, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____DonePerCameraHeight) == 0x258, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____PerCameraHeightReady) == 0x259, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____BlackTextureArray) == 0x260, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____Simulations_k__BackingField) == 0x268, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____Initialized) == 0x270, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____GeneratedSettingsHash) == 0x274, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____SimulationBuffer) == 0x278, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____CascadeData) == 0x280, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____CascadeData_k__BackingField) == 0x288, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____Scale_k__BackingField) == 0x290, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____ScaleDifferencePower2_k__BackingField) == 0x294, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____Cameras) == 0x298, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____CurrentPerCameraData) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____PerCameraData) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____PerCameraLastFrame) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____EndOfFrame) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____IsEndOfFrame) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____RenderShadows) == 0x2c1, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____HasAnyViewpointExecuted) == 0x2c2, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____HasAnyViewerRendered) == 0x2c3, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterRenderer, ____IsSeparateViewpointCameraLoop_k__BackingField) == 0x2c4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::WaterRenderer) == 0x2c8, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
