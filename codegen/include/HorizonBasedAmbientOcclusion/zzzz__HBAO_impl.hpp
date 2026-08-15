#pragma once
// IWYU pragma private; include "HorizonBasedAmbientOcclusion/HBAO.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_impl.hpp"
#include "UnityEngine/zzzz__RenderingPath_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "HorizonBasedAmbientOcclusion/zzzz__HBAO_def.hpp"
#include "HorizonBasedAmbientOcclusion/zzzz__HBAO_def.hpp"
#include "UnityEngine/Rendering/zzzz__CameraEvent_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_def.hpp"
#include "UnityEngine/zzzz__RenderTextureReadWrite_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HorizonBasedAmbientOcclusion::HBAO_Preset::HBAO_Preset(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::HBAO_Preset::HBAO_Preset()   {
}
constexpr ::HorizonBasedAmbientOcclusion::HBAO_Preset  HorizonBasedAmbientOcclusion::HBAO_Preset::FastestPerformance{static_cast<int32_t>(0x0)};
constexpr ::HorizonBasedAmbientOcclusion::HBAO_Preset  HorizonBasedAmbientOcclusion::HBAO_Preset::FastPerformance{static_cast<int32_t>(0x1)};
constexpr ::HorizonBasedAmbientOcclusion::HBAO_Preset  HorizonBasedAmbientOcclusion::HBAO_Preset::Normal{static_cast<int32_t>(0x2)};
constexpr ::HorizonBasedAmbientOcclusion::HBAO_Preset  HorizonBasedAmbientOcclusion::HBAO_Preset::HighQuality{static_cast<int32_t>(0x3)};
constexpr ::HorizonBasedAmbientOcclusion::HBAO_Preset  HorizonBasedAmbientOcclusion::HBAO_Preset::HighestQuality{static_cast<int32_t>(0x4)};
constexpr ::HorizonBasedAmbientOcclusion::HBAO_Preset  HorizonBasedAmbientOcclusion::HBAO_Preset::Custom{static_cast<int32_t>(0x5)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HorizonBasedAmbientOcclusion::HBAO_PipelineStage::HBAO_PipelineStage(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::HBAO_PipelineStage::HBAO_PipelineStage()   {
}
constexpr ::HorizonBasedAmbientOcclusion::HBAO_PipelineStage  HorizonBasedAmbientOcclusion::HBAO_PipelineStage::BeforeImageEffectsOpaque{static_cast<int32_t>(0x0)};
constexpr ::HorizonBasedAmbientOcclusion::HBAO_PipelineStage  HorizonBasedAmbientOcclusion::HBAO_PipelineStage::AfterLighting{static_cast<int32_t>(0x1)};
constexpr ::HorizonBasedAmbientOcclusion::HBAO_PipelineStage  HorizonBasedAmbientOcclusion::HBAO_PipelineStage::BeforeReflections{static_cast<int32_t>(0x2)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HorizonBasedAmbientOcclusion::HBAO_Quality::HBAO_Quality(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::HBAO_Quality::HBAO_Quality()   {
}
constexpr ::HorizonBasedAmbientOcclusion::HBAO_Quality  HorizonBasedAmbientOcclusion::HBAO_Quality::Lowest{static_cast<int32_t>(0x0)};
constexpr ::HorizonBasedAmbientOcclusion::HBAO_Quality  HorizonBasedAmbientOcclusion::HBAO_Quality::Low{static_cast<int32_t>(0x1)};
constexpr ::HorizonBasedAmbientOcclusion::HBAO_Quality  HorizonBasedAmbientOcclusion::HBAO_Quality::Medium{static_cast<int32_t>(0x2)};
constexpr ::HorizonBasedAmbientOcclusion::HBAO_Quality  HorizonBasedAmbientOcclusion::HBAO_Quality::High{static_cast<int32_t>(0x3)};
constexpr ::HorizonBasedAmbientOcclusion::HBAO_Quality  HorizonBasedAmbientOcclusion::HBAO_Quality::Highest{static_cast<int32_t>(0x4)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HorizonBasedAmbientOcclusion::HBAO_Resolution::HBAO_Resolution(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::HBAO_Resolution::HBAO_Resolution()   {
}
constexpr ::HorizonBasedAmbientOcclusion::HBAO_Resolution  HorizonBasedAmbientOcclusion::HBAO_Resolution::Full{static_cast<int32_t>(0x0)};
constexpr ::HorizonBasedAmbientOcclusion::HBAO_Resolution  HorizonBasedAmbientOcclusion::HBAO_Resolution::Half{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HorizonBasedAmbientOcclusion::HBAO_NoiseType::HBAO_NoiseType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::HBAO_NoiseType::HBAO_NoiseType()   {
}
constexpr ::HorizonBasedAmbientOcclusion::HBAO_NoiseType  HorizonBasedAmbientOcclusion::HBAO_NoiseType::Dither{static_cast<int32_t>(0x0)};
constexpr ::HorizonBasedAmbientOcclusion::HBAO_NoiseType  HorizonBasedAmbientOcclusion::HBAO_NoiseType::InterleavedGradientNoise{static_cast<int32_t>(0x1)};
constexpr ::HorizonBasedAmbientOcclusion::HBAO_NoiseType  HorizonBasedAmbientOcclusion::HBAO_NoiseType::SpatialDistribution{static_cast<int32_t>(0x2)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HorizonBasedAmbientOcclusion::HBAO_Deinterleaving::HBAO_Deinterleaving(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::HBAO_Deinterleaving::HBAO_Deinterleaving()   {
}
constexpr ::HorizonBasedAmbientOcclusion::HBAO_Deinterleaving  HorizonBasedAmbientOcclusion::HBAO_Deinterleaving::Disabled{static_cast<int32_t>(0x0)};
constexpr ::HorizonBasedAmbientOcclusion::HBAO_Deinterleaving  HorizonBasedAmbientOcclusion::HBAO_Deinterleaving::x4{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HorizonBasedAmbientOcclusion::HBAO_DebugMode::HBAO_DebugMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::HBAO_DebugMode::HBAO_DebugMode()   {
}
constexpr ::HorizonBasedAmbientOcclusion::HBAO_DebugMode  HorizonBasedAmbientOcclusion::HBAO_DebugMode::Disabled{static_cast<int32_t>(0x0)};
constexpr ::HorizonBasedAmbientOcclusion::HBAO_DebugMode  HorizonBasedAmbientOcclusion::HBAO_DebugMode::AOOnly{static_cast<int32_t>(0x1)};
constexpr ::HorizonBasedAmbientOcclusion::HBAO_DebugMode  HorizonBasedAmbientOcclusion::HBAO_DebugMode::ColorBleedingOnly{static_cast<int32_t>(0x2)};
constexpr ::HorizonBasedAmbientOcclusion::HBAO_DebugMode  HorizonBasedAmbientOcclusion::HBAO_DebugMode::SplitWithoutAOAndWithAO{static_cast<int32_t>(0x3)};
constexpr ::HorizonBasedAmbientOcclusion::HBAO_DebugMode  HorizonBasedAmbientOcclusion::HBAO_DebugMode::SplitWithAOAndAOOnly{static_cast<int32_t>(0x4)};
constexpr ::HorizonBasedAmbientOcclusion::HBAO_DebugMode  HorizonBasedAmbientOcclusion::HBAO_DebugMode::SplitWithoutAOAndAOOnly{static_cast<int32_t>(0x5)};
constexpr ::HorizonBasedAmbientOcclusion::HBAO_DebugMode  HorizonBasedAmbientOcclusion::HBAO_DebugMode::ViewNormals{static_cast<int32_t>(0x6)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HorizonBasedAmbientOcclusion::HBAO_BlurType::HBAO_BlurType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::HBAO_BlurType::HBAO_BlurType()   {
}
constexpr ::HorizonBasedAmbientOcclusion::HBAO_BlurType  HorizonBasedAmbientOcclusion::HBAO_BlurType::None{static_cast<int32_t>(0x0)};
constexpr ::HorizonBasedAmbientOcclusion::HBAO_BlurType  HorizonBasedAmbientOcclusion::HBAO_BlurType::Narrow{static_cast<int32_t>(0x1)};
constexpr ::HorizonBasedAmbientOcclusion::HBAO_BlurType  HorizonBasedAmbientOcclusion::HBAO_BlurType::Medium{static_cast<int32_t>(0x2)};
constexpr ::HorizonBasedAmbientOcclusion::HBAO_BlurType  HorizonBasedAmbientOcclusion::HBAO_BlurType::Wide{static_cast<int32_t>(0x3)};
constexpr ::HorizonBasedAmbientOcclusion::HBAO_BlurType  HorizonBasedAmbientOcclusion::HBAO_BlurType::ExtraWide{static_cast<int32_t>(0x4)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HorizonBasedAmbientOcclusion::HBAO_PerPixelNormals::HBAO_PerPixelNormals(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::HBAO_PerPixelNormals::HBAO_PerPixelNormals()   {
}
constexpr ::HorizonBasedAmbientOcclusion::HBAO_PerPixelNormals  HorizonBasedAmbientOcclusion::HBAO_PerPixelNormals::GBuffer{static_cast<int32_t>(0x0)};
constexpr ::HorizonBasedAmbientOcclusion::HBAO_PerPixelNormals  HorizonBasedAmbientOcclusion::HBAO_PerPixelNormals::Camera{static_cast<int32_t>(0x1)};
constexpr ::HorizonBasedAmbientOcclusion::HBAO_PerPixelNormals  HorizonBasedAmbientOcclusion::HBAO_PerPixelNormals::Reconstruct{static_cast<int32_t>(0x2)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HorizonBasedAmbientOcclusion::HBAO_VarianceClipping::HBAO_VarianceClipping(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::HBAO_VarianceClipping::HBAO_VarianceClipping()   {
}
constexpr ::HorizonBasedAmbientOcclusion::HBAO_VarianceClipping  HorizonBasedAmbientOcclusion::HBAO_VarianceClipping::Disabled{static_cast<int32_t>(0x0)};
constexpr ::HorizonBasedAmbientOcclusion::HBAO_VarianceClipping  HorizonBasedAmbientOcclusion::HBAO_VarianceClipping::_4Tap{static_cast<int32_t>(0x1)};
constexpr ::HorizonBasedAmbientOcclusion::HBAO_VarianceClipping  HorizonBasedAmbientOcclusion::HBAO_VarianceClipping::_8Tap{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO_Presets.get_defaults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::HBAO_Presets (*)()>(&::HorizonBasedAmbientOcclusion::HBAO_Presets::get_defaults)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_Presets>(),
                        {"get_defaults", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::HorizonBasedAmbientOcclusion::HBAO_Presets HorizonBasedAmbientOcclusion::HBAO_Presets::get_defaults()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_Presets>(),
                        {"get_defaults", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::HBAO_Presets>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "preset", ty: "::HorizonBasedAmbientOcclusion::HBAO_Preset", modifiers: "", def_value: Some("{}") }]
constexpr ::HorizonBasedAmbientOcclusion::HBAO_Presets::HBAO_Presets(::HorizonBasedAmbientOcclusion::HBAO_Preset  preset) noexcept  {
this->preset = preset;
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::HBAO_Presets::HBAO_Presets()   {
}
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings.get_defaults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings (*)()>(&::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings::get_defaults)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813e8210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings>(),
                        {"get_defaults", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings HorizonBasedAmbientOcclusion::HBAO_GeneralSettings::get_defaults()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings>(),
                        {"get_defaults", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "pipelineStage", ty: "::HorizonBasedAmbientOcclusion::HBAO_PipelineStage", modifiers: "", def_value: Some("{}") }, CppParam { name: "quality", ty: "::HorizonBasedAmbientOcclusion::HBAO_Quality", modifiers: "", def_value: Some("{}") }, CppParam { name: "deinterleaving", ty: "::HorizonBasedAmbientOcclusion::HBAO_Deinterleaving", modifiers: "", def_value: Some("{}") }, CppParam { name: "resolution", ty: "::HorizonBasedAmbientOcclusion::HBAO_Resolution", modifiers: "", def_value: Some("{}") }, CppParam { name: "noiseType", ty: "::HorizonBasedAmbientOcclusion::HBAO_NoiseType", modifiers: "", def_value: Some("{}") }, CppParam { name: "debugMode", ty: "::HorizonBasedAmbientOcclusion::HBAO_DebugMode", modifiers: "", def_value: Some("{}") }]
constexpr ::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings::HBAO_GeneralSettings(::HorizonBasedAmbientOcclusion::HBAO_PipelineStage  pipelineStage, ::HorizonBasedAmbientOcclusion::HBAO_Quality  quality, ::HorizonBasedAmbientOcclusion::HBAO_Deinterleaving  deinterleaving, ::HorizonBasedAmbientOcclusion::HBAO_Resolution  resolution, ::HorizonBasedAmbientOcclusion::HBAO_NoiseType  noiseType, ::HorizonBasedAmbientOcclusion::HBAO_DebugMode  debugMode) noexcept  {
this->pipelineStage = pipelineStage;
this->quality = quality;
this->deinterleaving = deinterleaving;
this->resolution = resolution;
this->noiseType = noiseType;
this->debugMode = debugMode;
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings::HBAO_GeneralSettings()   {
}
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO_AOSettings.get_defaults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::HBAO_AOSettings (*)()>(&::HorizonBasedAmbientOcclusion::HBAO_AOSettings::get_defaults)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1813e8070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_AOSettings>(),
                        {"get_defaults", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::HorizonBasedAmbientOcclusion::HBAO_AOSettings HorizonBasedAmbientOcclusion::HBAO_AOSettings::get_defaults()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_AOSettings>(),
                        {"get_defaults", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::HBAO_AOSettings>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxRadiusPixels", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bias", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "intensity", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "useMultiBounce", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "multiBounceInfluence", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "offscreenSamplesContribution", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxDistance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "distanceFalloff", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "perPixelNormals", ty: "::HorizonBasedAmbientOcclusion::HBAO_PerPixelNormals", modifiers: "", def_value: Some("{}") }, CppParam { name: "baseColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }]
constexpr ::HorizonBasedAmbientOcclusion::HBAO_AOSettings::HBAO_AOSettings(float_t  radius, float_t  maxRadiusPixels, float_t  bias, float_t  intensity, bool  useMultiBounce, float_t  multiBounceInfluence, float_t  offscreenSamplesContribution, float_t  maxDistance, float_t  distanceFalloff, ::HorizonBasedAmbientOcclusion::HBAO_PerPixelNormals  perPixelNormals, ::UnityEngine::Color  baseColor) noexcept  {
this->radius = radius;
this->maxRadiusPixels = maxRadiusPixels;
this->bias = bias;
this->intensity = intensity;
this->useMultiBounce = useMultiBounce;
this->multiBounceInfluence = multiBounceInfluence;
this->offscreenSamplesContribution = offscreenSamplesContribution;
this->maxDistance = maxDistance;
this->distanceFalloff = distanceFalloff;
this->perPixelNormals = perPixelNormals;
this->baseColor = baseColor;
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::HBAO_AOSettings::HBAO_AOSettings()   {
}
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings.get_defaults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings (*)()>(&::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings::get_defaults)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813f0a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings>(),
                        {"get_defaults", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings::get_defaults()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings>(),
                        {"get_defaults", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "varianceClipping", ty: "::HorizonBasedAmbientOcclusion::HBAO_VarianceClipping", modifiers: "", def_value: Some("{}") }]
constexpr ::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings::HBAO_TemporalFilterSettings(bool  enabled, ::HorizonBasedAmbientOcclusion::HBAO_VarianceClipping  varianceClipping) noexcept  {
this->enabled = enabled;
this->varianceClipping = varianceClipping;
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings::HBAO_TemporalFilterSettings()   {
}
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO_BlurSettings.get_defaults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::HBAO_BlurSettings (*)()>(&::HorizonBasedAmbientOcclusion::HBAO_BlurSettings::get_defaults)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813e8160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_BlurSettings>(),
                        {"get_defaults", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::HorizonBasedAmbientOcclusion::HBAO_BlurSettings HorizonBasedAmbientOcclusion::HBAO_BlurSettings::get_defaults()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_BlurSettings>(),
                        {"get_defaults", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::HBAO_BlurSettings>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "type", ty: "::HorizonBasedAmbientOcclusion::HBAO_BlurType", modifiers: "", def_value: Some("{}") }, CppParam { name: "sharpness", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HorizonBasedAmbientOcclusion::HBAO_BlurSettings::HBAO_BlurSettings(::HorizonBasedAmbientOcclusion::HBAO_BlurType  type, float_t  sharpness) noexcept  {
this->type = type;
this->sharpness = sharpness;
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::HBAO_BlurSettings::HBAO_BlurSettings()   {
}
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings.get_defaults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings (*)()>(&::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings::get_defaults)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1813e8180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings>(),
                        {"get_defaults", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings::get_defaults()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings>(),
                        {"get_defaults", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "saturation", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "albedoMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "brightnessMask", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "brightnessMaskRange", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr ::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings::HBAO_ColorBleedingSettings(bool  enabled, float_t  saturation, float_t  albedoMultiplier, float_t  brightnessMask, ::UnityEngine::Vector2  brightnessMaskRange) noexcept  {
this->enabled = enabled;
this->saturation = saturation;
this->albedoMultiplier = albedoMultiplier;
this->brightnessMask = brightnessMask;
this->brightnessMaskRange = brightnessMaskRange;
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings::HBAO_ColorBleedingSettings()   {
}
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO_SettingsGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO_SettingsGroup::*)()>(&::HorizonBasedAmbientOcclusion::HBAO_SettingsGroup::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_SettingsGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void HorizonBasedAmbientOcclusion::HBAO_SettingsGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_SettingsGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HorizonBasedAmbientOcclusion::HBAO_SettingsGroup* HorizonBasedAmbientOcclusion::HBAO_SettingsGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HorizonBasedAmbientOcclusion::HBAO_SettingsGroup*>());
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::HBAO_SettingsGroup::HBAO_SettingsGroup()   {
}
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO_MinMaxSliderAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO_MinMaxSliderAttribute::*)(float_t, float_t)>(&::HorizonBasedAmbientOcclusion::HBAO_MinMaxSliderAttribute::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1813f00f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_MinMaxSliderAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& HorizonBasedAmbientOcclusion::HBAO_MinMaxSliderAttribute::__cordl_internal_get_max()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___max;
}
constexpr float_t const& HorizonBasedAmbientOcclusion::HBAO_MinMaxSliderAttribute::__cordl_internal_get_max() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___max;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO_MinMaxSliderAttribute::__cordl_internal_set_max(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___max = value;
}
constexpr float_t& HorizonBasedAmbientOcclusion::HBAO_MinMaxSliderAttribute::__cordl_internal_get_min()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___min;
}
constexpr float_t const& HorizonBasedAmbientOcclusion::HBAO_MinMaxSliderAttribute::__cordl_internal_get_min() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___min;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO_MinMaxSliderAttribute::__cordl_internal_set_min(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___min = value;
}
inline void HorizonBasedAmbientOcclusion::HBAO_MinMaxSliderAttribute::_ctor(float_t  min, float_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_MinMaxSliderAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, min, max);
}
inline ::HorizonBasedAmbientOcclusion::HBAO_MinMaxSliderAttribute* HorizonBasedAmbientOcclusion::HBAO_MinMaxSliderAttribute::New_ctor(float_t  min, float_t  max)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HorizonBasedAmbientOcclusion::HBAO_MinMaxSliderAttribute*>(min, max));
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::HBAO_MinMaxSliderAttribute::HBAO_MinMaxSliderAttribute()   {
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::HBAO_Pass::HBAO_Pass()   {
}
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties.GetOrthographicOrDeferredKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(bool, ::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings)>(&::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::GetOrthographicOrDeferredKeyword)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813f02a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(),
                        {"GetOrthographicOrDeferredKeyword", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties.GetQualityKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings)>(&::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::GetQualityKeyword)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1813f02f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(),
                        {"GetQualityKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties.GetNoiseKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings)>(&::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::GetNoiseKeyword)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813f0260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(),
                        {"GetNoiseKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties.GetDeinterleavingKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings)>(&::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::GetDeinterleavingKeyword)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813f0200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(),
                        {"GetDeinterleavingKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties.GetDebugKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings)>(&::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::GetDebugKeyword)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1813f0190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(),
                        {"GetDebugKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties.GetMultibounceKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::HorizonBasedAmbientOcclusion::HBAO_AOSettings)>(&::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::GetMultibounceKeyword)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813f0240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(),
                        {"GetMultibounceKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_AOSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties.GetOffscreenSamplesContributionKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::HorizonBasedAmbientOcclusion::HBAO_AOSettings)>(&::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::GetOffscreenSamplesContributionKeyword)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813f0280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(),
                        {"GetOffscreenSamplesContributionKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_AOSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties.GetPerPixelNormalsKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::HorizonBasedAmbientOcclusion::HBAO_AOSettings)>(&::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::GetPerPixelNormalsKeyword)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813f02c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(),
                        {"GetPerPixelNormalsKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_AOSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties.GetBlurRadiusKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::HorizonBasedAmbientOcclusion::HBAO_BlurSettings)>(&::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::GetBlurRadiusKeyword)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1813f0130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(),
                        {"GetBlurRadiusKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_BlurSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties.GetVarianceClippingKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings)>(&::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::GetVarianceClippingKeyword)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813f0340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(),
                        {"GetVarianceClippingKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties.GetColorBleedingKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings)>(&::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::GetColorBleedingKeyword)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813f0170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(),
                        {"GetColorBleedingKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties.GetLightingLogEncodedKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(bool)>(&::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::GetLightingLogEncodedKeyword)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813f0220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(),
                        {"GetLightingLogEncodedKeyword", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_mainTex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "mainTex", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_mainTex()  {
return ::cordl_internals::getStaticField<int32_t, "mainTex", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_hbaoTex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "hbaoTex", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_hbaoTex()  {
return ::cordl_internals::getStaticField<int32_t, "hbaoTex", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_tempTex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "tempTex", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_tempTex()  {
return ::cordl_internals::getStaticField<int32_t, "tempTex", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_tempTex2(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "tempTex2", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_tempTex2()  {
return ::cordl_internals::getStaticField<int32_t, "tempTex2", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_noiseTex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "noiseTex", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_noiseTex()  {
return ::cordl_internals::getStaticField<int32_t, "noiseTex", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_depthTex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "depthTex", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_depthTex()  {
return ::cordl_internals::getStaticField<int32_t, "depthTex", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_normalsTex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "normalsTex", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_normalsTex()  {
return ::cordl_internals::getStaticField<int32_t, "normalsTex", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_depthSliceTex(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "depthSliceTex", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_depthSliceTex()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "depthSliceTex", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_normalsSliceTex(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "normalsSliceTex", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_normalsSliceTex()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "normalsSliceTex", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_aoSliceTex(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "aoSliceTex", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_aoSliceTex()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "aoSliceTex", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_deinterleaveOffset(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "deinterleaveOffset", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_deinterleaveOffset()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "deinterleaveOffset", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_atlasOffset(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "atlasOffset", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_atlasOffset()  {
return ::cordl_internals::getStaticField<int32_t, "atlasOffset", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_jitter(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "jitter", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_jitter()  {
return ::cordl_internals::getStaticField<int32_t, "jitter", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_uvTransform(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "uvTransform", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_uvTransform()  {
return ::cordl_internals::getStaticField<int32_t, "uvTransform", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_inputTexelSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "inputTexelSize", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_inputTexelSize()  {
return ::cordl_internals::getStaticField<int32_t, "inputTexelSize", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_aoTexelSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "aoTexelSize", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_aoTexelSize()  {
return ::cordl_internals::getStaticField<int32_t, "aoTexelSize", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_deinterleavedAOTexelSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "deinterleavedAOTexelSize", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_deinterleavedAOTexelSize()  {
return ::cordl_internals::getStaticField<int32_t, "deinterleavedAOTexelSize", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_reinterleavedAOTexelSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "reinterleavedAOTexelSize", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_reinterleavedAOTexelSize()  {
return ::cordl_internals::getStaticField<int32_t, "reinterleavedAOTexelSize", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_uvToView(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "uvToView", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_uvToView()  {
return ::cordl_internals::getStaticField<int32_t, "uvToView", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_targetScale(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "targetScale", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_targetScale()  {
return ::cordl_internals::getStaticField<int32_t, "targetScale", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_radius(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "radius", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_radius()  {
return ::cordl_internals::getStaticField<int32_t, "radius", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_maxRadiusPixels(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "maxRadiusPixels", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_maxRadiusPixels()  {
return ::cordl_internals::getStaticField<int32_t, "maxRadiusPixels", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_negInvRadius2(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "negInvRadius2", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_negInvRadius2()  {
return ::cordl_internals::getStaticField<int32_t, "negInvRadius2", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_angleBias(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "angleBias", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_angleBias()  {
return ::cordl_internals::getStaticField<int32_t, "angleBias", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_aoMultiplier(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "aoMultiplier", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_aoMultiplier()  {
return ::cordl_internals::getStaticField<int32_t, "aoMultiplier", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_intensity(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "intensity", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_intensity()  {
return ::cordl_internals::getStaticField<int32_t, "intensity", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_multiBounceInfluence(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "multiBounceInfluence", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_multiBounceInfluence()  {
return ::cordl_internals::getStaticField<int32_t, "multiBounceInfluence", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_offscreenSamplesContrib(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "offscreenSamplesContrib", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_offscreenSamplesContrib()  {
return ::cordl_internals::getStaticField<int32_t, "offscreenSamplesContrib", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_maxDistance(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "maxDistance", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_maxDistance()  {
return ::cordl_internals::getStaticField<int32_t, "maxDistance", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_distanceFalloff(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "distanceFalloff", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_distanceFalloff()  {
return ::cordl_internals::getStaticField<int32_t, "distanceFalloff", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_baseColor(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "baseColor", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_baseColor()  {
return ::cordl_internals::getStaticField<int32_t, "baseColor", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_colorBleedSaturation(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "colorBleedSaturation", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_colorBleedSaturation()  {
return ::cordl_internals::getStaticField<int32_t, "colorBleedSaturation", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_albedoMultiplier(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "albedoMultiplier", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_albedoMultiplier()  {
return ::cordl_internals::getStaticField<int32_t, "albedoMultiplier", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_colorBleedBrightnessMask(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "colorBleedBrightnessMask", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_colorBleedBrightnessMask()  {
return ::cordl_internals::getStaticField<int32_t, "colorBleedBrightnessMask", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_colorBleedBrightnessMaskRange(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "colorBleedBrightnessMaskRange", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_colorBleedBrightnessMaskRange()  {
return ::cordl_internals::getStaticField<int32_t, "colorBleedBrightnessMaskRange", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_blurDeltaUV(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "blurDeltaUV", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_blurDeltaUV()  {
return ::cordl_internals::getStaticField<int32_t, "blurDeltaUV", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_blurSharpness(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "blurSharpness", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_blurSharpness()  {
return ::cordl_internals::getStaticField<int32_t, "blurSharpness", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::setStaticF_temporalParams(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "temporalParams", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::getStaticF_temporalParams()  {
return ::cordl_internals::getStaticField<int32_t, "temporalParams", ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>();
}
inline ::StringW HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::GetOrthographicOrDeferredKeyword(bool  orthographic, ::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(),
                        {"GetOrthographicOrDeferredKeyword", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, orthographic, settings);
}
inline ::StringW HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::GetQualityKeyword(::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(),
                        {"GetQualityKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, settings);
}
inline ::StringW HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::GetNoiseKeyword(::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(),
                        {"GetNoiseKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, settings);
}
inline ::StringW HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::GetDeinterleavingKeyword(::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(),
                        {"GetDeinterleavingKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, settings);
}
inline ::StringW HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::GetDebugKeyword(::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(),
                        {"GetDebugKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, settings);
}
inline ::StringW HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::GetMultibounceKeyword(::HorizonBasedAmbientOcclusion::HBAO_AOSettings  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(),
                        {"GetMultibounceKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_AOSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, settings);
}
inline ::StringW HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::GetOffscreenSamplesContributionKeyword(::HorizonBasedAmbientOcclusion::HBAO_AOSettings  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(),
                        {"GetOffscreenSamplesContributionKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_AOSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, settings);
}
inline ::StringW HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::GetPerPixelNormalsKeyword(::HorizonBasedAmbientOcclusion::HBAO_AOSettings  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(),
                        {"GetPerPixelNormalsKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_AOSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, settings);
}
inline ::StringW HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::GetBlurRadiusKeyword(::HorizonBasedAmbientOcclusion::HBAO_BlurSettings  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(),
                        {"GetBlurRadiusKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_BlurSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, settings);
}
inline ::StringW HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::GetVarianceClippingKeyword(::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(),
                        {"GetVarianceClippingKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, settings);
}
inline ::StringW HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::GetColorBleedingKeyword(::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(),
                        {"GetColorBleedingKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, settings);
}
inline ::StringW HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::GetLightingLogEncodedKeyword(bool  hdr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*>(),
                        {"GetLightingLogEncodedKeyword", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, hdr);
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties::HBAO_ShaderProperties()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode::HBAO_StereoRenderingMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode::HBAO_StereoRenderingMode()   {
}
constexpr ::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode  HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode::MultiPass{static_cast<int32_t>(0x0)};
constexpr ::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode  HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode::SinglePassInstanced{static_cast<int32_t>(0x1)};
inline void HorizonBasedAmbientOcclusion::HBAO_MersenneTwister::setStaticF_Numbers(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "Numbers", ::HorizonBasedAmbientOcclusion::HBAO_MersenneTwister*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> HorizonBasedAmbientOcclusion::HBAO_MersenneTwister::getStaticF_Numbers()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "Numbers", ::HorizonBasedAmbientOcclusion::HBAO_MersenneTwister*>();
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::HBAO_MersenneTwister::HBAO_MersenneTwister()   {
}
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_presets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::HBAO_Presets (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_presets)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_presets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.set_presets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::HorizonBasedAmbientOcclusion::HBAO_Presets)>(&::HorizonBasedAmbientOcclusion::HBAO::set_presets)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_presets", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_Presets>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_generalSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_generalSettings)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813efa70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_generalSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.set_generalSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings)>(&::HorizonBasedAmbientOcclusion::HBAO::set_generalSettings)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813f0000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_generalSettings", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_aoSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::HBAO_AOSettings (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_aoSettings)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813ef6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_aoSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.set_aoSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::HorizonBasedAmbientOcclusion::HBAO_AOSettings)>(&::HorizonBasedAmbientOcclusion::HBAO::set_aoSettings)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813eff60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_aoSettings", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_AOSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_temporalFilterSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_temporalFilterSettings)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180bb89a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_temporalFilterSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.set_temporalFilterSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings)>(&::HorizonBasedAmbientOcclusion::HBAO::set_temporalFilterSettings)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180bb8ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_temporalFilterSettings", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_blurSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::HBAO_BlurSettings (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_blurSettings)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813ef720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_blurSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.set_blurSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::HorizonBasedAmbientOcclusion::HBAO_BlurSettings)>(&::HorizonBasedAmbientOcclusion::HBAO::set_blurSettings)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813effa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_blurSettings", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_BlurSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_colorBleedingSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_colorBleedingSettings)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813ef780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_colorBleedingSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.set_colorBleedingSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings)>(&::HorizonBasedAmbientOcclusion::HBAO::set_colorBleedingSettings)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813effb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_colorBleedingSettings", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.GetCurrentPreset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::HBAO_Preset (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::GetCurrentPreset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetCurrentPreset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.ApplyPreset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::HorizonBasedAmbientOcclusion::HBAO_Preset)>(&::HorizonBasedAmbientOcclusion::HBAO::ApplyPreset)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1813e87a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"ApplyPreset", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_Preset>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.GetPipelineStage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::HBAO_PipelineStage (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::GetPipelineStage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetPipelineStage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.SetPipelineStage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::HorizonBasedAmbientOcclusion::HBAO_PipelineStage)>(&::HorizonBasedAmbientOcclusion::HBAO::SetPipelineStage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetPipelineStage", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_PipelineStage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.GetQuality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::HBAO_Quality (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::GetQuality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetQuality", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.SetQuality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::HorizonBasedAmbientOcclusion::HBAO_Quality)>(&::HorizonBasedAmbientOcclusion::HBAO::SetQuality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetQuality", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_Quality>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.GetDeinterleaving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::HBAO_Deinterleaving (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::GetDeinterleaving)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetDeinterleaving", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.SetDeinterleaving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::HorizonBasedAmbientOcclusion::HBAO_Deinterleaving)>(&::HorizonBasedAmbientOcclusion::HBAO::SetDeinterleaving)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetDeinterleaving", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_Deinterleaving>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.GetResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::HBAO_Resolution (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::GetResolution)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetResolution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.SetResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::HorizonBasedAmbientOcclusion::HBAO_Resolution)>(&::HorizonBasedAmbientOcclusion::HBAO::SetResolution)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetResolution", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_Resolution>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.GetNoiseType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::HBAO_NoiseType (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::GetNoiseType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803231b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetNoiseType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.SetNoiseType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::HorizonBasedAmbientOcclusion::HBAO_NoiseType)>(&::HorizonBasedAmbientOcclusion::HBAO::SetNoiseType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180323270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetNoiseType", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_NoiseType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.GetDebugMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::HBAO_DebugMode (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::GetDebugMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803eb0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetDebugMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.SetDebugMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::HorizonBasedAmbientOcclusion::HBAO_DebugMode)>(&::HorizonBasedAmbientOcclusion::HBAO::SetDebugMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180511530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetDebugMode", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_DebugMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.GetAoRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::GetAoRadius)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetAoRadius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.SetAoRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(float_t)>(&::HorizonBasedAmbientOcclusion::HBAO::SetAoRadius)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813ed530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetAoRadius", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.GetAoMaxRadiusPixels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::GetAoMaxRadiusPixels)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetAoMaxRadiusPixels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.SetAoMaxRadiusPixels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(float_t)>(&::HorizonBasedAmbientOcclusion::HBAO::SetAoMaxRadiusPixels)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813ed4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetAoMaxRadiusPixels", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.GetAoBias
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::GetAoBias)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetAoBias", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.SetAoBias
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(float_t)>(&::HorizonBasedAmbientOcclusion::HBAO::SetAoBias)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813ed430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetAoBias", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.GetAoOffscreenSamplesContribution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::GetAoOffscreenSamplesContribution)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetAoOffscreenSamplesContribution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.SetAoOffscreenSamplesContribution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(float_t)>(&::HorizonBasedAmbientOcclusion::HBAO::SetAoOffscreenSamplesContribution)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813ed500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetAoOffscreenSamplesContribution", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.GetAoMaxDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::GetAoMaxDistance)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetAoMaxDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.SetAoMaxDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(float_t)>(&::HorizonBasedAmbientOcclusion::HBAO::SetAoMaxDistance)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetAoMaxDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.GetAoDistanceFalloff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::GetAoDistanceFalloff)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetAoDistanceFalloff", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.SetAoDistanceFalloff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(float_t)>(&::HorizonBasedAmbientOcclusion::HBAO::SetAoDistanceFalloff)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetAoDistanceFalloff", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.GetAoPerPixelNormals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::HBAO_PerPixelNormals (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::GetAoPerPixelNormals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d5ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetAoPerPixelNormals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.SetAoPerPixelNormals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::HorizonBasedAmbientOcclusion::HBAO_PerPixelNormals)>(&::HorizonBasedAmbientOcclusion::HBAO::SetAoPerPixelNormals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d5ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetAoPerPixelNormals", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_PerPixelNormals>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.GetAoColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::GetAoColor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813ec920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetAoColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.SetAoColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::UnityEngine::Color)>(&::HorizonBasedAmbientOcclusion::HBAO::SetAoColor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813ed460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetAoColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.GetAoIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::GetAoIntensity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180356140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetAoIntensity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.SetAoIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(float_t)>(&::HorizonBasedAmbientOcclusion::HBAO::SetAoIntensity)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813ed470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetAoIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.UseMultiBounce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::UseMultiBounce)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813ef470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"UseMultiBounce", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.EnableMultiBounce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(bool)>(&::HorizonBasedAmbientOcclusion::HBAO::EnableMultiBounce)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813ec680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"EnableMultiBounce", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.GetAoMultiBounceInfluence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::GetAoMultiBounceInfluence)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046faf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetAoMultiBounceInfluence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.SetAoMultiBounceInfluence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(float_t)>(&::HorizonBasedAmbientOcclusion::HBAO::SetAoMultiBounceInfluence)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813ed4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetAoMultiBounceInfluence", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.IsTemporalFilterEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::IsTemporalFilterEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813ece20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"IsTemporalFilterEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.EnableTemporalFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(bool)>(&::HorizonBasedAmbientOcclusion::HBAO::EnableTemporalFilter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813ec690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"EnableTemporalFilter", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.GetTemporalFilterVarianceClipping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::HBAO_VarianceClipping (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::GetTemporalFilterVarianceClipping)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetTemporalFilterVarianceClipping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.SetTemporalFilterVarianceClipping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::HorizonBasedAmbientOcclusion::HBAO_VarianceClipping)>(&::HorizonBasedAmbientOcclusion::HBAO::SetTemporalFilterVarianceClipping)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180cbfea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetTemporalFilterVarianceClipping", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_VarianceClipping>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.GetBlurType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::HBAO_BlurType (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::GetBlurType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetBlurType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.SetBlurType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::HorizonBasedAmbientOcclusion::HBAO_BlurType)>(&::HorizonBasedAmbientOcclusion::HBAO::SetBlurType)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180bb89d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetBlurType", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_BlurType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.GetBlurSharpness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::GetBlurSharpness)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180312eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetBlurSharpness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.SetBlurSharpness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(float_t)>(&::HorizonBasedAmbientOcclusion::HBAO::SetBlurSharpness)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813ed560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetBlurSharpness", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.IsColorBleedingEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::IsColorBleedingEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803115f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"IsColorBleedingEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.EnableColorBleeding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(bool)>(&::HorizonBasedAmbientOcclusion::HBAO::EnableColorBleeding)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180311a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"EnableColorBleeding", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.GetColorBleedingSaturation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::GetColorBleedingSaturation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813ec940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetColorBleedingSaturation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.SetColorBleedingSaturation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(float_t)>(&::HorizonBasedAmbientOcclusion::HBAO::SetColorBleedingSaturation)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813ed650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetColorBleedingSaturation", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.GetColorBleedingAlbedoMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::GetColorBleedingAlbedoMultiplier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803e0b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetColorBleedingAlbedoMultiplier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.SetColorBleedingAlbedoMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(float_t)>(&::HorizonBasedAmbientOcclusion::HBAO::SetColorBleedingAlbedoMultiplier)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813ed590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetColorBleedingAlbedoMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.GetColorBleedingBrightnessMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::GetColorBleedingBrightnessMask)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180487750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetColorBleedingBrightnessMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.SetColorBleedingBrightnessMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(float_t)>(&::HorizonBasedAmbientOcclusion::HBAO::SetColorBleedingBrightnessMask)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813ed620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetColorBleedingBrightnessMask", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.GetColorBleedingBrightnessMaskRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::GetColorBleedingBrightnessMaskRange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813ec930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetColorBleedingBrightnessMaskRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.SetColorBleedingBrightnessMaskRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::UnityEngine::Vector2)>(&::HorizonBasedAmbientOcclusion::HBAO::SetColorBleedingBrightnessMaskRange)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1813ed5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetColorBleedingBrightnessMaskRange", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_material
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_material)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180322750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_material", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.set_material
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::UnityEngine::Material*)>(&::HorizonBasedAmbientOcclusion::HBAO::set_material)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180322770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_material", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_hbaoCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_hbaoCamera)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180322760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_hbaoCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.set_hbaoCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::UnityEngine::Camera*)>(&::HorizonBasedAmbientOcclusion::HBAO::set_hbaoCamera)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180322790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_hbaoCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_cmdBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::CommandBuffer* (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_cmdBuffer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d9940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_cmdBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.set_cmdBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::HorizonBasedAmbientOcclusion::HBAO::set_cmdBuffer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803d9970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_cmdBuffer", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_width
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_width)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813abaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_width", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.set_width
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(int32_t)>(&::HorizonBasedAmbientOcclusion::HBAO::set_width)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813f0070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_width", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_height
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_height)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180cbfa10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_height", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.set_height
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(int32_t)>(&::HorizonBasedAmbientOcclusion::HBAO::set_height)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180cbfd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_height", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_stereoActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_stereoActive)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x180f187e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_stereoActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.set_stereoActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(bool)>(&::HorizonBasedAmbientOcclusion::HBAO::set_stereoActive)> {
  constexpr static std::size_t size = 0xedb0;
  constexpr static std::size_t addrs = 0x180f18e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_stereoActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_xrActiveEye
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_xrActiveEye)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813eff40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_xrActiveEye", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.set_xrActiveEye
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(int32_t)>(&::HorizonBasedAmbientOcclusion::HBAO::set_xrActiveEye)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813f0080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_xrActiveEye", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_stereoRenderingMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_stereoRenderingMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813eff30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_stereoRenderingMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.set_stereoRenderingMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode)>(&::HorizonBasedAmbientOcclusion::HBAO::set_stereoRenderingMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813f0060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_stereoRenderingMode", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_screenWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_screenWidth)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18040c390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_screenWidth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.set_screenWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(int32_t)>(&::HorizonBasedAmbientOcclusion::HBAO::set_screenWidth)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180cbfe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_screenWidth", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_screenHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_screenHeight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813efee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_screenHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.set_screenHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(int32_t)>(&::HorizonBasedAmbientOcclusion::HBAO::set_screenHeight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813f0050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_screenHeight", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_aoWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_aoWidth)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813ef710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_aoWidth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.set_aoWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(int32_t)>(&::HorizonBasedAmbientOcclusion::HBAO::set_aoWidth)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813eff90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_aoWidth", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_aoHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_aoHeight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813ef6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_aoHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.set_aoHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(int32_t)>(&::HorizonBasedAmbientOcclusion::HBAO::set_aoHeight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813eff50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_aoHeight", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_reinterleavedAoWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_reinterleavedAoWidth)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813efea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_reinterleavedAoWidth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.set_reinterleavedAoWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(int32_t)>(&::HorizonBasedAmbientOcclusion::HBAO::set_reinterleavedAoWidth)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813f0040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_reinterleavedAoWidth", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_reinterleavedAoHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_reinterleavedAoHeight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180cbfa90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_reinterleavedAoHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.set_reinterleavedAoHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(int32_t)>(&::HorizonBasedAmbientOcclusion::HBAO::set_reinterleavedAoHeight)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180cbfe50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_reinterleavedAoHeight", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_deinterleavedAoWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_deinterleavedAoWidth)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180418710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_deinterleavedAoWidth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.set_deinterleavedAoWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(int32_t)>(&::HorizonBasedAmbientOcclusion::HBAO::set_deinterleavedAoWidth)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813effe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_deinterleavedAoWidth", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_deinterleavedAoHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_deinterleavedAoHeight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813ef7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_deinterleavedAoHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.set_deinterleavedAoHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(int32_t)>(&::HorizonBasedAmbientOcclusion::HBAO::set_deinterleavedAoHeight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813effd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_deinterleavedAoHeight", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_frameCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_frameCount)> {
  constexpr static std::size_t size = 0x53a0;
  constexpr static std::size_t addrs = 0x180c314e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_frameCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.set_frameCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(int32_t)>(&::HorizonBasedAmbientOcclusion::HBAO::set_frameCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813efff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_frameCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_motionVectorsSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_motionVectorsSupported)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813efe70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_motionVectorsSupported", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.set_motionVectorsSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(bool)>(&::HorizonBasedAmbientOcclusion::HBAO::set_motionVectorsSupported)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813f0030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_motionVectorsSupported", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_aoHistoryBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_aoHistoryBuffer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_aoHistoryBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.set_aoHistoryBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::UnityEngine::RenderTexture*)>(&::HorizonBasedAmbientOcclusion::HBAO::set_aoHistoryBuffer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180337130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_aoHistoryBuffer", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_colorBleedingHistoryBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_colorBleedingHistoryBuffer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_colorBleedingHistoryBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.set_colorBleedingHistoryBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::UnityEngine::RenderTexture*)>(&::HorizonBasedAmbientOcclusion::HBAO::set_colorBleedingHistoryBuffer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180337170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_colorBleedingHistoryBuffer", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_noiseTex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_noiseTex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_noiseTex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.set_noiseTex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::UnityEngine::Texture2D*)>(&::HorizonBasedAmbientOcclusion::HBAO::set_noiseTex)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180337190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_noiseTex", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_fullscreenTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_fullscreenTriangle)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1813ef810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_fullscreenTriangle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_cameraEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::CameraEvent (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_cameraEvent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1813ef730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_cameraEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_isCommandBufferDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_isCommandBufferDirty)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x1813efa90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_isCommandBufferDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.set_isCommandBufferDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(bool)>(&::HorizonBasedAmbientOcclusion::HBAO::set_isCommandBufferDirty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813f0020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_isCommandBufferDirty", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_isHistoryBufferDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_isHistoryBufferDirty)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1813efd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_isHistoryBufferDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_defaultHDRRenderTextureFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureFormat (*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_defaultHDRRenderTextureFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813ef7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_defaultHDRRenderTextureFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_sourceFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureFormat (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_sourceFormat)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1813efef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_sourceFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_colorFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureFormat (*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_colorFormat)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813ef7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_colorFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_depthFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureFormat (*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_depthFormat)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813ef7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_depthFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_normalsFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureFormat (*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_normalsFormat)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813efe80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_normalsFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_isLinearColorSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_isLinearColorSpace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813efe50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_isLinearColorSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.get_renderingInSceneView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::get_renderingInSceneView)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813efeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_renderingInSceneView", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::OnEnable)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1813ecfb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::OnDisable)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1813ece30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.OnPreRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::OnPreRender)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1813ed1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"OnPreRender", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.OnPostRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::OnPostRender)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813ed1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"OnPostRender", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::OnValidate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1813ed340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::Initialize)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1813eccb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.FetchRenderParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::FetchRenderParameters)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1813ec6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"FetchRenderParameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.AllocateHistoryBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::AllocateHistoryBuffers)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1813e84f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"AllocateHistoryBuffers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.ReleaseHistoryBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::ReleaseHistoryBuffers)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1813ed390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"ReleaseHistoryBuffers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.ClearCommandBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::HorizonBasedAmbientOcclusion::HBAO::ClearCommandBuffer)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1813e9ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"ClearCommandBuffer", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.BuildCommandBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CameraEvent)>(&::HorizonBasedAmbientOcclusion::HBAO::BuildCommandBuffer)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x1813e9380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"BuildCommandBuffer", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.AO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::HorizonBasedAmbientOcclusion::HBAO::AO)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1813e8230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"AO", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.DeinterleavedAO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::HorizonBasedAmbientOcclusion::HBAO::DeinterleavedAO)> {
  constexpr static std::size_t size = 0xfd0;
  constexpr static std::size_t addrs = 0x1813eb6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"DeinterleavedAO", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.Blur
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::HorizonBasedAmbientOcclusion::HBAO::Blur)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x1813e8de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"Blur", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.TemporalFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::HorizonBasedAmbientOcclusion::HBAO::TemporalFilter)> {
  constexpr static std::size_t size = 0xbc0;
  constexpr static std::size_t addrs = 0x1813ed680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"TemporalFilter", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.Composite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CameraEvent)>(&::HorizonBasedAmbientOcclusion::HBAO::Composite)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1813eb320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"Composite", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.CompositeBeforeReflections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::HorizonBasedAmbientOcclusion::HBAO::CompositeBeforeReflections)> {
  constexpr static std::size_t size = 0x780;
  constexpr static std::size_t addrs = 0x1813ea640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"CompositeBeforeReflections", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.CompositeAfterLighting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::HorizonBasedAmbientOcclusion::HBAO::CompositeAfterLighting)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x1813e9b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"CompositeAfterLighting", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.CompositeBeforeImageEffectsOpaque
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::HorizonBasedAmbientOcclusion::HBAO::CompositeBeforeImageEffectsOpaque)> {
  constexpr static std::size_t size = 0x670;
  constexpr static std::size_t addrs = 0x1813e9fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"CompositeBeforeImageEffectsOpaque", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.CompositeDebug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::UnityEngine::Rendering::CommandBuffer*, int32_t)>(&::HorizonBasedAmbientOcclusion::HBAO::CompositeDebug)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x1813eadc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"CompositeDebug", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.UpdateMaterialProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::UpdateMaterialProperties)> {
  constexpr static std::size_t size = 0xd50;
  constexpr static std::size_t addrs = 0x1813ee2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"UpdateMaterialProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.UpdateShaderKeywords
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::UpdateShaderKeywords)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x1813eeff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"UpdateShaderKeywords", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.CheckParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::CheckParameters)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1813e9860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"CheckParameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.GetDefaultDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureDescriptor (::HorizonBasedAmbientOcclusion::HBAO::*)(int32_t, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite)>(&::HorizonBasedAmbientOcclusion::HBAO::GetDefaultDescriptor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1813ec950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetDefaultDescriptor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<::UnityEngine::RenderTextureReadWrite>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.GetScreenSpaceRT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::HorizonBasedAmbientOcclusion::HBAO::*)(int32_t, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite, ::UnityEngine::FilterMode, int32_t, int32_t)>(&::HorizonBasedAmbientOcclusion::HBAO::GetScreenSpaceRT)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1813ecae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetScreenSpaceRT", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<::UnityEngine::RenderTextureReadWrite>(), ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.GetScreenSpaceTemporaryRT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::UnityEngine::Rendering::CommandBuffer*, int32_t, int32_t, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite, ::UnityEngine::FilterMode, int32_t, int32_t)>(&::HorizonBasedAmbientOcclusion::HBAO::GetScreenSpaceTemporaryRT)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1813ecbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetScreenSpaceTemporaryRT", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<::UnityEngine::RenderTextureReadWrite>(), ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.ReleaseTemporaryRT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::UnityEngine::Rendering::CommandBuffer*, int32_t)>(&::HorizonBasedAmbientOcclusion::HBAO::ReleaseTemporaryRT)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813ed400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"ReleaseTemporaryRT", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.BlitFullscreenTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Material*, int32_t)>(&::HorizonBasedAmbientOcclusion::HBAO::BlitFullscreenTriangle)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1813e8af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"BlitFullscreenTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.BlitFullscreenTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>, ::UnityEngine::Material*, int32_t)>(&::HorizonBasedAmbientOcclusion::HBAO::BlitFullscreenTriangle)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1813e8c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"BlitFullscreenTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.BlitFullscreenTriangleWithClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Material*, ::UnityEngine::Color, int32_t)>(&::HorizonBasedAmbientOcclusion::HBAO::BlitFullscreenTriangleWithClear)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1813e8960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"BlitFullscreenTriangleWithClear", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.ApplyFlip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, bool)>(&::HorizonBasedAmbientOcclusion::HBAO::ApplyFlip)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1813e8700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"ApplyFlip", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.AdjustBrightnessMaskToGammaSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2)>(&::HorizonBasedAmbientOcclusion::HBAO::AdjustBrightnessMaskToGammaSpace)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1813e8470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"AdjustBrightnessMaskToGammaSpace", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.ToGammaSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::HorizonBasedAmbientOcclusion::HBAO::ToGammaSpace)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813ee240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"ToGammaSpace", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.ToGammaSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2)>(&::HorizonBasedAmbientOcclusion::HBAO::ToGammaSpace)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1813ee250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"ToGammaSpace", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO.CreateNoiseTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::CreateNoiseTexture)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x1813eb3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"CreateNoiseTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::HBAO._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::HBAO::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1813ef570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Shader>& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_hbaoShader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hbaoShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_hbaoShader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hbaoShader;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set_hbaoShader(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hbaoShader = value;
}
constexpr ::HorizonBasedAmbientOcclusion::HBAO_Presets& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_Presets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Presets;
}
constexpr ::HorizonBasedAmbientOcclusion::HBAO_Presets const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_Presets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Presets;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set_m_Presets(::HorizonBasedAmbientOcclusion::HBAO_Presets  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Presets = value;
}
constexpr ::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_GeneralSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GeneralSettings;
}
constexpr ::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_GeneralSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GeneralSettings;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set_m_GeneralSettings(::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GeneralSettings = value;
}
constexpr ::HorizonBasedAmbientOcclusion::HBAO_AOSettings& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_AOSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AOSettings;
}
constexpr ::HorizonBasedAmbientOcclusion::HBAO_AOSettings const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_AOSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AOSettings;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set_m_AOSettings(::HorizonBasedAmbientOcclusion::HBAO_AOSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AOSettings = value;
}
constexpr ::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_TemporalFilterSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TemporalFilterSettings;
}
constexpr ::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_TemporalFilterSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TemporalFilterSettings;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set_m_TemporalFilterSettings(::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TemporalFilterSettings = value;
}
constexpr ::HorizonBasedAmbientOcclusion::HBAO_BlurSettings& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_BlurSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlurSettings;
}
constexpr ::HorizonBasedAmbientOcclusion::HBAO_BlurSettings const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_BlurSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlurSettings;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set_m_BlurSettings(::HorizonBasedAmbientOcclusion::HBAO_BlurSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BlurSettings = value;
}
constexpr ::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_ColorBleedingSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ColorBleedingSettings;
}
constexpr ::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_ColorBleedingSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ColorBleedingSettings;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set_m_ColorBleedingSettings(::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ColorBleedingSettings = value;
}
constexpr ::UnityW<::UnityEngine::Material>& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__material_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____material_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Material> const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__material_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____material_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set__material_k__BackingField(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____material_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__hbaoCamera_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hbaoCamera_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Camera> const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__hbaoCamera_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hbaoCamera_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set__hbaoCamera_k__BackingField(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hbaoCamera_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__cmdBuffer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cmdBuffer_k__BackingField;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__cmdBuffer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cmdBuffer_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set__cmdBuffer_k__BackingField(::UnityEngine::Rendering::CommandBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cmdBuffer_k__BackingField = value;
}
constexpr int32_t& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__width_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____width_k__BackingField;
}
constexpr int32_t const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__width_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____width_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set__width_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____width_k__BackingField = value;
}
constexpr int32_t& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__height_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____height_k__BackingField;
}
constexpr int32_t const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__height_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____height_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set__height_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____height_k__BackingField = value;
}
constexpr bool& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__stereoActive_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stereoActive_k__BackingField;
}
constexpr bool const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__stereoActive_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stereoActive_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set__stereoActive_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stereoActive_k__BackingField = value;
}
constexpr int32_t& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__xrActiveEye_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____xrActiveEye_k__BackingField;
}
constexpr int32_t const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__xrActiveEye_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____xrActiveEye_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set__xrActiveEye_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____xrActiveEye_k__BackingField = value;
}
constexpr ::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__stereoRenderingMode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stereoRenderingMode_k__BackingField;
}
constexpr ::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__stereoRenderingMode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stereoRenderingMode_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set__stereoRenderingMode_k__BackingField(::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stereoRenderingMode_k__BackingField = value;
}
constexpr int32_t& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__screenWidth_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____screenWidth_k__BackingField;
}
constexpr int32_t const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__screenWidth_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____screenWidth_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set__screenWidth_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____screenWidth_k__BackingField = value;
}
constexpr int32_t& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__screenHeight_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____screenHeight_k__BackingField;
}
constexpr int32_t const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__screenHeight_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____screenHeight_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set__screenHeight_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____screenHeight_k__BackingField = value;
}
constexpr int32_t& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__aoWidth_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aoWidth_k__BackingField;
}
constexpr int32_t const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__aoWidth_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aoWidth_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set__aoWidth_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____aoWidth_k__BackingField = value;
}
constexpr int32_t& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__aoHeight_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aoHeight_k__BackingField;
}
constexpr int32_t const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__aoHeight_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aoHeight_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set__aoHeight_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____aoHeight_k__BackingField = value;
}
constexpr int32_t& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__reinterleavedAoWidth_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reinterleavedAoWidth_k__BackingField;
}
constexpr int32_t const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__reinterleavedAoWidth_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reinterleavedAoWidth_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set__reinterleavedAoWidth_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reinterleavedAoWidth_k__BackingField = value;
}
constexpr int32_t& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__reinterleavedAoHeight_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reinterleavedAoHeight_k__BackingField;
}
constexpr int32_t const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__reinterleavedAoHeight_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reinterleavedAoHeight_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set__reinterleavedAoHeight_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reinterleavedAoHeight_k__BackingField = value;
}
constexpr int32_t& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__deinterleavedAoWidth_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deinterleavedAoWidth_k__BackingField;
}
constexpr int32_t const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__deinterleavedAoWidth_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deinterleavedAoWidth_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set__deinterleavedAoWidth_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deinterleavedAoWidth_k__BackingField = value;
}
constexpr int32_t& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__deinterleavedAoHeight_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deinterleavedAoHeight_k__BackingField;
}
constexpr int32_t const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__deinterleavedAoHeight_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deinterleavedAoHeight_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set__deinterleavedAoHeight_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deinterleavedAoHeight_k__BackingField = value;
}
constexpr int32_t& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__frameCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameCount_k__BackingField;
}
constexpr int32_t const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__frameCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameCount_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set__frameCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frameCount_k__BackingField = value;
}
constexpr bool& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__motionVectorsSupported_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____motionVectorsSupported_k__BackingField;
}
constexpr bool const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__motionVectorsSupported_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____motionVectorsSupported_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set__motionVectorsSupported_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____motionVectorsSupported_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__aoHistoryBuffer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aoHistoryBuffer_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__aoHistoryBuffer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aoHistoryBuffer_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set__aoHistoryBuffer_k__BackingField(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____aoHistoryBuffer_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__colorBleedingHistoryBuffer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorBleedingHistoryBuffer_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__colorBleedingHistoryBuffer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorBleedingHistoryBuffer_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set__colorBleedingHistoryBuffer_k__BackingField(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colorBleedingHistoryBuffer_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__noiseTex_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noiseTex_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get__noiseTex_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noiseTex_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set__noiseTex_k__BackingField(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____noiseTex_k__BackingField = value;
}
constexpr ::UnityEngine::RenderTextureDescriptor& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_sourceDescriptor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_sourceDescriptor;
}
constexpr ::UnityEngine::RenderTextureDescriptor const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_sourceDescriptor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_sourceDescriptor;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set_m_sourceDescriptor(::UnityEngine::RenderTextureDescriptor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_sourceDescriptor = value;
}
constexpr ::ArrayW<::StringW>& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_ShaderKeywords()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ShaderKeywords;
}
constexpr ::ArrayW<::StringW> const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_ShaderKeywords() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ShaderKeywords;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set_m_ShaderKeywords(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ShaderKeywords = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_UVToViewPerEye()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UVToViewPerEye;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_UVToViewPerEye() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UVToViewPerEye;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set_m_UVToViewPerEye(::ArrayW<::UnityEngine::Vector4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UVToViewPerEye = value;
}
constexpr ::ArrayW<float_t>& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_RadiusPerEye()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RadiusPerEye;
}
constexpr ::ArrayW<float_t> const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_RadiusPerEye() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RadiusPerEye;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set_m_RadiusPerEye(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RadiusPerEye = value;
}
constexpr bool& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_IsCommandBufferDirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsCommandBufferDirty;
}
constexpr bool const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_IsCommandBufferDirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsCommandBufferDirty;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set_m_IsCommandBufferDirty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsCommandBufferDirty = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_FullscreenTriangle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FullscreenTriangle;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_FullscreenTriangle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FullscreenTriangle;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set_m_FullscreenTriangle(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FullscreenTriangle = value;
}
constexpr ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_PipelineStage>& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_PreviousPipelineStage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousPipelineStage;
}
constexpr ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_PipelineStage> const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_PreviousPipelineStage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousPipelineStage;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set_m_PreviousPipelineStage(::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_PipelineStage>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousPipelineStage = value;
}
constexpr ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_Resolution>& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_PreviousResolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousResolution;
}
constexpr ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_Resolution> const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_PreviousResolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousResolution;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set_m_PreviousResolution(::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_Resolution>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousResolution = value;
}
constexpr ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_Deinterleaving>& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_PreviousDeinterleaving()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousDeinterleaving;
}
constexpr ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_Deinterleaving> const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_PreviousDeinterleaving() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousDeinterleaving;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set_m_PreviousDeinterleaving(::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_Deinterleaving>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousDeinterleaving = value;
}
constexpr ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_DebugMode>& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_PreviousDebugMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousDebugMode;
}
constexpr ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_DebugMode> const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_PreviousDebugMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousDebugMode;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set_m_PreviousDebugMode(::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_DebugMode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousDebugMode = value;
}
constexpr ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_NoiseType>& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_PreviousNoiseType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousNoiseType;
}
constexpr ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_NoiseType> const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_PreviousNoiseType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousNoiseType;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set_m_PreviousNoiseType(::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_NoiseType>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousNoiseType = value;
}
constexpr ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_BlurType>& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_PreviousBlurAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousBlurAmount;
}
constexpr ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_BlurType> const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_PreviousBlurAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousBlurAmount;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set_m_PreviousBlurAmount(::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_BlurType>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousBlurAmount = value;
}
constexpr int32_t& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_PreviousWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousWidth;
}
constexpr int32_t const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_PreviousWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousWidth;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set_m_PreviousWidth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousWidth = value;
}
constexpr int32_t& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_PreviousHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousHeight;
}
constexpr int32_t const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_PreviousHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousHeight;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set_m_PreviousHeight(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousHeight = value;
}
constexpr bool& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_PreviousAllowHDR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousAllowHDR;
}
constexpr bool const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_PreviousAllowHDR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousAllowHDR;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set_m_PreviousAllowHDR(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousAllowHDR = value;
}
constexpr bool& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_PreviousUseMultibounce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousUseMultibounce;
}
constexpr bool const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_PreviousUseMultibounce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousUseMultibounce;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set_m_PreviousUseMultibounce(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousUseMultibounce = value;
}
constexpr bool& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_PreviousColorBleedingEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousColorBleedingEnabled;
}
constexpr bool const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_PreviousColorBleedingEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousColorBleedingEnabled;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set_m_PreviousColorBleedingEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousColorBleedingEnabled = value;
}
constexpr bool& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_PreviousTemporalFilterEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousTemporalFilterEnabled;
}
constexpr bool const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_PreviousTemporalFilterEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousTemporalFilterEnabled;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set_m_PreviousTemporalFilterEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousTemporalFilterEnabled = value;
}
constexpr ::UnityEngine::RenderingPath& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_PreviousRenderingPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousRenderingPath;
}
constexpr ::UnityEngine::RenderingPath const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_PreviousRenderingPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousRenderingPath;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set_m_PreviousRenderingPath(::UnityEngine::RenderingPath  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousRenderingPath = value;
}
constexpr ::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_PrevStereoRenderingMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrevStereoRenderingMode;
}
constexpr ::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode const& HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_get_m_PrevStereoRenderingMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrevStereoRenderingMode;
}
constexpr void HorizonBasedAmbientOcclusion::HBAO::__cordl_internal_set_m_PrevStereoRenderingMode(::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PrevStereoRenderingMode = value;
}
inline void HorizonBasedAmbientOcclusion::HBAO::setStaticF_s_jitter(::ArrayW<::UnityEngine::Vector2>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector2>, "s_jitter", ::HorizonBasedAmbientOcclusion::HBAO*>(std::forward<::ArrayW<::UnityEngine::Vector2>>(value));
}
inline ::ArrayW<::UnityEngine::Vector2> HorizonBasedAmbientOcclusion::HBAO::getStaticF_s_jitter()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector2>, "s_jitter", ::HorizonBasedAmbientOcclusion::HBAO*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO::setStaticF_s_temporalRotations(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "s_temporalRotations", ::HorizonBasedAmbientOcclusion::HBAO*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> HorizonBasedAmbientOcclusion::HBAO::getStaticF_s_temporalRotations()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "s_temporalRotations", ::HorizonBasedAmbientOcclusion::HBAO*>();
}
inline void HorizonBasedAmbientOcclusion::HBAO::setStaticF_s_temporalOffsets(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "s_temporalOffsets", ::HorizonBasedAmbientOcclusion::HBAO*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> HorizonBasedAmbientOcclusion::HBAO::getStaticF_s_temporalOffsets()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "s_temporalOffsets", ::HorizonBasedAmbientOcclusion::HBAO*>();
}
inline ::HorizonBasedAmbientOcclusion::HBAO_Presets HorizonBasedAmbientOcclusion::HBAO::get_presets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_presets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::HBAO_Presets>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::set_presets(::HorizonBasedAmbientOcclusion::HBAO_Presets  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_presets", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_Presets>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings HorizonBasedAmbientOcclusion::HBAO::get_generalSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_generalSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::set_generalSettings(::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_generalSettings", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::HorizonBasedAmbientOcclusion::HBAO_AOSettings HorizonBasedAmbientOcclusion::HBAO::get_aoSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_aoSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::HBAO_AOSettings>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::set_aoSettings(::HorizonBasedAmbientOcclusion::HBAO_AOSettings  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_aoSettings", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_AOSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings HorizonBasedAmbientOcclusion::HBAO::get_temporalFilterSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_temporalFilterSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::set_temporalFilterSettings(::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_temporalFilterSettings", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::HorizonBasedAmbientOcclusion::HBAO_BlurSettings HorizonBasedAmbientOcclusion::HBAO::get_blurSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_blurSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::HBAO_BlurSettings>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::set_blurSettings(::HorizonBasedAmbientOcclusion::HBAO_BlurSettings  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_blurSettings", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_BlurSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings HorizonBasedAmbientOcclusion::HBAO::get_colorBleedingSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_colorBleedingSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::set_colorBleedingSettings(::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_colorBleedingSettings", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::HorizonBasedAmbientOcclusion::HBAO_Preset HorizonBasedAmbientOcclusion::HBAO::GetCurrentPreset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetCurrentPreset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::HBAO_Preset>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::ApplyPreset(::HorizonBasedAmbientOcclusion::HBAO_Preset  preset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"ApplyPreset", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_Preset>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, preset);
}
inline ::HorizonBasedAmbientOcclusion::HBAO_PipelineStage HorizonBasedAmbientOcclusion::HBAO::GetPipelineStage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetPipelineStage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::HBAO_PipelineStage>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::SetPipelineStage(::HorizonBasedAmbientOcclusion::HBAO_PipelineStage  pipelineStage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetPipelineStage", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_PipelineStage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pipelineStage);
}
inline ::HorizonBasedAmbientOcclusion::HBAO_Quality HorizonBasedAmbientOcclusion::HBAO::GetQuality()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetQuality", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::HBAO_Quality>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::SetQuality(::HorizonBasedAmbientOcclusion::HBAO_Quality  quality)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetQuality", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_Quality>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, quality);
}
inline ::HorizonBasedAmbientOcclusion::HBAO_Deinterleaving HorizonBasedAmbientOcclusion::HBAO::GetDeinterleaving()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetDeinterleaving", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::HBAO_Deinterleaving>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::SetDeinterleaving(::HorizonBasedAmbientOcclusion::HBAO_Deinterleaving  deinterleaving)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetDeinterleaving", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_Deinterleaving>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deinterleaving);
}
inline ::HorizonBasedAmbientOcclusion::HBAO_Resolution HorizonBasedAmbientOcclusion::HBAO::GetResolution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetResolution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::HBAO_Resolution>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::SetResolution(::HorizonBasedAmbientOcclusion::HBAO_Resolution  resolution)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetResolution", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_Resolution>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resolution);
}
inline ::HorizonBasedAmbientOcclusion::HBAO_NoiseType HorizonBasedAmbientOcclusion::HBAO::GetNoiseType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetNoiseType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::HBAO_NoiseType>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::SetNoiseType(::HorizonBasedAmbientOcclusion::HBAO_NoiseType  noiseType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetNoiseType", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_NoiseType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noiseType);
}
inline ::HorizonBasedAmbientOcclusion::HBAO_DebugMode HorizonBasedAmbientOcclusion::HBAO::GetDebugMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetDebugMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::HBAO_DebugMode>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::SetDebugMode(::HorizonBasedAmbientOcclusion::HBAO_DebugMode  debugMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetDebugMode", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_DebugMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, debugMode);
}
inline float_t HorizonBasedAmbientOcclusion::HBAO::GetAoRadius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetAoRadius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::SetAoRadius(float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetAoRadius", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, radius);
}
inline float_t HorizonBasedAmbientOcclusion::HBAO::GetAoMaxRadiusPixels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetAoMaxRadiusPixels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::SetAoMaxRadiusPixels(float_t  maxRadiusPixels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetAoMaxRadiusPixels", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxRadiusPixels);
}
inline float_t HorizonBasedAmbientOcclusion::HBAO::GetAoBias()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetAoBias", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::SetAoBias(float_t  bias)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetAoBias", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bias);
}
inline float_t HorizonBasedAmbientOcclusion::HBAO::GetAoOffscreenSamplesContribution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetAoOffscreenSamplesContribution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::SetAoOffscreenSamplesContribution(float_t  contribution)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetAoOffscreenSamplesContribution", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contribution);
}
inline float_t HorizonBasedAmbientOcclusion::HBAO::GetAoMaxDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetAoMaxDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::SetAoMaxDistance(float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetAoMaxDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxDistance);
}
inline float_t HorizonBasedAmbientOcclusion::HBAO::GetAoDistanceFalloff()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetAoDistanceFalloff", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::SetAoDistanceFalloff(float_t  distanceFalloff)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetAoDistanceFalloff", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distanceFalloff);
}
inline ::HorizonBasedAmbientOcclusion::HBAO_PerPixelNormals HorizonBasedAmbientOcclusion::HBAO::GetAoPerPixelNormals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetAoPerPixelNormals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::HBAO_PerPixelNormals>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::SetAoPerPixelNormals(::HorizonBasedAmbientOcclusion::HBAO_PerPixelNormals  perPixelNormals)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetAoPerPixelNormals", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_PerPixelNormals>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, perPixelNormals);
}
inline ::UnityEngine::Color HorizonBasedAmbientOcclusion::HBAO::GetAoColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetAoColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::SetAoColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetAoColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline float_t HorizonBasedAmbientOcclusion::HBAO::GetAoIntensity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetAoIntensity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::SetAoIntensity(float_t  intensity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetAoIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, intensity);
}
inline bool HorizonBasedAmbientOcclusion::HBAO::UseMultiBounce()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"UseMultiBounce", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::EnableMultiBounce(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"EnableMultiBounce", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enabled);
}
inline float_t HorizonBasedAmbientOcclusion::HBAO::GetAoMultiBounceInfluence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetAoMultiBounceInfluence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::SetAoMultiBounceInfluence(float_t  multiBounceInfluence)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetAoMultiBounceInfluence", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiBounceInfluence);
}
inline bool HorizonBasedAmbientOcclusion::HBAO::IsTemporalFilterEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"IsTemporalFilterEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::EnableTemporalFilter(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"EnableTemporalFilter", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enabled);
}
inline ::HorizonBasedAmbientOcclusion::HBAO_VarianceClipping HorizonBasedAmbientOcclusion::HBAO::GetTemporalFilterVarianceClipping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetTemporalFilterVarianceClipping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::HBAO_VarianceClipping>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::SetTemporalFilterVarianceClipping(::HorizonBasedAmbientOcclusion::HBAO_VarianceClipping  varianceClipping)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetTemporalFilterVarianceClipping", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_VarianceClipping>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, varianceClipping);
}
inline ::HorizonBasedAmbientOcclusion::HBAO_BlurType HorizonBasedAmbientOcclusion::HBAO::GetBlurType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetBlurType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::HBAO_BlurType>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::SetBlurType(::HorizonBasedAmbientOcclusion::HBAO_BlurType  blurType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetBlurType", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_BlurType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, blurType);
}
inline float_t HorizonBasedAmbientOcclusion::HBAO::GetBlurSharpness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetBlurSharpness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::SetBlurSharpness(float_t  sharpness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetBlurSharpness", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sharpness);
}
inline bool HorizonBasedAmbientOcclusion::HBAO::IsColorBleedingEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"IsColorBleedingEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::EnableColorBleeding(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"EnableColorBleeding", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enabled);
}
inline float_t HorizonBasedAmbientOcclusion::HBAO::GetColorBleedingSaturation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetColorBleedingSaturation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::SetColorBleedingSaturation(float_t  saturation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetColorBleedingSaturation", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, saturation);
}
inline float_t HorizonBasedAmbientOcclusion::HBAO::GetColorBleedingAlbedoMultiplier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetColorBleedingAlbedoMultiplier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::SetColorBleedingAlbedoMultiplier(float_t  albedoMultiplier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetColorBleedingAlbedoMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, albedoMultiplier);
}
inline float_t HorizonBasedAmbientOcclusion::HBAO::GetColorBleedingBrightnessMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetColorBleedingBrightnessMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::SetColorBleedingBrightnessMask(float_t  brightnessMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetColorBleedingBrightnessMask", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, brightnessMask);
}
inline ::UnityEngine::Vector2 HorizonBasedAmbientOcclusion::HBAO::GetColorBleedingBrightnessMaskRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetColorBleedingBrightnessMaskRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::SetColorBleedingBrightnessMaskRange(::UnityEngine::Vector2  brightnessMaskRange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"SetColorBleedingBrightnessMaskRange", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, brightnessMaskRange);
}
inline ::UnityW<::UnityEngine::Material> HorizonBasedAmbientOcclusion::HBAO::get_material()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_material", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::set_material(::UnityEngine::Material*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_material", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Camera> HorizonBasedAmbientOcclusion::HBAO::get_hbaoCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_hbaoCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::set_hbaoCamera(::UnityEngine::Camera*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_hbaoCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::CommandBuffer* HorizonBasedAmbientOcclusion::HBAO::get_cmdBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_cmdBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CommandBuffer*>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::set_cmdBuffer(::UnityEngine::Rendering::CommandBuffer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_cmdBuffer", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO::get_width()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_width", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::set_width(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_width", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO::get_height()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_height", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::set_height(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_height", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool HorizonBasedAmbientOcclusion::HBAO::get_stereoActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_stereoActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::set_stereoActive(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_stereoActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO::get_xrActiveEye()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_xrActiveEye", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::set_xrActiveEye(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_xrActiveEye", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode HorizonBasedAmbientOcclusion::HBAO::get_stereoRenderingMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_stereoRenderingMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::set_stereoRenderingMode(::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_stereoRenderingMode", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO::get_screenWidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_screenWidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::set_screenWidth(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_screenWidth", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO::get_screenHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_screenHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::set_screenHeight(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_screenHeight", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO::get_aoWidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_aoWidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::set_aoWidth(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_aoWidth", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO::get_aoHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_aoHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::set_aoHeight(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_aoHeight", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO::get_reinterleavedAoWidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_reinterleavedAoWidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::set_reinterleavedAoWidth(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_reinterleavedAoWidth", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO::get_reinterleavedAoHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_reinterleavedAoHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::set_reinterleavedAoHeight(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_reinterleavedAoHeight", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO::get_deinterleavedAoWidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_deinterleavedAoWidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::set_deinterleavedAoWidth(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_deinterleavedAoWidth", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO::get_deinterleavedAoHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_deinterleavedAoHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::set_deinterleavedAoHeight(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_deinterleavedAoHeight", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t HorizonBasedAmbientOcclusion::HBAO::get_frameCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_frameCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::set_frameCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_frameCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool HorizonBasedAmbientOcclusion::HBAO::get_motionVectorsSupported()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_motionVectorsSupported", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::set_motionVectorsSupported(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_motionVectorsSupported", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::RenderTexture> HorizonBasedAmbientOcclusion::HBAO::get_aoHistoryBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_aoHistoryBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::set_aoHistoryBuffer(::UnityEngine::RenderTexture*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_aoHistoryBuffer", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::RenderTexture> HorizonBasedAmbientOcclusion::HBAO::get_colorBleedingHistoryBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_colorBleedingHistoryBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::set_colorBleedingHistoryBuffer(::UnityEngine::RenderTexture*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_colorBleedingHistoryBuffer", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Texture2D> HorizonBasedAmbientOcclusion::HBAO::get_noiseTex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_noiseTex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::set_noiseTex(::UnityEngine::Texture2D*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_noiseTex", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Mesh> HorizonBasedAmbientOcclusion::HBAO::get_fullscreenTriangle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_fullscreenTriangle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::CameraEvent HorizonBasedAmbientOcclusion::HBAO::get_cameraEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_cameraEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CameraEvent>(this, ___internal_method);
}
inline bool HorizonBasedAmbientOcclusion::HBAO::get_isCommandBufferDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_isCommandBufferDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::set_isCommandBufferDirty(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"set_isCommandBufferDirty", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool HorizonBasedAmbientOcclusion::HBAO::get_isHistoryBufferDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_isHistoryBufferDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::RenderTextureFormat HorizonBasedAmbientOcclusion::HBAO::get_defaultHDRRenderTextureFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_defaultHDRRenderTextureFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureFormat>(nullptr, ___internal_method);
}
inline ::UnityEngine::RenderTextureFormat HorizonBasedAmbientOcclusion::HBAO::get_sourceFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_sourceFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureFormat>(this, ___internal_method);
}
inline ::UnityEngine::RenderTextureFormat HorizonBasedAmbientOcclusion::HBAO::get_colorFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_colorFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureFormat>(nullptr, ___internal_method);
}
inline ::UnityEngine::RenderTextureFormat HorizonBasedAmbientOcclusion::HBAO::get_depthFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_depthFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureFormat>(nullptr, ___internal_method);
}
inline ::UnityEngine::RenderTextureFormat HorizonBasedAmbientOcclusion::HBAO::get_normalsFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_normalsFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureFormat>(nullptr, ___internal_method);
}
inline bool HorizonBasedAmbientOcclusion::HBAO::get_isLinearColorSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_isLinearColorSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool HorizonBasedAmbientOcclusion::HBAO::get_renderingInSceneView()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"get_renderingInSceneView", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::OnPreRender()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"OnPreRender", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::OnPostRender()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"OnPostRender", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::FetchRenderParameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"FetchRenderParameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::AllocateHistoryBuffers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"AllocateHistoryBuffers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::ReleaseHistoryBuffers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"ReleaseHistoryBuffers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::ClearCommandBuffer(::UnityEngine::Rendering::CommandBuffer*  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"ClearCommandBuffer", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void HorizonBasedAmbientOcclusion::HBAO::BuildCommandBuffer(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::CameraEvent  cameraEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"BuildCommandBuffer", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, cameraEvent);
}
inline void HorizonBasedAmbientOcclusion::HBAO::AO(::UnityEngine::Rendering::CommandBuffer*  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"AO", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void HorizonBasedAmbientOcclusion::HBAO::DeinterleavedAO(::UnityEngine::Rendering::CommandBuffer*  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"DeinterleavedAO", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void HorizonBasedAmbientOcclusion::HBAO::Blur(::UnityEngine::Rendering::CommandBuffer*  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"Blur", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void HorizonBasedAmbientOcclusion::HBAO::TemporalFilter(::UnityEngine::Rendering::CommandBuffer*  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"TemporalFilter", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void HorizonBasedAmbientOcclusion::HBAO::Composite(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::CameraEvent  cameraEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"Composite", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::CameraEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, cameraEvent);
}
inline void HorizonBasedAmbientOcclusion::HBAO::CompositeBeforeReflections(::UnityEngine::Rendering::CommandBuffer*  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"CompositeBeforeReflections", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void HorizonBasedAmbientOcclusion::HBAO::CompositeAfterLighting(::UnityEngine::Rendering::CommandBuffer*  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"CompositeAfterLighting", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void HorizonBasedAmbientOcclusion::HBAO::CompositeBeforeImageEffectsOpaque(::UnityEngine::Rendering::CommandBuffer*  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"CompositeBeforeImageEffectsOpaque", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void HorizonBasedAmbientOcclusion::HBAO::CompositeDebug(::UnityEngine::Rendering::CommandBuffer*  cmd, int32_t  finalPassId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"CompositeDebug", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, finalPassId);
}
inline void HorizonBasedAmbientOcclusion::HBAO::UpdateMaterialProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"UpdateMaterialProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::UpdateShaderKeywords()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"UpdateShaderKeywords", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::CheckParameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"CheckParameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::RenderTextureDescriptor HorizonBasedAmbientOcclusion::HBAO::GetDefaultDescriptor(int32_t  depthBufferBits, ::UnityEngine::RenderTextureFormat  colorFormat, ::UnityEngine::RenderTextureReadWrite  readWrite)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetDefaultDescriptor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<::UnityEngine::RenderTextureReadWrite>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor>(this, ___internal_method, depthBufferBits, colorFormat, readWrite);
}
inline ::UnityW<::UnityEngine::RenderTexture> HorizonBasedAmbientOcclusion::HBAO::GetScreenSpaceRT(int32_t  depthBufferBits, ::UnityEngine::RenderTextureFormat  colorFormat, ::UnityEngine::RenderTextureReadWrite  readWrite, ::UnityEngine::FilterMode  filter, int32_t  widthOverride, int32_t  heightOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetScreenSpaceRT", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<::UnityEngine::RenderTextureReadWrite>(), ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method, depthBufferBits, colorFormat, readWrite, filter, widthOverride, heightOverride);
}
inline void HorizonBasedAmbientOcclusion::HBAO::GetScreenSpaceTemporaryRT(::UnityEngine::Rendering::CommandBuffer*  cmd, int32_t  nameID, int32_t  depthBufferBits, ::UnityEngine::RenderTextureFormat  colorFormat, ::UnityEngine::RenderTextureReadWrite  readWrite, ::UnityEngine::FilterMode  filter, int32_t  widthOverride, int32_t  heightOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"GetScreenSpaceTemporaryRT", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<::UnityEngine::RenderTextureReadWrite>(), ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, nameID, depthBufferBits, colorFormat, readWrite, filter, widthOverride, heightOverride);
}
inline void HorizonBasedAmbientOcclusion::HBAO::ReleaseTemporaryRT(::UnityEngine::Rendering::CommandBuffer*  cmd, int32_t  nameID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"ReleaseTemporaryRT", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, nameID);
}
inline void HorizonBasedAmbientOcclusion::HBAO::BlitFullscreenTriangle(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Material*  material, int32_t  pass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"BlitFullscreenTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, source, destination, material, pass);
}
inline void HorizonBasedAmbientOcclusion::HBAO::BlitFullscreenTriangle(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  destinations, ::UnityEngine::Material*  material, int32_t  pass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"BlitFullscreenTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, source, destinations, material, pass);
}
inline void HorizonBasedAmbientOcclusion::HBAO::BlitFullscreenTriangleWithClear(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Material*  material, ::UnityEngine::Color  clearColor, int32_t  pass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"BlitFullscreenTriangleWithClear", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, source, destination, material, clearColor, pass);
}
inline void HorizonBasedAmbientOcclusion::HBAO::ApplyFlip(::UnityEngine::Rendering::CommandBuffer*  cmd, bool  flip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"ApplyFlip", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, flip);
}
inline ::UnityEngine::Vector2 HorizonBasedAmbientOcclusion::HBAO::AdjustBrightnessMaskToGammaSpace(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"AdjustBrightnessMaskToGammaSpace", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v);
}
inline float_t HorizonBasedAmbientOcclusion::HBAO::ToGammaSpace(float_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"ToGammaSpace", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector2 HorizonBasedAmbientOcclusion::HBAO::ToGammaSpace(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"ToGammaSpace", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v);
}
inline void HorizonBasedAmbientOcclusion::HBAO::CreateNoiseTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {"CreateNoiseTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::HBAO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::HBAO*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HorizonBasedAmbientOcclusion::HBAO* HorizonBasedAmbientOcclusion::HBAO::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HorizonBasedAmbientOcclusion::HBAO*>());
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::HBAO::HBAO()   {
}
