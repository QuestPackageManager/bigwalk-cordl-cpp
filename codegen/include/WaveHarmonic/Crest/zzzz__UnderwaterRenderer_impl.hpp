#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/UnderwaterRenderer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__Versioned_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterCameraExclusion_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__UnderwaterRenderer_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeProfile_def.hpp"
#include "UnityEngine/Rendering/zzzz__Volume_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "WaveHarmonic/Crest/zzzz__MaskRenderer_def.hpp"
#include "WaveHarmonic/Crest/zzzz__SampleCollisionHelper_def.hpp"
#include "WaveHarmonic/Crest/zzzz__UnderwaterRenderer_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterBody_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterCameraExclusion_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
inline void WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs::setStaticF_s_CameraColorTexture(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_CameraColorTexture", ::WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs::getStaticF_s_CameraColorTexture()  {
return ::cordl_internals::getStaticField<int32_t, "s_CameraColorTexture", ::WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs::setStaticF_s_WaterVolumeStencil(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_WaterVolumeStencil", ::WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs::getStaticF_s_WaterVolumeStencil()  {
return ::cordl_internals::getStaticField<int32_t, "s_WaterVolumeStencil", ::WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs::setStaticF_s_AmbientLighting(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_AmbientLighting", ::WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs::getStaticF_s_AmbientLighting()  {
return ::cordl_internals::getStaticField<int32_t, "s_AmbientLighting", ::WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs::setStaticF_s_ExtinctionMultiplier(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_ExtinctionMultiplier", ::WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs::getStaticF_s_ExtinctionMultiplier()  {
return ::cordl_internals::getStaticField<int32_t, "s_ExtinctionMultiplier", ::WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs::setStaticF_s_UnderwaterEnvironmentalLightingWeight(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_UnderwaterEnvironmentalLightingWeight", ::WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs::getStaticF_s_UnderwaterEnvironmentalLightingWeight()  {
return ::cordl_internals::getStaticField<int32_t, "s_UnderwaterEnvironmentalLightingWeight", ::WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs::setStaticF_s_OutScatteringFactor(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_OutScatteringFactor", ::WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs::getStaticF_s_OutScatteringFactor()  {
return ::cordl_internals::getStaticField<int32_t, "s_OutScatteringFactor", ::WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs::setStaticF_s_OutScatteringExtinctionFactor(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_OutScatteringExtinctionFactor", ::WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs::getStaticF_s_OutScatteringExtinctionFactor()  {
return ::cordl_internals::getStaticField<int32_t, "s_OutScatteringExtinctionFactor", ::WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs::setStaticF_s_SunBoost(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_SunBoost", ::WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs::getStaticF_s_SunBoost()  {
return ::cordl_internals::getStaticField<int32_t, "s_SunBoost", ::WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs::setStaticF_s_DataSliceOffset(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_DataSliceOffset", ::WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs::getStaticF_s_DataSliceOffset()  {
return ::cordl_internals::getStaticField<int32_t, "s_DataSliceOffset", ::WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs::setStaticF_s_FarPlaneOffset(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_FarPlaneOffset", ::WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs::getStaticF_s_FarPlaneOffset()  {
return ::cordl_internals::getStaticField<int32_t, "s_FarPlaneOffset", ::WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs*>();
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs::UnderwaterRenderer_ShaderIDs()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::UnderwaterRenderer_EffectPass::UnderwaterRenderer_EffectPass(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::UnderwaterRenderer_EffectPass::UnderwaterRenderer_EffectPass()   {
}
constexpr ::WaveHarmonic::Crest::UnderwaterRenderer_EffectPass  WaveHarmonic::Crest::UnderwaterRenderer_EffectPass::FullScreen{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::UnderwaterRenderer_EffectPass  WaveHarmonic::Crest::UnderwaterRenderer_EffectPass::Reflections{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer_UnderwaterSphericalHarmonicsData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer_UnderwaterSphericalHarmonicsData::*)()>(&::WaveHarmonic::Crest::UnderwaterRenderer_UnderwaterSphericalHarmonicsData::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1825980b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer_UnderwaterSphericalHarmonicsData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Color>& WaveHarmonic::Crest::UnderwaterRenderer_UnderwaterSphericalHarmonicsData::__cordl_internal_get__AmbientLighting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AmbientLighting;
}
constexpr ::ArrayW<::UnityEngine::Color> const& WaveHarmonic::Crest::UnderwaterRenderer_UnderwaterSphericalHarmonicsData::__cordl_internal_get__AmbientLighting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AmbientLighting;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer_UnderwaterSphericalHarmonicsData::__cordl_internal_set__AmbientLighting(::ArrayW<::UnityEngine::Color>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AmbientLighting = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& WaveHarmonic::Crest::UnderwaterRenderer_UnderwaterSphericalHarmonicsData::__cordl_internal_get__DirectionsSH()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DirectionsSH;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& WaveHarmonic::Crest::UnderwaterRenderer_UnderwaterSphericalHarmonicsData::__cordl_internal_get__DirectionsSH() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DirectionsSH;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer_UnderwaterSphericalHarmonicsData::__cordl_internal_set__DirectionsSH(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DirectionsSH = value;
}
inline void WaveHarmonic::Crest::UnderwaterRenderer_UnderwaterSphericalHarmonicsData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer_UnderwaterSphericalHarmonicsData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::UnderwaterRenderer_UnderwaterSphericalHarmonicsData* WaveHarmonic::Crest::UnderwaterRenderer_UnderwaterSphericalHarmonicsData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::UnderwaterRenderer_UnderwaterSphericalHarmonicsData*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::UnderwaterRenderer_UnderwaterSphericalHarmonicsData::UnderwaterRenderer_UnderwaterSphericalHarmonicsData()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer_DebugFields._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer_DebugFields::*)()>(&::WaveHarmonic::Crest::UnderwaterRenderer_DebugFields::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer_DebugFields*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& WaveHarmonic::Crest::UnderwaterRenderer_DebugFields::__cordl_internal_get__VisualizeMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VisualizeMask;
}
constexpr bool const& WaveHarmonic::Crest::UnderwaterRenderer_DebugFields::__cordl_internal_get__VisualizeMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VisualizeMask;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer_DebugFields::__cordl_internal_set__VisualizeMask(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VisualizeMask = value;
}
constexpr bool& WaveHarmonic::Crest::UnderwaterRenderer_DebugFields::__cordl_internal_get__DisableMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisableMask;
}
constexpr bool const& WaveHarmonic::Crest::UnderwaterRenderer_DebugFields::__cordl_internal_get__DisableMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisableMask;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer_DebugFields::__cordl_internal_set__DisableMask(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DisableMask = value;
}
constexpr bool& WaveHarmonic::Crest::UnderwaterRenderer_DebugFields::__cordl_internal_get__VisualizeStencil()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VisualizeStencil;
}
constexpr bool const& WaveHarmonic::Crest::UnderwaterRenderer_DebugFields::__cordl_internal_get__VisualizeStencil() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VisualizeStencil;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer_DebugFields::__cordl_internal_set__VisualizeStencil(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VisualizeStencil = value;
}
constexpr bool& WaveHarmonic::Crest::UnderwaterRenderer_DebugFields::__cordl_internal_get__DisableHeightAboveWaterOptimization()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisableHeightAboveWaterOptimization;
}
constexpr bool const& WaveHarmonic::Crest::UnderwaterRenderer_DebugFields::__cordl_internal_get__DisableHeightAboveWaterOptimization() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisableHeightAboveWaterOptimization;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer_DebugFields::__cordl_internal_set__DisableHeightAboveWaterOptimization(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DisableHeightAboveWaterOptimization = value;
}
constexpr bool& WaveHarmonic::Crest::UnderwaterRenderer_DebugFields::__cordl_internal_get__DisableArtifactCorrection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisableArtifactCorrection;
}
constexpr bool const& WaveHarmonic::Crest::UnderwaterRenderer_DebugFields::__cordl_internal_get__DisableArtifactCorrection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisableArtifactCorrection;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer_DebugFields::__cordl_internal_set__DisableArtifactCorrection(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DisableArtifactCorrection = value;
}
constexpr bool& WaveHarmonic::Crest::UnderwaterRenderer_DebugFields::__cordl_internal_get__OnlyReflectionCameras()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnlyReflectionCameras;
}
constexpr bool const& WaveHarmonic::Crest::UnderwaterRenderer_DebugFields::__cordl_internal_get__OnlyReflectionCameras() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnlyReflectionCameras;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer_DebugFields::__cordl_internal_set__OnlyReflectionCameras(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnlyReflectionCameras = value;
}
inline void WaveHarmonic::Crest::UnderwaterRenderer_DebugFields::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer_DebugFields*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::UnderwaterRenderer_DebugFields* WaveHarmonic::Crest::UnderwaterRenderer_DebugFields::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::UnderwaterRenderer_DebugFields*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::UnderwaterRenderer_DebugFields::UnderwaterRenderer_DebugFields()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.get_AllCameras
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::UnderwaterRenderer::*)()>(&::WaveHarmonic::Crest::UnderwaterRenderer::get_AllCameras)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818ebf30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_AllCameras", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.set_AllCameras
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)(bool)>(&::WaveHarmonic::Crest::UnderwaterRenderer::set_AllCameras)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182597f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"set_AllCameras", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.get_CameraExclusions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::WaterCameraExclusion (::WaveHarmonic::Crest::UnderwaterRenderer::*)()>(&::WaveHarmonic::Crest::UnderwaterRenderer::get_CameraExclusions)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1820c7b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_CameraExclusions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.set_CameraExclusions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)(::WaveHarmonic::Crest::WaterCameraExclusion)>(&::WaveHarmonic::Crest::UnderwaterRenderer::set_CameraExclusions)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1820c8180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"set_CameraExclusions", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterCameraExclusion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.get_CopyWaterMaterialParametersEachFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::UnderwaterRenderer::*)()>(&::WaveHarmonic::Crest::UnderwaterRenderer::get_CopyWaterMaterialParametersEachFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182597e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_CopyWaterMaterialParametersEachFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.set_CopyWaterMaterialParametersEachFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)(bool)>(&::WaveHarmonic::Crest::UnderwaterRenderer::set_CopyWaterMaterialParametersEachFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182597f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"set_CopyWaterMaterialParametersEachFrame", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.get_CullLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::UnderwaterRenderer::*)()>(&::WaveHarmonic::Crest::UnderwaterRenderer::get_CullLimit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046c460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_CullLimit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.set_CullLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)(float_t)>(&::WaveHarmonic::Crest::UnderwaterRenderer::set_CullLimit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182597f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"set_CullLimit", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.get_EnableChunkCulling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::UnderwaterRenderer::*)()>(&::WaveHarmonic::Crest::UnderwaterRenderer::get_EnableChunkCulling)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1820c7bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_EnableChunkCulling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.set_EnableChunkCulling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)(bool)>(&::WaveHarmonic::Crest::UnderwaterRenderer::set_EnableChunkCulling)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18218b400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"set_EnableChunkCulling", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.get_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::UnderwaterRenderer::*)()>(&::WaveHarmonic::Crest::UnderwaterRenderer::get_Enabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181c48f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_Enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.set_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)(bool)>(&::WaveHarmonic::Crest::UnderwaterRenderer::set_Enabled)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x182597fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"set_Enabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.get_AffectsEnvironmentalLighting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::UnderwaterRenderer::*)()>(&::WaveHarmonic::Crest::UnderwaterRenderer::get_AffectsEnvironmentalLighting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1817d5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_AffectsEnvironmentalLighting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.set_AffectsEnvironmentalLighting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)(bool)>(&::WaveHarmonic::Crest::UnderwaterRenderer::set_AffectsEnvironmentalLighting)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x182597eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"set_AffectsEnvironmentalLighting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.get_EnvironmentalLightingWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::UnderwaterRenderer::*)()>(&::WaveHarmonic::Crest::UnderwaterRenderer::get_EnvironmentalLightingWeight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1821d28c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_EnvironmentalLightingWeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.set_EnvironmentalLightingWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)(float_t)>(&::WaveHarmonic::Crest::UnderwaterRenderer::set_EnvironmentalLightingWeight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1821d2b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"set_EnvironmentalLightingWeight", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.get_FarPlaneMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::UnderwaterRenderer::*)()>(&::WaveHarmonic::Crest::UnderwaterRenderer::get_FarPlaneMultiplier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825630d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_FarPlaneMultiplier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.set_FarPlaneMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)(float_t)>(&::WaveHarmonic::Crest::UnderwaterRenderer::set_FarPlaneMultiplier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825633a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"set_FarPlaneMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.get_Layer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::UnderwaterRenderer::*)()>(&::WaveHarmonic::Crest::UnderwaterRenderer::get_Layer)> {
  constexpr static std::size_t size = 0xa600;
  constexpr static std::size_t addrs = 0x1812fdd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_Layer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.set_Layer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)(int32_t)>(&::WaveHarmonic::Crest::UnderwaterRenderer::set_Layer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1820c8260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"set_Layer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.get_Material
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::WaveHarmonic::Crest::UnderwaterRenderer::*)()>(&::WaveHarmonic::Crest::UnderwaterRenderer::get_Material)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_Material", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.set_Material
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)(::UnityEngine::Material*)>(&::WaveHarmonic::Crest::UnderwaterRenderer::set_Material)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180337170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"set_Material", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.SetRenderTargetToBackBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::WaveHarmonic::Crest::UnderwaterRenderer::SetRenderTargetToBackBuffers)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1825965a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"SetRenderTargetToBackBuffers", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.CopyColorTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::WaveHarmonic::Crest::UnderwaterRenderer::CopyColorTexture)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1825945c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"CopyColorTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.SetupUnderwaterEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)()>(&::WaveHarmonic::Crest::UnderwaterRenderer::SetupUnderwaterEffect)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182594ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"SetupUnderwaterEffect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.OnPreRenderUnderwaterEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::UnderwaterRenderer::OnPreRenderUnderwaterEffect)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0x1825956a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"OnPreRenderUnderwaterEffect", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.ExecuteEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::CommandBuffer*, ::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*, ::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*, ::UnityEngine::MaterialPropertyBlock*)>(&::WaveHarmonic::Crest::UnderwaterRenderer::ExecuteEffect)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x182594890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"ExecuteEffect", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*>(), ::i2c::type_of<::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.UpdateGlobals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*)>(&::WaveHarmonic::Crest::UnderwaterRenderer::UpdateGlobals)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1825973d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"UpdateGlobals", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.UpdateEffectMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::UnderwaterRenderer::UpdateEffectMaterial)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x182596d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"UpdateEffectMaterial", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.EnableEnvironmentalLighting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)()>(&::WaveHarmonic::Crest::UnderwaterRenderer::EnableEnvironmentalLighting)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x182594730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"EnableEnvironmentalLighting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.DisableEnvironmentalLighting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)()>(&::WaveHarmonic::Crest::UnderwaterRenderer::DisableEnvironmentalLighting)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182594710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"DisableEnvironmentalLighting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.RestoreEnvironmentalLighting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)()>(&::WaveHarmonic::Crest::UnderwaterRenderer::RestoreEnvironmentalLighting)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x182596320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"RestoreEnvironmentalLighting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.UpdateEnvironmentalLighting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)(::UnityEngine::Camera*, ::UnityEngine::Vector3, float_t)>(&::WaveHarmonic::Crest::UnderwaterRenderer::UpdateEnvironmentalLighting)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x182597090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"UpdateEnvironmentalLighting", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.OnEnableLegacy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)()>(&::WaveHarmonic::Crest::UnderwaterRenderer::OnEnableLegacy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182594ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"OnEnableLegacy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.OnBeforeLegacyRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::UnderwaterRenderer::OnBeforeLegacyRender)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x182594ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"OnBeforeLegacyRender", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.OnAfterLegacyRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::UnderwaterRenderer::OnAfterLegacyRender)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182594c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"OnAfterLegacyRender", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.OnEnableMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)()>(&::WaveHarmonic::Crest::UnderwaterRenderer::OnEnableMask)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1825950c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"OnEnableMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.OnDisableMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)()>(&::WaveHarmonic::Crest::UnderwaterRenderer::OnDisableMask)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182594ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"OnDisableMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.SetUpArtifactsShader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)()>(&::WaveHarmonic::Crest::UnderwaterRenderer::SetUpArtifactsShader)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1825965f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"SetUpArtifactsShader", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.WaveHarmonic_Crest_MaskRenderer_IMaskProvider_OnMaskPass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*, ::WaveHarmonic::Crest::MaskRenderer*)>(&::WaveHarmonic::Crest::UnderwaterRenderer::WaveHarmonic_Crest_MaskRenderer_IMaskProvider_OnMaskPass)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1825979d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"WaveHarmonic.Crest.MaskRenderer.IMaskProvider.OnMaskPass", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::WaveHarmonic::Crest::MaskRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.RenderLineMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*, ::UnityEngine::RenderTextureDescriptor, ::UnityEngine::Rendering::RenderTargetIdentifier)>(&::WaveHarmonic::Crest::UnderwaterRenderer::RenderLineMask)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x182595f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"RenderLineMask", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.FixMaskArtefacts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor, ::UnityEngine::Rendering::RenderTargetIdentifier)>(&::WaveHarmonic::Crest::UnderwaterRenderer::FixMaskArtefacts)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1825949f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"FixMaskArtefacts", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.PopulateMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::UnderwaterRenderer::PopulateMask)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x182595ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"PopulateMask", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.WaveHarmonic_Crest_MaskRenderer_IMaskProvider_Allocate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::MaskRenderer_MaskInput (::WaveHarmonic::Crest::UnderwaterRenderer::*)()>(&::WaveHarmonic::Crest::UnderwaterRenderer::WaveHarmonic_Crest_MaskRenderer_IMaskProvider_Allocate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825979b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"WaveHarmonic.Crest.MaskRenderer.IMaskProvider.Allocate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.WaveHarmonic_Crest_MaskRenderer_IMaskReceiver_Allocate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::MaskRenderer_MaskInput (::WaveHarmonic::Crest::UnderwaterRenderer::*)()>(&::WaveHarmonic::Crest::UnderwaterRenderer::WaveHarmonic_Crest_MaskRenderer_IMaskReceiver_Allocate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825979b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"WaveHarmonic.Crest.MaskRenderer.IMaskReceiver.Allocate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.WaveHarmonic_Crest_MaskRenderer_IMaskProvider_Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::MaskRenderer_MaskInput (::WaveHarmonic::Crest::UnderwaterRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::UnderwaterRenderer::WaveHarmonic_Crest_MaskRenderer_IMaskProvider_Write)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182597b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"WaveHarmonic.Crest.MaskRenderer.IMaskProvider.Write", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.get_AfterCopyMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_2<::UnityW<::WaveHarmonic::Crest::WaterRenderer>,::UnityW<::UnityEngine::Material>>* (*)()>(&::WaveHarmonic::Crest::UnderwaterRenderer::get_AfterCopyMaterial)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182597e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_AfterCopyMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.set_AfterCopyMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityW<::WaveHarmonic::Crest::WaterRenderer>,::UnityW<::UnityEngine::Material>>*)>(&::WaveHarmonic::Crest::UnderwaterRenderer::set_AfterCopyMaterial)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182597f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"set_AfterCopyMaterial", {}, {::i2c::type_of<::System::Action_2<::UnityW<::WaveHarmonic::Crest::WaterRenderer>,::UnityW<::UnityEngine::Material>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.get_UseLegacyMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::UnderwaterRenderer::*)()>(&::WaveHarmonic::Crest::UnderwaterRenderer::get_UseLegacyMask)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_UseLegacyMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.get_RenderBeforeTransparency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::UnderwaterRenderer::*)()>(&::WaveHarmonic::Crest::UnderwaterRenderer::get_RenderBeforeTransparency)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_RenderBeforeTransparency", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.get_Portaled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::UnderwaterRenderer::*)()>(&::WaveHarmonic::Crest::UnderwaterRenderer::get_Portaled)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182597e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_Portaled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.get_UseStencilBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::UnderwaterRenderer::*)()>(&::WaveHarmonic::Crest::UnderwaterRenderer::get_UseStencilBuffer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182194110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_UseStencilBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.set_UseStencilBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)(bool)>(&::WaveHarmonic::Crest::UnderwaterRenderer::set_UseStencilBuffer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182194220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"set_UseStencilBuffer", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.get_RequiresFullScreenMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::UnderwaterRenderer::*)()>(&::WaveHarmonic::Crest::UnderwaterRenderer::get_RequiresFullScreenMask)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1821940c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_RequiresFullScreenMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.set_RequiresFullScreenMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)(bool)>(&::WaveHarmonic::Crest::UnderwaterRenderer::set_RequiresFullScreenMask)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182194210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"set_RequiresFullScreenMask", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.get_NeedsColorTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::UnderwaterRenderer::*)()>(&::WaveHarmonic::Crest::UnderwaterRenderer::get_NeedsColorTexture)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182194020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_NeedsColorTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.set_NeedsColorTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)(bool)>(&::WaveHarmonic::Crest::UnderwaterRenderer::set_NeedsColorTexture)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1821941b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"set_NeedsColorTexture", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)()>(&::WaveHarmonic::Crest::UnderwaterRenderer::OnEnable)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x1825951b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)()>(&::WaveHarmonic::Crest::UnderwaterRenderer::OnDisable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182594f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)()>(&::WaveHarmonic::Crest::UnderwaterRenderer::OnDestroy)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182594e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.ShouldRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::UnderwaterRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::UnderwaterRenderer::ShouldRender)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x182596680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"ShouldRender", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.OnBeginCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::UnderwaterRenderer::OnBeginCameraRendering)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x182594d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"OnBeginCameraRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.UpdateRenderingParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)()>(&::WaveHarmonic::Crest::UnderwaterRenderer::UpdateRenderingParameters)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x1825975d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"UpdateRenderingParameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.UpdateChunkCulling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::UnderwaterRenderer::UpdateChunkCulling)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x182596a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"UpdateChunkCulling", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.OnEndCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::UnderwaterRenderer::OnEndCameraRendering)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x182595580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"OnEndCameraRendering", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.ExecuteHeightField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::UnderwaterRenderer::ExecuteHeightField)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1825949a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"ExecuteHeightField", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.SetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)(bool, bool)>(&::WaveHarmonic::Crest::UnderwaterRenderer::SetEnabled)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1825964a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"SetEnabled", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer.SetAffectsEnvironmentalLighting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)(bool, bool)>(&::WaveHarmonic::Crest::UnderwaterRenderer::SetAffectsEnvironmentalLighting)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182596420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"SetAffectsEnvironmentalLighting", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterRenderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterRenderer::*)()>(&::WaveHarmonic::Crest::UnderwaterRenderer::_ctor)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x182597bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::CommandBuffer*& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__EffectCommandBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EffectCommandBuffer;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__EffectCommandBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EffectCommandBuffer;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__EffectCommandBuffer(::UnityEngine::Rendering::CommandBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EffectCommandBuffer = value;
}
constexpr ::UnityW<::UnityEngine::Material>& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__CurrentWaterMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentWaterMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__CurrentWaterMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentWaterMaterial;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__CurrentWaterMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentWaterMaterial = value;
}
constexpr ::WaveHarmonic::Crest::UnderwaterRenderer_UnderwaterSphericalHarmonicsData*& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__SphericalHarmonicsData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SphericalHarmonicsData;
}
constexpr ::WaveHarmonic::Crest::UnderwaterRenderer_UnderwaterSphericalHarmonicsData* const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__SphericalHarmonicsData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SphericalHarmonicsData;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__SphericalHarmonicsData(::WaveHarmonic::Crest::UnderwaterRenderer_UnderwaterSphericalHarmonicsData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SphericalHarmonicsData = value;
}
constexpr ::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__CopyColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CopyColor;
}
constexpr ::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>* const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__CopyColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CopyColor;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__CopyColor(::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CopyColor = value;
}
constexpr ::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__SetRenderTargetToBackBuffers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SetRenderTargetToBackBuffers;
}
constexpr ::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>* const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__SetRenderTargetToBackBuffers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SetRenderTargetToBackBuffers;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__SetRenderTargetToBackBuffers(::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SetRenderTargetToBackBuffers = value;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__ColorTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ColorTarget;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__ColorTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ColorTarget;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__ColorTarget(::UnityEngine::Rendering::RenderTargetIdentifier  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ColorTarget = value;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__DepthStencilTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DepthStencilTarget;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__DepthStencilTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DepthStencilTarget;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__DepthStencilTarget(::UnityEngine::Rendering::RenderTargetIdentifier  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DepthStencilTarget = value;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__ColorCopyTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ColorCopyTarget;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__ColorCopyTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ColorCopyTarget;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__ColorCopyTarget(::UnityEngine::Rendering::RenderTargetIdentifier  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ColorCopyTarget = value;
}
constexpr ::UnityW<::UnityEngine::Light>& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__EnvironmentalLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnvironmentalLight;
}
constexpr ::UnityW<::UnityEngine::Light> const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__EnvironmentalLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnvironmentalLight;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__EnvironmentalLight(::UnityW<::UnityEngine::Light>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EnvironmentalLight = value;
}
constexpr float_t& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__EnvironmentalLightIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnvironmentalLightIntensity;
}
constexpr float_t const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__EnvironmentalLightIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnvironmentalLightIntensity;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__EnvironmentalLightIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EnvironmentalLightIntensity = value;
}
constexpr float_t& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__EnvironmentalAmbientIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnvironmentalAmbientIntensity;
}
constexpr float_t const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__EnvironmentalAmbientIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnvironmentalAmbientIntensity;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__EnvironmentalAmbientIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EnvironmentalAmbientIntensity = value;
}
constexpr float_t& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__EnvironmentalReflectionIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnvironmentalReflectionIntensity;
}
constexpr float_t const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__EnvironmentalReflectionIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnvironmentalReflectionIntensity;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__EnvironmentalReflectionIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EnvironmentalReflectionIntensity = value;
}
constexpr float_t& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__EnvironmentalFogDensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnvironmentalFogDensity;
}
constexpr float_t const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__EnvironmentalFogDensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnvironmentalFogDensity;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__EnvironmentalFogDensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EnvironmentalFogDensity = value;
}
constexpr float_t& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__EnvironmentalAverageDensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnvironmentalAverageDensity;
}
constexpr float_t const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__EnvironmentalAverageDensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnvironmentalAverageDensity;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__EnvironmentalAverageDensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EnvironmentalAverageDensity = value;
}
constexpr bool& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__EnvironmentalInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnvironmentalInitialized;
}
constexpr bool const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__EnvironmentalInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnvironmentalInitialized;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__EnvironmentalInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EnvironmentalInitialized = value;
}
constexpr bool& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__EnvironmentalNeedsRestoring()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnvironmentalNeedsRestoring;
}
constexpr bool const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__EnvironmentalNeedsRestoring() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnvironmentalNeedsRestoring;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__EnvironmentalNeedsRestoring(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EnvironmentalNeedsRestoring = value;
}
constexpr bool& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__HasEffectCommandBuffersBeenRegistered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasEffectCommandBuffersBeenRegistered;
}
constexpr bool const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__HasEffectCommandBuffersBeenRegistered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasEffectCommandBuffersBeenRegistered;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__HasEffectCommandBuffersBeenRegistered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HasEffectCommandBuffersBeenRegistered = value;
}
constexpr ::UnityW<::UnityEngine::Material>& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__MaskMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaskMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__MaskMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaskMaterial;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__MaskMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaskMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__HorizonMaskMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HorizonMaskMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__HorizonMaskMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HorizonMaskMaterial;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__HorizonMaskMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HorizonMaskMaterial = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__ArtifactsShader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ArtifactsShader;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__ArtifactsShader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ArtifactsShader;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__ArtifactsShader(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ArtifactsShader = value;
}
constexpr bool& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__ArtifactsShaderInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ArtifactsShaderInitialized;
}
constexpr bool const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__ArtifactsShaderInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ArtifactsShaderInitialized;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__ArtifactsShaderInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ArtifactsShaderInitialized = value;
}
constexpr int32_t& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__ArtifactsKernel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ArtifactsKernel;
}
constexpr int32_t const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__ArtifactsKernel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ArtifactsKernel;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__ArtifactsKernel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ArtifactsKernel = value;
}
constexpr uint32_t& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__ArtifactsThreadGroupSizeX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ArtifactsThreadGroupSizeX;
}
constexpr uint32_t const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__ArtifactsThreadGroupSizeX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ArtifactsThreadGroupSizeX;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__ArtifactsThreadGroupSizeX(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ArtifactsThreadGroupSizeX = value;
}
constexpr uint32_t& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__ArtifactsThreadGroupSizeY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ArtifactsThreadGroupSizeY;
}
constexpr uint32_t const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__ArtifactsThreadGroupSizeY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ArtifactsThreadGroupSizeY;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__ArtifactsThreadGroupSizeY(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ArtifactsThreadGroupSizeY = value;
}
constexpr bool& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__MaskRead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaskRead;
}
constexpr bool const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__MaskRead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaskRead;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__MaskRead(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaskRead = value;
}
constexpr bool& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__Enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Enabled;
}
constexpr bool const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__Enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Enabled;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__Enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Enabled = value;
}
constexpr int32_t& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__Layer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Layer;
}
constexpr int32_t const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__Layer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Layer;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__Layer(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Layer = value;
}
constexpr ::UnityW<::UnityEngine::Material>& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__Material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Material;
}
constexpr ::UnityW<::UnityEngine::Material> const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__Material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Material;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__Material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Material = value;
}
constexpr bool& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__EnvironmentalLightingEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnvironmentalLightingEnable;
}
constexpr bool const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__EnvironmentalLightingEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnvironmentalLightingEnable;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__EnvironmentalLightingEnable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EnvironmentalLightingEnable = value;
}
constexpr float_t& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__EnvironmentalLightingWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnvironmentalLightingWeight;
}
constexpr float_t const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__EnvironmentalLightingWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnvironmentalLightingWeight;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__EnvironmentalLightingWeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EnvironmentalLightingWeight = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile>& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__EnvironmentalLightingVolumeProfile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnvironmentalLightingVolumeProfile;
}
constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile> const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__EnvironmentalLightingVolumeProfile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnvironmentalLightingVolumeProfile;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__EnvironmentalLightingVolumeProfile(::UnityW<::UnityEngine::Rendering::VolumeProfile>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EnvironmentalLightingVolumeProfile = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Volume>& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__EnvironmentalLightingVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnvironmentalLightingVolume;
}
constexpr ::UnityW<::UnityEngine::Rendering::Volume> const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__EnvironmentalLightingVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnvironmentalLightingVolume;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__EnvironmentalLightingVolume(::UnityW<::UnityEngine::Rendering::Volume>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EnvironmentalLightingVolume = value;
}
constexpr ::WaveHarmonic::Crest::WaterCameraExclusion& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__CameraExclusions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraExclusions;
}
constexpr ::WaveHarmonic::Crest::WaterCameraExclusion const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__CameraExclusions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraExclusions;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__CameraExclusions(::WaveHarmonic::Crest::WaterCameraExclusion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CameraExclusions = value;
}
constexpr bool& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__CopyWaterMaterialParametersEachFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CopyWaterMaterialParametersEachFrame;
}
constexpr bool const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__CopyWaterMaterialParametersEachFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CopyWaterMaterialParametersEachFrame;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__CopyWaterMaterialParametersEachFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CopyWaterMaterialParametersEachFrame = value;
}
constexpr float_t& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__FarPlaneMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FarPlaneMultiplier;
}
constexpr float_t const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__FarPlaneMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FarPlaneMultiplier;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__FarPlaneMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FarPlaneMultiplier = value;
}
constexpr bool& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__EnableChunkCulling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnableChunkCulling;
}
constexpr bool const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__EnableChunkCulling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnableChunkCulling;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__EnableChunkCulling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EnableChunkCulling = value;
}
constexpr float_t& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__CullLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CullLimit;
}
constexpr float_t const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__CullLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CullLimit;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__CullLimit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CullLimit = value;
}
constexpr ::WaveHarmonic::Crest::UnderwaterRenderer_DebugFields*& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__Debug()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Debug;
}
constexpr ::WaveHarmonic::Crest::UnderwaterRenderer_DebugFields* const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__Debug() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Debug;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__Debug(::WaveHarmonic::Crest::UnderwaterRenderer_DebugFields*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Debug = value;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__Water()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Water;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__Water() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Water;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__Water(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Water = value;
}
constexpr int32_t& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__MaterialLastUpdatedFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaterialLastUpdatedFrame;
}
constexpr int32_t const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__MaterialLastUpdatedFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaterialLastUpdatedFrame;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__MaterialLastUpdatedFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaterialLastUpdatedFrame = value;
}
constexpr bool& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__UseStencilBuffer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseStencilBuffer_k__BackingField;
}
constexpr bool const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__UseStencilBuffer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseStencilBuffer_k__BackingField;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__UseStencilBuffer_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UseStencilBuffer_k__BackingField = value;
}
constexpr bool& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__RequiresFullScreenMask_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RequiresFullScreenMask_k__BackingField;
}
constexpr bool const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__RequiresFullScreenMask_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RequiresFullScreenMask_k__BackingField;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__RequiresFullScreenMask_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RequiresFullScreenMask_k__BackingField = value;
}
constexpr bool& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__NeedsColorTexture_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NeedsColorTexture_k__BackingField;
}
constexpr bool const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__NeedsColorTexture_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NeedsColorTexture_k__BackingField;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__NeedsColorTexture_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NeedsColorTexture_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Material>& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__SurfaceMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SurfaceMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__SurfaceMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SurfaceMaterial;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__SurfaceMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SurfaceMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__VolumeMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VolumeMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__VolumeMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VolumeMaterial;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__VolumeMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VolumeMaterial = value;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaterBody>& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__CurrentWaterBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentWaterBody;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaterBody> const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__CurrentWaterBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentWaterBody;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__CurrentWaterBody(::UnityW<::WaveHarmonic::Crest::WaterBody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentWaterBody = value;
}
constexpr bool& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__WaterBodyCulled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaterBodyCulled;
}
constexpr bool const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__WaterBodyCulled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaterBodyCulled;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__WaterBodyCulled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WaterBodyCulled = value;
}
constexpr float_t& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__MinimumFogDensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MinimumFogDensity;
}
constexpr float_t const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__MinimumFogDensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MinimumFogDensity;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__MinimumFogDensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MinimumFogDensity = value;
}
constexpr ::UnityEngine::Vector3& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__Extinction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Extinction;
}
constexpr ::UnityEngine::Vector3 const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__Extinction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Extinction;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__Extinction(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Extinction = value;
}
constexpr ::WaveHarmonic::Crest::SampleCollisionHelper*& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__SamplingHeightHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SamplingHeightHelper;
}
constexpr ::WaveHarmonic::Crest::SampleCollisionHelper* const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__SamplingHeightHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SamplingHeightHelper;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__SamplingHeightHelper(::WaveHarmonic::Crest::SampleCollisionHelper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SamplingHeightHelper = value;
}
constexpr float_t& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__ViewerWaterHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ViewerWaterHeight;
}
constexpr float_t const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__ViewerWaterHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ViewerWaterHeight;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__ViewerWaterHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ViewerWaterHeight = value;
}
constexpr bool& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__AllCameras()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllCameras;
}
constexpr bool const& WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_get__AllCameras() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllCameras;
}
constexpr void WaveHarmonic::Crest::UnderwaterRenderer::__cordl_internal_set__AllCameras(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AllCameras = value;
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::setStaticF_s_SampleSphericalHarmonicsMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_SampleSphericalHarmonicsMarker", ::WaveHarmonic::Crest::UnderwaterRenderer*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker WaveHarmonic::Crest::UnderwaterRenderer::getStaticF_s_SampleSphericalHarmonicsMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_SampleSphericalHarmonicsMarker", ::WaveHarmonic::Crest::UnderwaterRenderer*>();
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::setStaticF__AfterCopyMaterial_k__BackingField(::System::Action_2<::UnityW<::WaveHarmonic::Crest::WaterRenderer>,::UnityW<::UnityEngine::Material>>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityW<::WaveHarmonic::Crest::WaterRenderer>,::UnityW<::UnityEngine::Material>>*, "<AfterCopyMaterial>k__BackingField", ::WaveHarmonic::Crest::UnderwaterRenderer*>(std::forward<::System::Action_2<::UnityW<::WaveHarmonic::Crest::WaterRenderer>,::UnityW<::UnityEngine::Material>>*>(value));
}
inline ::System::Action_2<::UnityW<::WaveHarmonic::Crest::WaterRenderer>,::UnityW<::UnityEngine::Material>>* WaveHarmonic::Crest::UnderwaterRenderer::getStaticF__AfterCopyMaterial_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::WaveHarmonic::Crest::WaterRenderer>,::UnityW<::UnityEngine::Material>>*, "<AfterCopyMaterial>k__BackingField", ::WaveHarmonic::Crest::UnderwaterRenderer*>();
}
inline bool WaveHarmonic::Crest::UnderwaterRenderer::get_AllCameras()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_AllCameras", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::set_AllCameras(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"set_AllCameras", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::WaterCameraExclusion WaveHarmonic::Crest::UnderwaterRenderer::get_CameraExclusions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_CameraExclusions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::WaterCameraExclusion>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::set_CameraExclusions(::WaveHarmonic::Crest::WaterCameraExclusion  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"set_CameraExclusions", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterCameraExclusion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::UnderwaterRenderer::get_CopyWaterMaterialParametersEachFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_CopyWaterMaterialParametersEachFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::set_CopyWaterMaterialParametersEachFrame(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"set_CopyWaterMaterialParametersEachFrame", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::UnderwaterRenderer::get_CullLimit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_CullLimit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::set_CullLimit(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"set_CullLimit", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::UnderwaterRenderer::get_EnableChunkCulling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_EnableChunkCulling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::set_EnableChunkCulling(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"set_EnableChunkCulling", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::UnderwaterRenderer::get_Enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_Enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::set_Enabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"set_Enabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::UnderwaterRenderer::get_AffectsEnvironmentalLighting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_AffectsEnvironmentalLighting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::set_AffectsEnvironmentalLighting(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"set_AffectsEnvironmentalLighting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::UnderwaterRenderer::get_EnvironmentalLightingWeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_EnvironmentalLightingWeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::set_EnvironmentalLightingWeight(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"set_EnvironmentalLightingWeight", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::UnderwaterRenderer::get_FarPlaneMultiplier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_FarPlaneMultiplier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::set_FarPlaneMultiplier(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"set_FarPlaneMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t WaveHarmonic::Crest::UnderwaterRenderer::get_Layer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_Layer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::set_Layer(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"set_Layer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> WaveHarmonic::Crest::UnderwaterRenderer::get_Material()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_Material", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::set_Material(::UnityEngine::Material*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"set_Material", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::SetRenderTargetToBackBuffers(::UnityEngine::Rendering::CommandBuffer*  commands)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"SetRenderTargetToBackBuffers", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, commands);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::CopyColorTexture(::UnityEngine::Rendering::CommandBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"CopyColorTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::SetupUnderwaterEffect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"SetupUnderwaterEffect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::OnPreRenderUnderwaterEffect(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"OnPreRenderUnderwaterEffect", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::ExecuteEffect(::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*  copyColor, ::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*  resetRenderTargets, ::UnityEngine::MaterialPropertyBlock*  properties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"ExecuteEffect", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*>(), ::i2c::type_of<::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera, buffer, copyColor, resetRenderTargets, properties);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::UpdateGlobals(::UnityEngine::Material*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"UpdateGlobals", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::UpdateEffectMaterial(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"UpdateEffectMaterial", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::EnableEnvironmentalLighting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"EnableEnvironmentalLighting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::DisableEnvironmentalLighting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"DisableEnvironmentalLighting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::RestoreEnvironmentalLighting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"RestoreEnvironmentalLighting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::UpdateEnvironmentalLighting(::UnityEngine::Camera*  camera, ::UnityEngine::Vector3  extinction, float_t  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"UpdateEnvironmentalLighting", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera, extinction, height);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::OnEnableLegacy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"OnEnableLegacy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::OnBeforeLegacyRender(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"OnBeforeLegacyRender", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::OnAfterLegacyRender(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"OnAfterLegacyRender", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::OnEnableMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"OnEnableMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::OnDisableMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"OnDisableMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::SetUpArtifactsShader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"SetUpArtifactsShader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::WaveHarmonic_Crest_MaskRenderer_IMaskProvider_OnMaskPass(::UnityEngine::Rendering::CommandBuffer*  commands, ::UnityEngine::Camera*  camera, ::WaveHarmonic::Crest::MaskRenderer*  mask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"WaveHarmonic.Crest.MaskRenderer.IMaskProvider.OnMaskPass", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::WaveHarmonic::Crest::MaskRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, commands, camera, mask);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::RenderLineMask(::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Camera*  camera, ::UnityEngine::RenderTextureDescriptor  descriptor, ::UnityEngine::Rendering::RenderTargetIdentifier  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"RenderLineMask", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, camera, descriptor, target);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::FixMaskArtefacts(::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::RenderTextureDescriptor  descriptor, ::UnityEngine::Rendering::RenderTargetIdentifier  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"FixMaskArtefacts", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, descriptor, target);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::PopulateMask(::UnityEngine::Rendering::CommandBuffer*  commandBuffer, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"PopulateMask", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, commandBuffer, camera);
}
inline ::WaveHarmonic::Crest::MaskRenderer_MaskInput WaveHarmonic::Crest::UnderwaterRenderer::WaveHarmonic_Crest_MaskRenderer_IMaskProvider_Allocate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"WaveHarmonic.Crest.MaskRenderer.IMaskProvider.Allocate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::MaskRenderer_MaskInput>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::MaskRenderer_MaskInput WaveHarmonic::Crest::UnderwaterRenderer::WaveHarmonic_Crest_MaskRenderer_IMaskReceiver_Allocate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"WaveHarmonic.Crest.MaskRenderer.IMaskReceiver.Allocate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::MaskRenderer_MaskInput>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::MaskRenderer_MaskInput WaveHarmonic::Crest::UnderwaterRenderer::WaveHarmonic_Crest_MaskRenderer_IMaskProvider_Write(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"WaveHarmonic.Crest.MaskRenderer.IMaskProvider.Write", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::MaskRenderer_MaskInput>(this, ___internal_method, camera);
}
inline ::System::Action_2<::UnityW<::WaveHarmonic::Crest::WaterRenderer>,::UnityW<::UnityEngine::Material>>* WaveHarmonic::Crest::UnderwaterRenderer::get_AfterCopyMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_AfterCopyMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_2<::UnityW<::WaveHarmonic::Crest::WaterRenderer>,::UnityW<::UnityEngine::Material>>*>(nullptr, ___internal_method);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::set_AfterCopyMaterial(::System::Action_2<::UnityW<::WaveHarmonic::Crest::WaterRenderer>,::UnityW<::UnityEngine::Material>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"set_AfterCopyMaterial", {}, {::i2c::type_of<::System::Action_2<::UnityW<::WaveHarmonic::Crest::WaterRenderer>,::UnityW<::UnityEngine::Material>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::UnderwaterRenderer::get_UseLegacyMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_UseLegacyMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::UnderwaterRenderer::get_RenderBeforeTransparency()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_RenderBeforeTransparency", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::UnderwaterRenderer::get_Portaled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_Portaled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::UnderwaterRenderer::get_UseStencilBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_UseStencilBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::set_UseStencilBuffer(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"set_UseStencilBuffer", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::UnderwaterRenderer::get_RequiresFullScreenMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_RequiresFullScreenMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::set_RequiresFullScreenMask(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"set_RequiresFullScreenMask", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::UnderwaterRenderer::get_NeedsColorTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"get_NeedsColorTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::set_NeedsColorTexture(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"set_NeedsColorTexture", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::UnderwaterRenderer::ShouldRender(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"ShouldRender", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::OnBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"OnBeginCameraRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, camera);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::UpdateRenderingParameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"UpdateRenderingParameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::UpdateChunkCulling(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"UpdateChunkCulling", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::OnEndCameraRendering(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"OnEndCameraRendering", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::ExecuteHeightField(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"ExecuteHeightField", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::SetEnabled(bool  previous, bool  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"SetEnabled", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::SetAffectsEnvironmentalLighting(bool  previous, bool  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {"SetAffectsEnvironmentalLighting", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline void WaveHarmonic::Crest::UnderwaterRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterRenderer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::UnderwaterRenderer* WaveHarmonic::Crest::UnderwaterRenderer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::UnderwaterRenderer*>());
}
/// @brief Convert operator to "::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver"
constexpr  WaveHarmonic::Crest::UnderwaterRenderer::operator ::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver*() noexcept {
return static_cast<::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver"
constexpr ::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver* WaveHarmonic::Crest::UnderwaterRenderer::i___WaveHarmonic__Crest__MaskRenderer_IMaskReceiver() noexcept {
return static_cast<::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::MaskRenderer_IMaskProvider"
constexpr  WaveHarmonic::Crest::UnderwaterRenderer::operator ::WaveHarmonic::Crest::MaskRenderer_IMaskProvider*() noexcept {
return static_cast<::WaveHarmonic::Crest::MaskRenderer_IMaskProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::MaskRenderer_IMaskProvider"
constexpr ::WaveHarmonic::Crest::MaskRenderer_IMaskProvider* WaveHarmonic::Crest::UnderwaterRenderer::i___WaveHarmonic__Crest__MaskRenderer_IMaskProvider() noexcept {
return static_cast<::WaveHarmonic::Crest::MaskRenderer_IMaskProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::UnderwaterRenderer::UnderwaterRenderer()   {
}
