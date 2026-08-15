#pragma once
// IWYU pragma private; include "Enviro/EnviroLighting.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AmbientMode_impl.hpp"
#include "Enviro/zzzz__EnviroLighting_def.hpp"
#include "Enviro/zzzz__EnviroLighting_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Enviro::EnviroLighting_LightingMode::EnviroLighting_LightingMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Enviro::EnviroLighting_LightingMode::EnviroLighting_LightingMode()   {
}
constexpr ::Enviro::EnviroLighting_LightingMode  Enviro::EnviroLighting_LightingMode::Single{static_cast<int32_t>(0x0)};
constexpr ::Enviro::EnviroLighting_LightingMode  Enviro::EnviroLighting_LightingMode::Dual{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Enviro::EnviroLighting._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroLighting::*)()>(&::Enviro::EnviroLighting::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x180615200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroLighting*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Enviro::EnviroLighting_LightingMode& Enviro::EnviroLighting::__cordl_internal_get_lightingMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightingMode;
}
constexpr ::Enviro::EnviroLighting_LightingMode const& Enviro::EnviroLighting::__cordl_internal_get_lightingMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightingMode;
}
constexpr void Enviro::EnviroLighting::__cordl_internal_set_lightingMode(::Enviro::EnviroLighting_LightingMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightingMode = value;
}
constexpr bool& Enviro::EnviroLighting::__cordl_internal_get_setDirectLighting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setDirectLighting;
}
constexpr bool const& Enviro::EnviroLighting::__cordl_internal_get_setDirectLighting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setDirectLighting;
}
constexpr void Enviro::EnviroLighting::__cordl_internal_set_setDirectLighting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setDirectLighting = value;
}
constexpr int32_t& Enviro::EnviroLighting::__cordl_internal_get_updateIntervallFrames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateIntervallFrames;
}
constexpr int32_t const& Enviro::EnviroLighting::__cordl_internal_get_updateIntervallFrames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateIntervallFrames;
}
constexpr void Enviro::EnviroLighting::__cordl_internal_set_updateIntervallFrames(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateIntervallFrames = value;
}
constexpr ::UnityEngine::AnimationCurve*& Enviro::EnviroLighting::__cordl_internal_get_sunIntensityCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunIntensityCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& Enviro::EnviroLighting::__cordl_internal_get_sunIntensityCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunIntensityCurve;
}
constexpr void Enviro::EnviroLighting::__cordl_internal_set_sunIntensityCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunIntensityCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& Enviro::EnviroLighting::__cordl_internal_get_moonIntensityCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moonIntensityCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& Enviro::EnviroLighting::__cordl_internal_get_moonIntensityCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moonIntensityCurve;
}
constexpr void Enviro::EnviroLighting::__cordl_internal_set_moonIntensityCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moonIntensityCurve = value;
}
constexpr ::UnityEngine::Gradient*& Enviro::EnviroLighting::__cordl_internal_get_sunColorGradient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunColorGradient;
}
constexpr ::UnityEngine::Gradient* const& Enviro::EnviroLighting::__cordl_internal_get_sunColorGradient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunColorGradient;
}
constexpr void Enviro::EnviroLighting::__cordl_internal_set_sunColorGradient(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunColorGradient = value;
}
constexpr ::UnityEngine::Gradient*& Enviro::EnviroLighting::__cordl_internal_get_moonColorGradient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moonColorGradient;
}
constexpr ::UnityEngine::Gradient* const& Enviro::EnviroLighting::__cordl_internal_get_moonColorGradient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moonColorGradient;
}
constexpr void Enviro::EnviroLighting::__cordl_internal_set_moonColorGradient(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moonColorGradient = value;
}
constexpr ::UnityEngine::AnimationCurve*& Enviro::EnviroLighting::__cordl_internal_get_sunIntensityCurveHDRP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunIntensityCurveHDRP;
}
constexpr ::UnityEngine::AnimationCurve* const& Enviro::EnviroLighting::__cordl_internal_get_sunIntensityCurveHDRP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunIntensityCurveHDRP;
}
constexpr void Enviro::EnviroLighting::__cordl_internal_set_sunIntensityCurveHDRP(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunIntensityCurveHDRP = value;
}
constexpr ::UnityEngine::AnimationCurve*& Enviro::EnviroLighting::__cordl_internal_get_moonIntensityCurveHDRP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moonIntensityCurveHDRP;
}
constexpr ::UnityEngine::AnimationCurve* const& Enviro::EnviroLighting::__cordl_internal_get_moonIntensityCurveHDRP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moonIntensityCurveHDRP;
}
constexpr void Enviro::EnviroLighting::__cordl_internal_set_moonIntensityCurveHDRP(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moonIntensityCurveHDRP = value;
}
constexpr ::UnityEngine::AnimationCurve*& Enviro::EnviroLighting::__cordl_internal_get_lightColorTemperatureHDRP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightColorTemperatureHDRP;
}
constexpr ::UnityEngine::AnimationCurve* const& Enviro::EnviroLighting::__cordl_internal_get_lightColorTemperatureHDRP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightColorTemperatureHDRP;
}
constexpr void Enviro::EnviroLighting::__cordl_internal_set_lightColorTemperatureHDRP(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightColorTemperatureHDRP = value;
}
constexpr ::UnityEngine::Gradient*& Enviro::EnviroLighting::__cordl_internal_get_ambientColorTintHDRP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientColorTintHDRP;
}
constexpr ::UnityEngine::Gradient* const& Enviro::EnviroLighting::__cordl_internal_get_ambientColorTintHDRP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientColorTintHDRP;
}
constexpr void Enviro::EnviroLighting::__cordl_internal_set_ambientColorTintHDRP(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ambientColorTintHDRP = value;
}
constexpr float_t& Enviro::EnviroLighting::__cordl_internal_get_lightIntensityHDRP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightIntensityHDRP;
}
constexpr float_t const& Enviro::EnviroLighting::__cordl_internal_get_lightIntensityHDRP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightIntensityHDRP;
}
constexpr void Enviro::EnviroLighting::__cordl_internal_set_lightIntensityHDRP(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightIntensityHDRP = value;
}
constexpr bool& Enviro::EnviroLighting::__cordl_internal_get_controlExposure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlExposure;
}
constexpr bool const& Enviro::EnviroLighting::__cordl_internal_get_controlExposure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlExposure;
}
constexpr void Enviro::EnviroLighting::__cordl_internal_set_controlExposure(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controlExposure = value;
}
constexpr ::UnityEngine::AnimationCurve*& Enviro::EnviroLighting::__cordl_internal_get_sceneExposure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneExposure;
}
constexpr ::UnityEngine::AnimationCurve* const& Enviro::EnviroLighting::__cordl_internal_get_sceneExposure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneExposure;
}
constexpr void Enviro::EnviroLighting::__cordl_internal_set_sceneExposure(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneExposure = value;
}
constexpr bool& Enviro::EnviroLighting::__cordl_internal_get_controlIndirectLighting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlIndirectLighting;
}
constexpr bool const& Enviro::EnviroLighting::__cordl_internal_get_controlIndirectLighting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlIndirectLighting;
}
constexpr void Enviro::EnviroLighting::__cordl_internal_set_controlIndirectLighting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controlIndirectLighting = value;
}
constexpr ::UnityEngine::AnimationCurve*& Enviro::EnviroLighting::__cordl_internal_get_diffuseIndirectIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diffuseIndirectIntensity;
}
constexpr ::UnityEngine::AnimationCurve* const& Enviro::EnviroLighting::__cordl_internal_get_diffuseIndirectIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diffuseIndirectIntensity;
}
constexpr void Enviro::EnviroLighting::__cordl_internal_set_diffuseIndirectIntensity(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___diffuseIndirectIntensity = value;
}
constexpr ::UnityEngine::AnimationCurve*& Enviro::EnviroLighting::__cordl_internal_get_reflectionIndirectIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reflectionIndirectIntensity;
}
constexpr ::UnityEngine::AnimationCurve* const& Enviro::EnviroLighting::__cordl_internal_get_reflectionIndirectIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reflectionIndirectIntensity;
}
constexpr void Enviro::EnviroLighting::__cordl_internal_set_reflectionIndirectIntensity(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reflectionIndirectIntensity = value;
}
constexpr float_t& Enviro::EnviroLighting::__cordl_internal_get_directLightIntensityModifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directLightIntensityModifier;
}
constexpr float_t const& Enviro::EnviroLighting::__cordl_internal_get_directLightIntensityModifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directLightIntensityModifier;
}
constexpr void Enviro::EnviroLighting::__cordl_internal_set_directLightIntensityModifier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___directLightIntensityModifier = value;
}
constexpr bool& Enviro::EnviroLighting::__cordl_internal_get_setAmbientLighting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setAmbientLighting;
}
constexpr bool const& Enviro::EnviroLighting::__cordl_internal_get_setAmbientLighting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setAmbientLighting;
}
constexpr void Enviro::EnviroLighting::__cordl_internal_set_setAmbientLighting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setAmbientLighting = value;
}
constexpr ::UnityEngine::Rendering::AmbientMode& Enviro::EnviroLighting::__cordl_internal_get_ambientMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientMode;
}
constexpr ::UnityEngine::Rendering::AmbientMode const& Enviro::EnviroLighting::__cordl_internal_get_ambientMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientMode;
}
constexpr void Enviro::EnviroLighting::__cordl_internal_set_ambientMode(::UnityEngine::Rendering::AmbientMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ambientMode = value;
}
constexpr ::UnityEngine::Gradient*& Enviro::EnviroLighting::__cordl_internal_get_ambientSkyColorGradient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientSkyColorGradient;
}
constexpr ::UnityEngine::Gradient* const& Enviro::EnviroLighting::__cordl_internal_get_ambientSkyColorGradient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientSkyColorGradient;
}
constexpr void Enviro::EnviroLighting::__cordl_internal_set_ambientSkyColorGradient(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ambientSkyColorGradient = value;
}
constexpr ::UnityEngine::Gradient*& Enviro::EnviroLighting::__cordl_internal_get_ambientEquatorColorGradient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientEquatorColorGradient;
}
constexpr ::UnityEngine::Gradient* const& Enviro::EnviroLighting::__cordl_internal_get_ambientEquatorColorGradient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientEquatorColorGradient;
}
constexpr void Enviro::EnviroLighting::__cordl_internal_set_ambientEquatorColorGradient(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ambientEquatorColorGradient = value;
}
constexpr ::UnityEngine::Gradient*& Enviro::EnviroLighting::__cordl_internal_get_ambientGroundColorGradient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientGroundColorGradient;
}
constexpr ::UnityEngine::Gradient* const& Enviro::EnviroLighting::__cordl_internal_get_ambientGroundColorGradient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientGroundColorGradient;
}
constexpr void Enviro::EnviroLighting::__cordl_internal_set_ambientGroundColorGradient(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ambientGroundColorGradient = value;
}
constexpr ::UnityEngine::AnimationCurve*& Enviro::EnviroLighting::__cordl_internal_get_ambientIntensityCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientIntensityCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& Enviro::EnviroLighting::__cordl_internal_get_ambientIntensityCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientIntensityCurve;
}
constexpr void Enviro::EnviroLighting::__cordl_internal_set_ambientIntensityCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ambientIntensityCurve = value;
}
constexpr float_t& Enviro::EnviroLighting::__cordl_internal_get_ambientIntensityModifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientIntensityModifier;
}
constexpr float_t const& Enviro::EnviroLighting::__cordl_internal_get_ambientIntensityModifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientIntensityModifier;
}
constexpr void Enviro::EnviroLighting::__cordl_internal_set_ambientIntensityModifier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ambientIntensityModifier = value;
}
constexpr bool& Enviro::EnviroLighting::__cordl_internal_get_ambientUpdateEveryFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientUpdateEveryFrame;
}
constexpr bool const& Enviro::EnviroLighting::__cordl_internal_get_ambientUpdateEveryFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientUpdateEveryFrame;
}
constexpr void Enviro::EnviroLighting::__cordl_internal_set_ambientUpdateEveryFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ambientUpdateEveryFrame = value;
}
constexpr float_t& Enviro::EnviroLighting::__cordl_internal_get_ambientUpdateIntervall()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientUpdateIntervall;
}
constexpr float_t const& Enviro::EnviroLighting::__cordl_internal_get_ambientUpdateIntervall() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientUpdateIntervall;
}
constexpr void Enviro::EnviroLighting::__cordl_internal_set_ambientUpdateIntervall(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ambientUpdateIntervall = value;
}
constexpr float_t& Enviro::EnviroLighting::__cordl_internal_get_shadowIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowIntensity;
}
constexpr float_t const& Enviro::EnviroLighting::__cordl_internal_get_shadowIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowIntensity;
}
constexpr void Enviro::EnviroLighting::__cordl_internal_set_shadowIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shadowIntensity = value;
}
inline void Enviro::EnviroLighting::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroLighting*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroLighting* Enviro::EnviroLighting::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroLighting*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroLighting::EnviroLighting()   {
}
