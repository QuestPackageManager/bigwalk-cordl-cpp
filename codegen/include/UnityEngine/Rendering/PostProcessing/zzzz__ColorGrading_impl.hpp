#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/ColorGrading.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectSettings_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ColorGrading_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ColorParameter_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__FloatParameter_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__GradingModeParameter_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__SplineParameter_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__TextureParameter_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__TonemapperParameter_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__Vector4Parameter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ColorGrading.IsEnabledAndSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::ColorGrading::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::ColorGrading::IsEnabledAndSupported)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181fb4f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorGrading*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorGrading*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ColorGrading._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::ColorGrading::*)()>(&::UnityEngine::Rendering::PostProcessing::ColorGrading::_ctor)> {
  constexpr static std::size_t size = 0xda0;
  constexpr static std::size_t addrs = 0x181fb4f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorGrading*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::PostProcessing::GradingModeParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_gradingMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gradingMode;
}
constexpr ::UnityEngine::Rendering::PostProcessing::GradingModeParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_gradingMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gradingMode;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_gradingMode(::UnityEngine::Rendering::PostProcessing::GradingModeParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gradingMode = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::TextureParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_externalLut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___externalLut;
}
constexpr ::UnityEngine::Rendering::PostProcessing::TextureParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_externalLut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___externalLut;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_externalLut(::UnityEngine::Rendering::PostProcessing::TextureParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___externalLut = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::TonemapperParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_tonemapper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tonemapper;
}
constexpr ::UnityEngine::Rendering::PostProcessing::TonemapperParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_tonemapper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tonemapper;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_tonemapper(::UnityEngine::Rendering::PostProcessing::TonemapperParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tonemapper = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_toneCurveToeStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toneCurveToeStrength;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_toneCurveToeStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toneCurveToeStrength;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_toneCurveToeStrength(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toneCurveToeStrength = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_toneCurveToeLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toneCurveToeLength;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_toneCurveToeLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toneCurveToeLength;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_toneCurveToeLength(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toneCurveToeLength = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_toneCurveShoulderStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toneCurveShoulderStrength;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_toneCurveShoulderStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toneCurveShoulderStrength;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_toneCurveShoulderStrength(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toneCurveShoulderStrength = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_toneCurveShoulderLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toneCurveShoulderLength;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_toneCurveShoulderLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toneCurveShoulderLength;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_toneCurveShoulderLength(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toneCurveShoulderLength = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_toneCurveShoulderAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toneCurveShoulderAngle;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_toneCurveShoulderAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toneCurveShoulderAngle;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_toneCurveShoulderAngle(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toneCurveShoulderAngle = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_toneCurveGamma()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toneCurveGamma;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_toneCurveGamma() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toneCurveGamma;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_toneCurveGamma(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toneCurveGamma = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::TextureParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_ldrLut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ldrLut;
}
constexpr ::UnityEngine::Rendering::PostProcessing::TextureParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_ldrLut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ldrLut;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_ldrLut(::UnityEngine::Rendering::PostProcessing::TextureParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ldrLut = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_ldrLutContribution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ldrLutContribution;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_ldrLutContribution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ldrLutContribution;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_ldrLutContribution(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ldrLutContribution = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_temperature()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___temperature;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_temperature() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___temperature;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_temperature(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___temperature = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_tint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tint;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_tint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tint;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_tint(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tint = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::ColorParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_colorFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorFilter;
}
constexpr ::UnityEngine::Rendering::PostProcessing::ColorParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_colorFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorFilter;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_colorFilter(::UnityEngine::Rendering::PostProcessing::ColorParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorFilter = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_hueShift()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hueShift;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_hueShift() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hueShift;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_hueShift(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hueShift = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_saturation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saturation;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_saturation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saturation;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_saturation(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saturation = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_brightness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___brightness;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_brightness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___brightness;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_brightness(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___brightness = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_postExposure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postExposure;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_postExposure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postExposure;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_postExposure(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___postExposure = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_contrast()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contrast;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_contrast() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contrast;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_contrast(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___contrast = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_mixerRedOutRedIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mixerRedOutRedIn;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_mixerRedOutRedIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mixerRedOutRedIn;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_mixerRedOutRedIn(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mixerRedOutRedIn = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_mixerRedOutGreenIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mixerRedOutGreenIn;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_mixerRedOutGreenIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mixerRedOutGreenIn;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_mixerRedOutGreenIn(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mixerRedOutGreenIn = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_mixerRedOutBlueIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mixerRedOutBlueIn;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_mixerRedOutBlueIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mixerRedOutBlueIn;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_mixerRedOutBlueIn(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mixerRedOutBlueIn = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_mixerGreenOutRedIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mixerGreenOutRedIn;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_mixerGreenOutRedIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mixerGreenOutRedIn;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_mixerGreenOutRedIn(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mixerGreenOutRedIn = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_mixerGreenOutGreenIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mixerGreenOutGreenIn;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_mixerGreenOutGreenIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mixerGreenOutGreenIn;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_mixerGreenOutGreenIn(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mixerGreenOutGreenIn = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_mixerGreenOutBlueIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mixerGreenOutBlueIn;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_mixerGreenOutBlueIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mixerGreenOutBlueIn;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_mixerGreenOutBlueIn(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mixerGreenOutBlueIn = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_mixerBlueOutRedIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mixerBlueOutRedIn;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_mixerBlueOutRedIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mixerBlueOutRedIn;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_mixerBlueOutRedIn(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mixerBlueOutRedIn = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_mixerBlueOutGreenIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mixerBlueOutGreenIn;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_mixerBlueOutGreenIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mixerBlueOutGreenIn;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_mixerBlueOutGreenIn(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mixerBlueOutGreenIn = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_mixerBlueOutBlueIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mixerBlueOutBlueIn;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_mixerBlueOutBlueIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mixerBlueOutBlueIn;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_mixerBlueOutBlueIn(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mixerBlueOutBlueIn = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::Vector4Parameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_lift()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lift;
}
constexpr ::UnityEngine::Rendering::PostProcessing::Vector4Parameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_lift() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lift;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_lift(::UnityEngine::Rendering::PostProcessing::Vector4Parameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lift = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::Vector4Parameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_gamma()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gamma;
}
constexpr ::UnityEngine::Rendering::PostProcessing::Vector4Parameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_gamma() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gamma;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_gamma(::UnityEngine::Rendering::PostProcessing::Vector4Parameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gamma = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::Vector4Parameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_gain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gain;
}
constexpr ::UnityEngine::Rendering::PostProcessing::Vector4Parameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_gain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gain;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_gain(::UnityEngine::Rendering::PostProcessing::Vector4Parameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gain = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::SplineParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_masterCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___masterCurve;
}
constexpr ::UnityEngine::Rendering::PostProcessing::SplineParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_masterCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___masterCurve;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_masterCurve(::UnityEngine::Rendering::PostProcessing::SplineParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___masterCurve = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::SplineParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_redCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redCurve;
}
constexpr ::UnityEngine::Rendering::PostProcessing::SplineParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_redCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redCurve;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_redCurve(::UnityEngine::Rendering::PostProcessing::SplineParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___redCurve = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::SplineParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_greenCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greenCurve;
}
constexpr ::UnityEngine::Rendering::PostProcessing::SplineParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_greenCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greenCurve;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_greenCurve(::UnityEngine::Rendering::PostProcessing::SplineParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___greenCurve = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::SplineParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_blueCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blueCurve;
}
constexpr ::UnityEngine::Rendering::PostProcessing::SplineParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_blueCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blueCurve;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_blueCurve(::UnityEngine::Rendering::PostProcessing::SplineParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blueCurve = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::SplineParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_hueVsHueCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hueVsHueCurve;
}
constexpr ::UnityEngine::Rendering::PostProcessing::SplineParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_hueVsHueCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hueVsHueCurve;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_hueVsHueCurve(::UnityEngine::Rendering::PostProcessing::SplineParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hueVsHueCurve = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::SplineParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_hueVsSatCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hueVsSatCurve;
}
constexpr ::UnityEngine::Rendering::PostProcessing::SplineParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_hueVsSatCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hueVsSatCurve;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_hueVsSatCurve(::UnityEngine::Rendering::PostProcessing::SplineParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hueVsSatCurve = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::SplineParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_satVsSatCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___satVsSatCurve;
}
constexpr ::UnityEngine::Rendering::PostProcessing::SplineParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_satVsSatCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___satVsSatCurve;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_satVsSatCurve(::UnityEngine::Rendering::PostProcessing::SplineParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___satVsSatCurve = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::SplineParameter*& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_lumVsSatCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lumVsSatCurve;
}
constexpr ::UnityEngine::Rendering::PostProcessing::SplineParameter* const& UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_get_lumVsSatCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lumVsSatCurve;
}
constexpr void UnityEngine::Rendering::PostProcessing::ColorGrading::__cordl_internal_set_lumVsSatCurve(::UnityEngine::Rendering::PostProcessing::SplineParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lumVsSatCurve = value;
}
inline bool UnityEngine::Rendering::PostProcessing::ColorGrading::IsEnabledAndSupported(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorGrading*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::ColorGrading::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorGrading*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::ColorGrading* UnityEngine::Rendering::PostProcessing::ColorGrading::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::ColorGrading*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::ColorGrading::ColorGrading()   {
}
