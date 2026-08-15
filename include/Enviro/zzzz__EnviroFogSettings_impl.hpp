#pragma once
// IWYU pragma private; include "Enviro/EnviroFogSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__FogMode_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Enviro/zzzz__EnviroFogSettings_def.hpp"
#include "Enviro/zzzz__EnviroFogSettings_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Texture3D_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Enviro::EnviroFogSettings_Quality::EnviroFogSettings_Quality(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Enviro::EnviroFogSettings_Quality::EnviroFogSettings_Quality()   {
}
constexpr ::Enviro::EnviroFogSettings_Quality  Enviro::EnviroFogSettings_Quality::Low{static_cast<int32_t>(0x0)};
constexpr ::Enviro::EnviroFogSettings_Quality  Enviro::EnviroFogSettings_Quality::Medium{static_cast<int32_t>(0x1)};
constexpr ::Enviro::EnviroFogSettings_Quality  Enviro::EnviroFogSettings_Quality::High{static_cast<int32_t>(0x2)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Enviro::EnviroFogSettings_FogQualityMode::EnviroFogSettings_FogQualityMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Enviro::EnviroFogSettings_FogQualityMode::EnviroFogSettings_FogQualityMode()   {
}
constexpr ::Enviro::EnviroFogSettings_FogQualityMode  Enviro::EnviroFogSettings_FogQualityMode::Normal{static_cast<int32_t>(0x0)};
constexpr ::Enviro::EnviroFogSettings_FogQualityMode  Enviro::EnviroFogSettings_FogQualityMode::Simple{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Enviro::EnviroFogSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroFogSettings::*)()>(&::Enviro::EnviroFogSettings::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x180613c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Enviro::EnviroFogSettings::__cordl_internal_get_volumetrics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumetrics;
}
constexpr bool const& Enviro::EnviroFogSettings::__cordl_internal_get_volumetrics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumetrics;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_volumetrics(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volumetrics = value;
}
constexpr int32_t& Enviro::EnviroFogSettings::__cordl_internal_get_steps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steps;
}
constexpr int32_t const& Enviro::EnviroFogSettings::__cordl_internal_get_steps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steps;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_steps(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___steps = value;
}
constexpr ::Enviro::EnviroFogSettings_Quality& Enviro::EnviroFogSettings::__cordl_internal_get_quality()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quality;
}
constexpr ::Enviro::EnviroFogSettings_Quality const& Enviro::EnviroFogSettings::__cordl_internal_get_quality() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quality;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_quality(::Enviro::EnviroFogSettings_Quality  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___quality = value;
}
constexpr float_t& Enviro::EnviroFogSettings::__cordl_internal_get_scattering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scattering;
}
constexpr float_t const& Enviro::EnviroFogSettings::__cordl_internal_get_scattering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scattering;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_scattering(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scattering = value;
}
constexpr ::UnityEngine::AnimationCurve*& Enviro::EnviroFogSettings::__cordl_internal_get_scatteringMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scatteringMultiplier;
}
constexpr ::UnityEngine::AnimationCurve* const& Enviro::EnviroFogSettings::__cordl_internal_get_scatteringMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scatteringMultiplier;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_scatteringMultiplier(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scatteringMultiplier = value;
}
constexpr float_t& Enviro::EnviroFogSettings::__cordl_internal_get_extinction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extinction;
}
constexpr float_t const& Enviro::EnviroFogSettings::__cordl_internal_get_extinction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extinction;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_extinction(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extinction = value;
}
constexpr float_t& Enviro::EnviroFogSettings::__cordl_internal_get_anistropy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anistropy;
}
constexpr float_t const& Enviro::EnviroFogSettings::__cordl_internal_get_anistropy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anistropy;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_anistropy(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anistropy = value;
}
constexpr float_t& Enviro::EnviroFogSettings::__cordl_internal_get_maxRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRange;
}
constexpr float_t const& Enviro::EnviroFogSettings::__cordl_internal_get_maxRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRange;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_maxRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxRange = value;
}
constexpr float_t& Enviro::EnviroFogSettings::__cordl_internal_get_maxRangePointSpot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRangePointSpot;
}
constexpr float_t const& Enviro::EnviroFogSettings::__cordl_internal_get_maxRangePointSpot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRangePointSpot;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_maxRangePointSpot(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxRangePointSpot = value;
}
constexpr float_t& Enviro::EnviroFogSettings::__cordl_internal_get_noiseIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noiseIntensity;
}
constexpr float_t const& Enviro::EnviroFogSettings::__cordl_internal_get_noiseIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noiseIntensity;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_noiseIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noiseIntensity = value;
}
constexpr float_t& Enviro::EnviroFogSettings::__cordl_internal_get_noiseScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noiseScale;
}
constexpr float_t const& Enviro::EnviroFogSettings::__cordl_internal_get_noiseScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noiseScale;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_noiseScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noiseScale = value;
}
constexpr ::UnityEngine::Vector3& Enviro::EnviroFogSettings::__cordl_internal_get_windDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windDirection;
}
constexpr ::UnityEngine::Vector3 const& Enviro::EnviroFogSettings::__cordl_internal_get_windDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windDirection;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_windDirection(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windDirection = value;
}
constexpr ::UnityW<::UnityEngine::Texture3D>& Enviro::EnviroFogSettings::__cordl_internal_get_noise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noise;
}
constexpr ::UnityW<::UnityEngine::Texture3D> const& Enviro::EnviroFogSettings::__cordl_internal_get_noise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noise;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_noise(::UnityW<::UnityEngine::Texture3D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noise = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& Enviro::EnviroFogSettings::__cordl_internal_get_ditheringTex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ditheringTex;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& Enviro::EnviroFogSettings::__cordl_internal_get_ditheringTex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ditheringTex;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_ditheringTex(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ditheringTex = value;
}
constexpr bool& Enviro::EnviroFogSettings::__cordl_internal_get_fog()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fog;
}
constexpr bool const& Enviro::EnviroFogSettings::__cordl_internal_get_fog() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fog;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_fog(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fog = value;
}
constexpr ::Enviro::EnviroFogSettings_FogQualityMode& Enviro::EnviroFogSettings::__cordl_internal_get_fogQualityMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogQualityMode;
}
constexpr ::Enviro::EnviroFogSettings_FogQualityMode const& Enviro::EnviroFogSettings::__cordl_internal_get_fogQualityMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogQualityMode;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_fogQualityMode(::Enviro::EnviroFogSettings_FogQualityMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fogQualityMode = value;
}
constexpr ::UnityEngine::Vector3& Enviro::EnviroFogSettings::__cordl_internal_get_floatingPointOriginMod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floatingPointOriginMod;
}
constexpr ::UnityEngine::Vector3 const& Enviro::EnviroFogSettings::__cordl_internal_get_floatingPointOriginMod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floatingPointOriginMod;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_floatingPointOriginMod(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___floatingPointOriginMod = value;
}
constexpr float_t& Enviro::EnviroFogSettings::__cordl_internal_get_globalFogHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalFogHeight;
}
constexpr float_t const& Enviro::EnviroFogSettings::__cordl_internal_get_globalFogHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalFogHeight;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_globalFogHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___globalFogHeight = value;
}
constexpr float_t& Enviro::EnviroFogSettings::__cordl_internal_get_fogDensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogDensity;
}
constexpr float_t const& Enviro::EnviroFogSettings::__cordl_internal_get_fogDensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogDensity;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_fogDensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fogDensity = value;
}
constexpr float_t& Enviro::EnviroFogSettings::__cordl_internal_get_fogHeightFalloff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogHeightFalloff;
}
constexpr float_t const& Enviro::EnviroFogSettings::__cordl_internal_get_fogHeightFalloff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogHeightFalloff;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_fogHeightFalloff(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fogHeightFalloff = value;
}
constexpr float_t& Enviro::EnviroFogSettings::__cordl_internal_get_fogHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogHeight;
}
constexpr float_t const& Enviro::EnviroFogSettings::__cordl_internal_get_fogHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogHeight;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_fogHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fogHeight = value;
}
constexpr float_t& Enviro::EnviroFogSettings::__cordl_internal_get_fogDensity2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogDensity2;
}
constexpr float_t const& Enviro::EnviroFogSettings::__cordl_internal_get_fogDensity2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogDensity2;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_fogDensity2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fogDensity2 = value;
}
constexpr float_t& Enviro::EnviroFogSettings::__cordl_internal_get_fogHeightFalloff2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogHeightFalloff2;
}
constexpr float_t const& Enviro::EnviroFogSettings::__cordl_internal_get_fogHeightFalloff2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogHeightFalloff2;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_fogHeightFalloff2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fogHeightFalloff2 = value;
}
constexpr float_t& Enviro::EnviroFogSettings::__cordl_internal_get_fogHeight2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogHeight2;
}
constexpr float_t const& Enviro::EnviroFogSettings::__cordl_internal_get_fogHeight2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogHeight2;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_fogHeight2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fogHeight2 = value;
}
constexpr float_t& Enviro::EnviroFogSettings::__cordl_internal_get_fogMaxOpacity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogMaxOpacity;
}
constexpr float_t const& Enviro::EnviroFogSettings::__cordl_internal_get_fogMaxOpacity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogMaxOpacity;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_fogMaxOpacity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fogMaxOpacity = value;
}
constexpr float_t& Enviro::EnviroFogSettings::__cordl_internal_get_startDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startDistance;
}
constexpr float_t const& Enviro::EnviroFogSettings::__cordl_internal_get_startDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startDistance;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_startDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startDistance = value;
}
constexpr float_t& Enviro::EnviroFogSettings::__cordl_internal_get_fogColorBlend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogColorBlend;
}
constexpr float_t const& Enviro::EnviroFogSettings::__cordl_internal_get_fogColorBlend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogColorBlend;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_fogColorBlend(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fogColorBlend = value;
}
constexpr ::UnityEngine::Color& Enviro::EnviroFogSettings::__cordl_internal_get_fogColorMod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogColorMod;
}
constexpr ::UnityEngine::Color const& Enviro::EnviroFogSettings::__cordl_internal_get_fogColorMod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogColorMod;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_fogColorMod(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fogColorMod = value;
}
constexpr bool& Enviro::EnviroFogSettings::__cordl_internal_get_blockScattering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockScattering;
}
constexpr bool const& Enviro::EnviroFogSettings::__cordl_internal_get_blockScattering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockScattering;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_blockScattering(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockScattering = value;
}
constexpr ::UnityEngine::Gradient*& Enviro::EnviroFogSettings::__cordl_internal_get_ambientColorGradient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientColorGradient;
}
constexpr ::UnityEngine::Gradient* const& Enviro::EnviroFogSettings::__cordl_internal_get_ambientColorGradient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientColorGradient;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_ambientColorGradient(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ambientColorGradient = value;
}
constexpr bool& Enviro::EnviroFogSettings::__cordl_internal_get_unityFog()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityFog;
}
constexpr bool const& Enviro::EnviroFogSettings::__cordl_internal_get_unityFog() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityFog;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_unityFog(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unityFog = value;
}
constexpr ::UnityEngine::FogMode& Enviro::EnviroFogSettings::__cordl_internal_get_unityFogMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityFogMode;
}
constexpr ::UnityEngine::FogMode const& Enviro::EnviroFogSettings::__cordl_internal_get_unityFogMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityFogMode;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_unityFogMode(::UnityEngine::FogMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unityFogMode = value;
}
constexpr float_t& Enviro::EnviroFogSettings::__cordl_internal_get_unityFogDensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityFogDensity;
}
constexpr float_t const& Enviro::EnviroFogSettings::__cordl_internal_get_unityFogDensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityFogDensity;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_unityFogDensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unityFogDensity = value;
}
constexpr float_t& Enviro::EnviroFogSettings::__cordl_internal_get_unityFogStartDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityFogStartDistance;
}
constexpr float_t const& Enviro::EnviroFogSettings::__cordl_internal_get_unityFogStartDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityFogStartDistance;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_unityFogStartDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unityFogStartDistance = value;
}
constexpr float_t& Enviro::EnviroFogSettings::__cordl_internal_get_unityFogEndDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityFogEndDistance;
}
constexpr float_t const& Enviro::EnviroFogSettings::__cordl_internal_get_unityFogEndDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityFogEndDistance;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_unityFogEndDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unityFogEndDistance = value;
}
constexpr ::UnityEngine::Gradient*& Enviro::EnviroFogSettings::__cordl_internal_get_unityFogColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityFogColor;
}
constexpr ::UnityEngine::Gradient* const& Enviro::EnviroFogSettings::__cordl_internal_get_unityFogColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityFogColor;
}
constexpr void Enviro::EnviroFogSettings::__cordl_internal_set_unityFogColor(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unityFogColor = value;
}
inline void Enviro::EnviroFogSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroFogSettings* Enviro::EnviroFogSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroFogSettings*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroFogSettings::EnviroFogSettings()   {
}
