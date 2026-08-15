#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/WaterRenderer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Plane_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__ManagerBehaviour_1_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__RenderPipeline_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__SurfaceRenderer_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__VisualizeDataTypes_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterBodyAffects_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterCameraExclusion_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterDataBackgroundMode_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterInjectionPoint_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__CopyColorPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__CopyDepthPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Texture2DArray_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "UnityEngine/zzzz__WindZone_def.hpp"
#include "WaveHarmonic/Crest/Portals/zzzz__PortalRenderer_def.hpp"
#include "WaveHarmonic/Crest/Utility/Internal/zzzz__Stack_1_def.hpp"
#include "WaveHarmonic/Crest/Utility/zzzz__BufferedData_1_def.hpp"
#include "WaveHarmonic/Crest/zzzz__AbsorptionLod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__AlbedoLod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__AnimatedWavesLod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ClipLod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__DepthLod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__DynamicWavesLod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__FlowLod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__FoamLod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ICollisionProvider_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IDepthProvider_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IFlowProvider_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ITimeProvider_def.hpp"
#include "WaveHarmonic/Crest/zzzz__LevelLod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Lod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__MaskRenderer_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Meniscus_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Rendering_def.hpp"
#include "WaveHarmonic/Crest/zzzz__SampleCollisionHelper_def.hpp"
#include "WaveHarmonic/Crest/zzzz__SampleDepthHelper_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ScatteringLod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ShadowLod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__SurfaceRenderer_def.hpp"
#include "WaveHarmonic/Crest/zzzz__TimeProvider_def.hpp"
#include "WaveHarmonic/Crest/zzzz__UnderwaterRenderer_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterBodyAffects_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterCameraExclusion_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterDataBackgroundMode_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterInjectionPoint_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterReflections_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterResources_def.hpp"
inline void WaveHarmonic::Crest::WaterRenderer_ShaderIDs::setStaticF_s_ScreenSpaceShadowTexture(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_ScreenSpaceShadowTexture", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterRenderer_ShaderIDs::getStaticF_s_ScreenSpaceShadowTexture()  {
return ::cordl_internals::getStaticField<int32_t, "s_ScreenSpaceShadowTexture", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::WaterRenderer_ShaderIDs::setStaticF_s_TemporaryDepthTexture(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_TemporaryDepthTexture", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterRenderer_ShaderIDs::getStaticF_s_TemporaryDepthTexture()  {
return ::cordl_internals::getStaticField<int32_t, "s_TemporaryDepthTexture", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::WaterRenderer_ShaderIDs::setStaticF_s_PrimaryLightHasCookie(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_PrimaryLightHasCookie", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterRenderer_ShaderIDs::getStaticF_s_PrimaryLightHasCookie()  {
return ::cordl_internals::getStaticField<int32_t, "s_PrimaryLightHasCookie", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::WaterRenderer_ShaderIDs::setStaticF_s_Center(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_Center", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterRenderer_ShaderIDs::getStaticF_s_Center()  {
return ::cordl_internals::getStaticField<int32_t, "s_Center", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::WaterRenderer_ShaderIDs::setStaticF_s_Scale(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_Scale", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterRenderer_ShaderIDs::getStaticF_s_Scale()  {
return ::cordl_internals::getStaticField<int32_t, "s_Scale", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::WaterRenderer_ShaderIDs::setStaticF_s_Time(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_Time", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterRenderer_ShaderIDs::getStaticF_s_Time()  {
return ::cordl_internals::getStaticField<int32_t, "s_Time", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::WaterRenderer_ShaderIDs::setStaticF_s_CascadeData(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_CascadeData", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterRenderer_ShaderIDs::getStaticF_s_CascadeData()  {
return ::cordl_internals::getStaticField<int32_t, "s_CascadeData", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::WaterRenderer_ShaderIDs::setStaticF_s_CascadeDataSource(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_CascadeDataSource", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterRenderer_ShaderIDs::getStaticF_s_CascadeDataSource()  {
return ::cordl_internals::getStaticField<int32_t, "s_CascadeDataSource", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::WaterRenderer_ShaderIDs::setStaticF_s_LodChange(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_LodChange", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterRenderer_ShaderIDs::getStaticF_s_LodChange()  {
return ::cordl_internals::getStaticField<int32_t, "s_LodChange", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::WaterRenderer_ShaderIDs::setStaticF_s_MeshScaleLerp(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_MeshScaleLerp", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterRenderer_ShaderIDs::getStaticF_s_MeshScaleLerp()  {
return ::cordl_internals::getStaticField<int32_t, "s_MeshScaleLerp", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::WaterRenderer_ShaderIDs::setStaticF_s_LodCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_LodCount", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterRenderer_ShaderIDs::getStaticF_s_LodCount()  {
return ::cordl_internals::getStaticField<int32_t, "s_LodCount", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::WaterRenderer_ShaderIDs::setStaticF_s_WaterDepthAtViewer(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_WaterDepthAtViewer", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterRenderer_ShaderIDs::getStaticF_s_WaterDepthAtViewer()  {
return ::cordl_internals::getStaticField<int32_t, "s_WaterDepthAtViewer", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::WaterRenderer_ShaderIDs::setStaticF_s_MaximumVerticalDisplacement(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_MaximumVerticalDisplacement", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterRenderer_ShaderIDs::getStaticF_s_MaximumVerticalDisplacement()  {
return ::cordl_internals::getStaticField<int32_t, "s_MaximumVerticalDisplacement", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::WaterRenderer_ShaderIDs::setStaticF_s_HorizonNormal(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_HorizonNormal", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterRenderer_ShaderIDs::getStaticF_s_HorizonNormal()  {
return ::cordl_internals::getStaticField<int32_t, "s_HorizonNormal", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::WaterRenderer_ShaderIDs::setStaticF_s_AbsorptionColor(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_AbsorptionColor", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterRenderer_ShaderIDs::getStaticF_s_AbsorptionColor()  {
return ::cordl_internals::getStaticField<int32_t, "s_AbsorptionColor", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::WaterRenderer_ShaderIDs::setStaticF_s_Absorption(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_Absorption", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterRenderer_ShaderIDs::getStaticF_s_Absorption()  {
return ::cordl_internals::getStaticField<int32_t, "s_Absorption", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::WaterRenderer_ShaderIDs::setStaticF_s_Scattering(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_Scattering", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterRenderer_ShaderIDs::getStaticF_s_Scattering()  {
return ::cordl_internals::getStaticField<int32_t, "s_Scattering", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::WaterRenderer_ShaderIDs::setStaticF_s_Anisotropy(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_Anisotropy", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterRenderer_ShaderIDs::getStaticF_s_Anisotropy()  {
return ::cordl_internals::getStaticField<int32_t, "s_Anisotropy", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::WaterRenderer_ShaderIDs::setStaticF_s_AmbientTerm(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_AmbientTerm", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterRenderer_ShaderIDs::getStaticF_s_AmbientTerm()  {
return ::cordl_internals::getStaticField<int32_t, "s_AmbientTerm", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::WaterRenderer_ShaderIDs::setStaticF_s_DirectTerm(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_DirectTerm", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterRenderer_ShaderIDs::getStaticF_s_DirectTerm()  {
return ::cordl_internals::getStaticField<int32_t, "s_DirectTerm", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::WaterRenderer_ShaderIDs::setStaticF_s_ShadowsAffectsAmbientFactor(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_ShadowsAffectsAmbientFactor", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterRenderer_ShaderIDs::getStaticF_s_ShadowsAffectsAmbientFactor()  {
return ::cordl_internals::getStaticField<int32_t, "s_ShadowsAffectsAmbientFactor", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::WaterRenderer_ShaderIDs::setStaticF_s_PlanarReflectionsEnabled(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_PlanarReflectionsEnabled", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterRenderer_ShaderIDs::getStaticF_s_PlanarReflectionsEnabled()  {
return ::cordl_internals::getStaticField<int32_t, "s_PlanarReflectionsEnabled", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::WaterRenderer_ShaderIDs::setStaticF_s_Occlusion(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_Occlusion", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterRenderer_ShaderIDs::getStaticF_s_Occlusion()  {
return ::cordl_internals::getStaticField<int32_t, "s_Occlusion", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::WaterRenderer_ShaderIDs::setStaticF_s_OcclusionUnderwater(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_OcclusionUnderwater", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterRenderer_ShaderIDs::getStaticF_s_OcclusionUnderwater()  {
return ::cordl_internals::getStaticField<int32_t, "s_OcclusionUnderwater", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::WaterRenderer_ShaderIDs::setStaticF_s_CenterDelta(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_CenterDelta", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterRenderer_ShaderIDs::getStaticF_s_CenterDelta()  {
return ::cordl_internals::getStaticField<int32_t, "s_CenterDelta", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::WaterRenderer_ShaderIDs::setStaticF_s_ScaleChange(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_ScaleChange", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterRenderer_ShaderIDs::getStaticF_s_ScaleChange()  {
return ::cordl_internals::getStaticField<int32_t, "s_ScaleChange", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::WaterRenderer_ShaderIDs::setStaticF_s_VolumeExtinctionLength(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_VolumeExtinctionLength", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterRenderer_ShaderIDs::getStaticF_s_VolumeExtinctionLength()  {
return ::cordl_internals::getStaticField<int32_t, "s_VolumeExtinctionLength", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::WaterRenderer_ShaderIDs::setStaticF_s_PrimaryLightDirection(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_PrimaryLightDirection", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterRenderer_ShaderIDs::getStaticF_s_PrimaryLightDirection()  {
return ::cordl_internals::getStaticField<int32_t, "s_PrimaryLightDirection", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::WaterRenderer_ShaderIDs::setStaticF_s_PrimaryLightIntensity(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_PrimaryLightIntensity", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterRenderer_ShaderIDs::getStaticF_s_PrimaryLightIntensity()  {
return ::cordl_internals::getStaticField<int32_t, "s_PrimaryLightIntensity", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::WaterRenderer_ShaderIDs::setStaticF_s_PrimaryLightFallback(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_PrimaryLightFallback", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterRenderer_ShaderIDs::getStaticF_s_PrimaryLightFallback()  {
return ::cordl_internals::getStaticField<int32_t, "s_PrimaryLightFallback", ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs*>();
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaterRenderer_ShaderIDs::WaterRenderer_ShaderIDs()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer_DebugFields._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer_DebugFields::*)()>(&::WaveHarmonic::Crest::WaterRenderer_DebugFields::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18258bc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer_DebugFields*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_get__VisualizeData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VisualizeData;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_get__VisualizeData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VisualizeData;
}
constexpr void WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_set__VisualizeData(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VisualizeData = value;
}
constexpr ::WaveHarmonic::Crest::VisualizeDataTypes& WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_get__VisualizeDataType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VisualizeDataType;
}
constexpr ::WaveHarmonic::Crest::VisualizeDataTypes const& WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_get__VisualizeDataType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VisualizeDataType;
}
constexpr void WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_set__VisualizeDataType(::WaveHarmonic::Crest::VisualizeDataTypes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VisualizeDataType = value;
}
constexpr float_t& WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_get__VisualizeDataExposure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VisualizeDataExposure;
}
constexpr float_t const& WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_get__VisualizeDataExposure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VisualizeDataExposure;
}
constexpr void WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_set__VisualizeDataExposure(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VisualizeDataExposure = value;
}
constexpr float_t& WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_get__VisualizeDataRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VisualizeDataRange;
}
constexpr float_t const& WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_get__VisualizeDataRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VisualizeDataRange;
}
constexpr void WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_set__VisualizeDataRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VisualizeDataRange = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_get__VisualizeDataSaturate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VisualizeDataSaturate;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_get__VisualizeDataSaturate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VisualizeDataSaturate;
}
constexpr void WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_set__VisualizeDataSaturate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VisualizeDataSaturate = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_get__SimulatePaused()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SimulatePaused;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_get__SimulatePaused() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SimulatePaused;
}
constexpr void WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_set__SimulatePaused(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SimulatePaused = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_get__AttachDebugGUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AttachDebugGUI;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_get__AttachDebugGUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AttachDebugGUI;
}
constexpr void WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_set__AttachDebugGUI(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AttachDebugGUI = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_get__ShowHiddenObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShowHiddenObjects;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_get__ShowHiddenObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShowHiddenObjects;
}
constexpr void WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_set__ShowHiddenObjects(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShowHiddenObjects = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_get__DisableFollowViewpoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisableFollowViewpoint;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_get__DisableFollowViewpoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisableFollowViewpoint;
}
constexpr void WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_set__DisableFollowViewpoint(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DisableFollowViewpoint = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_get__DestroyResourcesInOnDisable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DestroyResourcesInOnDisable;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_get__DestroyResourcesInOnDisable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DestroyResourcesInOnDisable;
}
constexpr void WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_set__DestroyResourcesInOnDisable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DestroyResourcesInOnDisable = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_get__LogScaleChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LogScaleChange;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_get__LogScaleChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LogScaleChange;
}
constexpr void WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_set__LogScaleChange(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LogScaleChange = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_get__PauseOnScaleChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PauseOnScaleChange;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_get__PauseOnScaleChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PauseOnScaleChange;
}
constexpr void WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_set__PauseOnScaleChange(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PauseOnScaleChange = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_get__IgnoreWavesForScaleChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IgnoreWavesForScaleChange;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_get__IgnoreWavesForScaleChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IgnoreWavesForScaleChange;
}
constexpr void WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_set__IgnoreWavesForScaleChange(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IgnoreWavesForScaleChange = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_get__OverrideScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideScale;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_get__OverrideScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideScale;
}
constexpr void WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_set__OverrideScale(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OverrideScale = value;
}
constexpr int32_t& WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_get__ScaleOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScaleOverride;
}
constexpr int32_t const& WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_get__ScaleOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScaleOverride;
}
constexpr void WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_set__ScaleOverride(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ScaleOverride = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_get__ForceNoGraphics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForceNoGraphics;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_get__ForceNoGraphics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForceNoGraphics;
}
constexpr void WaveHarmonic::Crest::WaterRenderer_DebugFields::__cordl_internal_set__ForceNoGraphics(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ForceNoGraphics = value;
}
inline void WaveHarmonic::Crest::WaterRenderer_DebugFields::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer_DebugFields*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::WaterRenderer_DebugFields* WaveHarmonic::Crest::WaterRenderer_DebugFields::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::WaterRenderer_DebugFields*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaterRenderer_DebugFields::WaterRenderer_DebugFields()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass* (*)()>(&::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::get_Instance)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18258b7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*)>(&::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::set_Instance)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18258b810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*>(),
                        {"set_Instance", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::_ctor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x18258b610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::*)()>(&::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::Destroy)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18258af80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*>(),
                        {"Destroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::Enable)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18258afc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*>(),
                        {"Enable", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass.OnBeginCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::OnBeginCameraRendering)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18258b1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*>(),
                        {"OnBeginCameraRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass.RecordRenderGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x18258b2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*>(), 11}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::__cordl_internal_get__Water()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Water;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::__cordl_internal_get__Water() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Water;
}
constexpr void WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::__cordl_internal_set__Water(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Water = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*& WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::__cordl_internal_get__CopyDepthPass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CopyDepthPass;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* const& WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::__cordl_internal_get__CopyDepthPass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CopyDepthPass;
}
constexpr void WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::__cordl_internal_set__CopyDepthPass(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CopyDepthPass = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::__cordl_internal_get__CopyDepthShader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CopyDepthShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::__cordl_internal_get__CopyDepthShader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CopyDepthShader;
}
constexpr void WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::__cordl_internal_set__CopyDepthShader(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CopyDepthShader = value;
}
constexpr ::UnityW<::UnityEngine::Material>& WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::__cordl_internal_get__CopyDepthMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CopyDepthMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::__cordl_internal_get__CopyDepthMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CopyDepthMaterial;
}
constexpr void WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::__cordl_internal_set__CopyDepthMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CopyDepthMaterial = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyColorPass*& WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::__cordl_internal_get__CopyColorPass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CopyColorPass;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyColorPass* const& WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::__cordl_internal_get__CopyColorPass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CopyColorPass;
}
constexpr void WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::__cordl_internal_set__CopyColorPass(::UnityEngine::Rendering::Universal::Internal::CopyColorPass*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CopyColorPass = value;
}
constexpr ::UnityW<::UnityEngine::Material>& WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::__cordl_internal_get__CopyColorMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CopyColorMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::__cordl_internal_get__CopyColorMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CopyColorMaterial;
}
constexpr void WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::__cordl_internal_set__CopyColorMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CopyColorMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::__cordl_internal_get__SampleColorMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleColorMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::__cordl_internal_get__SampleColorMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleColorMaterial;
}
constexpr void WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::__cordl_internal_set__SampleColorMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SampleColorMaterial = value;
}
inline void WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::setStaticF__Instance_k__BackingField(::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*  value)  {
::cordl_internals::setStaticField<::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*, "<Instance>k__BackingField", ::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*>(std::forward<::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*>(value));
}
inline ::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass* WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*, "<Instance>k__BackingField", ::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*>();
}
inline void WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::setStaticF_s_OpaqueColor(::System::Reflection::FieldInfo*  value)  {
::cordl_internals::setStaticField<::System::Reflection::FieldInfo*, "s_OpaqueColor", ::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*>(std::forward<::System::Reflection::FieldInfo*>(value));
}
inline ::System::Reflection::FieldInfo* WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::getStaticF_s_OpaqueColor()  {
return ::cordl_internals::getStaticField<::System::Reflection::FieldInfo*, "s_OpaqueColor", ::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*>();
}
inline void WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::setStaticF_s_ActiveRenderPassQueue(::System::Reflection::FieldInfo*  value)  {
::cordl_internals::setStaticField<::System::Reflection::FieldInfo*, "s_ActiveRenderPassQueue", ::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*>(std::forward<::System::Reflection::FieldInfo*>(value));
}
inline ::System::Reflection::FieldInfo* WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::getStaticF_s_ActiveRenderPassQueue()  {
return ::cordl_internals::getStaticField<::System::Reflection::FieldInfo*, "s_ActiveRenderPassQueue", ::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*>();
}
inline ::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass* WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*>(nullptr, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::set_Instance(::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*>(),
                        {"set_Instance", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::_ctor(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline void WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::Destroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*>(),
                        {"Destroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::Enable(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*>(),
                        {"Enable", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, water);
}
inline void WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::OnBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*>(),
                        {"OnBeginCameraRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, camera);
}
inline void WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  graph, ::UnityEngine::Rendering::ContextContainer*  frame)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graph, frame);
}
inline ::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass* WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::New_ctor(::WaveHarmonic::Crest::WaterRenderer*  water)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass*>(water));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaterRenderer_CopyTargetsRenderPass::WaterRenderer_CopyTargetsRenderPass()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::WaterRenderer_ActiveModules::WaterRenderer_ActiveModules(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaterRenderer_ActiveModules::WaterRenderer_ActiveModules()   {
}
constexpr ::WaveHarmonic::Crest::WaterRenderer_ActiveModules  WaveHarmonic::Crest::WaterRenderer_ActiveModules::Nothing{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::WaterRenderer_ActiveModules  WaveHarmonic::Crest::WaterRenderer_ActiveModules::Surface{static_cast<int32_t>(0x2)};
constexpr ::WaveHarmonic::Crest::WaterRenderer_ActiveModules  WaveHarmonic::Crest::WaterRenderer_ActiveModules::Volume{static_cast<int32_t>(0x4)};
constexpr ::WaveHarmonic::Crest::WaterRenderer_ActiveModules  WaveHarmonic::Crest::WaterRenderer_ActiveModules::SurfaceAndVolume{static_cast<int32_t>(0x6)};
constexpr ::WaveHarmonic::Crest::WaterRenderer_ActiveModules  WaveHarmonic::Crest::WaterRenderer_ActiveModules::Reflections{static_cast<int32_t>(0x8)};
constexpr ::WaveHarmonic::Crest::WaterRenderer_ActiveModules  WaveHarmonic::Crest::WaterRenderer_ActiveModules::Portal{static_cast<int32_t>(0x10)};
constexpr ::WaveHarmonic::Crest::WaterRenderer_ActiveModules  WaveHarmonic::Crest::WaterRenderer_ActiveModules::Meniscus{static_cast<int32_t>(0x20)};
constexpr ::WaveHarmonic::Crest::WaterRenderer_ActiveModules  WaveHarmonic::Crest::WaterRenderer_ActiveModules::Mask{static_cast<int32_t>(0x40)};
constexpr ::WaveHarmonic::Crest::WaterRenderer_ActiveModules  WaveHarmonic::Crest::WaterRenderer_ActiveModules::Shadows{static_cast<int32_t>(0x80)};
constexpr ::WaveHarmonic::Crest::WaterRenderer_ActiveModules  WaveHarmonic::Crest::WaterRenderer_ActiveModules::Everything{static_cast<int32_t>(0xffffffff)};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer_PerCameraData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer_PerCameraData::*)()>(&::WaveHarmonic::Crest::WaterRenderer_PerCameraData::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18258e460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer_PerCameraData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& WaveHarmonic::Crest::WaterRenderer_PerCameraData::__cordl_internal_get__RenderedThisFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RenderedThisFrame;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer_PerCameraData::__cordl_internal_get__RenderedThisFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RenderedThisFrame;
}
constexpr void WaveHarmonic::Crest::WaterRenderer_PerCameraData::__cordl_internal_set__RenderedThisFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RenderedThisFrame = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer_PerCameraData::__cordl_internal_get__ExecutedThisFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ExecutedThisFrame;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer_PerCameraData::__cordl_internal_get__ExecutedThisFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ExecutedThisFrame;
}
constexpr void WaveHarmonic::Crest::WaterRenderer_PerCameraData::__cordl_internal_set__ExecutedThisFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ExecutedThisFrame = value;
}
constexpr float_t& WaveHarmonic::Crest::WaterRenderer_PerCameraData::__cordl_internal_get__Scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Scale;
}
constexpr float_t const& WaveHarmonic::Crest::WaterRenderer_PerCameraData::__cordl_internal_get__Scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Scale;
}
constexpr void WaveHarmonic::Crest::WaterRenderer_PerCameraData::__cordl_internal_set__Scale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Scale = value;
}
constexpr ::UnityEngine::Vector3& WaveHarmonic::Crest::WaterRenderer_PerCameraData::__cordl_internal_get__Position()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Position;
}
constexpr ::UnityEngine::Vector3 const& WaveHarmonic::Crest::WaterRenderer_PerCameraData::__cordl_internal_get__Position() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Position;
}
constexpr void WaveHarmonic::Crest::WaterRenderer_PerCameraData::__cordl_internal_set__Position(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Position = value;
}
constexpr ::UnityEngine::Vector3& WaveHarmonic::Crest::WaterRenderer_PerCameraData::__cordl_internal_get__OldViewpointPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OldViewpointPosition;
}
constexpr ::UnityEngine::Vector3 const& WaveHarmonic::Crest::WaterRenderer_PerCameraData::__cordl_internal_get__OldViewpointPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OldViewpointPosition;
}
constexpr void WaveHarmonic::Crest::WaterRenderer_PerCameraData::__cordl_internal_set__OldViewpointPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OldViewpointPosition = value;
}
constexpr float_t& WaveHarmonic::Crest::WaterRenderer_PerCameraData::__cordl_internal_get__ViewpointHeightAboveWaterSmooth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ViewpointHeightAboveWaterSmooth;
}
constexpr float_t const& WaveHarmonic::Crest::WaterRenderer_PerCameraData::__cordl_internal_get__ViewpointHeightAboveWaterSmooth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ViewpointHeightAboveWaterSmooth;
}
constexpr void WaveHarmonic::Crest::WaterRenderer_PerCameraData::__cordl_internal_set__ViewpointHeightAboveWaterSmooth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ViewpointHeightAboveWaterSmooth = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer_PerCameraData::__cordl_internal_get__IsFirstFrameSinceEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsFirstFrameSinceEnabled;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer_PerCameraData::__cordl_internal_get__IsFirstFrameSinceEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsFirstFrameSinceEnabled;
}
constexpr void WaveHarmonic::Crest::WaterRenderer_PerCameraData::__cordl_internal_set__IsFirstFrameSinceEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsFirstFrameSinceEnabled = value;
}
constexpr ::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*& WaveHarmonic::Crest::WaterRenderer_PerCameraData::__cordl_internal_get__CascadeData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CascadeData;
}
constexpr ::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>* const& WaveHarmonic::Crest::WaterRenderer_PerCameraData::__cordl_internal_get__CascadeData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CascadeData;
}
constexpr void WaveHarmonic::Crest::WaterRenderer_PerCameraData::__cordl_internal_set__CascadeData(::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CascadeData = value;
}
constexpr float_t& WaveHarmonic::Crest::WaterRenderer_PerCameraData::__cordl_internal_get__ViewerHeightAboveWater()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ViewerHeightAboveWater;
}
constexpr float_t const& WaveHarmonic::Crest::WaterRenderer_PerCameraData::__cordl_internal_get__ViewerHeightAboveWater() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ViewerHeightAboveWater;
}
constexpr void WaveHarmonic::Crest::WaterRenderer_PerCameraData::__cordl_internal_set__ViewerHeightAboveWater(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ViewerHeightAboveWater = value;
}
constexpr float_t& WaveHarmonic::Crest::WaterRenderer_PerCameraData::__cordl_internal_get__ViewerDistanceToShoreline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ViewerDistanceToShoreline;
}
constexpr float_t const& WaveHarmonic::Crest::WaterRenderer_PerCameraData::__cordl_internal_get__ViewerDistanceToShoreline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ViewerDistanceToShoreline;
}
constexpr void WaveHarmonic::Crest::WaterRenderer_PerCameraData::__cordl_internal_set__ViewerDistanceToShoreline(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ViewerDistanceToShoreline = value;
}
constexpr int32_t& WaveHarmonic::Crest::WaterRenderer_PerCameraData::__cordl_internal_get__LastFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastFrame;
}
constexpr int32_t const& WaveHarmonic::Crest::WaterRenderer_PerCameraData::__cordl_internal_get__LastFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastFrame;
}
constexpr void WaveHarmonic::Crest::WaterRenderer_PerCameraData::__cordl_internal_set__LastFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastFrame = value;
}
inline void WaveHarmonic::Crest::WaterRenderer_PerCameraData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer_PerCameraData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::WaterRenderer_PerCameraData* WaveHarmonic::Crest::WaterRenderer_PerCameraData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::WaterRenderer_PerCameraData*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaterRenderer_PerCameraData::WaterRenderer_PerCameraData()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer___c::*)()>(&::WaveHarmonic::Crest::WaterRenderer___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer___c._InitializePerFrameMaterialParameters_b__424_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector4> (::WaveHarmonic::Crest::WaterRenderer___c::*)()>(&::WaveHarmonic::Crest::WaterRenderer___c::_InitializePerFrameMaterialParameters_b__424_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825942b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer___c*>(),
                        {"<InitializePerFrameMaterialParameters>b__424_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::WaterRenderer___c::setStaticF___9(::WaveHarmonic::Crest::WaterRenderer___c*  value)  {
::cordl_internals::setStaticField<::WaveHarmonic::Crest::WaterRenderer___c*, "<>9", ::WaveHarmonic::Crest::WaterRenderer___c*>(std::forward<::WaveHarmonic::Crest::WaterRenderer___c*>(value));
}
inline ::WaveHarmonic::Crest::WaterRenderer___c* WaveHarmonic::Crest::WaterRenderer___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::WaveHarmonic::Crest::WaterRenderer___c*, "<>9", ::WaveHarmonic::Crest::WaterRenderer___c*>();
}
inline void WaveHarmonic::Crest::WaterRenderer___c::setStaticF___9__424_0(::System::Func_1<::ArrayW<::UnityEngine::Vector4>>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::ArrayW<::UnityEngine::Vector4>>*, "<>9__424_0", ::WaveHarmonic::Crest::WaterRenderer___c*>(std::forward<::System::Func_1<::ArrayW<::UnityEngine::Vector4>>*>(value));
}
inline ::System::Func_1<::ArrayW<::UnityEngine::Vector4>>* WaveHarmonic::Crest::WaterRenderer___c::getStaticF___9__424_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::ArrayW<::UnityEngine::Vector4>>*, "<>9__424_0", ::WaveHarmonic::Crest::WaterRenderer___c*>();
}
inline void WaveHarmonic::Crest::WaterRenderer___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Vector4> WaveHarmonic::Crest::WaterRenderer___c::_InitializePerFrameMaterialParameters_b__424_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer___c*>(),
                        {"<InitializePerFrameMaterialParameters>b__424_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector4>>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::WaterRenderer___c* WaveHarmonic::Crest::WaterRenderer___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::WaterRenderer___c*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaterRenderer___c::WaterRenderer___c()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463::*)(int32_t)>(&::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463::*)()>(&::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463::*)()>(&::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463::MoveNext)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1825943f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463::*)()>(&::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463::*)()>(&::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463::*)()>(&::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463::__cordl_internal_set___4__this(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463* WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaterRenderer__UpdateSkippedCameras_d__463::WaterRenderer__UpdateSkippedCameras_d__463()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.GetLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::GetLayer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825820c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetLayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.SetLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(int32_t, int32_t)>(&::WaveHarmonic::Crest::WaterRenderer::SetLayer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825861b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"SetLayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.GetMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::GetMaterial)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825820f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.SetMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(&::WaveHarmonic::Crest::WaterRenderer::SetMaterial)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825861e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"SetMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.GetVolumeMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::GetVolumeMaterial)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182582480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetVolumeMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.SetVolumeMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(&::WaveHarmonic::Crest::WaterRenderer::SetVolumeMaterial)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182586240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"SetVolumeMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.GetCastShadows
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::GetCastShadows)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182581ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetCastShadows", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.SetCastShadows
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(bool, bool)>(&::WaveHarmonic::Crest::WaterRenderer::SetCastShadows)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182586100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"SetCastShadows", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.GetWaterBodyCulling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::GetWaterBodyCulling)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825824b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetWaterBodyCulling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.SetWaterBodyCulling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(bool, bool)>(&::WaveHarmonic::Crest::WaterRenderer::SetWaterBodyCulling)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182586270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"SetWaterBodyCulling", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.GetTimeSliceBoundsUpdateFrameCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::GetTimeSliceBoundsUpdateFrameCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825821b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetTimeSliceBoundsUpdateFrameCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.SetTimeSliceBoundsUpdateFrameCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(int32_t, int32_t)>(&::WaveHarmonic::Crest::WaterRenderer::SetTimeSliceBoundsUpdateFrameCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182586210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"SetTimeSliceBoundsUpdateFrameCount", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.GetAllowRenderQueueSorting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::GetAllowRenderQueueSorting)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182581eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetAllowRenderQueueSorting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.SetAllowRenderQueueSorting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(bool, bool)>(&::WaveHarmonic::Crest::WaterRenderer::SetAllowRenderQueueSorting)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825860d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"SetAllowRenderQueueSorting", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_AbsorptionLod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::AbsorptionLod* (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_AbsorptionLod)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_AbsorptionLod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_AlbedoLod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::AlbedoLod* (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_AlbedoLod)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180481ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_AlbedoLod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_AllowRenderQueueSorting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_AllowRenderQueueSorting)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182581eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_AllowRenderQueueSorting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_AllowRenderQueueSorting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(bool)>(&::WaveHarmonic::Crest::WaterRenderer::set_AllowRenderQueueSorting)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182588100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_AllowRenderQueueSorting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_AnimatedWavesLod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::AnimatedWavesLod* (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_AnimatedWavesLod)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180337120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_AnimatedWavesLod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_Viewer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_Viewer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182587f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_Viewer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_Viewer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::WaterRenderer::set_Viewer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180374490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_Viewer", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_CameraExclusions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::WaterCameraExclusion (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_CameraExclusions)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182193f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_CameraExclusions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_CameraExclusions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::WaveHarmonic::Crest::WaterCameraExclusion)>(&::WaveHarmonic::Crest::WaterRenderer::set_CameraExclusions)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182194180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_CameraExclusions", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterCameraExclusion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_CastShadows
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_CastShadows)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182581ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_CastShadows", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_CastShadows
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(bool)>(&::WaveHarmonic::Crest::WaterRenderer::set_CastShadows)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182588150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_CastShadows", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_CenterOfDetailDisplacementCorrection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_CenterOfDetailDisplacementCorrection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1820c7fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_CenterOfDetailDisplacementCorrection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_CenterOfDetailDisplacementCorrection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(bool)>(&::WaveHarmonic::Crest::WaterRenderer::set_CenterOfDetailDisplacementCorrection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182588180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_CenterOfDetailDisplacementCorrection", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_ClipLod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::ClipLod* (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_ClipLod)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180481940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_ClipLod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_DataBackgroundMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::WaterDataBackgroundMode (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_DataBackgroundMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818e7a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_DataBackgroundMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_DataBackgroundMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::WaveHarmonic::Crest::WaterDataBackgroundMode)>(&::WaveHarmonic::Crest::WaterRenderer::set_DataBackgroundMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182588190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_DataBackgroundMode", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterDataBackgroundMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_DefaultExcludes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::WaterBodyAffects (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_DefaultExcludes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182587b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_DefaultExcludes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_DefaultExcludes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::WaveHarmonic::Crest::WaterBodyAffects)>(&::WaveHarmonic::Crest::WaterRenderer::set_DefaultExcludes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825881a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_DefaultExcludes", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterBodyAffects>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_DepthLod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::DepthLod* (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_DepthLod)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180337110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_DepthLod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_DropDetailHeightBasedOnWaves
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_DropDetailHeightBasedOnWaves)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_DropDetailHeightBasedOnWaves", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_DropDetailHeightBasedOnWaves
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(float_t)>(&::WaveHarmonic::Crest::WaterRenderer::set_DropDetailHeightBasedOnWaves)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_DropDetailHeightBasedOnWaves", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_DynamicWavesLod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::DynamicWavesLod* (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_DynamicWavesLod)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_DynamicWavesLod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_ExtentsSizeMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_ExtentsSizeMultiplier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180468f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_ExtentsSizeMultiplier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_ExtentsSizeMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(float_t)>(&::WaveHarmonic::Crest::WaterRenderer::set_ExtentsSizeMultiplier)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1825881b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_ExtentsSizeMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_FlowLod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::FlowLod* (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_FlowLod)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_FlowLod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_FoamLod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::FoamLod* (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_FoamLod)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_FoamLod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_ForceScaleChangeSmoothing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_ForceScaleChangeSmoothing)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182587c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_ForceScaleChangeSmoothing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_ForceScaleChangeSmoothing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(bool)>(&::WaveHarmonic::Crest::WaterRenderer::set_ForceScaleChangeSmoothing)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182588200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_ForceScaleChangeSmoothing", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_GeometryDownSampleFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_GeometryDownSampleFactor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e56da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_GeometryDownSampleFactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_GeometryDownSampleFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(int32_t)>(&::WaveHarmonic::Crest::WaterRenderer::set_GeometryDownSampleFactor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182588210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_GeometryDownSampleFactor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_GravityMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_GravityMultiplier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18032ef70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_GravityMultiplier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_GravityMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(float_t)>(&::WaveHarmonic::Crest::WaterRenderer::set_GravityMultiplier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d9990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_GravityMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_GravityOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_GravityOverride)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803826d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_GravityOverride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_GravityOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(float_t)>(&::WaveHarmonic::Crest::WaterRenderer::set_GravityOverride)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182349c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_GravityOverride", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_InjectionPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::WaterInjectionPoint (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_InjectionPoint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813eff30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_InjectionPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_InjectionPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::WaveHarmonic::Crest::WaterInjectionPoint)>(&::WaveHarmonic::Crest::WaterRenderer::set_InjectionPoint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813f0060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_InjectionPoint", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterInjectionPoint>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_Layer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_Layer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825820c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_Layer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_Layer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(int32_t)>(&::WaveHarmonic::Crest::WaterRenderer::set_Layer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182588270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_Layer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_LevelLod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::LevelLod* (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_LevelLod)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_LevelLod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_Material
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_Material)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825820f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_Material", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_Material
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Material*)>(&::WaveHarmonic::Crest::WaterRenderer::set_Material)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1825882a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_Material", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_Meniscus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::Meniscus* (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_Meniscus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180345c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_Meniscus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_OverrideGravity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_OverrideGravity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fcaac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_OverrideGravity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_OverrideGravity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(bool)>(&::WaveHarmonic::Crest::WaterRenderer::set_OverrideGravity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180487390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_OverrideGravity", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_OverrideRenderHDR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_OverrideRenderHDR)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803717e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_OverrideRenderHDR", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_OverrideRenderHDR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(bool)>(&::WaveHarmonic::Crest::WaterRenderer::set_OverrideRenderHDR)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825882f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_OverrideRenderHDR", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_OverrideWindZoneWindDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_OverrideWindZoneWindDirection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_OverrideWindZoneWindDirection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_OverrideWindZoneWindDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(bool)>(&::WaveHarmonic::Crest::WaterRenderer::set_OverrideWindZoneWindDirection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b30e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_OverrideWindZoneWindDirection", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_OverrideWindZoneWindSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_OverrideWindZoneWindSpeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805fa960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_OverrideWindZoneWindSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_OverrideWindZoneWindSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(bool)>(&::WaveHarmonic::Crest::WaterRenderer::set_OverrideWindZoneWindSpeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1817eed70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_OverrideWindZoneWindSpeed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_OverrideWindZoneWindTurbulence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_OverrideWindZoneWindTurbulence)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18030d8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_OverrideWindZoneWindTurbulence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_OverrideWindZoneWindTurbulence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(bool)>(&::WaveHarmonic::Crest::WaterRenderer::set_OverrideWindZoneWindTurbulence)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18140a480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_OverrideWindZoneWindTurbulence", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_Portals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::Portals::PortalRenderer* (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_Portals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180345c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_Portals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_PrimaryLight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Light> (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_PrimaryLight)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182582120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_PrimaryLight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_PrimaryLight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Light*)>(&::WaveHarmonic::Crest::WaterRenderer::set_PrimaryLight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803223c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_PrimaryLight", {}, {::i2c::type_of<::UnityEngine::Light*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_Reflections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::WaterReflections* (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_Reflections)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180481bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_Reflections", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_RenderHDR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_RenderHDR)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805e8f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_RenderHDR", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_RenderHDR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(bool)>(&::WaveHarmonic::Crest::WaterRenderer::set_RenderHDR)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805e90d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_RenderHDR", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_LodResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_LodResolution)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181465ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_LodResolution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_LodResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(int32_t)>(&::WaveHarmonic::Crest::WaterRenderer::set_LodResolution)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180cbfe10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_LodResolution", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_SampleTerrainHeightForScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_SampleTerrainHeightForScale)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182587e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_SampleTerrainHeightForScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_SampleTerrainHeightForScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(bool)>(&::WaveHarmonic::Crest::WaterRenderer::set_SampleTerrainHeightForScale)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182588320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_SampleTerrainHeightForScale", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_ScaleRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_ScaleRange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_ScaleRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_ScaleRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Vector2)>(&::WaveHarmonic::Crest::WaterRenderer::set_ScaleRange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1817f13c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_ScaleRange", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_ScatteringLod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::ScatteringLod* (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_ScatteringLod)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803459e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_ScatteringLod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_ShadowLod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::ShadowLod* (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_ShadowLod)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_ShadowLod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_LodLevels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_LodLevels)> {
  constexpr static std::size_t size = 0x53a0;
  constexpr static std::size_t addrs = 0x180c314e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_LodLevels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_LodLevels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(int32_t)>(&::WaveHarmonic::Crest::WaterRenderer::set_LodLevels)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813efff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_LodLevels", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_Surface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::SurfaceRenderer* (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_Surface)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803459d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_Surface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_TeleportThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_TeleportThreshold)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182587ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_TeleportThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_TeleportThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(float_t)>(&::WaveHarmonic::Crest::WaterRenderer::set_TeleportThreshold)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182588350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_TeleportThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_TimeSliceBoundsUpdateFrameCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_TimeSliceBoundsUpdateFrameCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825821b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_TimeSliceBoundsUpdateFrameCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_TimeSliceBoundsUpdateFrameCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(int32_t)>(&::WaveHarmonic::Crest::WaterRenderer::set_TimeSliceBoundsUpdateFrameCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182588380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_TimeSliceBoundsUpdateFrameCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_Underwater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::UnderwaterRenderer* (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_Underwater)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180481bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_Underwater", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_Viewpoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_Viewpoint)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1825823c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_Viewpoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_Viewpoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Transform*)>(&::WaveHarmonic::Crest::WaterRenderer::set_Viewpoint)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180337170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_Viewpoint", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_VolumeMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_VolumeMaterial)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182582480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_VolumeMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_VolumeMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Material*)>(&::WaveHarmonic::Crest::WaterRenderer::set_VolumeMaterial)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1825883f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_VolumeMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_WaterBodyCulling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_WaterBodyCulling)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825824b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_WaterBodyCulling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_WaterBodyCulling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(bool)>(&::WaveHarmonic::Crest::WaterRenderer::set_WaterBodyCulling)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182588440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_WaterBodyCulling", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_WindDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_WindDirection)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x182587fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_WindDirection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_WindDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(float_t)>(&::WaveHarmonic::Crest::WaterRenderer::set_WindDirection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182588470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_WindDirection", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_WindSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_WindSpeed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1825825a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_WindSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_WindSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(float_t)>(&::WaveHarmonic::Crest::WaterRenderer::set_WindSpeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182588480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_WindSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_WindTurbulence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_WindTurbulence)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182582600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_WindTurbulence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_WindTurbulence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(float_t)>(&::WaveHarmonic::Crest::WaterRenderer::set_WindTurbulence)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182553b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_WindTurbulence", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_WindZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::WindZone> (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_WindZone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_WindZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_WindZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::WindZone*)>(&::WaveHarmonic::Crest::WaterRenderer::set_WindZone)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18163ca40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_WindZone", {}, {::i2c::type_of<::UnityEngine::WindZone*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_WriteMotionVectors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_WriteMotionVectors)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_WriteMotionVectors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_WriteMotionVectors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(bool)>(&::WaveHarmonic::Crest::WaterRenderer::set_WriteMotionVectors)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182588490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_WriteMotionVectors", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_WriteToColorTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_WriteToColorTexture)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182582660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_WriteToColorTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_WriteToColorTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(bool)>(&::WaveHarmonic::Crest::WaterRenderer::set_WriteToColorTexture)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18214f2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_WriteToColorTexture", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_WriteToDepthTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_WriteToDepthTexture)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1825826a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_WriteToDepthTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_WriteToDepthTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(bool)>(&::WaveHarmonic::Crest::WaterRenderer::set_WriteToDepthTexture)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825884a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_WriteToDepthTexture", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.HasWater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Vector3)>(&::WaveHarmonic::Crest::WaterRenderer::HasWater)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1825826e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"HasWater", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.SetExtentsSizeMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(float_t, float_t)>(&::WaveHarmonic::Crest::WaterRenderer::SetExtentsSizeMultiplier)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182586130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"SetExtentsSizeMultiplier", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.SetGeometryDownSampleFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(int32_t, int32_t)>(&::WaveHarmonic::Crest::WaterRenderer::SetGeometryDownSampleFactor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182586170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"SetGeometryDownSampleFactor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_FrameBufferFormatOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::BIRP_Rendering_FrameBufferFormatOverride (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_FrameBufferFormatOverride)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182587c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_FrameBufferFormatOverride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.InitializeOnLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::WaveHarmonic::Crest::WaterRenderer::InitializeOnLoad)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182582810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"InitializeOnLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.UpdateMatrices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::WaterRenderer::UpdateMatrices)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182586bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"UpdateMatrices", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.OnBeginCameraRenderingLegacy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::WaterRenderer::OnBeginCameraRenderingLegacy)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x182584b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"OnBeginCameraRenderingLegacy", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.OnEndCameraRenderingLegacy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::WaterRenderer::OnEndCameraRenderingLegacy)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x182585540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"OnEndCameraRenderingLegacy", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.OnLegacyCopyPass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::WaterRenderer::OnLegacyCopyPass)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x182585850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"OnLegacyCopyPass", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.OnBeginCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::WaterRenderer::OnBeginCameraRendering)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182584d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"OnBeginCameraRendering", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.OnEndCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::WaterRenderer::OnEndCameraRendering)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182585640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"OnEndCameraRendering", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.UpdateCameraOpaqueTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::CommandBuffer*)>(&::WaveHarmonic::Crest::WaterRenderer::UpdateCameraOpaqueTexture)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x182586aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"UpdateCameraOpaqueTexture", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.OnBeginCameraOpaqueTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::WaterRenderer::OnBeginCameraOpaqueTexture)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x182584920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"OnBeginCameraOpaqueTexture", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.OnEndCameraOpaqueTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::WaterRenderer::OnEndCameraOpaqueTexture)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182585500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"OnEndCameraOpaqueTexture", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.OnLegacyDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::OnLegacyDestroy)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182585c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"OnLegacyDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.ExecuteLighting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::WaterRenderer::ExecuteLighting)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x1825814b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"ExecuteLighting", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_Version)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182587f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.OnMigrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::OnMigrate)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x182585cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.GetViewpoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::GetViewpoint)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1825823c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetViewpoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.GetViewer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::WaveHarmonic::Crest::WaterRenderer::*)(bool, bool)>(&::WaveHarmonic::Crest::WaterRenderer::GetViewer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182582360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetViewer", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_CurrentCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_CurrentCamera)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180345c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_CurrentCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_CurrentCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::WaterRenderer::set_CurrentCamera)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803461a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_CurrentCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_ViewerAltitudeLevelAlpha
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_ViewerAltitudeLevelAlpha)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182587f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_ViewerAltitudeLevelAlpha", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_ViewerAltitudeLevelAlpha
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(float_t)>(&::WaveHarmonic::Crest::WaterRenderer::set_ViewerAltitudeLevelAlpha)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825883b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_ViewerAltitudeLevelAlpha", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_ViewerHeightAboveWater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_ViewerHeightAboveWater)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182587f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_ViewerHeightAboveWater", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_ViewerHeightAboveWater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(float_t)>(&::WaveHarmonic::Crest::WaterRenderer::set_ViewerHeightAboveWater)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825883d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_ViewerHeightAboveWater", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_ViewpointHeightAboveWater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_ViewpointHeightAboveWater)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182587fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_ViewpointHeightAboveWater", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_ViewpointHeightAboveWater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(float_t)>(&::WaveHarmonic::Crest::WaterRenderer::set_ViewpointHeightAboveWater)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825883e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_ViewpointHeightAboveWater", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_ViewerDistanceToShoreline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_ViewerDistanceToShoreline)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182587f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_ViewerDistanceToShoreline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_ViewerDistanceToShoreline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(float_t)>(&::WaveHarmonic::Crest::WaterRenderer::set_ViewerDistanceToShoreline)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825883c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_ViewerDistanceToShoreline", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_TeleportOriginThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_TeleportOriginThisFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e7410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_TeleportOriginThisFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_WindSpeedKPH
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_WindSpeedKPH)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1815234b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_WindSpeedKPH", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_WindSpeedOverriden
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_WindSpeedOverriden)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825880a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_WindSpeedOverriden", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_WindDirectionOverriden
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_WindDirectionOverriden)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182587fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_WindDirectionOverriden", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_WindTurbulenceOverriden
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_WindTurbulenceOverriden)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825880d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_WindTurbulenceOverriden", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.GetWindSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::GetWindSpeed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1825825a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetWindSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.GetWindDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::GetWindDirection)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1825824e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetWindDirection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.GetWindTurbulence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::GetWindTurbulence)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182582600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetWindTurbulence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182587d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_Position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Vector3)>(&::WaveHarmonic::Crest::WaterRenderer::set_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182588300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_Position", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_Container
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_Container)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1823bce60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_Container", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_SeaLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_SeaLevel)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182587e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_SeaLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.GetProjectionMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::WaveHarmonic::Crest::WaterRenderer::*)(int32_t)>(&::WaveHarmonic::Crest::WaterRenderer::GetProjectionMatrix)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182582160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetProjectionMatrix", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.CalculateViewMatrixFromSnappedPositionRHS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Vector3)>(&::WaveHarmonic::Crest::WaterRenderer::CalculateViewMatrixFromSnappedPositionRHS)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1825806a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"CalculateViewMatrixFromSnappedPositionRHS", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_TimeProviders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::Utility::Internal::Stack_1<::WaveHarmonic::Crest::ITimeProvider*>* (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_TimeProviders)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1823bcae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_TimeProviders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_TimeProviders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::WaveHarmonic::Crest::Utility::Internal::Stack_1<::WaveHarmonic::Crest::ITimeProvider*>*)>(&::WaveHarmonic::Crest::WaterRenderer::set_TimeProviders)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182588360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_TimeProviders", {}, {::i2c::type_of<::WaveHarmonic::Crest::Utility::Internal::Stack_1<::WaveHarmonic::Crest::ITimeProvider*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_TimeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::ITimeProvider* (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_TimeProvider)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182587ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_TimeProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_CurrentTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_CurrentTime)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182587b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_CurrentTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_DeltaTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_DeltaTime)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182587b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_DeltaTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.GetPrimaryLight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Light> (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::GetPrimaryLight)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182582120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetPrimaryLight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_Gravity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_Gravity)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182587c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_Gravity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_RenderBeforeTransparency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_RenderBeforeTransparency)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182587d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_RenderBeforeTransparency", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_BlackTextureArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2DArray> (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_BlackTextureArray)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182587a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_BlackTextureArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.GetWriteMotionVectors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::GetWriteMotionVectors)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetWriteMotionVectors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.GetWriteToColorTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::GetWriteToColorTexture)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182582660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetWriteToColorTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.GetWriteToDepthTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::GetWriteToDepthTexture)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1825826a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetWriteToDepthTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.ShouldRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::WaterRenderer::ShouldRender)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182586400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"ShouldRender", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.ShouldRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Camera*, int32_t)>(&::WaveHarmonic::Crest::WaterRenderer::ShouldRender)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182586420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"ShouldRender", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.ShouldRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Camera*, ::WaveHarmonic::Crest::WaterCameraExclusion)>(&::WaveHarmonic::Crest::WaterRenderer::ShouldRender)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x182586470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"ShouldRender", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::WaveHarmonic::Crest::WaterCameraExclusion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.ShouldRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Camera*, int32_t, ::WaveHarmonic::Crest::WaterCameraExclusion)>(&::WaveHarmonic::Crest::WaterRenderer::ShouldRender)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x182586550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"ShouldRender", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::WaveHarmonic::Crest::WaterCameraExclusion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.ShouldExecuteViewpoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Camera*, int32_t, ::WaveHarmonic::Crest::WaterCameraExclusion)>(&::WaveHarmonic::Crest::WaterRenderer::ShouldExecuteViewpoint)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1825863c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"ShouldExecuteViewpoint", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::WaveHarmonic::Crest::WaterCameraExclusion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.CalculateAbsorptionValueFromColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Color)>(&::WaveHarmonic::Crest::WaterRenderer::CalculateAbsorptionValueFromColor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825805d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"CalculateAbsorptionValueFromColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.UpdateAbsorptionFromColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Color)>(&::WaveHarmonic::Crest::WaterRenderer::UpdateAbsorptionFromColor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1825869b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"UpdateAbsorptionFromColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.UpdateAbsorptionFromColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*)>(&::WaveHarmonic::Crest::WaterRenderer::UpdateAbsorptionFromColor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x182586840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"UpdateAbsorptionFromColor", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_Simulations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::WaveHarmonic::Crest::Lod*>* (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_Simulations)> {
  constexpr static std::size_t size = 0xc40;
  constexpr static std::size_t addrs = 0x180de9170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_Simulations", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_Active)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182587a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_RunningWithoutGraphics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_RunningWithoutGraphics)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182587d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_RunningWithoutGraphics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_IsRunningWithoutGraphics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_IsRunningWithoutGraphics)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182587cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_IsRunningWithoutGraphics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_RunningHeadless
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_RunningHeadless)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_RunningHeadless", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_FrameCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_FrameCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182587c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_FrameCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_SimulationBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::CommandBuffer* (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_SimulationBuffer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182587eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_SimulationBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_CascadeData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>* (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_CascadeData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1823bd9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_CascadeData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_CascadeData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*)>(&::WaveHarmonic::Crest::WaterRenderer::set_CascadeData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182588130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_CascadeData", {}, {::i2c::type_of<::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_BufferSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_BufferSize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_BufferSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.MaximumWavelength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::WaterRenderer::*)(int32_t, int32_t)>(&::WaveHarmonic::Crest::WaterRenderer::MaximumWavelength)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1825848a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"MaximumWavelength", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.MaximumWavelength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::WaterRenderer::*)(float_t, int32_t)>(&::WaveHarmonic::Crest::WaterRenderer::MaximumWavelength)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182584900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"MaximumWavelength", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_Scale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_Scale)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182587e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_Scale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_Scale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(float_t)>(&::WaveHarmonic::Crest::WaterRenderer::set_Scale)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182588340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_Scale", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.CalcLodScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::WaterRenderer::*)(float_t)>(&::WaveHarmonic::Crest::WaterRenderer::CalcLodScale)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825805a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"CalcLodScale", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.CalcGridSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::WaterRenderer::*)(int32_t)>(&::WaveHarmonic::Crest::WaterRenderer::CalcGridSize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182580560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"CalcGridSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_ScaleCouldIncrease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_ScaleCouldIncrease)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182587e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_ScaleCouldIncrease", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_ScaleCouldDecrease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_ScaleCouldDecrease)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182587e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_ScaleCouldDecrease", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_ScaleDifferencePower2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_ScaleDifferencePower2)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18149bba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_ScaleDifferencePower2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_ScaleDifferencePower2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(int32_t)>(&::WaveHarmonic::Crest::WaterRenderer::set_ScaleDifferencePower2)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182588330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_ScaleDifferencePower2", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_CollisionProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::ICollisionProvider* (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_CollisionProvider)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182587b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_CollisionProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_FlowProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::IFlowProvider* (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_FlowProvider)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182587c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_FlowProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_DepthProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::IDepthProvider* (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_DepthProvider)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182587bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_DepthProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::Initialize)> {
  constexpr static std::size_t size = 0xc30;
  constexpr static std::size_t addrs = 0x182582950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::OnDisable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1825854c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::OnDestroy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825854a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::Enable)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0x182580e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.OnBeginCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::WaterRenderer::OnBeginCameraRendering)> {
  constexpr static std::size_t size = 0x6d0;
  constexpr static std::size_t addrs = 0x182584dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"OnBeginCameraRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.UpdateRenderPipelineTextures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::WaterRenderer::UpdateRenderPipelineTextures)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182586fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"UpdateRenderPipelineTextures", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.OnEndCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::WaterRenderer::OnEndCameraRendering)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x182585650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"OnEndCameraRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.UpdatePerCameraHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::WaterRenderer::UpdatePerCameraHeight)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x182586bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"UpdatePerCameraHeight", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.VerifyRequirements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::VerifyRequirements)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1825870d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"VerifyRequirements", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.CalculateSettingsHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::CalculateSettingsHash)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182580600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"CalculateSettingsHash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::LateUpdate)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x182584460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.ExecuteViewpoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::WaterRenderer::ExecuteViewpoint)> {
  constexpr static std::size_t size = 0x660;
  constexpr static std::size_t addrs = 0x182581850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"ExecuteViewpoint", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.InitializePerFrameMaterialParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>* (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::InitializePerFrameMaterialParameters)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x182582840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"InitializePerFrameMaterialParameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.UpdatePerFrameMaterialParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::ArrayW<::UnityEngine::Vector4>)>(&::WaveHarmonic::Crest::WaterRenderer::UpdatePerFrameMaterialParameters)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x182586da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"UpdatePerFrameMaterialParameters", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.WritePerFrameMaterialParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::WaveHarmonic::Crest::WaterRenderer::WritePerFrameMaterialParams)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1825871a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"WritePerFrameMaterialParams", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.LateUpdatePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::LateUpdatePosition)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x1825837c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"LateUpdatePosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.LateUpdateScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::LateUpdateScale)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x182583ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"LateUpdateScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.LateUpdateViewerHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::LateUpdateViewerHeight)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x182583ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"LateUpdateViewerHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::Destroy)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x182580760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"Destroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::Disable)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x1825809a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_FallBackRequired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_FallBackRequired)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182587be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_FallBackRequired", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_IsSeparateViewpointCameraLoop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_IsSeparateViewpointCameraLoop)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182587d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_IsSeparateViewpointCameraLoop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.set_IsSeparateViewpointCameraLoop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(bool)>(&::WaveHarmonic::Crest::WaterRenderer::set_IsSeparateViewpointCameraLoop)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182588260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_IsSeparateViewpointCameraLoop", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_IsMultipleViewpointMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_IsMultipleViewpointMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182587cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_IsMultipleViewpointMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_IsSingleViewpointMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_IsSingleViewpointMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182587d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_IsSingleViewpointMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_SupportsRecursiveRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_SupportsRecursiveRendering)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_SupportsRecursiveRendering", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_EditorMultipleViewpoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_EditorMultipleViewpoints)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_EditorMultipleViewpoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.get_MultipleViewpoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::get_MultipleViewpoints)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182587cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_MultipleViewpoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.ShouldExecuteSkippedFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::WaterRenderer::ShouldExecuteSkippedFrame)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x182586330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"ShouldExecuteSkippedFrame", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.ShouldExecuteQueries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::WaterRenderer::ShouldExecuteQueries)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1825862a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"ShouldExecuteQueries", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.UpdateSkippedCameras
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::UpdateSkippedCameras)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182587080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"UpdateSkippedCameras", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.LoadCameraData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::WaterRenderer::LoadCameraData)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x182584610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"LoadCameraData", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.StoreCameraData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::WaterRenderer::StoreCameraData)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x182586680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"StoreCameraData", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.RemoveCameraData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::WaterRenderer::RemoveCameraData)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x182585fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"RemoveCameraData", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.PruneCameraData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::PruneCameraData)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x182585e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"PruneCameraData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.GetViewerHeightAboveWater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Camera*, ::by_ref<float_t>)>(&::WaveHarmonic::Crest::WaterRenderer::GetViewerHeightAboveWater)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1825822a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetViewerHeightAboveWater", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.GetViewerDistanceToShoreline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Camera*, ::by_ref<float_t>)>(&::WaveHarmonic::Crest::WaterRenderer::GetViewerDistanceToShoreline)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1825821e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetViewerDistanceToShoreline", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.GetClosestViewpoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Vector3)>(&::WaveHarmonic::Crest::WaterRenderer::GetClosestViewpoint)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x182581f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetClosestViewpoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer.IsClosestViewpoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterRenderer::*)(::UnityEngine::Vector3)>(&::WaveHarmonic::Crest::WaterRenderer::IsClosestViewpoint)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x182583580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"IsClosestViewpoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterRenderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterRenderer::*)()>(&::WaveHarmonic::Crest::WaterRenderer::_ctor)> {
  constexpr static std::size_t size = 0x730;
  constexpr static std::size_t addrs = 0x182587320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Layer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Layer;
}
constexpr int32_t const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Layer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Layer;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__Layer(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Layer = value;
}
constexpr ::UnityW<::UnityEngine::Material>& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Material;
}
constexpr ::UnityW<::UnityEngine::Material> const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Material;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__Material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Material = value;
}
constexpr ::UnityW<::UnityEngine::Material>& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__VolumeMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VolumeMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__VolumeMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VolumeMaterial;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__VolumeMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VolumeMaterial = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ChunkTemplate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChunkTemplate;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ChunkTemplate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChunkTemplate;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__ChunkTemplate(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ChunkTemplate = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__CastShadows()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CastShadows;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__CastShadows() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CastShadows;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__CastShadows(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CastShadows = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__WaterBodyCulling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaterBodyCulling;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__WaterBodyCulling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaterBodyCulling;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__WaterBodyCulling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WaterBodyCulling = value;
}
constexpr int32_t& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__TimeSliceBoundsUpdateFrameCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeSliceBoundsUpdateFrameCount;
}
constexpr int32_t const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__TimeSliceBoundsUpdateFrameCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeSliceBoundsUpdateFrameCount;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__TimeSliceBoundsUpdateFrameCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TimeSliceBoundsUpdateFrameCount = value;
}
constexpr ::WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__SurfaceSelfIntersectionFixMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SurfaceSelfIntersectionFixMode;
}
constexpr ::WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__SurfaceSelfIntersectionFixMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SurfaceSelfIntersectionFixMode;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__SurfaceSelfIntersectionFixMode(::WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SurfaceSelfIntersectionFixMode = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__AllowRenderQueueSorting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllowRenderQueueSorting;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__AllowRenderQueueSorting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllowRenderQueueSorting;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__AllowRenderQueueSorting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AllowRenderQueueSorting = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__DoneMatrices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DoneMatrices;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__DoneMatrices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DoneMatrices;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__DoneMatrices(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DoneMatrices = value;
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ScreenSpaceShadowMapBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScreenSpaceShadowMapBuffer;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ScreenSpaceShadowMapBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScreenSpaceShadowMapBuffer;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__ScreenSpaceShadowMapBuffer(::UnityEngine::Rendering::CommandBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ScreenSpaceShadowMapBuffer = value;
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__UpdateColorDepthTexturesBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpdateColorDepthTexturesBuffer;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__UpdateColorDepthTexturesBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpdateColorDepthTexturesBuffer;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__UpdateColorDepthTexturesBuffer(::UnityEngine::Rendering::CommandBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UpdateColorDepthTexturesBuffer = value;
}
constexpr ::UnityEngine::Rendering::ScriptableRenderContext& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Context()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Context;
}
constexpr ::UnityEngine::Rendering::ScriptableRenderContext const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Context() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Context;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__Context(::UnityEngine::Rendering::ScriptableRenderContext  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Context = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__DoneCameraOpaqueTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DoneCameraOpaqueTexture;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__DoneCameraOpaqueTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DoneCameraOpaqueTexture;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__DoneCameraOpaqueTexture(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DoneCameraOpaqueTexture = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__CameraOpaqueTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraOpaqueTexture;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__CameraOpaqueTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraOpaqueTexture;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__CameraOpaqueTexture(::UnityEngine::Rendering::RTHandle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CameraOpaqueTexture = value;
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__CameraOpaqueTextureCommands()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraOpaqueTextureCommands;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__CameraOpaqueTextureCommands() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraOpaqueTextureCommands;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__CameraOpaqueTextureCommands(::UnityEngine::Rendering::CommandBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CameraOpaqueTextureCommands = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Camera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Camera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Camera;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__Camera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Camera = value;
}
constexpr ::UnityW<::WaveHarmonic::Crest::TimeProvider>& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__TimeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeProvider;
}
constexpr ::UnityW<::WaveHarmonic::Crest::TimeProvider> const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__TimeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeProvider;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__TimeProvider(::UnityW<::WaveHarmonic::Crest::TimeProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TimeProvider = value;
}
constexpr ::UnityW<::UnityEngine::WindZone>& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__WindZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WindZone;
}
constexpr ::UnityW<::UnityEngine::WindZone> const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__WindZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WindZone;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__WindZone(::UnityW<::UnityEngine::WindZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WindZone = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__OverrideWindZoneWindSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideWindZoneWindSpeed;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__OverrideWindZoneWindSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideWindZoneWindSpeed;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__OverrideWindZoneWindSpeed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OverrideWindZoneWindSpeed = value;
}
constexpr float_t& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__WindSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WindSpeed;
}
constexpr float_t const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__WindSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WindSpeed;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__WindSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WindSpeed = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__OverrideWindZoneWindDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideWindZoneWindDirection;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__OverrideWindZoneWindDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideWindZoneWindDirection;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__OverrideWindZoneWindDirection(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OverrideWindZoneWindDirection = value;
}
constexpr float_t& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__WindDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WindDirection;
}
constexpr float_t const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__WindDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WindDirection;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__WindDirection(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WindDirection = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__OverrideWindZoneWindTurbulence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideWindZoneWindTurbulence;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__OverrideWindZoneWindTurbulence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideWindZoneWindTurbulence;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__OverrideWindZoneWindTurbulence(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OverrideWindZoneWindTurbulence = value;
}
constexpr float_t& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__WindTurbulence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WindTurbulence;
}
constexpr float_t const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__WindTurbulence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WindTurbulence;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__WindTurbulence(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WindTurbulence = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__OverrideGravity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideGravity;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__OverrideGravity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideGravity;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__OverrideGravity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OverrideGravity = value;
}
constexpr float_t& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__GravityOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GravityOverride;
}
constexpr float_t const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__GravityOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GravityOverride;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__GravityOverride(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GravityOverride = value;
}
constexpr float_t& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__GravityMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GravityMultiplier;
}
constexpr float_t const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__GravityMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GravityMultiplier;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__GravityMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GravityMultiplier = value;
}
constexpr ::UnityW<::UnityEngine::Light>& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__PrimaryLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PrimaryLight;
}
constexpr ::UnityW<::UnityEngine::Light> const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__PrimaryLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PrimaryLight;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__PrimaryLight(::UnityW<::UnityEngine::Light>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PrimaryLight = value;
}
constexpr ::WaveHarmonic::Crest::WaterInjectionPoint& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__InjectionPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InjectionPoint;
}
constexpr ::WaveHarmonic::Crest::WaterInjectionPoint const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__InjectionPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InjectionPoint;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__InjectionPoint(::WaveHarmonic::Crest::WaterInjectionPoint  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InjectionPoint = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__WriteToColorTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WriteToColorTexture;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__WriteToColorTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WriteToColorTexture;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__WriteToColorTexture(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WriteToColorTexture = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__WriteToDepthTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WriteToDepthTexture;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__WriteToDepthTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WriteToDepthTexture;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__WriteToDepthTexture(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WriteToDepthTexture = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__WriteMotionVectors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WriteMotionVectors;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__WriteMotionVectors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WriteMotionVectors;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__WriteMotionVectors(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WriteMotionVectors = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__OverrideRenderHDR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideRenderHDR;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__OverrideRenderHDR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideRenderHDR;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__OverrideRenderHDR(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OverrideRenderHDR = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__RenderHDR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RenderHDR;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__RenderHDR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RenderHDR;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__RenderHDR(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RenderHDR = value;
}
constexpr ::WaveHarmonic::Crest::SurfaceRenderer*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Surface()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Surface;
}
constexpr ::WaveHarmonic::Crest::SurfaceRenderer* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Surface() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Surface;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__Surface(::WaveHarmonic::Crest::SurfaceRenderer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Surface = value;
}
constexpr ::UnityEngine::Vector2& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ScaleRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScaleRange;
}
constexpr ::UnityEngine::Vector2 const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ScaleRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScaleRange;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__ScaleRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ScaleRange = value;
}
constexpr float_t& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__DropDetailHeightBasedOnWaves()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DropDetailHeightBasedOnWaves;
}
constexpr float_t const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__DropDetailHeightBasedOnWaves() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DropDetailHeightBasedOnWaves;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__DropDetailHeightBasedOnWaves(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DropDetailHeightBasedOnWaves = value;
}
constexpr int32_t& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Slices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Slices;
}
constexpr int32_t const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Slices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Slices;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__Slices(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Slices = value;
}
constexpr int32_t& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Resolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Resolution;
}
constexpr int32_t const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Resolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Resolution;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__Resolution(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Resolution = value;
}
constexpr int32_t& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__GeometryDownSampleFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GeometryDownSampleFactor;
}
constexpr int32_t const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__GeometryDownSampleFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GeometryDownSampleFactor;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__GeometryDownSampleFactor(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GeometryDownSampleFactor = value;
}
constexpr float_t& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ExtentsSizeMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ExtentsSizeMultiplier;
}
constexpr float_t const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ExtentsSizeMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ExtentsSizeMultiplier;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__ExtentsSizeMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ExtentsSizeMultiplier = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__MultipleViewpoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MultipleViewpoints;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__MultipleViewpoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MultipleViewpoints;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__MultipleViewpoints(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MultipleViewpoints = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Viewpoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Viewpoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Viewpoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Viewpoint;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__Viewpoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Viewpoint = value;
}
constexpr ::WaveHarmonic::Crest::WaterCameraExclusion& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__CameraExclusions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraExclusions;
}
constexpr ::WaveHarmonic::Crest::WaterCameraExclusion const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__CameraExclusions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraExclusions;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__CameraExclusions(::WaveHarmonic::Crest::WaterCameraExclusion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CameraExclusions = value;
}
constexpr ::WaveHarmonic::Crest::WaterDataBackgroundMode& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__DataBackgroundMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DataBackgroundMode;
}
constexpr ::WaveHarmonic::Crest::WaterDataBackgroundMode const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__DataBackgroundMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DataBackgroundMode;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__DataBackgroundMode(::WaveHarmonic::Crest::WaterDataBackgroundMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DataBackgroundMode = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__CenterOfDetailDisplacementCorrection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CenterOfDetailDisplacementCorrection;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__CenterOfDetailDisplacementCorrection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CenterOfDetailDisplacementCorrection;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__CenterOfDetailDisplacementCorrection(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CenterOfDetailDisplacementCorrection = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__SampleTerrainHeightForScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleTerrainHeightForScale;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__SampleTerrainHeightForScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleTerrainHeightForScale;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__SampleTerrainHeightForScale(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SampleTerrainHeightForScale = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ForceScaleChangeSmoothing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForceScaleChangeSmoothing;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ForceScaleChangeSmoothing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForceScaleChangeSmoothing;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__ForceScaleChangeSmoothing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ForceScaleChangeSmoothing = value;
}
constexpr float_t& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__TeleportThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TeleportThreshold;
}
constexpr float_t const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__TeleportThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TeleportThreshold;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__TeleportThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TeleportThreshold = value;
}
constexpr ::WaveHarmonic::Crest::AnimatedWavesLod*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__AnimatedWavesLod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AnimatedWavesLod;
}
constexpr ::WaveHarmonic::Crest::AnimatedWavesLod* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__AnimatedWavesLod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AnimatedWavesLod;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__AnimatedWavesLod(::WaveHarmonic::Crest::AnimatedWavesLod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AnimatedWavesLod = value;
}
constexpr ::WaveHarmonic::Crest::DepthLod*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__DepthLod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DepthLod;
}
constexpr ::WaveHarmonic::Crest::DepthLod* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__DepthLod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DepthLod;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__DepthLod(::WaveHarmonic::Crest::DepthLod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DepthLod = value;
}
constexpr ::WaveHarmonic::Crest::LevelLod*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__LevelLod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LevelLod;
}
constexpr ::WaveHarmonic::Crest::LevelLod* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__LevelLod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LevelLod;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__LevelLod(::WaveHarmonic::Crest::LevelLod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LevelLod = value;
}
constexpr ::WaveHarmonic::Crest::FoamLod*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__FoamLod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FoamLod;
}
constexpr ::WaveHarmonic::Crest::FoamLod* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__FoamLod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FoamLod;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__FoamLod(::WaveHarmonic::Crest::FoamLod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FoamLod = value;
}
constexpr ::WaveHarmonic::Crest::DynamicWavesLod*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__DynamicWavesLod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DynamicWavesLod;
}
constexpr ::WaveHarmonic::Crest::DynamicWavesLod* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__DynamicWavesLod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DynamicWavesLod;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__DynamicWavesLod(::WaveHarmonic::Crest::DynamicWavesLod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DynamicWavesLod = value;
}
constexpr ::WaveHarmonic::Crest::FlowLod*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__FlowLod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FlowLod;
}
constexpr ::WaveHarmonic::Crest::FlowLod* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__FlowLod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FlowLod;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__FlowLod(::WaveHarmonic::Crest::FlowLod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FlowLod = value;
}
constexpr ::WaveHarmonic::Crest::ShadowLod*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ShadowLod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShadowLod;
}
constexpr ::WaveHarmonic::Crest::ShadowLod* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ShadowLod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShadowLod;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__ShadowLod(::WaveHarmonic::Crest::ShadowLod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShadowLod = value;
}
constexpr ::WaveHarmonic::Crest::AbsorptionLod*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__AbsorptionLod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AbsorptionLod;
}
constexpr ::WaveHarmonic::Crest::AbsorptionLod* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__AbsorptionLod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AbsorptionLod;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__AbsorptionLod(::WaveHarmonic::Crest::AbsorptionLod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AbsorptionLod = value;
}
constexpr ::WaveHarmonic::Crest::ScatteringLod*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ScatteringLod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScatteringLod;
}
constexpr ::WaveHarmonic::Crest::ScatteringLod* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ScatteringLod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScatteringLod;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__ScatteringLod(::WaveHarmonic::Crest::ScatteringLod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ScatteringLod = value;
}
constexpr ::WaveHarmonic::Crest::ClipLod*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ClipLod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClipLod;
}
constexpr ::WaveHarmonic::Crest::ClipLod* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ClipLod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClipLod;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__ClipLod(::WaveHarmonic::Crest::ClipLod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ClipLod = value;
}
constexpr ::WaveHarmonic::Crest::AlbedoLod*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__AlbedoLod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AlbedoLod;
}
constexpr ::WaveHarmonic::Crest::AlbedoLod* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__AlbedoLod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AlbedoLod;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__AlbedoLod(::WaveHarmonic::Crest::AlbedoLod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AlbedoLod = value;
}
constexpr ::WaveHarmonic::Crest::WaterReflections*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Reflections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Reflections;
}
constexpr ::WaveHarmonic::Crest::WaterReflections* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Reflections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Reflections;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__Reflections(::WaveHarmonic::Crest::WaterReflections*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Reflections = value;
}
constexpr ::WaveHarmonic::Crest::UnderwaterRenderer*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Underwater()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Underwater;
}
constexpr ::WaveHarmonic::Crest::UnderwaterRenderer* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Underwater() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Underwater;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__Underwater(::WaveHarmonic::Crest::UnderwaterRenderer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Underwater = value;
}
constexpr ::WaveHarmonic::Crest::Meniscus*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Meniscus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Meniscus;
}
constexpr ::WaveHarmonic::Crest::Meniscus* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Meniscus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Meniscus;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__Meniscus(::WaveHarmonic::Crest::Meniscus*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Meniscus = value;
}
constexpr ::WaveHarmonic::Crest::Portals::PortalRenderer*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Portals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Portals;
}
constexpr ::WaveHarmonic::Crest::Portals::PortalRenderer* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Portals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Portals;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__Portals(::WaveHarmonic::Crest::Portals::PortalRenderer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Portals = value;
}
constexpr ::WaveHarmonic::Crest::WaterBodyAffects& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__DefaultExcludes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DefaultExcludes;
}
constexpr ::WaveHarmonic::Crest::WaterBodyAffects const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__DefaultExcludes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DefaultExcludes;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__DefaultExcludes(::WaveHarmonic::Crest::WaterBodyAffects  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DefaultExcludes = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ShowWaterProxyPlane()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShowWaterProxyPlane;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ShowWaterProxyPlane() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShowWaterProxyPlane;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__ShowWaterProxyPlane(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShowWaterProxyPlane = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__FollowSceneCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FollowSceneCamera;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__FollowSceneCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FollowSceneCamera;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__FollowSceneCamera(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FollowSceneCamera = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__EditorMultipleViewpoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EditorMultipleViewpoints;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__EditorMultipleViewpoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EditorMultipleViewpoints;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__EditorMultipleViewpoints(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EditorMultipleViewpoints = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__HeightQueries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HeightQueries;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__HeightQueries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HeightQueries;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__HeightQueries(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HeightQueries = value;
}
constexpr ::WaveHarmonic::Crest::WaterRenderer_DebugFields*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Debug()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Debug;
}
constexpr ::WaveHarmonic::Crest::WaterRenderer_DebugFields* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Debug() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Debug;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__Debug(::WaveHarmonic::Crest::WaterRenderer_DebugFields*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Debug = value;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaterResources>& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Resources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Resources;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaterResources> const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Resources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Resources;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__Resources(::UnityW<::WaveHarmonic::Crest::WaterResources>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Resources = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__CurrentCamera_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentCamera_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Camera> const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__CurrentCamera_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentCamera_k__BackingField;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__CurrentCamera_k__BackingField(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentCamera_k__BackingField = value;
}
constexpr ::WaveHarmonic::Crest::SampleCollisionHelper*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__CenterOfDetailDisplacementCorrectionHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CenterOfDetailDisplacementCorrectionHelper;
}
constexpr ::WaveHarmonic::Crest::SampleCollisionHelper* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__CenterOfDetailDisplacementCorrectionHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CenterOfDetailDisplacementCorrectionHelper;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__CenterOfDetailDisplacementCorrectionHelper(::WaveHarmonic::Crest::SampleCollisionHelper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CenterOfDetailDisplacementCorrectionHelper = value;
}
constexpr float_t& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ViewerAltitudeLevelAlpha_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ViewerAltitudeLevelAlpha_k__BackingField;
}
constexpr float_t const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ViewerAltitudeLevelAlpha_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ViewerAltitudeLevelAlpha_k__BackingField;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__ViewerAltitudeLevelAlpha_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ViewerAltitudeLevelAlpha_k__BackingField = value;
}
constexpr float_t& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ViewerHeightAboveWater_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ViewerHeightAboveWater_k__BackingField;
}
constexpr float_t const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ViewerHeightAboveWater_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ViewerHeightAboveWater_k__BackingField;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__ViewerHeightAboveWater_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ViewerHeightAboveWater_k__BackingField = value;
}
constexpr float_t& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ViewpointHeightAboveWater_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ViewpointHeightAboveWater_k__BackingField;
}
constexpr float_t const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ViewpointHeightAboveWater_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ViewpointHeightAboveWater_k__BackingField;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__ViewpointHeightAboveWater_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ViewpointHeightAboveWater_k__BackingField = value;
}
constexpr float_t& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ViewerDistanceToShoreline_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ViewerDistanceToShoreline_k__BackingField;
}
constexpr float_t const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ViewerDistanceToShoreline_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ViewerDistanceToShoreline_k__BackingField;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__ViewerDistanceToShoreline_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ViewerDistanceToShoreline_k__BackingField = value;
}
constexpr float_t& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ViewpointHeightAboveWaterSmooth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ViewpointHeightAboveWaterSmooth;
}
constexpr float_t const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ViewpointHeightAboveWaterSmooth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ViewpointHeightAboveWaterSmooth;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__ViewpointHeightAboveWaterSmooth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ViewpointHeightAboveWaterSmooth = value;
}
constexpr ::WaveHarmonic::Crest::SampleCollisionHelper*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__SampleHeightHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleHeightHelper;
}
constexpr ::WaveHarmonic::Crest::SampleCollisionHelper* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__SampleHeightHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleHeightHelper;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__SampleHeightHelper(::WaveHarmonic::Crest::SampleCollisionHelper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SampleHeightHelper = value;
}
constexpr ::WaveHarmonic::Crest::SampleDepthHelper*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__SampleDepthHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleDepthHelper;
}
constexpr ::WaveHarmonic::Crest::SampleDepthHelper* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__SampleDepthHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleDepthHelper;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__SampleDepthHelper(::WaveHarmonic::Crest::SampleDepthHelper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SampleDepthHelper = value;
}
constexpr float_t& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ViewerHeightAboveWaterPerCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ViewerHeightAboveWaterPerCamera;
}
constexpr float_t const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ViewerHeightAboveWaterPerCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ViewerHeightAboveWaterPerCamera;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__ViewerHeightAboveWaterPerCamera(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ViewerHeightAboveWaterPerCamera = value;
}
constexpr ::WaveHarmonic::Crest::SampleCollisionHelper*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__SampleHeightHelperPerCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleHeightHelperPerCamera;
}
constexpr ::WaveHarmonic::Crest::SampleCollisionHelper* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__SampleHeightHelperPerCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleHeightHelperPerCamera;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__SampleHeightHelperPerCamera(::WaveHarmonic::Crest::SampleCollisionHelper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SampleHeightHelperPerCamera = value;
}
constexpr float_t& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__TeleportTimerForHeightQueries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TeleportTimerForHeightQueries;
}
constexpr float_t const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__TeleportTimerForHeightQueries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TeleportTimerForHeightQueries;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__TeleportTimerForHeightQueries(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TeleportTimerForHeightQueries = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__IsFirstFrameSinceEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsFirstFrameSinceEnabled;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__IsFirstFrameSinceEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsFirstFrameSinceEnabled;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__IsFirstFrameSinceEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsFirstFrameSinceEnabled = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__HasTeleportedThisFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasTeleportedThisFrame;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__HasTeleportedThisFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasTeleportedThisFrame;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__HasTeleportedThisFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HasTeleportedThisFrame = value;
}
constexpr ::UnityEngine::Vector3& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__OldViewpointPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OldViewpointPosition;
}
constexpr ::UnityEngine::Vector3 const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__OldViewpointPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OldViewpointPosition;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__OldViewpointPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OldViewpointPosition = value;
}
constexpr ::UnityEngine::Vector3& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Position_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Position_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Position_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Position_k__BackingField;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__Position_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Position_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Container()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Container;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Container() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Container;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__Container(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Container = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ProjectionMatrix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ProjectionMatrix;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ProjectionMatrix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ProjectionMatrix;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__ProjectionMatrix(::ArrayW<::UnityEngine::Matrix4x4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ProjectionMatrix = value;
}
constexpr ::WaveHarmonic::Crest::Utility::Internal::Stack_1<::WaveHarmonic::Crest::ITimeProvider*>*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__TimeProviders_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeProviders_k__BackingField;
}
constexpr ::WaveHarmonic::Crest::Utility::Internal::Stack_1<::WaveHarmonic::Crest::ITimeProvider*>* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__TimeProviders_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeProviders_k__BackingField;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__TimeProviders_k__BackingField(::WaveHarmonic::Crest::Utility::Internal::Stack_1<::WaveHarmonic::Crest::ITimeProvider*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TimeProviders_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Stack_1<::WaveHarmonic::Crest::WaterRenderer_ActiveModules>*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__RecursiveActiveModules()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RecursiveActiveModules;
}
constexpr ::System::Collections::Generic::Stack_1<::WaveHarmonic::Crest::WaterRenderer_ActiveModules>* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__RecursiveActiveModules() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RecursiveActiveModules;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__RecursiveActiveModules(::System::Collections::Generic::Stack_1<::WaveHarmonic::Crest::WaterRenderer_ActiveModules>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RecursiveActiveModules = value;
}
constexpr ::WaveHarmonic::Crest::WaterRenderer_ActiveModules& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ActiveModules()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActiveModules;
}
constexpr ::WaveHarmonic::Crest::WaterRenderer_ActiveModules const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ActiveModules() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActiveModules;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__ActiveModules(::WaveHarmonic::Crest::WaterRenderer_ActiveModules  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ActiveModules = value;
}
constexpr ::WaveHarmonic::Crest::RenderPipeline& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__SetUpFor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SetUpFor;
}
constexpr ::WaveHarmonic::Crest::RenderPipeline const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__SetUpFor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SetUpFor;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__SetUpFor(::WaveHarmonic::Crest::RenderPipeline  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SetUpFor = value;
}
constexpr ::WaveHarmonic::Crest::MaskRenderer*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Mask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Mask;
}
constexpr ::WaveHarmonic::Crest::MaskRenderer* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Mask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Mask;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__Mask(::WaveHarmonic::Crest::MaskRenderer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Mask = value;
}
constexpr ::ArrayW<::UnityEngine::Plane>& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__CameraFrustumPlanes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraFrustumPlanes;
}
constexpr ::ArrayW<::UnityEngine::Plane> const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__CameraFrustumPlanes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraFrustumPlanes;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__CameraFrustumPlanes(::ArrayW<::UnityEngine::Plane>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CameraFrustumPlanes = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__CameraFrustumPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraFrustumPoints;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__CameraFrustumPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraFrustumPoints;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__CameraFrustumPoints(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CameraFrustumPoints = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__DonePerCameraHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DonePerCameraHeight;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__DonePerCameraHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DonePerCameraHeight;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__DonePerCameraHeight(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DonePerCameraHeight = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__PerCameraHeightReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PerCameraHeightReady;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__PerCameraHeightReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PerCameraHeightReady;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__PerCameraHeightReady(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PerCameraHeightReady = value;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray>& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__BlackTextureArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BlackTextureArray;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray> const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__BlackTextureArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BlackTextureArray;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__BlackTextureArray(::UnityW<::UnityEngine::Texture2DArray>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BlackTextureArray = value;
}
constexpr ::System::Collections::Generic::List_1<::WaveHarmonic::Crest::Lod*>*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Simulations_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Simulations_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::WaveHarmonic::Crest::Lod*>* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Simulations_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Simulations_k__BackingField;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__Simulations_k__BackingField(::System::Collections::Generic::List_1<::WaveHarmonic::Crest::Lod*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Simulations_k__BackingField = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Initialized;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Initialized;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__Initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Initialized = value;
}
constexpr int32_t& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__GeneratedSettingsHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GeneratedSettingsHash;
}
constexpr int32_t const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__GeneratedSettingsHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GeneratedSettingsHash;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__GeneratedSettingsHash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GeneratedSettingsHash = value;
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__SimulationBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SimulationBuffer;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__SimulationBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SimulationBuffer;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__SimulationBuffer(::UnityEngine::Rendering::CommandBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SimulationBuffer = value;
}
constexpr ::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__CascadeData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CascadeData;
}
constexpr ::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__CascadeData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CascadeData;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__CascadeData(::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CascadeData = value;
}
constexpr ::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__CascadeData_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CascadeData_k__BackingField;
}
constexpr ::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__CascadeData_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CascadeData_k__BackingField;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__CascadeData_k__BackingField(::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CascadeData_k__BackingField = value;
}
constexpr float_t& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Scale_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Scale_k__BackingField;
}
constexpr float_t const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Scale_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Scale_k__BackingField;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__Scale_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Scale_k__BackingField = value;
}
constexpr int32_t& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ScaleDifferencePower2_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScaleDifferencePower2_k__BackingField;
}
constexpr int32_t const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__ScaleDifferencePower2_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScaleDifferencePower2_k__BackingField;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__ScaleDifferencePower2_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ScaleDifferencePower2_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Cameras()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Cameras;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__Cameras() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Cameras;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__Cameras(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Cameras = value;
}
constexpr ::WaveHarmonic::Crest::WaterRenderer_PerCameraData*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__CurrentPerCameraData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentPerCameraData;
}
constexpr ::WaveHarmonic::Crest::WaterRenderer_PerCameraData* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__CurrentPerCameraData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentPerCameraData;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__CurrentPerCameraData(::WaveHarmonic::Crest::WaterRenderer_PerCameraData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentPerCameraData = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::WaveHarmonic::Crest::WaterRenderer_PerCameraData*>*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__PerCameraData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PerCameraData;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::WaveHarmonic::Crest::WaterRenderer_PerCameraData*>* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__PerCameraData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PerCameraData;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__PerCameraData(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::WaveHarmonic::Crest::WaterRenderer_PerCameraData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PerCameraData = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,int32_t>*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__PerCameraLastFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PerCameraLastFrame;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,int32_t>* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__PerCameraLastFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PerCameraLastFrame;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__PerCameraLastFrame(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PerCameraLastFrame = value;
}
constexpr ::UnityEngine::Coroutine*& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__EndOfFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EndOfFrame;
}
constexpr ::UnityEngine::Coroutine* const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__EndOfFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EndOfFrame;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__EndOfFrame(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EndOfFrame = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__IsEndOfFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsEndOfFrame;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__IsEndOfFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsEndOfFrame;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__IsEndOfFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsEndOfFrame = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__RenderShadows()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RenderShadows;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__RenderShadows() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RenderShadows;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__RenderShadows(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RenderShadows = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__HasAnyViewpointExecuted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasAnyViewpointExecuted;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__HasAnyViewpointExecuted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasAnyViewpointExecuted;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__HasAnyViewpointExecuted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HasAnyViewpointExecuted = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__HasAnyViewerRendered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasAnyViewerRendered;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__HasAnyViewerRendered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasAnyViewerRendered;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__HasAnyViewerRendered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HasAnyViewerRendered = value;
}
constexpr bool& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__IsSeparateViewpointCameraLoop_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSeparateViewpointCameraLoop_k__BackingField;
}
constexpr bool const& WaveHarmonic::Crest::WaterRenderer::__cordl_internal_get__IsSeparateViewpointCameraLoop_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSeparateViewpointCameraLoop_k__BackingField;
}
constexpr void WaveHarmonic::Crest::WaterRenderer::__cordl_internal_set__IsSeparateViewpointCameraLoop_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsSeparateViewpointCameraLoop_k__BackingField = value;
}
inline void WaveHarmonic::Crest::WaterRenderer::setStaticF_s_RunUpdateMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_RunUpdateMarker", ::WaveHarmonic::Crest::WaterRenderer*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker WaveHarmonic::Crest::WaterRenderer::getStaticF_s_RunUpdateMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_RunUpdateMarker", ::WaveHarmonic::Crest::WaterRenderer*>();
}
inline void WaveHarmonic::Crest::WaterRenderer::setStaticF_s_OnBeforeBuildCommandBuffer(::System::Action_2<::UnityW<::WaveHarmonic::Crest::WaterRenderer>,::UnityW<::UnityEngine::Camera>>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityW<::WaveHarmonic::Crest::WaterRenderer>,::UnityW<::UnityEngine::Camera>>*, "s_OnBeforeBuildCommandBuffer", ::WaveHarmonic::Crest::WaterRenderer*>(std::forward<::System::Action_2<::UnityW<::WaveHarmonic::Crest::WaterRenderer>,::UnityW<::UnityEngine::Camera>>*>(value));
}
inline ::System::Action_2<::UnityW<::WaveHarmonic::Crest::WaterRenderer>,::UnityW<::UnityEngine::Camera>>* WaveHarmonic::Crest::WaterRenderer::getStaticF_s_OnBeforeBuildCommandBuffer()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::WaveHarmonic::Crest::WaterRenderer>,::UnityW<::UnityEngine::Camera>>*, "s_OnBeforeBuildCommandBuffer", ::WaveHarmonic::Crest::WaterRenderer*>();
}
inline void WaveHarmonic::Crest::WaterRenderer::setStaticF_s_OnLoadCameraData(::System::Action_1<::UnityW<::UnityEngine::Camera>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::UnityEngine::Camera>>*, "s_OnLoadCameraData", ::WaveHarmonic::Crest::WaterRenderer*>(std::forward<::System::Action_1<::UnityW<::UnityEngine::Camera>>*>(value));
}
inline ::System::Action_1<::UnityW<::UnityEngine::Camera>>* WaveHarmonic::Crest::WaterRenderer::getStaticF_s_OnLoadCameraData()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::UnityEngine::Camera>>*, "s_OnLoadCameraData", ::WaveHarmonic::Crest::WaterRenderer*>();
}
inline void WaveHarmonic::Crest::WaterRenderer::setStaticF_s_OnStoreCameraData(::System::Action_1<::UnityW<::UnityEngine::Camera>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::UnityEngine::Camera>>*, "s_OnStoreCameraData", ::WaveHarmonic::Crest::WaterRenderer*>(std::forward<::System::Action_1<::UnityW<::UnityEngine::Camera>>*>(value));
}
inline ::System::Action_1<::UnityW<::UnityEngine::Camera>>* WaveHarmonic::Crest::WaterRenderer::getStaticF_s_OnStoreCameraData()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::UnityEngine::Camera>>*, "s_OnStoreCameraData", ::WaveHarmonic::Crest::WaterRenderer*>();
}
inline void WaveHarmonic::Crest::WaterRenderer::setStaticF_s_OnRemoveCameraData(::System::Action_1<::UnityW<::UnityEngine::Camera>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::UnityEngine::Camera>>*, "s_OnRemoveCameraData", ::WaveHarmonic::Crest::WaterRenderer*>(std::forward<::System::Action_1<::UnityW<::UnityEngine::Camera>>*>(value));
}
inline ::System::Action_1<::UnityW<::UnityEngine::Camera>>* WaveHarmonic::Crest::WaterRenderer::getStaticF_s_OnRemoveCameraData()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::UnityEngine::Camera>>*, "s_OnRemoveCameraData", ::WaveHarmonic::Crest::WaterRenderer*>();
}
inline int32_t WaveHarmonic::Crest::WaterRenderer::GetLayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetLayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::SetLayer(int32_t  previous, int32_t  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"SetLayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline ::UnityW<::UnityEngine::Material> WaveHarmonic::Crest::WaterRenderer::GetMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::SetMaterial(::UnityEngine::Material*  previous, ::UnityEngine::Material*  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"SetMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline ::UnityW<::UnityEngine::Material> WaveHarmonic::Crest::WaterRenderer::GetVolumeMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetVolumeMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::SetVolumeMaterial(::UnityEngine::Material*  previous, ::UnityEngine::Material*  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"SetVolumeMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline bool WaveHarmonic::Crest::WaterRenderer::GetCastShadows()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetCastShadows", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::SetCastShadows(bool  previous, bool  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"SetCastShadows", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline bool WaveHarmonic::Crest::WaterRenderer::GetWaterBodyCulling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetWaterBodyCulling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::SetWaterBodyCulling(bool  previous, bool  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"SetWaterBodyCulling", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline int32_t WaveHarmonic::Crest::WaterRenderer::GetTimeSliceBoundsUpdateFrameCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetTimeSliceBoundsUpdateFrameCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::SetTimeSliceBoundsUpdateFrameCount(int32_t  previous, int32_t  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"SetTimeSliceBoundsUpdateFrameCount", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline bool WaveHarmonic::Crest::WaterRenderer::GetAllowRenderQueueSorting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetAllowRenderQueueSorting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::SetAllowRenderQueueSorting(bool  previous, bool  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"SetAllowRenderQueueSorting", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline ::WaveHarmonic::Crest::AbsorptionLod* WaveHarmonic::Crest::WaterRenderer::get_AbsorptionLod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_AbsorptionLod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::AbsorptionLod*>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::AlbedoLod* WaveHarmonic::Crest::WaterRenderer::get_AlbedoLod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_AlbedoLod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::AlbedoLod*>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WaterRenderer::get_AllowRenderQueueSorting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_AllowRenderQueueSorting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_AllowRenderQueueSorting(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_AllowRenderQueueSorting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::AnimatedWavesLod* WaveHarmonic::Crest::WaterRenderer::get_AnimatedWavesLod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_AnimatedWavesLod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::AnimatedWavesLod*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> WaveHarmonic::Crest::WaterRenderer::get_Viewer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_Viewer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_Viewer(::UnityEngine::Camera*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_Viewer", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::WaterCameraExclusion WaveHarmonic::Crest::WaterRenderer::get_CameraExclusions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_CameraExclusions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::WaterCameraExclusion>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_CameraExclusions(::WaveHarmonic::Crest::WaterCameraExclusion  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_CameraExclusions", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterCameraExclusion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::WaterRenderer::get_CastShadows()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_CastShadows", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_CastShadows(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_CastShadows", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::WaterRenderer::get_CenterOfDetailDisplacementCorrection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_CenterOfDetailDisplacementCorrection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_CenterOfDetailDisplacementCorrection(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_CenterOfDetailDisplacementCorrection", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::ClipLod* WaveHarmonic::Crest::WaterRenderer::get_ClipLod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_ClipLod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::ClipLod*>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::WaterDataBackgroundMode WaveHarmonic::Crest::WaterRenderer::get_DataBackgroundMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_DataBackgroundMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::WaterDataBackgroundMode>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_DataBackgroundMode(::WaveHarmonic::Crest::WaterDataBackgroundMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_DataBackgroundMode", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterDataBackgroundMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::WaterBodyAffects WaveHarmonic::Crest::WaterRenderer::get_DefaultExcludes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_DefaultExcludes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::WaterBodyAffects>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_DefaultExcludes(::WaveHarmonic::Crest::WaterBodyAffects  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_DefaultExcludes", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterBodyAffects>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::DepthLod* WaveHarmonic::Crest::WaterRenderer::get_DepthLod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_DepthLod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::DepthLod*>(this, ___internal_method);
}
inline float_t WaveHarmonic::Crest::WaterRenderer::get_DropDetailHeightBasedOnWaves()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_DropDetailHeightBasedOnWaves", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_DropDetailHeightBasedOnWaves(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_DropDetailHeightBasedOnWaves", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::DynamicWavesLod* WaveHarmonic::Crest::WaterRenderer::get_DynamicWavesLod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_DynamicWavesLod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::DynamicWavesLod*>(this, ___internal_method);
}
inline float_t WaveHarmonic::Crest::WaterRenderer::get_ExtentsSizeMultiplier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_ExtentsSizeMultiplier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_ExtentsSizeMultiplier(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_ExtentsSizeMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::FlowLod* WaveHarmonic::Crest::WaterRenderer::get_FlowLod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_FlowLod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::FlowLod*>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::FoamLod* WaveHarmonic::Crest::WaterRenderer::get_FoamLod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_FoamLod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::FoamLod*>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WaterRenderer::get_ForceScaleChangeSmoothing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_ForceScaleChangeSmoothing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_ForceScaleChangeSmoothing(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_ForceScaleChangeSmoothing", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t WaveHarmonic::Crest::WaterRenderer::get_GeometryDownSampleFactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_GeometryDownSampleFactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_GeometryDownSampleFactor(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_GeometryDownSampleFactor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::WaterRenderer::get_GravityMultiplier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_GravityMultiplier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_GravityMultiplier(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_GravityMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::WaterRenderer::get_GravityOverride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_GravityOverride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_GravityOverride(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_GravityOverride", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::WaterInjectionPoint WaveHarmonic::Crest::WaterRenderer::get_InjectionPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_InjectionPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::WaterInjectionPoint>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_InjectionPoint(::WaveHarmonic::Crest::WaterInjectionPoint  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_InjectionPoint", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterInjectionPoint>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t WaveHarmonic::Crest::WaterRenderer::get_Layer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_Layer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_Layer(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_Layer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::LevelLod* WaveHarmonic::Crest::WaterRenderer::get_LevelLod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_LevelLod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::LevelLod*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> WaveHarmonic::Crest::WaterRenderer::get_Material()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_Material", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_Material(::UnityEngine::Material*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_Material", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::Meniscus* WaveHarmonic::Crest::WaterRenderer::get_Meniscus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_Meniscus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::Meniscus*>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WaterRenderer::get_OverrideGravity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_OverrideGravity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_OverrideGravity(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_OverrideGravity", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::WaterRenderer::get_OverrideRenderHDR()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_OverrideRenderHDR", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_OverrideRenderHDR(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_OverrideRenderHDR", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::WaterRenderer::get_OverrideWindZoneWindDirection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_OverrideWindZoneWindDirection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_OverrideWindZoneWindDirection(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_OverrideWindZoneWindDirection", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::WaterRenderer::get_OverrideWindZoneWindSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_OverrideWindZoneWindSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_OverrideWindZoneWindSpeed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_OverrideWindZoneWindSpeed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::WaterRenderer::get_OverrideWindZoneWindTurbulence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_OverrideWindZoneWindTurbulence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_OverrideWindZoneWindTurbulence(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_OverrideWindZoneWindTurbulence", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::Portals::PortalRenderer* WaveHarmonic::Crest::WaterRenderer::get_Portals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_Portals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::Portals::PortalRenderer*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Light> WaveHarmonic::Crest::WaterRenderer::get_PrimaryLight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_PrimaryLight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Light>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_PrimaryLight(::UnityEngine::Light*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_PrimaryLight", {}, {::i2c::type_of<::UnityEngine::Light*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::WaterReflections* WaveHarmonic::Crest::WaterRenderer::get_Reflections()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_Reflections", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::WaterReflections*>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WaterRenderer::get_RenderHDR()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_RenderHDR", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_RenderHDR(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_RenderHDR", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t WaveHarmonic::Crest::WaterRenderer::get_LodResolution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_LodResolution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_LodResolution(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_LodResolution", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::WaterRenderer::get_SampleTerrainHeightForScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_SampleTerrainHeightForScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_SampleTerrainHeightForScale(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_SampleTerrainHeightForScale", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 WaveHarmonic::Crest::WaterRenderer::get_ScaleRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_ScaleRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_ScaleRange(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_ScaleRange", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::ScatteringLod* WaveHarmonic::Crest::WaterRenderer::get_ScatteringLod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_ScatteringLod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::ScatteringLod*>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::ShadowLod* WaveHarmonic::Crest::WaterRenderer::get_ShadowLod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_ShadowLod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::ShadowLod*>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::WaterRenderer::get_LodLevels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_LodLevels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_LodLevels(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_LodLevels", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::SurfaceRenderer* WaveHarmonic::Crest::WaterRenderer::get_Surface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_Surface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::SurfaceRenderer*>(this, ___internal_method);
}
inline float_t WaveHarmonic::Crest::WaterRenderer::get_TeleportThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_TeleportThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_TeleportThreshold(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_TeleportThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t WaveHarmonic::Crest::WaterRenderer::get_TimeSliceBoundsUpdateFrameCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_TimeSliceBoundsUpdateFrameCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_TimeSliceBoundsUpdateFrameCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_TimeSliceBoundsUpdateFrameCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::UnderwaterRenderer* WaveHarmonic::Crest::WaterRenderer::get_Underwater()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_Underwater", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::UnderwaterRenderer*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> WaveHarmonic::Crest::WaterRenderer::get_Viewpoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_Viewpoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_Viewpoint(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_Viewpoint", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> WaveHarmonic::Crest::WaterRenderer::get_VolumeMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_VolumeMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_VolumeMaterial(::UnityEngine::Material*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_VolumeMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::WaterRenderer::get_WaterBodyCulling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_WaterBodyCulling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_WaterBodyCulling(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_WaterBodyCulling", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::WaterRenderer::get_WindDirection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_WindDirection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_WindDirection(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_WindDirection", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::WaterRenderer::get_WindSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_WindSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_WindSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_WindSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::WaterRenderer::get_WindTurbulence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_WindTurbulence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_WindTurbulence(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_WindTurbulence", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::WindZone> WaveHarmonic::Crest::WaterRenderer::get_WindZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_WindZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::WindZone>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_WindZone(::UnityEngine::WindZone*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_WindZone", {}, {::i2c::type_of<::UnityEngine::WindZone*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::WaterRenderer::get_WriteMotionVectors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_WriteMotionVectors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_WriteMotionVectors(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_WriteMotionVectors", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::WaterRenderer::get_WriteToColorTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_WriteToColorTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_WriteToColorTexture(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_WriteToColorTexture", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::WaterRenderer::get_WriteToDepthTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_WriteToDepthTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_WriteToDepthTexture(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_WriteToDepthTexture", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::WaterRenderer::HasWater(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"HasWater", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position);
}
inline void WaveHarmonic::Crest::WaterRenderer::SetExtentsSizeMultiplier(float_t  previous, float_t  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"SetExtentsSizeMultiplier", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline void WaveHarmonic::Crest::WaterRenderer::SetGeometryDownSampleFactor(int32_t  previous, int32_t  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"SetGeometryDownSampleFactor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline ::WaveHarmonic::Crest::BIRP_Rendering_FrameBufferFormatOverride WaveHarmonic::Crest::WaterRenderer::get_FrameBufferFormatOverride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_FrameBufferFormatOverride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::BIRP_Rendering_FrameBufferFormatOverride>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::InitializeOnLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"InitializeOnLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::UpdateMatrices(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"UpdateMatrices", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::WaterRenderer::OnBeginCameraRenderingLegacy(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"OnBeginCameraRenderingLegacy", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::WaterRenderer::OnEndCameraRenderingLegacy(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"OnEndCameraRenderingLegacy", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::WaterRenderer::OnLegacyCopyPass(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"OnLegacyCopyPass", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::WaterRenderer::OnBeginCameraRendering(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"OnBeginCameraRendering", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::WaterRenderer::OnEndCameraRendering(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"OnEndCameraRendering", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::WaterRenderer::UpdateCameraOpaqueTexture(::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::CommandBuffer*  commands)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"UpdateCameraOpaqueTexture", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera, commands);
}
inline void WaveHarmonic::Crest::WaterRenderer::OnBeginCameraOpaqueTexture(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"OnBeginCameraOpaqueTexture", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::WaterRenderer::OnEndCameraOpaqueTexture(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"OnEndCameraOpaqueTexture", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::WaterRenderer::OnLegacyDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"OnLegacyDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::ExecuteLighting(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"ExecuteLighting", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, camera);
}
inline int32_t WaveHarmonic::Crest::WaterRenderer::get_Version()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::OnMigrate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> WaveHarmonic::Crest::WaterRenderer::GetViewpoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetViewpoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> WaveHarmonic::Crest::WaterRenderer::GetViewer(bool  includeSceneCamera, bool  initial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetViewer", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method, includeSceneCamera, initial);
}
inline ::UnityW<::UnityEngine::Camera> WaveHarmonic::Crest::WaterRenderer::get_CurrentCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_CurrentCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_CurrentCamera(::UnityEngine::Camera*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_CurrentCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::WaterRenderer::get_ViewerAltitudeLevelAlpha()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_ViewerAltitudeLevelAlpha", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_ViewerAltitudeLevelAlpha(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_ViewerAltitudeLevelAlpha", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::WaterRenderer::get_ViewerHeightAboveWater()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_ViewerHeightAboveWater", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_ViewerHeightAboveWater(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_ViewerHeightAboveWater", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::WaterRenderer::get_ViewpointHeightAboveWater()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_ViewpointHeightAboveWater", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_ViewpointHeightAboveWater(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_ViewpointHeightAboveWater", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::WaterRenderer::get_ViewerDistanceToShoreline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_ViewerDistanceToShoreline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_ViewerDistanceToShoreline(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_ViewerDistanceToShoreline", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 WaveHarmonic::Crest::WaterRenderer::get_TeleportOriginThisFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_TeleportOriginThisFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline float_t WaveHarmonic::Crest::WaterRenderer::get_WindSpeedKPH()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_WindSpeedKPH", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WaterRenderer::get_WindSpeedOverriden()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_WindSpeedOverriden", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WaterRenderer::get_WindDirectionOverriden()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_WindDirectionOverriden", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WaterRenderer::get_WindTurbulenceOverriden()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_WindTurbulenceOverriden", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t WaveHarmonic::Crest::WaterRenderer::GetWindSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetWindSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t WaveHarmonic::Crest::WaterRenderer::GetWindDirection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetWindDirection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t WaveHarmonic::Crest::WaterRenderer::GetWindTurbulence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetWindTurbulence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 WaveHarmonic::Crest::WaterRenderer::get_Position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_Position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_Position(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_Position", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> WaveHarmonic::Crest::WaterRenderer::get_Container()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_Container", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline float_t WaveHarmonic::Crest::WaterRenderer::get_SeaLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_SeaLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 WaveHarmonic::Crest::WaterRenderer::GetProjectionMatrix(int32_t  slice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetProjectionMatrix", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method, slice);
}
inline ::UnityEngine::Matrix4x4 WaveHarmonic::Crest::WaterRenderer::CalculateViewMatrixFromSnappedPositionRHS(::UnityEngine::Vector3  snapped)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"CalculateViewMatrixFromSnappedPositionRHS", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, snapped);
}
inline ::WaveHarmonic::Crest::Utility::Internal::Stack_1<::WaveHarmonic::Crest::ITimeProvider*>* WaveHarmonic::Crest::WaterRenderer::get_TimeProviders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_TimeProviders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::Utility::Internal::Stack_1<::WaveHarmonic::Crest::ITimeProvider*>*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_TimeProviders(::WaveHarmonic::Crest::Utility::Internal::Stack_1<::WaveHarmonic::Crest::ITimeProvider*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_TimeProviders", {}, {::i2c::type_of<::WaveHarmonic::Crest::Utility::Internal::Stack_1<::WaveHarmonic::Crest::ITimeProvider*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::ITimeProvider* WaveHarmonic::Crest::WaterRenderer::get_TimeProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_TimeProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::ITimeProvider*>(this, ___internal_method);
}
inline float_t WaveHarmonic::Crest::WaterRenderer::get_CurrentTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_CurrentTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t WaveHarmonic::Crest::WaterRenderer::get_DeltaTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_DeltaTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Light> WaveHarmonic::Crest::WaterRenderer::GetPrimaryLight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetPrimaryLight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Light>>(this, ___internal_method);
}
inline float_t WaveHarmonic::Crest::WaterRenderer::get_Gravity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_Gravity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WaterRenderer::get_RenderBeforeTransparency()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_RenderBeforeTransparency", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2DArray> WaveHarmonic::Crest::WaterRenderer::get_BlackTextureArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_BlackTextureArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2DArray>>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WaterRenderer::GetWriteMotionVectors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetWriteMotionVectors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WaterRenderer::GetWriteToColorTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetWriteToColorTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WaterRenderer::GetWriteToDepthTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetWriteToDepthTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WaterRenderer::ShouldRender(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"ShouldRender", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, camera);
}
inline bool WaveHarmonic::Crest::WaterRenderer::ShouldRender(::UnityEngine::Camera*  camera, int32_t  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"ShouldRender", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, camera, layer);
}
inline bool WaveHarmonic::Crest::WaterRenderer::ShouldRender(::UnityEngine::Camera*  camera, ::WaveHarmonic::Crest::WaterCameraExclusion  exclusion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"ShouldRender", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::WaveHarmonic::Crest::WaterCameraExclusion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, camera, exclusion);
}
inline bool WaveHarmonic::Crest::WaterRenderer::ShouldRender(::UnityEngine::Camera*  camera, int32_t  layer, ::WaveHarmonic::Crest::WaterCameraExclusion  exclusion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"ShouldRender", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::WaveHarmonic::Crest::WaterCameraExclusion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, camera, layer, exclusion);
}
inline bool WaveHarmonic::Crest::WaterRenderer::ShouldExecuteViewpoint(::UnityEngine::Camera*  camera, int32_t  layer, ::WaveHarmonic::Crest::WaterCameraExclusion  exclusion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"ShouldExecuteViewpoint", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::WaveHarmonic::Crest::WaterCameraExclusion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, camera, layer, exclusion);
}
inline ::UnityEngine::Vector4 WaveHarmonic::Crest::WaterRenderer::CalculateAbsorptionValueFromColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"CalculateAbsorptionValueFromColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, color);
}
inline ::UnityEngine::Vector4 WaveHarmonic::Crest::WaterRenderer::UpdateAbsorptionFromColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"UpdateAbsorptionFromColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, color);
}
inline void WaveHarmonic::Crest::WaterRenderer::UpdateAbsorptionFromColor(::UnityEngine::Material*  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"UpdateAbsorptionFromColor", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material);
}
inline ::System::Collections::Generic::List_1<::WaveHarmonic::Crest::Lod*>* WaveHarmonic::Crest::WaterRenderer::get_Simulations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_Simulations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::WaveHarmonic::Crest::Lod*>*>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WaterRenderer::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WaterRenderer::get_RunningWithoutGraphics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_RunningWithoutGraphics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool WaveHarmonic::Crest::WaterRenderer::get_IsRunningWithoutGraphics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_IsRunningWithoutGraphics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WaterRenderer::get_RunningHeadless()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_RunningHeadless", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::WaterRenderer::get_FrameCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_FrameCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::CommandBuffer* WaveHarmonic::Crest::WaterRenderer::get_SimulationBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_SimulationBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CommandBuffer*>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>* WaveHarmonic::Crest::WaterRenderer::get_CascadeData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_CascadeData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_CascadeData(::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_CascadeData", {}, {::i2c::type_of<::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t WaveHarmonic::Crest::WaterRenderer::get_BufferSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_BufferSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t WaveHarmonic::Crest::WaterRenderer::MaximumWavelength(int32_t  slice, int32_t  resolution)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"MaximumWavelength", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, slice, resolution);
}
inline float_t WaveHarmonic::Crest::WaterRenderer::MaximumWavelength(float_t  scale, int32_t  resolution)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"MaximumWavelength", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, scale, resolution);
}
inline float_t WaveHarmonic::Crest::WaterRenderer::get_Scale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_Scale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_Scale(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_Scale", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::WaterRenderer::CalcLodScale(float_t  slice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"CalcLodScale", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, slice);
}
inline float_t WaveHarmonic::Crest::WaterRenderer::CalcGridSize(int32_t  slice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"CalcGridSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, slice);
}
inline bool WaveHarmonic::Crest::WaterRenderer::get_ScaleCouldIncrease()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_ScaleCouldIncrease", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WaterRenderer::get_ScaleCouldDecrease()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_ScaleCouldDecrease", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::WaterRenderer::get_ScaleDifferencePower2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_ScaleDifferencePower2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_ScaleDifferencePower2(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_ScaleDifferencePower2", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::ICollisionProvider* WaveHarmonic::Crest::WaterRenderer::get_CollisionProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_CollisionProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::ICollisionProvider*>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::IFlowProvider* WaveHarmonic::Crest::WaterRenderer::get_FlowProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_FlowProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::IFlowProvider*>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::IDepthProvider* WaveHarmonic::Crest::WaterRenderer::get_DepthProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_DepthProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::IDepthProvider*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::Enable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::OnBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"OnBeginCameraRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, camera);
}
inline void WaveHarmonic::Crest::WaterRenderer::UpdateRenderPipelineTextures(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"UpdateRenderPipelineTextures", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, camera);
}
inline void WaveHarmonic::Crest::WaterRenderer::OnEndCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"OnEndCameraRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, camera);
}
inline void WaveHarmonic::Crest::WaterRenderer::UpdatePerCameraHeight(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"UpdatePerCameraHeight", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline bool WaveHarmonic::Crest::WaterRenderer::VerifyRequirements()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"VerifyRequirements", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::WaterRenderer::CalculateSettingsHash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"CalculateSettingsHash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::LateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::ExecuteViewpoint(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"ExecuteViewpoint", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline ::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>* WaveHarmonic::Crest::WaterRenderer::InitializePerFrameMaterialParameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"InitializePerFrameMaterialParameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::UpdatePerFrameMaterialParameters(::ArrayW<::UnityEngine::Vector4>  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"UpdatePerFrameMaterialParameters", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, current);
}
inline void WaveHarmonic::Crest::WaterRenderer::WritePerFrameMaterialParams(::UnityEngine::Rendering::CommandBuffer*  commands)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"WritePerFrameMaterialParams", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, commands);
}
inline void WaveHarmonic::Crest::WaterRenderer::LateUpdatePosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"LateUpdatePosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::LateUpdateScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"LateUpdateScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::LateUpdateViewerHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"LateUpdateViewerHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::Destroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"Destroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::Disable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WaterRenderer::get_FallBackRequired()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_FallBackRequired", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WaterRenderer::get_IsSeparateViewpointCameraLoop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_IsSeparateViewpointCameraLoop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::set_IsSeparateViewpointCameraLoop(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"set_IsSeparateViewpointCameraLoop", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::WaterRenderer::get_IsMultipleViewpointMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_IsMultipleViewpointMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WaterRenderer::get_IsSingleViewpointMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_IsSingleViewpointMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WaterRenderer::get_SupportsRecursiveRendering()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_SupportsRecursiveRendering", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WaterRenderer::get_EditorMultipleViewpoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_EditorMultipleViewpoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WaterRenderer::get_MultipleViewpoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"get_MultipleViewpoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WaterRenderer::ShouldExecuteSkippedFrame(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"ShouldExecuteSkippedFrame", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, camera);
}
inline bool WaveHarmonic::Crest::WaterRenderer::ShouldExecuteQueries(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"ShouldExecuteQueries", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, camera);
}
inline ::System::Collections::IEnumerator* WaveHarmonic::Crest::WaterRenderer::UpdateSkippedCameras()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"UpdateSkippedCameras", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterRenderer::LoadCameraData(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"LoadCameraData", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::WaterRenderer::StoreCameraData(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"StoreCameraData", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::WaterRenderer::RemoveCameraData(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"RemoveCameraData", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::WaterRenderer::PruneCameraData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"PruneCameraData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WaterRenderer::GetViewerHeightAboveWater(::UnityEngine::Camera*  camera, ::by_ref<float_t>  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetViewerHeightAboveWater", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, camera, height);
}
inline bool WaveHarmonic::Crest::WaterRenderer::GetViewerDistanceToShoreline(::UnityEngine::Camera*  camera, ::by_ref<float_t>  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetViewerDistanceToShoreline", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, camera, distance);
}
inline ::UnityW<::UnityEngine::Transform> WaveHarmonic::Crest::WaterRenderer::GetClosestViewpoint(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"GetClosestViewpoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, position);
}
inline bool WaveHarmonic::Crest::WaterRenderer::IsClosestViewpoint(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {"IsClosestViewpoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position);
}
inline void WaveHarmonic::Crest::WaterRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterRenderer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::WaterRenderer* WaveHarmonic::Crest::WaterRenderer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::WaterRenderer*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaterRenderer::WaterRenderer()   {
}
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent  WaveHarmonic::Crest::WaterRenderer::k_WaterRenderPassEvent{static_cast<int32_t>(0x1c2)};
