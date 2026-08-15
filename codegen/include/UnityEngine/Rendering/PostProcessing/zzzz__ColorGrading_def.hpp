#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/ColorGrading.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectSettings_def.hpp"
CORDL_MODULE_EXPORT(ColorGrading)
namespace UnityEngine::Rendering::PostProcessing {
class ColorParameter;
}
namespace UnityEngine::Rendering::PostProcessing {
class FloatParameter;
}
namespace UnityEngine::Rendering::PostProcessing {
class GradingModeParameter;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
namespace UnityEngine::Rendering::PostProcessing {
class SplineParameter;
}
namespace UnityEngine::Rendering::PostProcessing {
class TextureParameter;
}
namespace UnityEngine::Rendering::PostProcessing {
class TonemapperParameter;
}
namespace UnityEngine::Rendering::PostProcessing {
class Vector4Parameter;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class ColorGrading;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::ColorGrading*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::ColorGrading*, "UnityEngine.Rendering.PostProcessing", "ColorGrading");
// Dependencies UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.ColorGrading
class CORDL_TYPE ColorGrading : public ::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings {
public:
// Declarations
/// @brief Field blueCurve, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_blueCurve, put=__cordl_internal_set_blueCurve)) ::UnityEngine::Rendering::PostProcessing::SplineParameter*  blueCurve;

/// @brief Field brightness, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_brightness, put=__cordl_internal_set_brightness)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  brightness;

/// @brief Field colorFilter, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_colorFilter, put=__cordl_internal_set_colorFilter)) ::UnityEngine::Rendering::PostProcessing::ColorParameter*  colorFilter;

/// @brief Field contrast, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_contrast, put=__cordl_internal_set_contrast)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  contrast;

/// @brief Field externalLut, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_externalLut, put=__cordl_internal_set_externalLut)) ::UnityEngine::Rendering::PostProcessing::TextureParameter*  externalLut;

/// @brief Field gain, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_gain, put=__cordl_internal_set_gain)) ::UnityEngine::Rendering::PostProcessing::Vector4Parameter*  gain;

/// @brief Field gamma, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_gamma, put=__cordl_internal_set_gamma)) ::UnityEngine::Rendering::PostProcessing::Vector4Parameter*  gamma;

/// @brief Field gradingMode, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_gradingMode, put=__cordl_internal_set_gradingMode)) ::UnityEngine::Rendering::PostProcessing::GradingModeParameter*  gradingMode;

/// @brief Field greenCurve, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_greenCurve, put=__cordl_internal_set_greenCurve)) ::UnityEngine::Rendering::PostProcessing::SplineParameter*  greenCurve;

/// @brief Field hueShift, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_hueShift, put=__cordl_internal_set_hueShift)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  hueShift;

/// @brief Field hueVsHueCurve, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_hueVsHueCurve, put=__cordl_internal_set_hueVsHueCurve)) ::UnityEngine::Rendering::PostProcessing::SplineParameter*  hueVsHueCurve;

/// @brief Field hueVsSatCurve, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_hueVsSatCurve, put=__cordl_internal_set_hueVsSatCurve)) ::UnityEngine::Rendering::PostProcessing::SplineParameter*  hueVsSatCurve;

/// @brief Field ldrLut, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_ldrLut, put=__cordl_internal_set_ldrLut)) ::UnityEngine::Rendering::PostProcessing::TextureParameter*  ldrLut;

/// @brief Field ldrLutContribution, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_ldrLutContribution, put=__cordl_internal_set_ldrLutContribution)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ldrLutContribution;

/// @brief Field lift, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_lift, put=__cordl_internal_set_lift)) ::UnityEngine::Rendering::PostProcessing::Vector4Parameter*  lift;

/// @brief Field lumVsSatCurve, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_lumVsSatCurve, put=__cordl_internal_set_lumVsSatCurve)) ::UnityEngine::Rendering::PostProcessing::SplineParameter*  lumVsSatCurve;

/// @brief Field masterCurve, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_masterCurve, put=__cordl_internal_set_masterCurve)) ::UnityEngine::Rendering::PostProcessing::SplineParameter*  masterCurve;

/// @brief Field mixerBlueOutBlueIn, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_mixerBlueOutBlueIn, put=__cordl_internal_set_mixerBlueOutBlueIn)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  mixerBlueOutBlueIn;

/// @brief Field mixerBlueOutGreenIn, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_mixerBlueOutGreenIn, put=__cordl_internal_set_mixerBlueOutGreenIn)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  mixerBlueOutGreenIn;

/// @brief Field mixerBlueOutRedIn, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_mixerBlueOutRedIn, put=__cordl_internal_set_mixerBlueOutRedIn)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  mixerBlueOutRedIn;

/// @brief Field mixerGreenOutBlueIn, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_mixerGreenOutBlueIn, put=__cordl_internal_set_mixerGreenOutBlueIn)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  mixerGreenOutBlueIn;

/// @brief Field mixerGreenOutGreenIn, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_mixerGreenOutGreenIn, put=__cordl_internal_set_mixerGreenOutGreenIn)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  mixerGreenOutGreenIn;

/// @brief Field mixerGreenOutRedIn, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_mixerGreenOutRedIn, put=__cordl_internal_set_mixerGreenOutRedIn)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  mixerGreenOutRedIn;

/// @brief Field mixerRedOutBlueIn, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_mixerRedOutBlueIn, put=__cordl_internal_set_mixerRedOutBlueIn)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  mixerRedOutBlueIn;

/// @brief Field mixerRedOutGreenIn, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_mixerRedOutGreenIn, put=__cordl_internal_set_mixerRedOutGreenIn)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  mixerRedOutGreenIn;

/// @brief Field mixerRedOutRedIn, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_mixerRedOutRedIn, put=__cordl_internal_set_mixerRedOutRedIn)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  mixerRedOutRedIn;

/// @brief Field postExposure, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_postExposure, put=__cordl_internal_set_postExposure)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  postExposure;

/// @brief Field redCurve, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_redCurve, put=__cordl_internal_set_redCurve)) ::UnityEngine::Rendering::PostProcessing::SplineParameter*  redCurve;

/// @brief Field satVsSatCurve, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_satVsSatCurve, put=__cordl_internal_set_satVsSatCurve)) ::UnityEngine::Rendering::PostProcessing::SplineParameter*  satVsSatCurve;

/// @brief Field saturation, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_saturation, put=__cordl_internal_set_saturation)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  saturation;

/// @brief Field temperature, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_temperature, put=__cordl_internal_set_temperature)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  temperature;

/// @brief Field tint, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_tint, put=__cordl_internal_set_tint)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  tint;

/// @brief Field toneCurveGamma, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_toneCurveGamma, put=__cordl_internal_set_toneCurveGamma)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  toneCurveGamma;

/// @brief Field toneCurveShoulderAngle, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_toneCurveShoulderAngle, put=__cordl_internal_set_toneCurveShoulderAngle)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  toneCurveShoulderAngle;

/// @brief Field toneCurveShoulderLength, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_toneCurveShoulderLength, put=__cordl_internal_set_toneCurveShoulderLength)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  toneCurveShoulderLength;

/// @brief Field toneCurveShoulderStrength, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_toneCurveShoulderStrength, put=__cordl_internal_set_toneCurveShoulderStrength)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  toneCurveShoulderStrength;

/// @brief Field toneCurveToeLength, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_toneCurveToeLength, put=__cordl_internal_set_toneCurveToeLength)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  toneCurveToeLength;

/// @brief Field toneCurveToeStrength, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_toneCurveToeStrength, put=__cordl_internal_set_toneCurveToeStrength)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  toneCurveToeStrength;

/// @brief Field tonemapper, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_tonemapper, put=__cordl_internal_set_tonemapper)) ::UnityEngine::Rendering::PostProcessing::TonemapperParameter*  tonemapper;

/// @brief Method IsEnabledAndSupported, addr 0x181fb4f40, size 0x40, virtual true, abstract: false, final false
inline bool IsEnabledAndSupported(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

static inline ::UnityEngine::Rendering::PostProcessing::ColorGrading* New_ctor() ;

constexpr ::UnityEngine::Rendering::PostProcessing::SplineParameter* const& __cordl_internal_get_blueCurve() const;

constexpr ::UnityEngine::Rendering::PostProcessing::SplineParameter*& __cordl_internal_get_blueCurve() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_brightness() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_brightness() ;

constexpr ::UnityEngine::Rendering::PostProcessing::ColorParameter* const& __cordl_internal_get_colorFilter() const;

constexpr ::UnityEngine::Rendering::PostProcessing::ColorParameter*& __cordl_internal_get_colorFilter() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_contrast() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_contrast() ;

constexpr ::UnityEngine::Rendering::PostProcessing::TextureParameter* const& __cordl_internal_get_externalLut() const;

constexpr ::UnityEngine::Rendering::PostProcessing::TextureParameter*& __cordl_internal_get_externalLut() ;

constexpr ::UnityEngine::Rendering::PostProcessing::Vector4Parameter* const& __cordl_internal_get_gain() const;

constexpr ::UnityEngine::Rendering::PostProcessing::Vector4Parameter*& __cordl_internal_get_gain() ;

constexpr ::UnityEngine::Rendering::PostProcessing::Vector4Parameter* const& __cordl_internal_get_gamma() const;

constexpr ::UnityEngine::Rendering::PostProcessing::Vector4Parameter*& __cordl_internal_get_gamma() ;

constexpr ::UnityEngine::Rendering::PostProcessing::GradingModeParameter* const& __cordl_internal_get_gradingMode() const;

constexpr ::UnityEngine::Rendering::PostProcessing::GradingModeParameter*& __cordl_internal_get_gradingMode() ;

constexpr ::UnityEngine::Rendering::PostProcessing::SplineParameter* const& __cordl_internal_get_greenCurve() const;

constexpr ::UnityEngine::Rendering::PostProcessing::SplineParameter*& __cordl_internal_get_greenCurve() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_hueShift() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_hueShift() ;

constexpr ::UnityEngine::Rendering::PostProcessing::SplineParameter* const& __cordl_internal_get_hueVsHueCurve() const;

constexpr ::UnityEngine::Rendering::PostProcessing::SplineParameter*& __cordl_internal_get_hueVsHueCurve() ;

constexpr ::UnityEngine::Rendering::PostProcessing::SplineParameter* const& __cordl_internal_get_hueVsSatCurve() const;

constexpr ::UnityEngine::Rendering::PostProcessing::SplineParameter*& __cordl_internal_get_hueVsSatCurve() ;

constexpr ::UnityEngine::Rendering::PostProcessing::TextureParameter* const& __cordl_internal_get_ldrLut() const;

constexpr ::UnityEngine::Rendering::PostProcessing::TextureParameter*& __cordl_internal_get_ldrLut() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_ldrLutContribution() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_ldrLutContribution() ;

constexpr ::UnityEngine::Rendering::PostProcessing::Vector4Parameter* const& __cordl_internal_get_lift() const;

constexpr ::UnityEngine::Rendering::PostProcessing::Vector4Parameter*& __cordl_internal_get_lift() ;

constexpr ::UnityEngine::Rendering::PostProcessing::SplineParameter* const& __cordl_internal_get_lumVsSatCurve() const;

constexpr ::UnityEngine::Rendering::PostProcessing::SplineParameter*& __cordl_internal_get_lumVsSatCurve() ;

constexpr ::UnityEngine::Rendering::PostProcessing::SplineParameter* const& __cordl_internal_get_masterCurve() const;

constexpr ::UnityEngine::Rendering::PostProcessing::SplineParameter*& __cordl_internal_get_masterCurve() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_mixerBlueOutBlueIn() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_mixerBlueOutBlueIn() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_mixerBlueOutGreenIn() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_mixerBlueOutGreenIn() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_mixerBlueOutRedIn() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_mixerBlueOutRedIn() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_mixerGreenOutBlueIn() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_mixerGreenOutBlueIn() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_mixerGreenOutGreenIn() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_mixerGreenOutGreenIn() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_mixerGreenOutRedIn() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_mixerGreenOutRedIn() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_mixerRedOutBlueIn() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_mixerRedOutBlueIn() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_mixerRedOutGreenIn() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_mixerRedOutGreenIn() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_mixerRedOutRedIn() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_mixerRedOutRedIn() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_postExposure() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_postExposure() ;

constexpr ::UnityEngine::Rendering::PostProcessing::SplineParameter* const& __cordl_internal_get_redCurve() const;

constexpr ::UnityEngine::Rendering::PostProcessing::SplineParameter*& __cordl_internal_get_redCurve() ;

constexpr ::UnityEngine::Rendering::PostProcessing::SplineParameter* const& __cordl_internal_get_satVsSatCurve() const;

constexpr ::UnityEngine::Rendering::PostProcessing::SplineParameter*& __cordl_internal_get_satVsSatCurve() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_saturation() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_saturation() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_temperature() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_temperature() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_tint() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_tint() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_toneCurveGamma() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_toneCurveGamma() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_toneCurveShoulderAngle() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_toneCurveShoulderAngle() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_toneCurveShoulderLength() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_toneCurveShoulderLength() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_toneCurveShoulderStrength() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_toneCurveShoulderStrength() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_toneCurveToeLength() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_toneCurveToeLength() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_toneCurveToeStrength() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_toneCurveToeStrength() ;

constexpr ::UnityEngine::Rendering::PostProcessing::TonemapperParameter* const& __cordl_internal_get_tonemapper() const;

constexpr ::UnityEngine::Rendering::PostProcessing::TonemapperParameter*& __cordl_internal_get_tonemapper() ;

constexpr void __cordl_internal_set_blueCurve(::UnityEngine::Rendering::PostProcessing::SplineParameter*  value) ;

constexpr void __cordl_internal_set_brightness(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_colorFilter(::UnityEngine::Rendering::PostProcessing::ColorParameter*  value) ;

constexpr void __cordl_internal_set_contrast(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_externalLut(::UnityEngine::Rendering::PostProcessing::TextureParameter*  value) ;

constexpr void __cordl_internal_set_gain(::UnityEngine::Rendering::PostProcessing::Vector4Parameter*  value) ;

constexpr void __cordl_internal_set_gamma(::UnityEngine::Rendering::PostProcessing::Vector4Parameter*  value) ;

constexpr void __cordl_internal_set_gradingMode(::UnityEngine::Rendering::PostProcessing::GradingModeParameter*  value) ;

constexpr void __cordl_internal_set_greenCurve(::UnityEngine::Rendering::PostProcessing::SplineParameter*  value) ;

constexpr void __cordl_internal_set_hueShift(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_hueVsHueCurve(::UnityEngine::Rendering::PostProcessing::SplineParameter*  value) ;

constexpr void __cordl_internal_set_hueVsSatCurve(::UnityEngine::Rendering::PostProcessing::SplineParameter*  value) ;

constexpr void __cordl_internal_set_ldrLut(::UnityEngine::Rendering::PostProcessing::TextureParameter*  value) ;

constexpr void __cordl_internal_set_ldrLutContribution(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_lift(::UnityEngine::Rendering::PostProcessing::Vector4Parameter*  value) ;

constexpr void __cordl_internal_set_lumVsSatCurve(::UnityEngine::Rendering::PostProcessing::SplineParameter*  value) ;

constexpr void __cordl_internal_set_masterCurve(::UnityEngine::Rendering::PostProcessing::SplineParameter*  value) ;

constexpr void __cordl_internal_set_mixerBlueOutBlueIn(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_mixerBlueOutGreenIn(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_mixerBlueOutRedIn(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_mixerGreenOutBlueIn(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_mixerGreenOutGreenIn(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_mixerGreenOutRedIn(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_mixerRedOutBlueIn(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_mixerRedOutGreenIn(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_mixerRedOutRedIn(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_postExposure(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_redCurve(::UnityEngine::Rendering::PostProcessing::SplineParameter*  value) ;

constexpr void __cordl_internal_set_satVsSatCurve(::UnityEngine::Rendering::PostProcessing::SplineParameter*  value) ;

constexpr void __cordl_internal_set_saturation(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_temperature(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_tint(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_toneCurveGamma(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_toneCurveShoulderAngle(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_toneCurveShoulderLength(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_toneCurveShoulderStrength(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_toneCurveToeLength(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_toneCurveToeStrength(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_tonemapper(::UnityEngine::Rendering::PostProcessing::TonemapperParameter*  value) ;

/// @brief Method .ctor, addr 0x181fb4f80, size 0xda0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColorGrading() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColorGrading", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorGrading(ColorGrading && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorGrading", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorGrading(ColorGrading const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18559};

/// @brief Field gradingMode, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::GradingModeParameter*  ___gradingMode;

/// @brief Field externalLut, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::TextureParameter*  ___externalLut;

/// @brief Field tonemapper, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::TonemapperParameter*  ___tonemapper;

/// @brief Field toneCurveToeStrength, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___toneCurveToeStrength;

/// @brief Field toneCurveToeLength, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___toneCurveToeLength;

/// @brief Field toneCurveShoulderStrength, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___toneCurveShoulderStrength;

/// @brief Field toneCurveShoulderLength, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___toneCurveShoulderLength;

/// @brief Field toneCurveShoulderAngle, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___toneCurveShoulderAngle;

/// @brief Field toneCurveGamma, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___toneCurveGamma;

/// @brief Field ldrLut, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::TextureParameter*  ___ldrLut;

/// @brief Field ldrLutContribution, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___ldrLutContribution;

/// @brief Field temperature, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___temperature;

/// @brief Field tint, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___tint;

/// @brief Field colorFilter, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::ColorParameter*  ___colorFilter;

/// @brief Field hueShift, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___hueShift;

/// @brief Field saturation, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___saturation;

/// @brief Field brightness, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___brightness;

/// @brief Field postExposure, offset: 0xb8, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___postExposure;

/// @brief Field contrast, offset: 0xc0, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___contrast;

/// @brief Field mixerRedOutRedIn, offset: 0xc8, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___mixerRedOutRedIn;

/// @brief Field mixerRedOutGreenIn, offset: 0xd0, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___mixerRedOutGreenIn;

/// @brief Field mixerRedOutBlueIn, offset: 0xd8, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___mixerRedOutBlueIn;

/// @brief Field mixerGreenOutRedIn, offset: 0xe0, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___mixerGreenOutRedIn;

/// @brief Field mixerGreenOutGreenIn, offset: 0xe8, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___mixerGreenOutGreenIn;

/// @brief Field mixerGreenOutBlueIn, offset: 0xf0, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___mixerGreenOutBlueIn;

/// @brief Field mixerBlueOutRedIn, offset: 0xf8, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___mixerBlueOutRedIn;

/// @brief Field mixerBlueOutGreenIn, offset: 0x100, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___mixerBlueOutGreenIn;

/// @brief Field mixerBlueOutBlueIn, offset: 0x108, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___mixerBlueOutBlueIn;

/// @brief Field lift, offset: 0x110, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::Vector4Parameter*  ___lift;

/// @brief Field gamma, offset: 0x118, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::Vector4Parameter*  ___gamma;

/// @brief Field gain, offset: 0x120, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::Vector4Parameter*  ___gain;

/// @brief Field masterCurve, offset: 0x128, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::SplineParameter*  ___masterCurve;

/// @brief Field redCurve, offset: 0x130, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::SplineParameter*  ___redCurve;

/// @brief Field greenCurve, offset: 0x138, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::SplineParameter*  ___greenCurve;

/// @brief Field blueCurve, offset: 0x140, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::SplineParameter*  ___blueCurve;

/// @brief Field hueVsHueCurve, offset: 0x148, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::SplineParameter*  ___hueVsHueCurve;

/// @brief Field hueVsSatCurve, offset: 0x150, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::SplineParameter*  ___hueVsSatCurve;

/// @brief Field satVsSatCurve, offset: 0x158, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::SplineParameter*  ___satVsSatCurve;

/// @brief Field lumVsSatCurve, offset: 0x160, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::SplineParameter*  ___lumVsSatCurve;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___gradingMode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___externalLut) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___tonemapper) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___toneCurveToeStrength) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___toneCurveToeLength) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___toneCurveShoulderStrength) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___toneCurveShoulderLength) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___toneCurveShoulderAngle) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___toneCurveGamma) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___ldrLut) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___ldrLutContribution) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___temperature) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___tint) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___colorFilter) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___hueShift) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___saturation) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___brightness) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___postExposure) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___contrast) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___mixerRedOutRedIn) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___mixerRedOutGreenIn) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___mixerRedOutBlueIn) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___mixerGreenOutRedIn) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___mixerGreenOutGreenIn) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___mixerGreenOutBlueIn) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___mixerBlueOutRedIn) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___mixerBlueOutGreenIn) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___mixerBlueOutBlueIn) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___lift) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___gamma) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___gain) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___masterCurve) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___redCurve) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___greenCurve) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___blueCurve) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___hueVsHueCurve) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___hueVsSatCurve) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___satVsSatCurve) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGrading, ___lumVsSatCurve) == 0x160, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::ColorGrading) == 0x168, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
