#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/SurfaceRenderer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_impl.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Mesh_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__Versioned_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterCameraExclusion_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterMeshType_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__SurfaceRenderer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "WaveHarmonic/Crest/zzzz__RenderGraphHelper_def.hpp"
#include "WaveHarmonic/Crest/zzzz__SurfaceRenderer_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterCameraExclusion_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterChunkRenderer_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
inline void WaveHarmonic::Crest::ShaderIDs_SurfaceRenderer_Unity::setStaticF_s_BuiltInSurface(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_BuiltInSurface", ::WaveHarmonic::Crest::ShaderIDs_SurfaceRenderer_Unity*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::ShaderIDs_SurfaceRenderer_Unity::getStaticF_s_BuiltInSurface()  {
return ::cordl_internals::getStaticField<int32_t, "s_BuiltInSurface", ::WaveHarmonic::Crest::ShaderIDs_SurfaceRenderer_Unity*>();
}
inline void WaveHarmonic::Crest::ShaderIDs_SurfaceRenderer_Unity::setStaticF_s_BuiltInTransparentReceiveShadows(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_BuiltInTransparentReceiveShadows", ::WaveHarmonic::Crest::ShaderIDs_SurfaceRenderer_Unity*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::ShaderIDs_SurfaceRenderer_Unity::getStaticF_s_BuiltInTransparentReceiveShadows()  {
return ::cordl_internals::getStaticField<int32_t, "s_BuiltInTransparentReceiveShadows", ::WaveHarmonic::Crest::ShaderIDs_SurfaceRenderer_Unity*>();
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::ShaderIDs_SurfaceRenderer_Unity::ShaderIDs_SurfaceRenderer_Unity()   {
}
inline void WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::setStaticF_s_WaterLine(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_WaterLine", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::getStaticF_s_WaterLine()  {
return ::cordl_internals::getStaticField<int32_t, "s_WaterLine", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::setStaticF_s_WaterLineSnappedPosition(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_WaterLineSnappedPosition", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::getStaticF_s_WaterLineSnappedPosition()  {
return ::cordl_internals::getStaticField<int32_t, "s_WaterLineSnappedPosition", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::setStaticF_s_WaterLineResolution(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_WaterLineResolution", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::getStaticF_s_WaterLineResolution()  {
return ::cordl_internals::getStaticField<int32_t, "s_WaterLineResolution", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::setStaticF_s_WaterLineTexel(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_WaterLineTexel", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::getStaticF_s_WaterLineTexel()  {
return ::cordl_internals::getStaticField<int32_t, "s_WaterLineTexel", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::setStaticF_s_WaterLineFlatWater(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_WaterLineFlatWater", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::getStaticF_s_WaterLineFlatWater()  {
return ::cordl_internals::getStaticField<int32_t, "s_WaterLineFlatWater", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::setStaticF_s_DummyTarget(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_DummyTarget", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::getStaticF_s_DummyTarget()  {
return ::cordl_internals::getStaticField<int32_t, "s_DummyTarget", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::setStaticF_s_WorldToShadow(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_WorldToShadow", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::getStaticF_s_WorldToShadow()  {
return ::cordl_internals::getStaticField<int32_t, "s_WorldToShadow", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::setStaticF_s_ForceUnderwater(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_ForceUnderwater", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::getStaticF_s_ForceUnderwater()  {
return ::cordl_internals::getStaticField<int32_t, "s_ForceUnderwater", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::setStaticF_s_LodAlphaBlackPointFade(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_LodAlphaBlackPointFade", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::getStaticF_s_LodAlphaBlackPointFade()  {
return ::cordl_internals::getStaticField<int32_t, "s_LodAlphaBlackPointFade", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::setStaticF_s_LodAlphaBlackPointWhitePointFade(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_LodAlphaBlackPointWhitePointFade", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::getStaticF_s_LodAlphaBlackPointWhitePointFade()  {
return ::cordl_internals::getStaticField<int32_t, "s_LodAlphaBlackPointWhitePointFade", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::setStaticF_s_BuiltShadowCasterZTest(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_BuiltShadowCasterZTest", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::getStaticF_s_BuiltShadowCasterZTest()  {
return ::cordl_internals::getStaticField<int32_t, "s_BuiltShadowCasterZTest", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::setStaticF_s_ChunkMeshScaleAlpha(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_ChunkMeshScaleAlpha", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::getStaticF_s_ChunkMeshScaleAlpha()  {
return ::cordl_internals::getStaticField<int32_t, "s_ChunkMeshScaleAlpha", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::setStaticF_s_ChunkGeometryGridWidth(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_ChunkGeometryGridWidth", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::getStaticF_s_ChunkGeometryGridWidth()  {
return ::cordl_internals::getStaticField<int32_t, "s_ChunkGeometryGridWidth", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::setStaticF_s_ChunkFarNormalsWeight(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_ChunkFarNormalsWeight", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::getStaticF_s_ChunkFarNormalsWeight()  {
return ::cordl_internals::getStaticField<int32_t, "s_ChunkFarNormalsWeight", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::setStaticF_s_ChunkNormalScrollSpeed(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_ChunkNormalScrollSpeed", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::getStaticF_s_ChunkNormalScrollSpeed()  {
return ::cordl_internals::getStaticField<int32_t, "s_ChunkNormalScrollSpeed", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::setStaticF_s_NormalMapParameters(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_NormalMapParameters", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::getStaticF_s_NormalMapParameters()  {
return ::cordl_internals::getStaticField<int32_t, "s_NormalMapParameters", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::setStaticF_s_DataType(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_DataType", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::getStaticF_s_DataType()  {
return ::cordl_internals::getStaticField<int32_t, "s_DataType", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::setStaticF_s_Exposure(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_Exposure", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::getStaticF_s_Exposure()  {
return ::cordl_internals::getStaticField<int32_t, "s_Exposure", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::setStaticF_s_Range(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_Range", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::getStaticF_s_Range()  {
return ::cordl_internals::getStaticField<int32_t, "s_Range", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::setStaticF_s_Saturate(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_Saturate", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::getStaticF_s_Saturate()  {
return ::cordl_internals::getStaticField<int32_t, "s_Saturate", ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*>();
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs::SurfaceRenderer_ShaderIDs()   {
}
// Ctor Parameters [CppParam { name: "_SnappedPosition", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Resolution", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Texel", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::SurfaceRenderer_SurfaceDataParameters::SurfaceRenderer_SurfaceDataParameters(::UnityEngine::Vector2  _SnappedPosition, ::UnityEngine::Vector2  _Resolution, float_t  _Texel) noexcept  {
this->_SnappedPosition = _SnappedPosition;
this->_Resolution = _Resolution;
this->_Texel = _Texel;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::SurfaceRenderer_SurfaceDataParameters::SurfaceRenderer_SurfaceDataParameters()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer_PassData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer_PassData::*)()>(&::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer_PassData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer_PassData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer_PassData::__cordl_internal_get__RendererList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RendererList;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer_PassData::__cordl_internal_get__RendererList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RendererList;
}
constexpr void WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer_PassData::__cordl_internal_set__RendererList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RendererList = value;
}
inline void WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer_PassData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer_PassData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer_PassData* WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer_PassData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer_PassData*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer_PassData::WaterSurfaceRenderPass_SurfaceRenderer_PassData()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c::*)()>(&::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c._RecordRenderGraph_b__11_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c::*)(::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(&::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c::_RecordRenderGraph_b__11_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180329970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c*>(),
                        {"<RecordRenderGraph>b__11_0", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c::setStaticF___9(::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c*  value)  {
::cordl_internals::setStaticField<::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c*, "<>9", ::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c*>(std::forward<::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c*>(value));
}
inline ::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c* WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c*, "<>9", ::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c*>();
}
inline void WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c::setStaticF___9__11_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__11_0", ::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c*>(std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c::getStaticF___9__11_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__11_0", ::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c*>();
}
inline void WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c::_RecordRenderGraph_b__11_0(::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c*>(),
                        {"<RecordRenderGraph>b__11_0", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c* WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c::WaterSurfaceRenderPass_SurfaceRenderer___c()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass* (*)()>(&::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass::get_Instance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18259db80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass*)>(&::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass::set_Instance)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18259dba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass*>(),
                        {"set_Instance", {}, {::i2c::type_of<::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18259daf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass::Enable)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18259d0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass*>(),
                        {"Enable", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass.OnBeginCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass::OnBeginCameraRendering)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18259d160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass*>(),
                        {"OnBeginCameraRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass.RecordRenderGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x8d0;
  constexpr static std::size_t addrs = 0x18259d220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass*>(), 11}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass::__cordl_internal_get__Water()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Water;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass::__cordl_internal_get__Water() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Water;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass::__cordl_internal_set__Water(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Water = value;
}
constexpr ::UnityEngine::Rendering::ShaderTagId& WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass::__cordl_internal_get__ShaderTagID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShaderTagID;
}
constexpr ::UnityEngine::Rendering::ShaderTagId const& WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass::__cordl_internal_get__ShaderTagID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShaderTagID;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass::__cordl_internal_set__ShaderTagID(::UnityEngine::Rendering::ShaderTagId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShaderTagID = value;
}
constexpr ::WaveHarmonic::Crest::RenderGraphHelper_PassData*& WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass::__cordl_internal_get__PassData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PassData;
}
constexpr ::WaveHarmonic::Crest::RenderGraphHelper_PassData* const& WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass::__cordl_internal_get__PassData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PassData;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass::__cordl_internal_set__PassData(::WaveHarmonic::Crest::RenderGraphHelper_PassData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PassData = value;
}
inline void WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass::setStaticF__Instance_k__BackingField(::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass*  value)  {
::cordl_internals::setStaticField<::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass*, "<Instance>k__BackingField", ::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass*>(std::forward<::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass*>(value));
}
inline ::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass* WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass*, "<Instance>k__BackingField", ::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass*>();
}
inline ::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass* WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass*>(nullptr, ___internal_method);
}
inline void WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass::set_Instance(::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass*>(),
                        {"set_Instance", {}, {::i2c::type_of<::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass::_ctor(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline void WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass::Enable(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass*>(),
                        {"Enable", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, water);
}
inline void WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass::OnBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass*>(),
                        {"OnBeginCameraRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, camera);
}
inline void WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  graph, ::UnityEngine::Rendering::ContextContainer*  frame)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graph, frame);
}
inline ::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass* WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass::New_ctor(::WaveHarmonic::Crest::WaterRenderer*  water)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass*>(water));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass::SurfaceRenderer_WaterSurfaceRenderPass()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer_DebugFields._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer_DebugFields::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer_DebugFields::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer_DebugFields*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& WaveHarmonic::Crest::SurfaceRenderer_DebugFields::__cordl_internal_get__UniformTiles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UniformTiles;
}
constexpr bool const& WaveHarmonic::Crest::SurfaceRenderer_DebugFields::__cordl_internal_get__UniformTiles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UniformTiles;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer_DebugFields::__cordl_internal_set__UniformTiles(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UniformTiles = value;
}
constexpr bool& WaveHarmonic::Crest::SurfaceRenderer_DebugFields::__cordl_internal_get__DisableSkirt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisableSkirt;
}
constexpr bool const& WaveHarmonic::Crest::SurfaceRenderer_DebugFields::__cordl_internal_get__DisableSkirt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisableSkirt;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer_DebugFields::__cordl_internal_set__DisableSkirt(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DisableSkirt = value;
}
constexpr bool& WaveHarmonic::Crest::SurfaceRenderer_DebugFields::__cordl_internal_get__DrawRendererBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DrawRendererBounds;
}
constexpr bool const& WaveHarmonic::Crest::SurfaceRenderer_DebugFields::__cordl_internal_get__DrawRendererBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DrawRendererBounds;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer_DebugFields::__cordl_internal_set__DrawRendererBounds(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DrawRendererBounds = value;
}
inline void WaveHarmonic::Crest::SurfaceRenderer_DebugFields::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer_DebugFields*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::SurfaceRenderer_DebugFields* WaveHarmonic::Crest::SurfaceRenderer_DebugFields::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::SurfaceRenderer_DebugFields*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::SurfaceRenderer_DebugFields::SurfaceRenderer_DebugFields()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode::SurfaceRenderer_SurfaceSelfIntersectionFixMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode::SurfaceRenderer_SurfaceSelfIntersectionFixMode()   {
}
constexpr ::WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode  WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode::Off{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode  WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode::ForceBelowWater{static_cast<int32_t>(0x1)};
constexpr ::WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode  WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode::ForceAboveWater{static_cast<int32_t>(0x2)};
constexpr ::WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode  WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode::On{static_cast<int32_t>(0x3)};
constexpr ::WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode  WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode::Automatic{static_cast<int32_t>(0x4)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::SurfaceRenderer_ForceFacing::SurfaceRenderer_ForceFacing(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::SurfaceRenderer_ForceFacing::SurfaceRenderer_ForceFacing()   {
}
constexpr ::WaveHarmonic::Crest::SurfaceRenderer_ForceFacing  WaveHarmonic::Crest::SurfaceRenderer_ForceFacing::None{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::SurfaceRenderer_ForceFacing  WaveHarmonic::Crest::SurfaceRenderer_ForceFacing::BelowWater{static_cast<int32_t>(0x1)};
constexpr ::WaveHarmonic::Crest::SurfaceRenderer_ForceFacing  WaveHarmonic::Crest::SurfaceRenderer_ForceFacing::AboveWater{static_cast<int32_t>(0x2)};
constexpr ::WaveHarmonic::Crest::SurfaceRenderer_ForceFacing  WaveHarmonic::Crest::SurfaceRenderer_ForceFacing::Facing{static_cast<int32_t>(0x3)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType::Builder_SurfaceRenderer_PatchType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType::Builder_SurfaceRenderer_PatchType()   {
}
constexpr ::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType  WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType::Interior{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType  WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType::Fat{static_cast<int32_t>(0x1)};
constexpr ::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType  WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType::FatX{static_cast<int32_t>(0x2)};
constexpr ::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType  WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType::FatXSlimZ{static_cast<int32_t>(0x3)};
constexpr ::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType  WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType::FatXOuter{static_cast<int32_t>(0x4)};
constexpr ::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType  WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType::FatXZ{static_cast<int32_t>(0x5)};
constexpr ::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType  WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType::FatXZOuter{static_cast<int32_t>(0x6)};
constexpr ::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType  WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType::SlimX{static_cast<int32_t>(0x7)};
constexpr ::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType  WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType::SlimXZ{static_cast<int32_t>(0x8)};
constexpr ::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType  WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType::SlimXFatZ{static_cast<int32_t>(0x9)};
constexpr ::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType  WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType::Count{static_cast<int32_t>(0xa)};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer_Builder.GenerateMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (*)(::WaveHarmonic::Crest::WaterRenderer*, ::WaveHarmonic::Crest::SurfaceRenderer*, ::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::WaterChunkRenderer>>*, int32_t, int32_t, int32_t)>(&::WaveHarmonic::Crest::SurfaceRenderer_Builder::GenerateMesh)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x18258a2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer_Builder*>(),
                        {"GenerateMesh", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::WaveHarmonic::Crest::SurfaceRenderer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::WaterChunkRenderer>>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer_Builder.BuildPatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(::WaveHarmonic::Crest::WaterRenderer*, ::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType, float_t)>(&::WaveHarmonic::Crest::SurfaceRenderer_Builder::BuildPatch)> {
  constexpr static std::size_t size = 0x800;
  constexpr static std::size_t addrs = 0x182589030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer_Builder*>(),
                        {"BuildPatch", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer_Builder.CreateLOD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::WaveHarmonic::Crest::WaterRenderer*, ::WaveHarmonic::Crest::SurfaceRenderer*, ::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::WaterChunkRenderer>>*, ::UnityEngine::Transform*, int32_t, int32_t, ::ArrayW<::UnityEngine::Mesh*>, int32_t, int32_t, int32_t)>(&::WaveHarmonic::Crest::SurfaceRenderer_Builder::CreateLOD)> {
  constexpr static std::size_t size = 0xa80;
  constexpr static std::size_t addrs = 0x182589830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer_Builder*>(),
                        {"CreateLOD", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::WaveHarmonic::Crest::SurfaceRenderer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::WaterChunkRenderer>>*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::SurfaceRenderer_Builder::setStaticF_s_Offsets(::ArrayW<::UnityEngine::Vector2>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector2>, "s_Offsets", ::WaveHarmonic::Crest::SurfaceRenderer_Builder*>(std::forward<::ArrayW<::UnityEngine::Vector2>>(value));
}
inline ::ArrayW<::UnityEngine::Vector2> WaveHarmonic::Crest::SurfaceRenderer_Builder::getStaticF_s_Offsets()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector2>, "s_Offsets", ::WaveHarmonic::Crest::SurfaceRenderer_Builder*>();
}
inline void WaveHarmonic::Crest::SurfaceRenderer_Builder::setStaticF_s_OffsetsFirstLod(::ArrayW<::UnityEngine::Vector2>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector2>, "s_OffsetsFirstLod", ::WaveHarmonic::Crest::SurfaceRenderer_Builder*>(std::forward<::ArrayW<::UnityEngine::Vector2>>(value));
}
inline ::ArrayW<::UnityEngine::Vector2> WaveHarmonic::Crest::SurfaceRenderer_Builder::getStaticF_s_OffsetsFirstLod()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector2>, "s_OffsetsFirstLod", ::WaveHarmonic::Crest::SurfaceRenderer_Builder*>();
}
inline void WaveHarmonic::Crest::SurfaceRenderer_Builder::setStaticF_s_PatchTypes(::ArrayW<::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType>  value)  {
::cordl_internals::setStaticField<::ArrayW<::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType>, "s_PatchTypes", ::WaveHarmonic::Crest::SurfaceRenderer_Builder*>(std::forward<::ArrayW<::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType>>(value));
}
inline ::ArrayW<::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType> WaveHarmonic::Crest::SurfaceRenderer_Builder::getStaticF_s_PatchTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType>, "s_PatchTypes", ::WaveHarmonic::Crest::SurfaceRenderer_Builder*>();
}
inline void WaveHarmonic::Crest::SurfaceRenderer_Builder::setStaticF_s_PatchTypesFirstLod(::ArrayW<::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType>  value)  {
::cordl_internals::setStaticField<::ArrayW<::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType>, "s_PatchTypesFirstLod", ::WaveHarmonic::Crest::SurfaceRenderer_Builder*>(std::forward<::ArrayW<::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType>>(value));
}
inline ::ArrayW<::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType> WaveHarmonic::Crest::SurfaceRenderer_Builder::getStaticF_s_PatchTypesFirstLod()  {
return ::cordl_internals::getStaticField<::ArrayW<::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType>, "s_PatchTypesFirstLod", ::WaveHarmonic::Crest::SurfaceRenderer_Builder*>();
}
inline void WaveHarmonic::Crest::SurfaceRenderer_Builder::setStaticF_s_PatchTypesLastLod(::ArrayW<::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType>  value)  {
::cordl_internals::setStaticField<::ArrayW<::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType>, "s_PatchTypesLastLod", ::WaveHarmonic::Crest::SurfaceRenderer_Builder*>(std::forward<::ArrayW<::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType>>(value));
}
inline ::ArrayW<::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType> WaveHarmonic::Crest::SurfaceRenderer_Builder::getStaticF_s_PatchTypesLastLod()  {
return ::cordl_internals::getStaticField<::ArrayW<::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType>, "s_PatchTypesLastLod", ::WaveHarmonic::Crest::SurfaceRenderer_Builder*>();
}
inline void WaveHarmonic::Crest::SurfaceRenderer_Builder::setStaticF_s_SiblingIndex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_SiblingIndex", ::WaveHarmonic::Crest::SurfaceRenderer_Builder*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::SurfaceRenderer_Builder::getStaticF_s_SiblingIndex()  {
return ::cordl_internals::getStaticField<int32_t, "s_SiblingIndex", ::WaveHarmonic::Crest::SurfaceRenderer_Builder*>();
}
inline ::UnityW<::UnityEngine::Transform> WaveHarmonic::Crest::SurfaceRenderer_Builder::GenerateMesh(::WaveHarmonic::Crest::WaterRenderer*  water, ::WaveHarmonic::Crest::SurfaceRenderer*  surface, ::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::WaterChunkRenderer>>*  tiles, int32_t  lodDataResolution, int32_t  geoDownSampleFactor, int32_t  lodCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer_Builder*>(),
                        {"GenerateMesh", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::WaveHarmonic::Crest::SurfaceRenderer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::WaterChunkRenderer>>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(nullptr, ___internal_method, water, surface, tiles, lodDataResolution, geoDownSampleFactor, lodCount);
}
inline ::UnityW<::UnityEngine::Mesh> WaveHarmonic::Crest::SurfaceRenderer_Builder::BuildPatch(::WaveHarmonic::Crest::WaterRenderer*  water, ::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType  pt, float_t  vertDensity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer_Builder*>(),
                        {"BuildPatch", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, water, pt, vertDensity);
}
inline void WaveHarmonic::Crest::SurfaceRenderer_Builder::CreateLOD(::WaveHarmonic::Crest::WaterRenderer*  water, ::WaveHarmonic::Crest::SurfaceRenderer*  surface, ::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::WaterChunkRenderer>>*  tiles, ::UnityEngine::Transform*  parent, int32_t  lodIndex, int32_t  lodCount, ::ArrayW<::UnityEngine::Mesh*>  meshData, int32_t  lodDataResolution, int32_t  geoDownSampleFactor, int32_t  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer_Builder*>(),
                        {"CreateLOD", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::WaveHarmonic::Crest::SurfaceRenderer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::WaterChunkRenderer>>*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, water, surface, tiles, parent, lodIndex, lodCount, meshData, lodDataResolution, geoDownSampleFactor, layer);
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::SurfaceRenderer_Builder::SurfaceRenderer_Builder()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.get_AllowRenderQueueSorting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::get_AllowRenderQueueSorting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180352b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_AllowRenderQueueSorting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.set_AllowRenderQueueSorting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)(bool)>(&::WaveHarmonic::Crest::SurfaceRenderer::set_AllowRenderQueueSorting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180352c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"set_AllowRenderQueueSorting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.get_CameraExclusions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::WaterCameraExclusion (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::get_CameraExclusions)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805e8f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_CameraExclusions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.set_CameraExclusions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)(::WaveHarmonic::Crest::WaterCameraExclusion)>(&::WaveHarmonic::Crest::SurfaceRenderer::set_CameraExclusions)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805e90c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"set_CameraExclusions", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterCameraExclusion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.get_CastShadows
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::get_CastShadows)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181b649a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_CastShadows", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.set_CastShadows
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)(bool)>(&::WaveHarmonic::Crest::SurfaceRenderer::set_CastShadows)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1820c80f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"set_CastShadows", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.get_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::get_Enabled)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18258f6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_Enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.set_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)(bool)>(&::WaveHarmonic::Crest::SurfaceRenderer::set_Enabled)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182594130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"set_Enabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.get_Layer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::get_Layer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180cbfa00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_Layer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.set_Layer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)(int32_t)>(&::WaveHarmonic::Crest::SurfaceRenderer::set_Layer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180cbfcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"set_Layer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.get_Material
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::get_Material)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180322760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_Material", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.set_Material
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)(::UnityEngine::Material*)>(&::WaveHarmonic::Crest::SurfaceRenderer::set_Material)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180322790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"set_Material", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.get_SupportCustomRenderers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::get_SupportCustomRenderers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_SupportCustomRenderers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.set_SupportCustomRenderers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)(bool)>(&::WaveHarmonic::Crest::SurfaceRenderer::set_SupportCustomRenderers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b30e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"set_SupportCustomRenderers", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.get_TimeSliceBoundsUpdateFrameCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::get_TimeSliceBoundsUpdateFrameCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180cbfa10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_TimeSliceBoundsUpdateFrameCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.set_TimeSliceBoundsUpdateFrameCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)(int32_t)>(&::WaveHarmonic::Crest::SurfaceRenderer::set_TimeSliceBoundsUpdateFrameCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180cbfd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"set_TimeSliceBoundsUpdateFrameCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.get_VolumeMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::get_VolumeMaterial)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d9940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_VolumeMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.set_VolumeMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)(::UnityEngine::Material*)>(&::WaveHarmonic::Crest::SurfaceRenderer::set_VolumeMaterial)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803d9970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"set_VolumeMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.get_WaterBodyCulling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::get_WaterBodyCulling)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182594120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_WaterBodyCulling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.set_WaterBodyCulling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)(bool)>(&::WaveHarmonic::Crest::SurfaceRenderer::set_WaterBodyCulling)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825942a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"set_WaterBodyCulling", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.get_HeightRT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::get_HeightRT)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_HeightRT", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.UpdateDisplacedSurfaceData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::SurfaceRenderer::UpdateDisplacedSurfaceData)> {
  constexpr static std::size_t size = 0x800;
  constexpr static std::size_t addrs = 0x1825925f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"UpdateDisplacedSurfaceData", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.UpdateDisplacedSurfaceData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Bounds, ::StringW, ::by_ref<::UnityEngine::RenderTexture*>, float_t, int32_t, ::by_ref<::WaveHarmonic::Crest::SurfaceRenderer_SurfaceDataParameters>)>(&::WaveHarmonic::Crest::SurfaceRenderer::UpdateDisplacedSurfaceData)> {
  constexpr static std::size_t size = 0x670;
  constexpr static std::size_t addrs = 0x182592df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"UpdateDisplacedSurfaceData", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderTexture*>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::WaveHarmonic::Crest::SurfaceRenderer_SurfaceDataParameters>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.OnBeginCameraRenderingLegacy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::SurfaceRenderer::OnBeginCameraRenderingLegacy)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x182590980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"OnBeginCameraRenderingLegacy", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.OnEndCameraRenderingLegacy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::SurfaceRenderer::OnEndCameraRenderingLegacy)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x182591030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"OnEndCameraRenderingLegacy", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::SurfaceRenderer::Draw)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x18258f2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"Draw", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.LegacyOnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::LegacyOnEnable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1825906f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"LegacyOnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.LegacyOnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::LegacyOnDisable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182590690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"LegacyOnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.SetUpShadows
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::SurfaceRenderer::SetUpShadows)> {
  constexpr static std::size_t size = 0x8c0;
  constexpr static std::size_t addrs = 0x182591990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"SetUpShadows", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.get_Root
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::get_Root)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_Root", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.get_Chunks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::WaterChunkRenderer>>* (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::get_Chunks)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_Chunks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.get_PerCascadeMPB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::MaterialPropertyBlock*> (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::get_PerCascadeMPB)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_PerCascadeMPB", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.set_PerCascadeMPB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)(::ArrayW<::UnityEngine::MaterialPropertyBlock*>)>(&::WaveHarmonic::Crest::SurfaceRenderer::set_PerCascadeMPB)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180337190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"set_PerCascadeMPB", {}, {::i2c::type_of<::ArrayW<::UnityEngine::MaterialPropertyBlock*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.get_OnCreateChunkRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::UnityW<::UnityEngine::Renderer>>* (*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::get_OnCreateChunkRenderer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182594050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_OnCreateChunkRenderer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.set_OnCreateChunkRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::Renderer>>*)>(&::WaveHarmonic::Crest::SurfaceRenderer::set_OnCreateChunkRenderer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182594270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"set_OnCreateChunkRenderer", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Renderer>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.get_AboveOrBelowSurfaceMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::get_AboveOrBelowSurfaceMaterial)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182594000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_AboveOrBelowSurfaceMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.get_IsQuadMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::get_IsQuadMesh)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182594040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_IsQuadMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.get_ForceRenderingOff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::get_ForceRenderingOff)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814f2b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_ForceRenderingOff", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.set_ForceRenderingOff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)(bool)>(&::WaveHarmonic::Crest::SurfaceRenderer::set_ForceRenderingOff)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1825941b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"set_ForceRenderingOff", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.get_VisualizeDataMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::get_VisualizeDataMaterial)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x182594090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_VisualizeDataMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::Initialize)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x18258f8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::OnDestroy)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x182590e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.ShowHiddenObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)(bool)>(&::WaveHarmonic::Crest::SurfaceRenderer::ShowHiddenObjects)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1825923c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"ShowHiddenObjects", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.UpdateChunkVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::SurfaceRenderer::UpdateChunkVisibility)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x182592470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"UpdateChunkVisibility", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.RestoreCulling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::RestoreCulling)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x182591670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"RestoreCulling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.UpdateMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)(::UnityEngine::Material*, ::by_ref<::UnityEngine::Material*>)>(&::WaveHarmonic::Crest::SurfaceRenderer::UpdateMaterial)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x182593460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"UpdateMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::by_ref<::UnityEngine::Material*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.IsTransparent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Material*)>(&::WaveHarmonic::Crest::SurfaceRenderer::IsTransparent)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18258fbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"IsTransparent", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.Rebuild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::Rebuild)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1825912b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"Rebuild", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.ShouldRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SurfaceRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::SurfaceRenderer::ShouldRender)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182592320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"ShouldRender", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.ShouldCull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::ShouldCull)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182592250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"ShouldCull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.OnBeginCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::SurfaceRenderer::OnBeginCameraRendering)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x182590ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"OnBeginCameraRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.OnEndCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::SurfaceRenderer::OnEndCameraRendering)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x182591160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"OnEndCameraRendering", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.InitializeProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::InitializeProperties)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x18258f6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"InitializeProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.WritePerCameraMaterialParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::SurfaceRenderer::WritePerCameraMaterialParameters)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1825938c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"WritePerCameraMaterialParameters", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::LateUpdate)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x182590270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.WritePerCascadeInstanceData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::WritePerCascadeInstanceData)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x1825939f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"WritePerCascadeInstanceData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.ApplyWaterBodyCulling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::ApplyWaterBodyCulling)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x18258ed70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"ApplyWaterBodyCulling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, int32_t, bool, ::UnityEngine::MaterialPropertyBlock*)>(&::WaveHarmonic::Crest::SurfaceRenderer::Render)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1825913b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"Render", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.GetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::GetEnabled)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18258f6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"GetEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.SetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)(bool, bool)>(&::WaveHarmonic::Crest::SurfaceRenderer::SetEnabled)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182591880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"SetEnabled", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.SetLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)(int32_t, int32_t)>(&::WaveHarmonic::Crest::SurfaceRenderer::SetLayer)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1825918f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"SetLayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.GetCastShadows
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::GetCastShadows)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181b649a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"GetCastShadows", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.SetCastShadows
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)(bool, bool)>(&::WaveHarmonic::Crest::SurfaceRenderer::SetCastShadows)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1825917e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"SetCastShadows", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.SetAllowRenderQueueSorting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)(bool, bool)>(&::WaveHarmonic::Crest::SurfaceRenderer::SetAllowRenderQueueSorting)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182591730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"SetAllowRenderQueueSorting", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.get_QueueMotionVectors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::get_QueueMotionVectors)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182594070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_QueueMotionVectors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.get_PreviousObjectToWorld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Matrix4x4> (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::get_PreviousObjectToWorld)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_PreviousObjectToWorld", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.set_PreviousObjectToWorld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)(::ArrayW<::UnityEngine::Matrix4x4>)>(&::WaveHarmonic::Crest::SurfaceRenderer::set_PreviousObjectToWorld)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180474cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"set_PreviousObjectToWorld", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.ShouldRenderMotionVectors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SurfaceRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::SurfaceRenderer::ShouldRenderMotionVectors)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825922f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"ShouldRenderMotionVectors", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.LateUpdateMotionVectors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::LateUpdateMotionVectors)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x18258fc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"LateUpdateMotionVectors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.UpdateMotionVectorsMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)(::UnityEngine::Material*, ::by_ref<::UnityEngine::Material*>)>(&::WaveHarmonic::Crest::SurfaceRenderer::UpdateMotionVectorsMaterial)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x182593570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"UpdateMotionVectorsMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::by_ref<::UnityEngine::Material*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.LoadCameraData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::SurfaceRenderer::LoadCameraData)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x182590770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"LoadCameraData", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.RemoveCameraData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::SurfaceRenderer::RemoveCameraData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x182591320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"RemoveCameraData", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.get_NormalMapParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector4> (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::get_NormalMapParameters)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180481bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_NormalMapParameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.set_NormalMapParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)(::ArrayW<::UnityEngine::Vector4>)>(&::WaveHarmonic::Crest::SurfaceRenderer::set_NormalMapParameters)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180482340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"set_NormalMapParameters", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer.LateUpdateQuadMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::LateUpdateQuadMesh)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x18258fec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"LateUpdateQuadMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SurfaceRenderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SurfaceRenderer::*)()>(&::WaveHarmonic::Crest::SurfaceRenderer::_ctor)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x182593da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RenderTexture>& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__HeightRT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HeightRT;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__HeightRT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HeightRT;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__HeightRT(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HeightRT = value;
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__BeforeRenderingCommands()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BeforeRenderingCommands;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__BeforeRenderingCommands() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BeforeRenderingCommands;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__BeforeRenderingCommands(::UnityEngine::Rendering::CommandBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BeforeRenderingCommands = value;
}
constexpr ::UnityW<::UnityEngine::Material>& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__DisplacedMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisplacedMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__DisplacedMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisplacedMaterial;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__DisplacedMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DisplacedMaterial = value;
}
constexpr ::WaveHarmonic::Crest::SurfaceRenderer_SurfaceDataParameters& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__SurfaceDataParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SurfaceDataParameters;
}
constexpr ::WaveHarmonic::Crest::SurfaceRenderer_SurfaceDataParameters const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__SurfaceDataParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SurfaceDataParameters;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__SurfaceDataParameters(::WaveHarmonic::Crest::SurfaceRenderer_SurfaceDataParameters  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SurfaceDataParameters = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__SurfaceDataMPB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SurfaceDataMPB;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__SurfaceDataMPB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SurfaceDataMPB;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__SurfaceDataMPB(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SurfaceDataMPB = value;
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__DrawWaterSurfaceBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DrawWaterSurfaceBuffer;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__DrawWaterSurfaceBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DrawWaterSurfaceBuffer;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__DrawWaterSurfaceBuffer(::UnityEngine::Rendering::CommandBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DrawWaterSurfaceBuffer = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__QuadMeshMPB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QuadMeshMPB;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__QuadMeshMPB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QuadMeshMPB;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__QuadMeshMPB(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____QuadMeshMPB = value;
}
constexpr ::UnityW<::UnityEngine::Material>& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__ForceShadowsMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForceShadowsMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__ForceShadowsMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForceShadowsMaterial;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__ForceShadowsMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ForceShadowsMaterial = value;
}
constexpr ::UnityEngine::ComputeBuffer*& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__ShadowMatrixBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShadowMatrixBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__ShadowMatrixBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShadowMatrixBuffer;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__ShadowMatrixBuffer(::UnityEngine::ComputeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShadowMatrixBuffer = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__ShadowMatrixDefaults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShadowMatrixDefaults;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__ShadowMatrixDefaults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShadowMatrixDefaults;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__ShadowMatrixDefaults(::ArrayW<::UnityEngine::Matrix4x4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShadowMatrixDefaults = value;
}
constexpr ::UnityW<::UnityEngine::Material>& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__CaptureShadowMatrices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CaptureShadowMatrices;
}
constexpr ::UnityW<::UnityEngine::Material> const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__CaptureShadowMatrices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CaptureShadowMatrices;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__CaptureShadowMatrices(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CaptureShadowMatrices = value;
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__DeferredShadowMapBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DeferredShadowMapBuffer;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__DeferredShadowMapBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DeferredShadowMapBuffer;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__DeferredShadowMapBuffer(::UnityEngine::Rendering::CommandBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DeferredShadowMapBuffer = value;
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__ScreenSpaceShadowMapBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScreenSpaceShadowMapBuffer;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__ScreenSpaceShadowMapBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScreenSpaceShadowMapBuffer;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__ScreenSpaceShadowMapBuffer(::UnityEngine::Rendering::CommandBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ScreenSpaceShadowMapBuffer = value;
}
constexpr bool& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__Enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Enabled;
}
constexpr bool const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__Enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Enabled;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__Enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Enabled = value;
}
constexpr int32_t& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__Layer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Layer;
}
constexpr int32_t const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__Layer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Layer;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__Layer(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Layer = value;
}
constexpr ::WaveHarmonic::Crest::WaterMeshType& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__MeshType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MeshType;
}
constexpr ::WaveHarmonic::Crest::WaterMeshType const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__MeshType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MeshType;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__MeshType(::WaveHarmonic::Crest::WaterMeshType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MeshType = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__ChunkTemplate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChunkTemplate;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__ChunkTemplate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChunkTemplate;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__ChunkTemplate(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ChunkTemplate = value;
}
constexpr bool& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__SupportCustomRenderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SupportCustomRenderers;
}
constexpr bool const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__SupportCustomRenderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SupportCustomRenderers;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__SupportCustomRenderers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SupportCustomRenderers = value;
}
constexpr ::UnityW<::UnityEngine::Material>& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__Material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Material;
}
constexpr ::UnityW<::UnityEngine::Material> const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__Material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Material;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__Material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Material = value;
}
constexpr ::UnityW<::UnityEngine::Material>& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__VolumeMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VolumeMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__VolumeMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VolumeMaterial;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__VolumeMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VolumeMaterial = value;
}
constexpr bool& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__CastShadows()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CastShadows;
}
constexpr bool const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__CastShadows() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CastShadows;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__CastShadows(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CastShadows = value;
}
constexpr int32_t& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__TimeSliceBoundsUpdateFrameCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeSliceBoundsUpdateFrameCount;
}
constexpr int32_t const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__TimeSliceBoundsUpdateFrameCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeSliceBoundsUpdateFrameCount;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__TimeSliceBoundsUpdateFrameCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TimeSliceBoundsUpdateFrameCount = value;
}
constexpr ::WaveHarmonic::Crest::WaterCameraExclusion& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__CameraExclusions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraExclusions;
}
constexpr ::WaveHarmonic::Crest::WaterCameraExclusion const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__CameraExclusions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraExclusions;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__CameraExclusions(::WaveHarmonic::Crest::WaterCameraExclusion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CameraExclusions = value;
}
constexpr ::WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__SurfaceSelfIntersectionFixMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SurfaceSelfIntersectionFixMode;
}
constexpr ::WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__SurfaceSelfIntersectionFixMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SurfaceSelfIntersectionFixMode;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__SurfaceSelfIntersectionFixMode(::WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SurfaceSelfIntersectionFixMode = value;
}
constexpr bool& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__AllowRenderQueueSorting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllowRenderQueueSorting;
}
constexpr bool const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__AllowRenderQueueSorting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllowRenderQueueSorting;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__AllowRenderQueueSorting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AllowRenderQueueSorting = value;
}
constexpr ::WaveHarmonic::Crest::SurfaceRenderer_DebugFields*& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__Debug()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Debug;
}
constexpr ::WaveHarmonic::Crest::SurfaceRenderer_DebugFields* const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__Debug() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Debug;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__Debug(::WaveHarmonic::Crest::SurfaceRenderer_DebugFields*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Debug = value;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__Water()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Water;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__Water() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Water;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__Water(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Water = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__Root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Root;
}
constexpr ::UnityW<::UnityEngine::Transform> const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__Root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Root;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__Root(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Root = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::WaterChunkRenderer>>*& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__Chunks_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Chunks_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::WaterChunkRenderer>>* const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__Chunks_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Chunks_k__BackingField;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__Chunks_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::WaterChunkRenderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Chunks_k__BackingField = value;
}
constexpr bool& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__Rebuild()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rebuild;
}
constexpr bool const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__Rebuild() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rebuild;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__Rebuild(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Rebuild = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__RendererTemplate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RendererTemplate;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__RendererTemplate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RendererTemplate;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__RendererTemplate(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RendererTemplate = value;
}
constexpr ::ArrayW<::UnityEngine::MaterialPropertyBlock*>& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__PerCascadeMPB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PerCascadeMPB;
}
constexpr ::ArrayW<::UnityEngine::MaterialPropertyBlock*> const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__PerCascadeMPB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PerCascadeMPB;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__PerCascadeMPB(::ArrayW<::UnityEngine::MaterialPropertyBlock*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PerCascadeMPB = value;
}
constexpr ::ArrayW<::UnityEngine::MaterialPropertyBlock*>& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__PerCascadeMPB_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PerCascadeMPB_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::MaterialPropertyBlock*> const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__PerCascadeMPB_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PerCascadeMPB_k__BackingField;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__PerCascadeMPB_k__BackingField(::ArrayW<::UnityEngine::MaterialPropertyBlock*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PerCascadeMPB_k__BackingField = value;
}
constexpr float_t& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__LodAlphaBlackPointFade()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LodAlphaBlackPointFade;
}
constexpr float_t const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__LodAlphaBlackPointFade() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LodAlphaBlackPointFade;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__LodAlphaBlackPointFade(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LodAlphaBlackPointFade = value;
}
constexpr float_t& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__LodAlphaBlackPointWhitePointFade()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LodAlphaBlackPointWhitePointFade;
}
constexpr float_t const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__LodAlphaBlackPointWhitePointFade() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LodAlphaBlackPointWhitePointFade;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__LodAlphaBlackPointWhitePointFade(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LodAlphaBlackPointWhitePointFade = value;
}
constexpr bool& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__CanSkipCulling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CanSkipCulling;
}
constexpr bool const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__CanSkipCulling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CanSkipCulling;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__CanSkipCulling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CanSkipCulling = value;
}
constexpr ::UnityW<::UnityEngine::Material>& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__MotionVectorMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MotionVectorMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__MotionVectorMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MotionVectorMaterial;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__MotionVectorMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MotionVectorMaterial = value;
}
constexpr bool& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__ForceRenderingOff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForceRenderingOff;
}
constexpr bool const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__ForceRenderingOff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForceRenderingOff;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__ForceRenderingOff(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ForceRenderingOff = value;
}
constexpr ::UnityW<::UnityEngine::Material>& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__VisualizeDataMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VisualizeDataMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__VisualizeDataMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VisualizeDataMaterial;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__VisualizeDataMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VisualizeDataMaterial = value;
}
constexpr bool& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__QueueMotionVectors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QueueMotionVectors;
}
constexpr bool const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__QueueMotionVectors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QueueMotionVectors;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__QueueMotionVectors(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____QueueMotionVectors = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__PreviousObjectToWorld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PreviousObjectToWorld;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__PreviousObjectToWorld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PreviousObjectToWorld;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__PreviousObjectToWorld(::ArrayW<::UnityEngine::Matrix4x4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PreviousObjectToWorld = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__PreviousObjectToWorld_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PreviousObjectToWorld_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__PreviousObjectToWorld_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PreviousObjectToWorld_k__BackingField;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__PreviousObjectToWorld_k__BackingField(::ArrayW<::UnityEngine::Matrix4x4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PreviousObjectToWorld_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::ArrayW<::UnityEngine::MaterialPropertyBlock*>>*& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__PerCameraPerCascadeMPB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PerCameraPerCascadeMPB;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::ArrayW<::UnityEngine::MaterialPropertyBlock*>>* const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__PerCameraPerCascadeMPB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PerCameraPerCascadeMPB;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__PerCameraPerCascadeMPB(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::ArrayW<::UnityEngine::MaterialPropertyBlock*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PerCameraPerCascadeMPB = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::ArrayW<::UnityEngine::Vector4>>*& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__PerCameraNormalMapParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PerCameraNormalMapParameters;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::ArrayW<::UnityEngine::Vector4>>* const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__PerCameraNormalMapParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PerCameraNormalMapParameters;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__PerCameraNormalMapParameters(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::ArrayW<::UnityEngine::Vector4>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PerCameraNormalMapParameters = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::ArrayW<::UnityEngine::Matrix4x4>>*& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__PerCameraPreviousObjectToWorld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PerCameraPreviousObjectToWorld;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::ArrayW<::UnityEngine::Matrix4x4>>* const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__PerCameraPreviousObjectToWorld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PerCameraPreviousObjectToWorld;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__PerCameraPreviousObjectToWorld(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::ArrayW<::UnityEngine::Matrix4x4>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PerCameraPreviousObjectToWorld = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__NormalMapParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NormalMapParameters;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__NormalMapParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NormalMapParameters;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__NormalMapParameters(::ArrayW<::UnityEngine::Vector4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NormalMapParameters = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__NormalMapParameters_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NormalMapParameters_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__NormalMapParameters_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NormalMapParameters_k__BackingField;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__NormalMapParameters_k__BackingField(::ArrayW<::UnityEngine::Vector4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NormalMapParameters_k__BackingField = value;
}
constexpr bool& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__WaterBodyCulling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaterBodyCulling;
}
constexpr bool const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__WaterBodyCulling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaterBodyCulling;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__WaterBodyCulling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WaterBodyCulling = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>>& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__Meshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Meshes;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>> const& WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_get__Meshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Meshes;
}
constexpr void WaveHarmonic::Crest::SurfaceRenderer::__cordl_internal_set__Meshes(::ArrayW<::UnityW<::UnityEngine::Mesh>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Meshes = value;
}
inline void WaveHarmonic::Crest::SurfaceRenderer::setStaticF__OnCreateChunkRenderer_k__BackingField(::System::Action_1<::UnityW<::UnityEngine::Renderer>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::UnityEngine::Renderer>>*, "<OnCreateChunkRenderer>k__BackingField", ::WaveHarmonic::Crest::SurfaceRenderer*>(std::forward<::System::Action_1<::UnityW<::UnityEngine::Renderer>>*>(value));
}
inline ::System::Action_1<::UnityW<::UnityEngine::Renderer>>* WaveHarmonic::Crest::SurfaceRenderer::getStaticF__OnCreateChunkRenderer_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::UnityEngine::Renderer>>*, "<OnCreateChunkRenderer>k__BackingField", ::WaveHarmonic::Crest::SurfaceRenderer*>();
}
inline bool WaveHarmonic::Crest::SurfaceRenderer::get_AllowRenderQueueSorting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_AllowRenderQueueSorting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::set_AllowRenderQueueSorting(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"set_AllowRenderQueueSorting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::WaterCameraExclusion WaveHarmonic::Crest::SurfaceRenderer::get_CameraExclusions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_CameraExclusions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::WaterCameraExclusion>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::set_CameraExclusions(::WaveHarmonic::Crest::WaterCameraExclusion  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"set_CameraExclusions", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterCameraExclusion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::SurfaceRenderer::get_CastShadows()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_CastShadows", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::set_CastShadows(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"set_CastShadows", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::SurfaceRenderer::get_Enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_Enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::set_Enabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"set_Enabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t WaveHarmonic::Crest::SurfaceRenderer::get_Layer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_Layer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::set_Layer(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"set_Layer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> WaveHarmonic::Crest::SurfaceRenderer::get_Material()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_Material", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::set_Material(::UnityEngine::Material*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"set_Material", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::SurfaceRenderer::get_SupportCustomRenderers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_SupportCustomRenderers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::set_SupportCustomRenderers(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"set_SupportCustomRenderers", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t WaveHarmonic::Crest::SurfaceRenderer::get_TimeSliceBoundsUpdateFrameCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_TimeSliceBoundsUpdateFrameCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::set_TimeSliceBoundsUpdateFrameCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"set_TimeSliceBoundsUpdateFrameCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> WaveHarmonic::Crest::SurfaceRenderer::get_VolumeMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_VolumeMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::set_VolumeMaterial(::UnityEngine::Material*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"set_VolumeMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::SurfaceRenderer::get_WaterBodyCulling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_WaterBodyCulling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::set_WaterBodyCulling(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"set_WaterBodyCulling", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::RenderTexture> WaveHarmonic::Crest::SurfaceRenderer::get_HeightRT()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_HeightRT", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method);
}
template<typename T>
inline void WaveHarmonic::Crest::SurfaceRenderer::BindDisplacedSurfaceData(T  properties)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                    {"BindDisplacedSurfaceData", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, properties);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::UpdateDisplacedSurfaceData(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"UpdateDisplacedSurfaceData", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::UpdateDisplacedSurfaceData(::UnityEngine::Rendering::CommandBuffer*  commands, ::UnityEngine::Bounds  bounds, ::StringW  name, ::by_ref<::UnityEngine::RenderTexture*>  target, float_t  texel, int32_t  maximumResolution, ::by_ref<::WaveHarmonic::Crest::SurfaceRenderer_SurfaceDataParameters>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"UpdateDisplacedSurfaceData", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderTexture*>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::WaveHarmonic::Crest::SurfaceRenderer_SurfaceDataParameters>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, commands, bounds, name, target, texel, maximumResolution, parameters);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::OnBeginCameraRenderingLegacy(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"OnBeginCameraRenderingLegacy", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::OnEndCameraRenderingLegacy(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"OnEndCameraRenderingLegacy", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::Draw(::UnityEngine::Rendering::CommandBuffer*  commands, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"Draw", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, commands, camera);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::LegacyOnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"LegacyOnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::LegacyOnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"LegacyOnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::SetUpShadows(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"SetUpShadows", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline ::UnityW<::UnityEngine::Transform> WaveHarmonic::Crest::SurfaceRenderer::get_Root()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_Root", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::WaterChunkRenderer>>* WaveHarmonic::Crest::SurfaceRenderer::get_Chunks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_Chunks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::WaterChunkRenderer>>*>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::MaterialPropertyBlock*> WaveHarmonic::Crest::SurfaceRenderer::get_PerCascadeMPB()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_PerCascadeMPB", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::MaterialPropertyBlock*>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::set_PerCascadeMPB(::ArrayW<::UnityEngine::MaterialPropertyBlock*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"set_PerCascadeMPB", {}, {::i2c::type_of<::ArrayW<::UnityEngine::MaterialPropertyBlock*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Action_1<::UnityW<::UnityEngine::Renderer>>* WaveHarmonic::Crest::SurfaceRenderer::get_OnCreateChunkRenderer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_OnCreateChunkRenderer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityW<::UnityEngine::Renderer>>*>(nullptr, ___internal_method);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::set_OnCreateChunkRenderer(::System::Action_1<::UnityW<::UnityEngine::Renderer>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"set_OnCreateChunkRenderer", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Renderer>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> WaveHarmonic::Crest::SurfaceRenderer::get_AboveOrBelowSurfaceMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_AboveOrBelowSurfaceMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::SurfaceRenderer::get_IsQuadMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_IsQuadMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::SurfaceRenderer::get_ForceRenderingOff()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_ForceRenderingOff", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::set_ForceRenderingOff(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"set_ForceRenderingOff", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> WaveHarmonic::Crest::SurfaceRenderer::get_VisualizeDataMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_VisualizeDataMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::ShowHiddenObjects(bool  show)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"ShowHiddenObjects", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, show);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::UpdateChunkVisibility(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"UpdateChunkVisibility", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::RestoreCulling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"RestoreCulling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::UpdateMaterial(::UnityEngine::Material*  material, ::by_ref<::UnityEngine::Material*>  motion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"UpdateMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::by_ref<::UnityEngine::Material*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, material, motion);
}
inline bool WaveHarmonic::Crest::SurfaceRenderer::IsTransparent(::UnityEngine::Material*  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"IsTransparent", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, material);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::Rebuild()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"Rebuild", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::SurfaceRenderer::ShouldRender(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"ShouldRender", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, camera);
}
inline bool WaveHarmonic::Crest::SurfaceRenderer::ShouldCull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"ShouldCull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::OnBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"OnBeginCameraRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, camera);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::OnEndCameraRendering(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"OnEndCameraRendering", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::InitializeProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"InitializeProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::WritePerCameraMaterialParameters(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"WritePerCameraMaterialParameters", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::WritePerCascadeInstanceData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"WritePerCascadeInstanceData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::ApplyWaterBodyCulling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"ApplyWaterBodyCulling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::Render(::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Material*  material, int32_t  pass, bool  culled, ::UnityEngine::MaterialPropertyBlock*  mpb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"Render", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera, buffer, material, pass, culled, mpb);
}
inline bool WaveHarmonic::Crest::SurfaceRenderer::GetEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"GetEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::SetEnabled(bool  previous, bool  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"SetEnabled", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::SetLayer(int32_t  previous, int32_t  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"SetLayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline bool WaveHarmonic::Crest::SurfaceRenderer::GetCastShadows()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"GetCastShadows", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::SetCastShadows(bool  previous, bool  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"SetCastShadows", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::SetAllowRenderQueueSorting(bool  previous, bool  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"SetAllowRenderQueueSorting", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline bool WaveHarmonic::Crest::SurfaceRenderer::get_QueueMotionVectors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_QueueMotionVectors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Matrix4x4> WaveHarmonic::Crest::SurfaceRenderer::get_PreviousObjectToWorld()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_PreviousObjectToWorld", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Matrix4x4>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::set_PreviousObjectToWorld(::ArrayW<::UnityEngine::Matrix4x4>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"set_PreviousObjectToWorld", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::SurfaceRenderer::ShouldRenderMotionVectors(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"ShouldRenderMotionVectors", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::LateUpdateMotionVectors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"LateUpdateMotionVectors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::UpdateMotionVectorsMaterial(::UnityEngine::Material*  surface, ::by_ref<::UnityEngine::Material*>  motion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"UpdateMotionVectorsMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::by_ref<::UnityEngine::Material*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, surface, motion);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::LoadCameraData(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"LoadCameraData", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::RemoveCameraData(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"RemoveCameraData", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline ::ArrayW<::UnityEngine::Vector4> WaveHarmonic::Crest::SurfaceRenderer::get_NormalMapParameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"get_NormalMapParameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector4>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::set_NormalMapParameters(::ArrayW<::UnityEngine::Vector4>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"set_NormalMapParameters", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::LateUpdateQuadMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {"LateUpdateQuadMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SurfaceRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SurfaceRenderer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::SurfaceRenderer* WaveHarmonic::Crest::SurfaceRenderer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::SurfaceRenderer*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::SurfaceRenderer::SurfaceRenderer()   {
}
