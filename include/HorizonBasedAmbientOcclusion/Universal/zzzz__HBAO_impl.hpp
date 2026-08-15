#pragma once
// IWYU pragma private; include "HorizonBasedAmbientOcclusion/Universal/HBAO.hpp"
#include "HorizonBasedAmbientOcclusion/Universal/zzzz__HBAO_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponent_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "HorizonBasedAmbientOcclusion/Universal/zzzz__HBAO_def.hpp"
#include "HorizonBasedAmbientOcclusion/Universal/zzzz__HBAO_def.hpp"
#include "UnityEngine/Rendering/zzzz__BoolParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__ClampedFloatParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__ColorParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__FloatParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__IPostProcessComponent_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset::HBAO_Preset(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset::HBAO_Preset()   {
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset  HorizonBasedAmbientOcclusion::Universal::HBAO_Preset::FastestPerformance{static_cast<int32_t>(0x0)};
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset  HorizonBasedAmbientOcclusion::Universal::HBAO_Preset::FastPerformance{static_cast<int32_t>(0x1)};
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset  HorizonBasedAmbientOcclusion::Universal::HBAO_Preset::Normal{static_cast<int32_t>(0x2)};
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset  HorizonBasedAmbientOcclusion::Universal::HBAO_Preset::HighQuality{static_cast<int32_t>(0x3)};
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset  HorizonBasedAmbientOcclusion::Universal::HBAO_Preset::HighestQuality{static_cast<int32_t>(0x4)};
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset  HorizonBasedAmbientOcclusion::Universal::HBAO_Preset::Custom{static_cast<int32_t>(0x5)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_Mode::HBAO_Mode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_Mode::HBAO_Mode()   {
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_Mode  HorizonBasedAmbientOcclusion::Universal::HBAO_Mode::Normal{static_cast<int32_t>(0x0)};
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_Mode  HorizonBasedAmbientOcclusion::Universal::HBAO_Mode::LitAO{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPath::HBAO_RenderingPath(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPath::HBAO_RenderingPath()   {
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPath  HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPath::Forward{static_cast<int32_t>(0x0)};
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPath  HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPath::Deferred{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality::HBAO_Quality(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality::HBAO_Quality()   {
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality  HorizonBasedAmbientOcclusion::Universal::HBAO_Quality::Lowest{static_cast<int32_t>(0x0)};
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality  HorizonBasedAmbientOcclusion::Universal::HBAO_Quality::Low{static_cast<int32_t>(0x1)};
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality  HorizonBasedAmbientOcclusion::Universal::HBAO_Quality::Medium{static_cast<int32_t>(0x2)};
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality  HorizonBasedAmbientOcclusion::Universal::HBAO_Quality::High{static_cast<int32_t>(0x3)};
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality  HorizonBasedAmbientOcclusion::Universal::HBAO_Quality::Highest{static_cast<int32_t>(0x4)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution::HBAO_Resolution(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution::HBAO_Resolution()   {
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution  HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution::Full{static_cast<int32_t>(0x0)};
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution  HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution::Half{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType::HBAO_NoiseType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType::HBAO_NoiseType()   {
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType  HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType::Dither{static_cast<int32_t>(0x0)};
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType  HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType::InterleavedGradientNoise{static_cast<int32_t>(0x1)};
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType  HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType::SpatialDistribution{static_cast<int32_t>(0x2)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_Deinterleaving::HBAO_Deinterleaving(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_Deinterleaving::HBAO_Deinterleaving()   {
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_Deinterleaving  HorizonBasedAmbientOcclusion::Universal::HBAO_Deinterleaving::Disabled{static_cast<int32_t>(0x0)};
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_Deinterleaving  HorizonBasedAmbientOcclusion::Universal::HBAO_Deinterleaving::x4{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode::HBAO_DebugMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode::HBAO_DebugMode()   {
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode  HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode::Disabled{static_cast<int32_t>(0x0)};
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode  HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode::AOOnly{static_cast<int32_t>(0x1)};
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode  HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode::ColorBleedingOnly{static_cast<int32_t>(0x2)};
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode  HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode::SplitWithoutAOAndWithAO{static_cast<int32_t>(0x3)};
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode  HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode::SplitWithAOAndAOOnly{static_cast<int32_t>(0x4)};
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode  HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode::SplitWithoutAOAndAOOnly{static_cast<int32_t>(0x5)};
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode  HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode::ViewNormals{static_cast<int32_t>(0x6)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType::HBAO_BlurType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType::HBAO_BlurType()   {
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType  HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType::None{static_cast<int32_t>(0x0)};
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType  HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType::Narrow{static_cast<int32_t>(0x1)};
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType  HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType::Medium{static_cast<int32_t>(0x2)};
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType  HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType::Wide{static_cast<int32_t>(0x3)};
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType  HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType::ExtraWide{static_cast<int32_t>(0x4)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals::HBAO_PerPixelNormals(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals::HBAO_PerPixelNormals()   {
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals  HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals::Reconstruct2Samples{static_cast<int32_t>(0x0)};
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals  HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals::Reconstruct4Samples{static_cast<int32_t>(0x1)};
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals  HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals::Camera{static_cast<int32_t>(0x2)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping::HBAO_VarianceClipping(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping::HBAO_VarianceClipping()   {
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping  HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping::Disabled{static_cast<int32_t>(0x0)};
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping  HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping::_4Tap{static_cast<int32_t>(0x1)};
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping  HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping::_8Tap{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO_PresetParameter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO_PresetParameter::*)(::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset, bool)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO_PresetParameter::_ctor)> {
  constexpr static std::size_t size = 0x56e0;
  constexpr static std::size_t addrs = 0x1812a5e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_PresetParameter*>(),
                        {".ctor", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void HorizonBasedAmbientOcclusion::Universal::HBAO_PresetParameter::_ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset  value, bool  overrideState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_PresetParameter*>(),
                        {".ctor", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_PresetParameter* HorizonBasedAmbientOcclusion::Universal::HBAO_PresetParameter::New_ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset  value, bool  overrideState)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HorizonBasedAmbientOcclusion::Universal::HBAO_PresetParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_PresetParameter::HBAO_PresetParameter()   {
}
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO_ModeParameter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO_ModeParameter::*)(::HorizonBasedAmbientOcclusion::Universal::HBAO_Mode, bool)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO_ModeParameter::_ctor)> {
  constexpr static std::size_t size = 0x56e0;
  constexpr static std::size_t addrs = 0x1812a5e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_ModeParameter*>(),
                        {".ctor", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_Mode>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void HorizonBasedAmbientOcclusion::Universal::HBAO_ModeParameter::_ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_Mode  value, bool  overrideState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_ModeParameter*>(),
                        {".ctor", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_Mode>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_ModeParameter* HorizonBasedAmbientOcclusion::Universal::HBAO_ModeParameter::New_ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_Mode  value, bool  overrideState)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HorizonBasedAmbientOcclusion::Universal::HBAO_ModeParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_ModeParameter::HBAO_ModeParameter()   {
}
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPathParameter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPathParameter::*)(::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPath, bool)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPathParameter::_ctor)> {
  constexpr static std::size_t size = 0x56e0;
  constexpr static std::size_t addrs = 0x1812a5e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPathParameter*>(),
                        {".ctor", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPath>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPathParameter::_ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPath  value, bool  overrideState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPathParameter*>(),
                        {".ctor", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPath>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPathParameter* HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPathParameter::New_ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPath  value, bool  overrideState)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPathParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPathParameter::HBAO_RenderingPathParameter()   {
}
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO_QualityParameter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO_QualityParameter::*)(::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality, bool)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO_QualityParameter::_ctor)> {
  constexpr static std::size_t size = 0x56e0;
  constexpr static std::size_t addrs = 0x1812a5e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_QualityParameter*>(),
                        {".ctor", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void HorizonBasedAmbientOcclusion::Universal::HBAO_QualityParameter::_ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality  value, bool  overrideState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_QualityParameter*>(),
                        {".ctor", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_QualityParameter* HorizonBasedAmbientOcclusion::Universal::HBAO_QualityParameter::New_ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality  value, bool  overrideState)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HorizonBasedAmbientOcclusion::Universal::HBAO_QualityParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_QualityParameter::HBAO_QualityParameter()   {
}
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO_DeinterleavingParameter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO_DeinterleavingParameter::*)(::HorizonBasedAmbientOcclusion::Universal::HBAO_Deinterleaving, bool)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO_DeinterleavingParameter::_ctor)> {
  constexpr static std::size_t size = 0x56e0;
  constexpr static std::size_t addrs = 0x1812a5e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_DeinterleavingParameter*>(),
                        {".ctor", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_Deinterleaving>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void HorizonBasedAmbientOcclusion::Universal::HBAO_DeinterleavingParameter::_ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_Deinterleaving  value, bool  overrideState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_DeinterleavingParameter*>(),
                        {".ctor", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_Deinterleaving>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_DeinterleavingParameter* HorizonBasedAmbientOcclusion::Universal::HBAO_DeinterleavingParameter::New_ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_Deinterleaving  value, bool  overrideState)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HorizonBasedAmbientOcclusion::Universal::HBAO_DeinterleavingParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_DeinterleavingParameter::HBAO_DeinterleavingParameter()   {
}
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO_ResolutionParameter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO_ResolutionParameter::*)(::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution, bool)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO_ResolutionParameter::_ctor)> {
  constexpr static std::size_t size = 0x56e0;
  constexpr static std::size_t addrs = 0x1812a5e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_ResolutionParameter*>(),
                        {".ctor", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void HorizonBasedAmbientOcclusion::Universal::HBAO_ResolutionParameter::_ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution  value, bool  overrideState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_ResolutionParameter*>(),
                        {".ctor", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_ResolutionParameter* HorizonBasedAmbientOcclusion::Universal::HBAO_ResolutionParameter::New_ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution  value, bool  overrideState)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HorizonBasedAmbientOcclusion::Universal::HBAO_ResolutionParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_ResolutionParameter::HBAO_ResolutionParameter()   {
}
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseTypeParameter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseTypeParameter::*)(::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType, bool)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseTypeParameter::_ctor)> {
  constexpr static std::size_t size = 0x56e0;
  constexpr static std::size_t addrs = 0x1812a5e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseTypeParameter*>(),
                        {".ctor", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseTypeParameter::_ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType  value, bool  overrideState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseTypeParameter*>(),
                        {".ctor", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseTypeParameter* HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseTypeParameter::New_ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType  value, bool  overrideState)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseTypeParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseTypeParameter::HBAO_NoiseTypeParameter()   {
}
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugModeParameter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugModeParameter::*)(::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode, bool)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugModeParameter::_ctor)> {
  constexpr static std::size_t size = 0x56e0;
  constexpr static std::size_t addrs = 0x1812a5e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugModeParameter*>(),
                        {".ctor", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void HorizonBasedAmbientOcclusion::Universal::HBAO_DebugModeParameter::_ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode  value, bool  overrideState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugModeParameter*>(),
                        {".ctor", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugModeParameter* HorizonBasedAmbientOcclusion::Universal::HBAO_DebugModeParameter::New_ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode  value, bool  overrideState)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugModeParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugModeParameter::HBAO_DebugModeParameter()   {
}
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormalsParameter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormalsParameter::*)(::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals, bool)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormalsParameter::_ctor)> {
  constexpr static std::size_t size = 0x56e0;
  constexpr static std::size_t addrs = 0x1812a5e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormalsParameter*>(),
                        {".ctor", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormalsParameter::_ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals  value, bool  overrideState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormalsParameter*>(),
                        {".ctor", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormalsParameter* HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormalsParameter::New_ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals  value, bool  overrideState)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormalsParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormalsParameter::HBAO_PerPixelNormalsParameter()   {
}
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClippingParameter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClippingParameter::*)(::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping, bool)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClippingParameter::_ctor)> {
  constexpr static std::size_t size = 0x56e0;
  constexpr static std::size_t addrs = 0x1812a5e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClippingParameter*>(),
                        {".ctor", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClippingParameter::_ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping  value, bool  overrideState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClippingParameter*>(),
                        {".ctor", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClippingParameter* HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClippingParameter::New_ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping  value, bool  overrideState)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClippingParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClippingParameter::HBAO_VarianceClippingParameter()   {
}
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurTypeParameter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurTypeParameter::*)(::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType, bool)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurTypeParameter::_ctor)> {
  constexpr static std::size_t size = 0x56e0;
  constexpr static std::size_t addrs = 0x1812a5e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurTypeParameter*>(),
                        {".ctor", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void HorizonBasedAmbientOcclusion::Universal::HBAO_BlurTypeParameter::_ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType  value, bool  overrideState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurTypeParameter*>(),
                        {".ctor", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurTypeParameter* HorizonBasedAmbientOcclusion::Universal::HBAO_BlurTypeParameter::New_ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType  value, bool  overrideState)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurTypeParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurTypeParameter::HBAO_BlurTypeParameter()   {
}
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO_MinMaxFloatParameter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO_MinMaxFloatParameter::*)(::UnityEngine::Vector2, float_t, float_t, bool)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO_MinMaxFloatParameter::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1813fda20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_MinMaxFloatParameter*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& HorizonBasedAmbientOcclusion::Universal::HBAO_MinMaxFloatParameter::__cordl_internal_get_min()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___min;
}
constexpr float_t const& HorizonBasedAmbientOcclusion::Universal::HBAO_MinMaxFloatParameter::__cordl_internal_get_min() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___min;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAO_MinMaxFloatParameter::__cordl_internal_set_min(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___min = value;
}
constexpr float_t& HorizonBasedAmbientOcclusion::Universal::HBAO_MinMaxFloatParameter::__cordl_internal_get_max()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___max;
}
constexpr float_t const& HorizonBasedAmbientOcclusion::Universal::HBAO_MinMaxFloatParameter::__cordl_internal_get_max() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___max;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAO_MinMaxFloatParameter::__cordl_internal_set_max(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___max = value;
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAO_MinMaxFloatParameter::_ctor(::UnityEngine::Vector2  value, float_t  min, float_t  max, bool  overrideState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_MinMaxFloatParameter*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, min, max, overrideState);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_MinMaxFloatParameter* HorizonBasedAmbientOcclusion::Universal::HBAO_MinMaxFloatParameter::New_ctor(::UnityEngine::Vector2  value, float_t  min, float_t  max, bool  overrideState)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HorizonBasedAmbientOcclusion::Universal::HBAO_MinMaxFloatParameter*>(value, min, max, overrideState));
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_MinMaxFloatParameter::HBAO_MinMaxFloatParameter()   {
}
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO_SettingsGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO_SettingsGroup::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO_SettingsGroup::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b3b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_SettingsGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& HorizonBasedAmbientOcclusion::Universal::HBAO_SettingsGroup::__cordl_internal_get_isExpanded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isExpanded;
}
constexpr bool const& HorizonBasedAmbientOcclusion::Universal::HBAO_SettingsGroup::__cordl_internal_get_isExpanded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isExpanded;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAO_SettingsGroup::__cordl_internal_set_isExpanded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isExpanded = value;
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAO_SettingsGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_SettingsGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_SettingsGroup* HorizonBasedAmbientOcclusion::Universal::HBAO_SettingsGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HorizonBasedAmbientOcclusion::Universal::HBAO_SettingsGroup*>());
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_SettingsGroup::HBAO_SettingsGroup()   {
}
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO_ParameterDisplayName._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO_ParameterDisplayName::*)(::StringW)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO_ParameterDisplayName::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_ParameterDisplayName*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& HorizonBasedAmbientOcclusion::Universal::HBAO_ParameterDisplayName::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& HorizonBasedAmbientOcclusion::Universal::HBAO_ParameterDisplayName::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAO_ParameterDisplayName::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAO_ParameterDisplayName::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_ParameterDisplayName*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_ParameterDisplayName* HorizonBasedAmbientOcclusion::Universal::HBAO_ParameterDisplayName::New_ctor(::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HorizonBasedAmbientOcclusion::Universal::HBAO_ParameterDisplayName*>(name));
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_ParameterDisplayName::HBAO_ParameterDisplayName()   {
}
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO_Presets._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO_Presets::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO_Presets::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b3b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_Presets*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void HorizonBasedAmbientOcclusion::Universal::HBAO_Presets::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_Presets*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_Presets* HorizonBasedAmbientOcclusion::Universal::HBAO_Presets::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HorizonBasedAmbientOcclusion::Universal::HBAO_Presets*>());
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_Presets::HBAO_Presets()   {
}
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO_GeneralSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO_GeneralSettings::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO_GeneralSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b3b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_GeneralSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void HorizonBasedAmbientOcclusion::Universal::HBAO_GeneralSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_GeneralSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_GeneralSettings* HorizonBasedAmbientOcclusion::Universal::HBAO_GeneralSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HorizonBasedAmbientOcclusion::Universal::HBAO_GeneralSettings*>());
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_GeneralSettings::HBAO_GeneralSettings()   {
}
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO_AOSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO_AOSettings::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO_AOSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b3b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_AOSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void HorizonBasedAmbientOcclusion::Universal::HBAO_AOSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_AOSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_AOSettings* HorizonBasedAmbientOcclusion::Universal::HBAO_AOSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HorizonBasedAmbientOcclusion::Universal::HBAO_AOSettings*>());
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_AOSettings::HBAO_AOSettings()   {
}
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO_TemporalFilterSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO_TemporalFilterSettings::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO_TemporalFilterSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b3b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_TemporalFilterSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void HorizonBasedAmbientOcclusion::Universal::HBAO_TemporalFilterSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_TemporalFilterSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_TemporalFilterSettings* HorizonBasedAmbientOcclusion::Universal::HBAO_TemporalFilterSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HorizonBasedAmbientOcclusion::Universal::HBAO_TemporalFilterSettings*>());
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_TemporalFilterSettings::HBAO_TemporalFilterSettings()   {
}
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurSettings::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b3b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void HorizonBasedAmbientOcclusion::Universal::HBAO_BlurSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurSettings* HorizonBasedAmbientOcclusion::Universal::HBAO_BlurSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurSettings*>());
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurSettings::HBAO_BlurSettings()   {
}
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO_ColorBleedingSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO_ColorBleedingSettings::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO_ColorBleedingSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b3b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_ColorBleedingSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void HorizonBasedAmbientOcclusion::Universal::HBAO_ColorBleedingSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_ColorBleedingSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_ColorBleedingSettings* HorizonBasedAmbientOcclusion::Universal::HBAO_ColorBleedingSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HorizonBasedAmbientOcclusion::Universal::HBAO_ColorBleedingSettings*>());
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_ColorBleedingSettings::HBAO_ColorBleedingSettings()   {
}
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.EnableHBAO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)(bool)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::EnableHBAO)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fc7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"EnableHBAO", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.GetCurrentPreset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::GetCurrentPreset)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fcb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetCurrentPreset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.ApplyPreset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)(::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::ApplyPreset)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x1813fc400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"ApplyPreset", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.GetMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::Universal::HBAO_Mode (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::GetMode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fcbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.SetMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)(::HorizonBasedAmbientOcclusion::Universal::HBAO_Mode)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::SetMode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813fd1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetMode", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_Mode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.GetRenderingPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPath (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::GetRenderingPath)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fcc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetRenderingPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.SetRenderingPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)(::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPath)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::SetRenderingPath)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813fd230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetRenderingPath", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPath>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.GetQuality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::GetQuality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fcc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetQuality", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.SetQuality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)(::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::SetQuality)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813fd210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetQuality", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.GetDeinterleaving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::Universal::HBAO_Deinterleaving (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::GetDeinterleaving)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fcbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetDeinterleaving", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.SetDeinterleaving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)(::HorizonBasedAmbientOcclusion::Universal::HBAO_Deinterleaving)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::SetDeinterleaving)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813fd1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetDeinterleaving", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_Deinterleaving>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.GetResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::GetResolution)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fcca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetResolution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.SetResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)(::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::SetResolution)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813fd250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetResolution", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.GetNoiseType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::GetNoiseType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fcc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetNoiseType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.SetNoiseType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)(::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::SetNoiseType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813fd1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetNoiseType", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.GetDebugMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::GetDebugMode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fcb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetDebugMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.SetDebugMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)(::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::SetDebugMode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813fd190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetDebugMode", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.GetAoRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::GetAoRadius)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fca30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetAoRadius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.SetAoRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)(float_t)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::SetAoRadius)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1813fcfd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetAoRadius", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.GetAoMaxRadiusPixels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::GetAoMaxRadiusPixels)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fc970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetAoMaxRadiusPixels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.SetAoMaxRadiusPixels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)(float_t)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::SetAoMaxRadiusPixels)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1813fcee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetAoMaxRadiusPixels", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.GetAoBias
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::GetAoBias)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fc860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetAoBias", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.SetAoBias
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)(float_t)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::SetAoBias)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1813fcdd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetAoBias", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.GetAoOffscreenSamplesContribution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::GetAoOffscreenSamplesContribution)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fc9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetAoOffscreenSamplesContribution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.SetAoOffscreenSamplesContribution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)(float_t)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::SetAoOffscreenSamplesContribution)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1813fcf60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetAoOffscreenSamplesContribution", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.GetAoMaxDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::GetAoMaxDistance)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fc940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetAoMaxDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.SetAoMaxDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)(float_t)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::SetAoMaxDistance)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fceb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetAoMaxDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.GetAoDistanceFalloff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::GetAoDistanceFalloff)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fc8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetAoDistanceFalloff", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.SetAoDistanceFalloff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)(float_t)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::SetAoDistanceFalloff)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fce40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetAoDistanceFalloff", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.GetAoPerPixelNormals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::GetAoPerPixelNormals)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fca00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetAoPerPixelNormals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.SetAoPerPixelNormals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)(::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::SetAoPerPixelNormals)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fcfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetAoPerPixelNormals", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.GetAoColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::GetAoColor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1813fc890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetAoColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.SetAoColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)(::UnityEngine::Color)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::SetAoColor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fce10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetAoColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.GetAoIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::GetAoIntensity)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fc910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetAoIntensity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.SetAoIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)(float_t)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::SetAoIntensity)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1813fce70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetAoIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.UseMultiBounce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::UseMultiBounce)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fd2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"UseMultiBounce", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.EnableMultiBounce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)(bool)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::EnableMultiBounce)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fc800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"EnableMultiBounce", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.GetAoMultiBounceInfluence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::GetAoMultiBounceInfluence)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fc9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetAoMultiBounceInfluence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.SetAoMultiBounceInfluence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)(float_t)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::SetAoMultiBounceInfluence)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1813fcf20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetAoMultiBounceInfluence", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.IsTemporalFilterEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::IsTemporalFilterEnabled)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fcda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"IsTemporalFilterEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.EnableTemporalFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)(bool)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::EnableTemporalFilter)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"EnableTemporalFilter", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.GetTemporalFilterVarianceClipping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::GetTemporalFilterVarianceClipping)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fccd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetTemporalFilterVarianceClipping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.SetTemporalFilterVarianceClipping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)(::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::SetTemporalFilterVarianceClipping)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fd270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetTemporalFilterVarianceClipping", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.GetBlurType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::GetBlurType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fca90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetBlurType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.SetBlurType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)(::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::SetBlurType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fd050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetBlurType", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.GetBlurSharpness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::GetBlurSharpness)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fca60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetBlurSharpness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.SetBlurSharpness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)(float_t)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::SetBlurSharpness)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1813fd010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetBlurSharpness", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.IsColorBleedingEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::IsColorBleedingEnabled)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fcd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"IsColorBleedingEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.EnableColorBleeding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)(bool)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::EnableColorBleeding)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fc7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"EnableColorBleeding", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.GetColorBleedingSaturation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::GetColorBleedingSaturation)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fcb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetColorBleedingSaturation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.SetColorBleedingSaturation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)(float_t)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::SetColorBleedingSaturation)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1813fd150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetColorBleedingSaturation", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.GetColorBleedingBrightnessMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::GetColorBleedingBrightnessMask)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fcaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetColorBleedingBrightnessMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.SetColorBleedingBrightnessMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)(float_t)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::SetColorBleedingBrightnessMask)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1813fd110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetColorBleedingBrightnessMask", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.GetColorBleedingBrightnessMaskRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::GetColorBleedingBrightnessMaskRange)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fcac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetColorBleedingBrightnessMaskRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.SetColorBleedingBrightnessMaskRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)(::UnityEngine::Vector2)>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::SetColorBleedingBrightnessMaskRange)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1813fd080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetColorBleedingBrightnessMaskRange", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.IsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::IsActive)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1813fcd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"IsActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO.IsTileCompatible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::IsTileCompatible)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"IsTileCompatible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAO._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAO::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAO::_ctor)> {
  constexpr static std::size_t size = 0x6f0;
  constexpr static std::size_t addrs = 0x1813fd2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_PresetParameter*& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_preset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preset;
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_PresetParameter* const& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_preset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preset;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_set_preset(::HorizonBasedAmbientOcclusion::Universal::HBAO_PresetParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preset = value;
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_ModeParameter*& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_ModeParameter* const& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_set_mode(::HorizonBasedAmbientOcclusion::Universal::HBAO_ModeParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPathParameter*& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_renderingPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderingPath;
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPathParameter* const& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_renderingPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderingPath;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_set_renderingPath(::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPathParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderingPath = value;
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_QualityParameter*& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_quality()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quality;
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_QualityParameter* const& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_quality() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quality;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_set_quality(::HorizonBasedAmbientOcclusion::Universal::HBAO_QualityParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___quality = value;
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_DeinterleavingParameter*& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_deinterleaving()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deinterleaving;
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_DeinterleavingParameter* const& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_deinterleaving() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deinterleaving;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_set_deinterleaving(::HorizonBasedAmbientOcclusion::Universal::HBAO_DeinterleavingParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deinterleaving = value;
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_ResolutionParameter*& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_resolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resolution;
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_ResolutionParameter* const& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_resolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resolution;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_set_resolution(::HorizonBasedAmbientOcclusion::Universal::HBAO_ResolutionParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resolution = value;
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseTypeParameter*& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_noiseType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noiseType;
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseTypeParameter* const& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_noiseType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noiseType;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_set_noiseType(::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseTypeParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noiseType = value;
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugModeParameter*& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_debugMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugMode;
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugModeParameter* const& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_debugMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugMode;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_set_debugMode(::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugModeParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugMode = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_set_radius(::UnityEngine::Rendering::ClampedFloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___radius = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_maxRadiusPixels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRadiusPixels;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_maxRadiusPixels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRadiusPixels;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_set_maxRadiusPixels(::UnityEngine::Rendering::ClampedFloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxRadiusPixels = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_bias()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bias;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_bias() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bias;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_set_bias(::UnityEngine::Rendering::ClampedFloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bias = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_intensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensity;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_intensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensity;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_set_intensity(::UnityEngine::Rendering::ClampedFloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intensity = value;
}
constexpr ::UnityEngine::Rendering::BoolParameter*& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_useMultiBounce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useMultiBounce;
}
constexpr ::UnityEngine::Rendering::BoolParameter* const& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_useMultiBounce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useMultiBounce;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_set_useMultiBounce(::UnityEngine::Rendering::BoolParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useMultiBounce = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_multiBounceInfluence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multiBounceInfluence;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_multiBounceInfluence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multiBounceInfluence;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_set_multiBounceInfluence(::UnityEngine::Rendering::ClampedFloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___multiBounceInfluence = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_directLightingStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directLightingStrength;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_directLightingStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directLightingStrength;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_set_directLightingStrength(::UnityEngine::Rendering::ClampedFloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___directLightingStrength = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_offscreenSamplesContribution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offscreenSamplesContribution;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_offscreenSamplesContribution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offscreenSamplesContribution;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_set_offscreenSamplesContribution(::UnityEngine::Rendering::ClampedFloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offscreenSamplesContribution = value;
}
constexpr ::UnityEngine::Rendering::FloatParameter*& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_maxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistance;
}
constexpr ::UnityEngine::Rendering::FloatParameter* const& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_maxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistance;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_set_maxDistance(::UnityEngine::Rendering::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDistance = value;
}
constexpr ::UnityEngine::Rendering::FloatParameter*& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_distanceFalloff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceFalloff;
}
constexpr ::UnityEngine::Rendering::FloatParameter* const& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_distanceFalloff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceFalloff;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_set_distanceFalloff(::UnityEngine::Rendering::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distanceFalloff = value;
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormalsParameter*& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_perPixelNormals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perPixelNormals;
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormalsParameter* const& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_perPixelNormals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perPixelNormals;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_set_perPixelNormals(::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormalsParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___perPixelNormals = value;
}
constexpr ::UnityEngine::Rendering::ColorParameter*& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_baseColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseColor;
}
constexpr ::UnityEngine::Rendering::ColorParameter* const& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_baseColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseColor;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_set_baseColor(::UnityEngine::Rendering::ColorParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseColor = value;
}
constexpr ::UnityEngine::Rendering::BoolParameter*& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_temporalFilterEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___temporalFilterEnabled;
}
constexpr ::UnityEngine::Rendering::BoolParameter* const& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_temporalFilterEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___temporalFilterEnabled;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_set_temporalFilterEnabled(::UnityEngine::Rendering::BoolParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___temporalFilterEnabled = value;
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClippingParameter*& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_varianceClipping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___varianceClipping;
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClippingParameter* const& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_varianceClipping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___varianceClipping;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_set_varianceClipping(::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClippingParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___varianceClipping = value;
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurTypeParameter*& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_blurType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blurType;
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurTypeParameter* const& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_blurType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blurType;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_set_blurType(::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurTypeParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blurType = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_sharpness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharpness;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_sharpness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharpness;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_set_sharpness(::UnityEngine::Rendering::ClampedFloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sharpness = value;
}
constexpr ::UnityEngine::Rendering::BoolParameter*& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_colorBleedingEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorBleedingEnabled;
}
constexpr ::UnityEngine::Rendering::BoolParameter* const& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_colorBleedingEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorBleedingEnabled;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_set_colorBleedingEnabled(::UnityEngine::Rendering::BoolParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorBleedingEnabled = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_saturation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saturation;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_saturation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saturation;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_set_saturation(::UnityEngine::Rendering::ClampedFloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saturation = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_brightnessMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___brightnessMask;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_brightnessMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___brightnessMask;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_set_brightnessMask(::UnityEngine::Rendering::ClampedFloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___brightnessMask = value;
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_MinMaxFloatParameter*& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_brightnessMaskRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___brightnessMaskRange;
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_MinMaxFloatParameter* const& HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_get_brightnessMaskRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___brightnessMaskRange;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAO::__cordl_internal_set_brightnessMaskRange(::HorizonBasedAmbientOcclusion::Universal::HBAO_MinMaxFloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___brightnessMaskRange = value;
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAO::EnableHBAO(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"EnableHBAO", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset HorizonBasedAmbientOcclusion::Universal::HBAO::GetCurrentPreset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetCurrentPreset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAO::ApplyPreset(::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset  preset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"ApplyPreset", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, preset);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_Mode HorizonBasedAmbientOcclusion::Universal::HBAO::GetMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::Universal::HBAO_Mode>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAO::SetMode(::HorizonBasedAmbientOcclusion::Universal::HBAO_Mode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetMode", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_Mode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPath HorizonBasedAmbientOcclusion::Universal::HBAO::GetRenderingPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetRenderingPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPath>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAO::SetRenderingPath(::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPath  renderingPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetRenderingPath", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPath>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderingPath);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality HorizonBasedAmbientOcclusion::Universal::HBAO::GetQuality()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetQuality", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAO::SetQuality(::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality  quality)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetQuality", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, quality);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_Deinterleaving HorizonBasedAmbientOcclusion::Universal::HBAO::GetDeinterleaving()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetDeinterleaving", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::Universal::HBAO_Deinterleaving>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAO::SetDeinterleaving(::HorizonBasedAmbientOcclusion::Universal::HBAO_Deinterleaving  deinterleaving)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetDeinterleaving", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_Deinterleaving>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deinterleaving);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution HorizonBasedAmbientOcclusion::Universal::HBAO::GetResolution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetResolution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAO::SetResolution(::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution  resolution)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetResolution", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resolution);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType HorizonBasedAmbientOcclusion::Universal::HBAO::GetNoiseType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetNoiseType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAO::SetNoiseType(::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType  noiseType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetNoiseType", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noiseType);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode HorizonBasedAmbientOcclusion::Universal::HBAO::GetDebugMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetDebugMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAO::SetDebugMode(::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode  debugMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetDebugMode", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, debugMode);
}
inline float_t HorizonBasedAmbientOcclusion::Universal::HBAO::GetAoRadius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetAoRadius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAO::SetAoRadius(float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetAoRadius", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, radius);
}
inline float_t HorizonBasedAmbientOcclusion::Universal::HBAO::GetAoMaxRadiusPixels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetAoMaxRadiusPixels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAO::SetAoMaxRadiusPixels(float_t  maxRadiusPixels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetAoMaxRadiusPixels", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxRadiusPixels);
}
inline float_t HorizonBasedAmbientOcclusion::Universal::HBAO::GetAoBias()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetAoBias", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAO::SetAoBias(float_t  bias)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetAoBias", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bias);
}
inline float_t HorizonBasedAmbientOcclusion::Universal::HBAO::GetAoOffscreenSamplesContribution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetAoOffscreenSamplesContribution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAO::SetAoOffscreenSamplesContribution(float_t  offscreenSamplesContribution)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetAoOffscreenSamplesContribution", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, offscreenSamplesContribution);
}
inline float_t HorizonBasedAmbientOcclusion::Universal::HBAO::GetAoMaxDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetAoMaxDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAO::SetAoMaxDistance(float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetAoMaxDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxDistance);
}
inline float_t HorizonBasedAmbientOcclusion::Universal::HBAO::GetAoDistanceFalloff()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetAoDistanceFalloff", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAO::SetAoDistanceFalloff(float_t  distanceFalloff)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetAoDistanceFalloff", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distanceFalloff);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals HorizonBasedAmbientOcclusion::Universal::HBAO::GetAoPerPixelNormals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetAoPerPixelNormals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAO::SetAoPerPixelNormals(::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals  perPixelNormals)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetAoPerPixelNormals", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, perPixelNormals);
}
inline ::UnityEngine::Color HorizonBasedAmbientOcclusion::Universal::HBAO::GetAoColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetAoColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAO::SetAoColor(::UnityEngine::Color  baseColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetAoColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseColor);
}
inline float_t HorizonBasedAmbientOcclusion::Universal::HBAO::GetAoIntensity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetAoIntensity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAO::SetAoIntensity(float_t  intensity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetAoIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, intensity);
}
inline bool HorizonBasedAmbientOcclusion::Universal::HBAO::UseMultiBounce()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"UseMultiBounce", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAO::EnableMultiBounce(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"EnableMultiBounce", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enabled);
}
inline float_t HorizonBasedAmbientOcclusion::Universal::HBAO::GetAoMultiBounceInfluence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetAoMultiBounceInfluence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAO::SetAoMultiBounceInfluence(float_t  multiBounceInfluence)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetAoMultiBounceInfluence", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiBounceInfluence);
}
inline bool HorizonBasedAmbientOcclusion::Universal::HBAO::IsTemporalFilterEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"IsTemporalFilterEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAO::EnableTemporalFilter(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"EnableTemporalFilter", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enabled);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping HorizonBasedAmbientOcclusion::Universal::HBAO::GetTemporalFilterVarianceClipping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetTemporalFilterVarianceClipping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAO::SetTemporalFilterVarianceClipping(::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping  varianceClipping)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetTemporalFilterVarianceClipping", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, varianceClipping);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType HorizonBasedAmbientOcclusion::Universal::HBAO::GetBlurType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetBlurType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAO::SetBlurType(::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType  blurType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetBlurType", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, blurType);
}
inline float_t HorizonBasedAmbientOcclusion::Universal::HBAO::GetBlurSharpness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetBlurSharpness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAO::SetBlurSharpness(float_t  sharpness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetBlurSharpness", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sharpness);
}
inline bool HorizonBasedAmbientOcclusion::Universal::HBAO::IsColorBleedingEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"IsColorBleedingEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAO::EnableColorBleeding(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"EnableColorBleeding", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enabled);
}
inline float_t HorizonBasedAmbientOcclusion::Universal::HBAO::GetColorBleedingSaturation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetColorBleedingSaturation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAO::SetColorBleedingSaturation(float_t  saturation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetColorBleedingSaturation", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, saturation);
}
inline float_t HorizonBasedAmbientOcclusion::Universal::HBAO::GetColorBleedingBrightnessMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetColorBleedingBrightnessMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAO::SetColorBleedingBrightnessMask(float_t  brightnessMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetColorBleedingBrightnessMask", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, brightnessMask);
}
inline ::UnityEngine::Vector2 HorizonBasedAmbientOcclusion::Universal::HBAO::GetColorBleedingBrightnessMaskRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"GetColorBleedingBrightnessMaskRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAO::SetColorBleedingBrightnessMaskRange(::UnityEngine::Vector2  brightnessMaskRange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"SetColorBleedingBrightnessMaskRange", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, brightnessMaskRange);
}
inline bool HorizonBasedAmbientOcclusion::Universal::HBAO::IsActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"IsActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool HorizonBasedAmbientOcclusion::Universal::HBAO::IsTileCompatible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {"IsTileCompatible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAO*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO* HorizonBasedAmbientOcclusion::Universal::HBAO::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HorizonBasedAmbientOcclusion::Universal::HBAO*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IPostProcessComponent"
constexpr  HorizonBasedAmbientOcclusion::Universal::HBAO::operator ::UnityEngine::Rendering::IPostProcessComponent*() noexcept {
return static_cast<::UnityEngine::Rendering::IPostProcessComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IPostProcessComponent"
constexpr ::UnityEngine::Rendering::IPostProcessComponent* HorizonBasedAmbientOcclusion::Universal::HBAO::i___UnityEngine__Rendering__IPostProcessComponent() noexcept {
return static_cast<::UnityEngine::Rendering::IPostProcessComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO::HBAO()   {
}
