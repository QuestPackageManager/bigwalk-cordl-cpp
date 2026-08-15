#pragma once
// IWYU pragma private; include "Enviro/EnviroCloudGlobalSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Enviro/zzzz__EnviroCloudGlobalSettings_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Texture3D_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroCloudGlobalSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroCloudGlobalSettings::*)()>(&::Enviro::EnviroCloudGlobalSettings::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18061bf60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroCloudGlobalSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_floatingPointOriginMod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floatingPointOriginMod;
}
constexpr ::UnityEngine::Vector3 const& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_floatingPointOriginMod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floatingPointOriginMod;
}
constexpr void Enviro::EnviroCloudGlobalSettings::__cordl_internal_set_floatingPointOriginMod(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___floatingPointOriginMod = value;
}
constexpr ::UnityEngine::Vector3& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_cloudScrollOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudScrollOffset;
}
constexpr ::UnityEngine::Vector3 const& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_cloudScrollOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudScrollOffset;
}
constexpr void Enviro::EnviroCloudGlobalSettings::__cordl_internal_set_cloudScrollOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cloudScrollOffset = value;
}
constexpr ::UnityEngine::Gradient*& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_sunLightColorGradient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunLightColorGradient;
}
constexpr ::UnityEngine::Gradient* const& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_sunLightColorGradient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunLightColorGradient;
}
constexpr void Enviro::EnviroCloudGlobalSettings::__cordl_internal_set_sunLightColorGradient(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunLightColorGradient = value;
}
constexpr ::UnityEngine::Gradient*& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_moonLightColorGradient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moonLightColorGradient;
}
constexpr ::UnityEngine::Gradient* const& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_moonLightColorGradient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moonLightColorGradient;
}
constexpr void Enviro::EnviroCloudGlobalSettings::__cordl_internal_set_moonLightColorGradient(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moonLightColorGradient = value;
}
constexpr ::UnityEngine::Gradient*& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_ambientColorGradient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientColorGradient;
}
constexpr ::UnityEngine::Gradient* const& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_ambientColorGradient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientColorGradient;
}
constexpr void Enviro::EnviroCloudGlobalSettings::__cordl_internal_set_ambientColorGradient(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ambientColorGradient = value;
}
constexpr ::UnityEngine::Color& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_sunLightColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunLightColor;
}
constexpr ::UnityEngine::Color const& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_sunLightColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunLightColor;
}
constexpr void Enviro::EnviroCloudGlobalSettings::__cordl_internal_set_sunLightColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunLightColor = value;
}
constexpr ::UnityEngine::Color& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_moonLightColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moonLightColor;
}
constexpr ::UnityEngine::Color const& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_moonLightColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moonLightColor;
}
constexpr void Enviro::EnviroCloudGlobalSettings::__cordl_internal_set_moonLightColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moonLightColor = value;
}
constexpr ::UnityEngine::Color& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_ambientColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientColor;
}
constexpr ::UnityEngine::Color const& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_ambientColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientColor;
}
constexpr void Enviro::EnviroCloudGlobalSettings::__cordl_internal_set_ambientColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ambientColor = value;
}
constexpr bool& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_depthBlending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthBlending;
}
constexpr bool const& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_depthBlending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthBlending;
}
constexpr void Enviro::EnviroCloudGlobalSettings::__cordl_internal_set_depthBlending(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthBlending = value;
}
constexpr bool& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_depthTest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthTest;
}
constexpr bool const& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_depthTest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthTest;
}
constexpr void Enviro::EnviroCloudGlobalSettings::__cordl_internal_set_depthTest(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthTest = value;
}
constexpr ::UnityW<::UnityEngine::Texture3D>& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_noise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noise;
}
constexpr ::UnityW<::UnityEngine::Texture3D> const& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_noise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noise;
}
constexpr void Enviro::EnviroCloudGlobalSettings::__cordl_internal_set_noise(::UnityW<::UnityEngine::Texture3D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noise = value;
}
constexpr ::UnityW<::UnityEngine::Texture3D>& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_detailNoise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailNoise;
}
constexpr ::UnityW<::UnityEngine::Texture3D> const& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_detailNoise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailNoise;
}
constexpr void Enviro::EnviroCloudGlobalSettings::__cordl_internal_set_detailNoise(::UnityW<::UnityEngine::Texture3D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detailNoise = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_curlTex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curlTex;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_curlTex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curlTex;
}
constexpr void Enviro::EnviroCloudGlobalSettings::__cordl_internal_set_curlTex(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___curlTex = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_bottomsOffsetNoise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bottomsOffsetNoise;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_bottomsOffsetNoise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bottomsOffsetNoise;
}
constexpr void Enviro::EnviroCloudGlobalSettings::__cordl_internal_set_bottomsOffsetNoise(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bottomsOffsetNoise = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_blueNoise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blueNoise;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_blueNoise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blueNoise;
}
constexpr void Enviro::EnviroCloudGlobalSettings::__cordl_internal_set_blueNoise(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blueNoise = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_customWeatherMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customWeatherMap;
}
constexpr ::UnityW<::UnityEngine::Texture> const& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_customWeatherMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customWeatherMap;
}
constexpr void Enviro::EnviroCloudGlobalSettings::__cordl_internal_set_customWeatherMap(::UnityW<::UnityEngine::Texture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customWeatherMap = value;
}
constexpr float_t& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_cloudsWorldScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudsWorldScale;
}
constexpr float_t const& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_cloudsWorldScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudsWorldScale;
}
constexpr void Enviro::EnviroCloudGlobalSettings::__cordl_internal_set_cloudsWorldScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cloudsWorldScale = value;
}
constexpr float_t& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_maxRenderDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRenderDistance;
}
constexpr float_t const& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_maxRenderDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRenderDistance;
}
constexpr void Enviro::EnviroCloudGlobalSettings::__cordl_internal_set_maxRenderDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxRenderDistance = value;
}
constexpr float_t& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_atmosphereColorSaturateDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atmosphereColorSaturateDistance;
}
constexpr float_t const& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_atmosphereColorSaturateDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atmosphereColorSaturateDistance;
}
constexpr void Enviro::EnviroCloudGlobalSettings::__cordl_internal_set_atmosphereColorSaturateDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___atmosphereColorSaturateDistance = value;
}
constexpr float_t& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_ambientLighIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientLighIntensity;
}
constexpr float_t const& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_ambientLighIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientLighIntensity;
}
constexpr void Enviro::EnviroCloudGlobalSettings::__cordl_internal_set_ambientLighIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ambientLighIntensity = value;
}
constexpr bool& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_cloudShadows()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudShadows;
}
constexpr bool const& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_cloudShadows() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudShadows;
}
constexpr void Enviro::EnviroCloudGlobalSettings::__cordl_internal_set_cloudShadows(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cloudShadows = value;
}
constexpr float_t& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_cloudShadowsIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudShadowsIntensity;
}
constexpr float_t const& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_cloudShadowsIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudShadowsIntensity;
}
constexpr void Enviro::EnviroCloudGlobalSettings::__cordl_internal_set_cloudShadowsIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cloudShadowsIntensity = value;
}
constexpr float_t& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_cloudsTravelSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudsTravelSpeed;
}
constexpr float_t const& Enviro::EnviroCloudGlobalSettings::__cordl_internal_get_cloudsTravelSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudsTravelSpeed;
}
constexpr void Enviro::EnviroCloudGlobalSettings::__cordl_internal_set_cloudsTravelSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cloudsTravelSpeed = value;
}
inline void Enviro::EnviroCloudGlobalSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroCloudGlobalSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroCloudGlobalSettings* Enviro::EnviroCloudGlobalSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroCloudGlobalSettings*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroCloudGlobalSettings::EnviroCloudGlobalSettings()   {
}
