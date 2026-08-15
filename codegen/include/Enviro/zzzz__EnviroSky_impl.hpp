#pragma once
// IWYU pragma private; include "Enviro/EnviroSky.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "Enviro/zzzz__EnviroSky_def.hpp"
#include "Enviro/zzzz__EnviroSky_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Cubemap_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Enviro::EnviroSky_SkyMode::EnviroSky_SkyMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Enviro::EnviroSky_SkyMode::EnviroSky_SkyMode()   {
}
constexpr ::Enviro::EnviroSky_SkyMode  Enviro::EnviroSky_SkyMode::Normal{static_cast<int32_t>(0x0)};
constexpr ::Enviro::EnviroSky_SkyMode  Enviro::EnviroSky_SkyMode::Simple{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Enviro::EnviroSky_MoonMode::EnviroSky_MoonMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Enviro::EnviroSky_MoonMode::EnviroSky_MoonMode()   {
}
constexpr ::Enviro::EnviroSky_MoonMode  Enviro::EnviroSky_MoonMode::Realistic{static_cast<int32_t>(0x0)};
constexpr ::Enviro::EnviroSky_MoonMode  Enviro::EnviroSky_MoonMode::Simple{static_cast<int32_t>(0x1)};
constexpr ::Enviro::EnviroSky_MoonMode  Enviro::EnviroSky_MoonMode::Off{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::Enviro::EnviroSky._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroSky::*)()>(&::Enviro::EnviroSky::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18061d2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroSky*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Enviro::EnviroSky_SkyMode& Enviro::EnviroSky::__cordl_internal_get_skyMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyMode;
}
constexpr ::Enviro::EnviroSky_SkyMode const& Enviro::EnviroSky::__cordl_internal_get_skyMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyMode;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_skyMode(::Enviro::EnviroSky_SkyMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skyMode = value;
}
constexpr ::Enviro::EnviroSky_MoonMode& Enviro::EnviroSky::__cordl_internal_get_moonMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moonMode;
}
constexpr ::Enviro::EnviroSky_MoonMode const& Enviro::EnviroSky::__cordl_internal_get_moonMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moonMode;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_moonMode(::Enviro::EnviroSky_MoonMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moonMode = value;
}
constexpr bool& Enviro::EnviroSky::__cordl_internal_get_forcedSkyboxSetup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forcedSkyboxSetup;
}
constexpr bool const& Enviro::EnviroSky::__cordl_internal_get_forcedSkyboxSetup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forcedSkyboxSetup;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_forcedSkyboxSetup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forcedSkyboxSetup = value;
}
constexpr ::UnityEngine::Gradient*& Enviro::EnviroSky::__cordl_internal_get_frontColorGradient0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frontColorGradient0;
}
constexpr ::UnityEngine::Gradient* const& Enviro::EnviroSky::__cordl_internal_get_frontColorGradient0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frontColorGradient0;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_frontColorGradient0(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frontColorGradient0 = value;
}
constexpr ::UnityEngine::Gradient*& Enviro::EnviroSky::__cordl_internal_get_frontColorGradient1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frontColorGradient1;
}
constexpr ::UnityEngine::Gradient* const& Enviro::EnviroSky::__cordl_internal_get_frontColorGradient1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frontColorGradient1;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_frontColorGradient1(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frontColorGradient1 = value;
}
constexpr ::UnityEngine::Gradient*& Enviro::EnviroSky::__cordl_internal_get_frontColorGradient2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frontColorGradient2;
}
constexpr ::UnityEngine::Gradient* const& Enviro::EnviroSky::__cordl_internal_get_frontColorGradient2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frontColorGradient2;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_frontColorGradient2(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frontColorGradient2 = value;
}
constexpr ::UnityEngine::Gradient*& Enviro::EnviroSky::__cordl_internal_get_frontColorGradient3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frontColorGradient3;
}
constexpr ::UnityEngine::Gradient* const& Enviro::EnviroSky::__cordl_internal_get_frontColorGradient3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frontColorGradient3;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_frontColorGradient3(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frontColorGradient3 = value;
}
constexpr ::UnityEngine::Gradient*& Enviro::EnviroSky::__cordl_internal_get_frontColorGradient4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frontColorGradient4;
}
constexpr ::UnityEngine::Gradient* const& Enviro::EnviroSky::__cordl_internal_get_frontColorGradient4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frontColorGradient4;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_frontColorGradient4(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frontColorGradient4 = value;
}
constexpr ::UnityEngine::Gradient*& Enviro::EnviroSky::__cordl_internal_get_frontColorGradient5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frontColorGradient5;
}
constexpr ::UnityEngine::Gradient* const& Enviro::EnviroSky::__cordl_internal_get_frontColorGradient5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frontColorGradient5;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_frontColorGradient5(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frontColorGradient5 = value;
}
constexpr ::UnityEngine::Gradient*& Enviro::EnviroSky::__cordl_internal_get_backColorGradient0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backColorGradient0;
}
constexpr ::UnityEngine::Gradient* const& Enviro::EnviroSky::__cordl_internal_get_backColorGradient0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backColorGradient0;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_backColorGradient0(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backColorGradient0 = value;
}
constexpr ::UnityEngine::Gradient*& Enviro::EnviroSky::__cordl_internal_get_backColorGradient1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backColorGradient1;
}
constexpr ::UnityEngine::Gradient* const& Enviro::EnviroSky::__cordl_internal_get_backColorGradient1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backColorGradient1;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_backColorGradient1(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backColorGradient1 = value;
}
constexpr ::UnityEngine::Gradient*& Enviro::EnviroSky::__cordl_internal_get_backColorGradient2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backColorGradient2;
}
constexpr ::UnityEngine::Gradient* const& Enviro::EnviroSky::__cordl_internal_get_backColorGradient2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backColorGradient2;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_backColorGradient2(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backColorGradient2 = value;
}
constexpr ::UnityEngine::Gradient*& Enviro::EnviroSky::__cordl_internal_get_backColorGradient3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backColorGradient3;
}
constexpr ::UnityEngine::Gradient* const& Enviro::EnviroSky::__cordl_internal_get_backColorGradient3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backColorGradient3;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_backColorGradient3(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backColorGradient3 = value;
}
constexpr ::UnityEngine::Gradient*& Enviro::EnviroSky::__cordl_internal_get_backColorGradient4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backColorGradient4;
}
constexpr ::UnityEngine::Gradient* const& Enviro::EnviroSky::__cordl_internal_get_backColorGradient4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backColorGradient4;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_backColorGradient4(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backColorGradient4 = value;
}
constexpr ::UnityEngine::Gradient*& Enviro::EnviroSky::__cordl_internal_get_backColorGradient5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backColorGradient5;
}
constexpr ::UnityEngine::Gradient* const& Enviro::EnviroSky::__cordl_internal_get_backColorGradient5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backColorGradient5;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_backColorGradient5(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backColorGradient5 = value;
}
constexpr ::UnityEngine::Gradient*& Enviro::EnviroSky::__cordl_internal_get_sunDiscColorGradient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunDiscColorGradient;
}
constexpr ::UnityEngine::Gradient* const& Enviro::EnviroSky::__cordl_internal_get_sunDiscColorGradient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunDiscColorGradient;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_sunDiscColorGradient(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunDiscColorGradient = value;
}
constexpr ::UnityEngine::Gradient*& Enviro::EnviroSky::__cordl_internal_get_moonColorGradient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moonColorGradient;
}
constexpr ::UnityEngine::Gradient* const& Enviro::EnviroSky::__cordl_internal_get_moonColorGradient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moonColorGradient;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_moonColorGradient(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moonColorGradient = value;
}
constexpr ::UnityEngine::Gradient*& Enviro::EnviroSky::__cordl_internal_get_moonGlowColorGradient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moonGlowColorGradient;
}
constexpr ::UnityEngine::Gradient* const& Enviro::EnviroSky::__cordl_internal_get_moonGlowColorGradient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moonGlowColorGradient;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_moonGlowColorGradient(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moonGlowColorGradient = value;
}
constexpr ::UnityW<::UnityEngine::Cubemap>& Enviro::EnviroSky::__cordl_internal_get_starsTex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___starsTex;
}
constexpr ::UnityW<::UnityEngine::Cubemap> const& Enviro::EnviroSky::__cordl_internal_get_starsTex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___starsTex;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_starsTex(::UnityW<::UnityEngine::Cubemap>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___starsTex = value;
}
constexpr ::UnityW<::UnityEngine::Cubemap>& Enviro::EnviroSky::__cordl_internal_get_starsTwinklingTex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___starsTwinklingTex;
}
constexpr ::UnityW<::UnityEngine::Cubemap> const& Enviro::EnviroSky::__cordl_internal_get_starsTwinklingTex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___starsTwinklingTex;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_starsTwinklingTex(::UnityW<::UnityEngine::Cubemap>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___starsTwinklingTex = value;
}
constexpr ::UnityW<::UnityEngine::Cubemap>& Enviro::EnviroSky::__cordl_internal_get_galaxyTex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___galaxyTex;
}
constexpr ::UnityW<::UnityEngine::Cubemap> const& Enviro::EnviroSky::__cordl_internal_get_galaxyTex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___galaxyTex;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_galaxyTex(::UnityW<::UnityEngine::Cubemap>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___galaxyTex = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& Enviro::EnviroSky::__cordl_internal_get_sunTex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunTex;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& Enviro::EnviroSky::__cordl_internal_get_sunTex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunTex;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_sunTex(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunTex = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& Enviro::EnviroSky::__cordl_internal_get_moonTex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moonTex;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& Enviro::EnviroSky::__cordl_internal_get_moonTex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moonTex;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_moonTex(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moonTex = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& Enviro::EnviroSky::__cordl_internal_get_moonGlowTex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moonGlowTex;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& Enviro::EnviroSky::__cordl_internal_get_moonGlowTex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moonGlowTex;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_moonGlowTex(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moonGlowTex = value;
}
constexpr float_t& Enviro::EnviroSky::__cordl_internal_get_distribution0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distribution0;
}
constexpr float_t const& Enviro::EnviroSky::__cordl_internal_get_distribution0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distribution0;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_distribution0(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distribution0 = value;
}
constexpr float_t& Enviro::EnviroSky::__cordl_internal_get_distribution1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distribution1;
}
constexpr float_t const& Enviro::EnviroSky::__cordl_internal_get_distribution1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distribution1;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_distribution1(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distribution1 = value;
}
constexpr float_t& Enviro::EnviroSky::__cordl_internal_get_distribution2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distribution2;
}
constexpr float_t const& Enviro::EnviroSky::__cordl_internal_get_distribution2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distribution2;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_distribution2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distribution2 = value;
}
constexpr float_t& Enviro::EnviroSky::__cordl_internal_get_distribution3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distribution3;
}
constexpr float_t const& Enviro::EnviroSky::__cordl_internal_get_distribution3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distribution3;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_distribution3(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distribution3 = value;
}
constexpr ::UnityEngine::AnimationCurve*& Enviro::EnviroSky::__cordl_internal_get_mieScatteringIntensityCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mieScatteringIntensityCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& Enviro::EnviroSky::__cordl_internal_get_mieScatteringIntensityCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mieScatteringIntensityCurve;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_mieScatteringIntensityCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mieScatteringIntensityCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& Enviro::EnviroSky::__cordl_internal_get_moonGlowIntensityCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moonGlowIntensityCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& Enviro::EnviroSky::__cordl_internal_get_moonGlowIntensityCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moonGlowIntensityCurve;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_moonGlowIntensityCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moonGlowIntensityCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& Enviro::EnviroSky::__cordl_internal_get_starIntensityCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___starIntensityCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& Enviro::EnviroSky::__cordl_internal_get_starIntensityCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___starIntensityCurve;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_starIntensityCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___starIntensityCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& Enviro::EnviroSky::__cordl_internal_get_galaxyIntensityCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___galaxyIntensityCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& Enviro::EnviroSky::__cordl_internal_get_galaxyIntensityCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___galaxyIntensityCurve;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_galaxyIntensityCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___galaxyIntensityCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& Enviro::EnviroSky::__cordl_internal_get_intensityCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensityCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& Enviro::EnviroSky::__cordl_internal_get_intensityCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensityCurve;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_intensityCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intensityCurve = value;
}
constexpr float_t& Enviro::EnviroSky::__cordl_internal_get_intensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensity;
}
constexpr float_t const& Enviro::EnviroSky::__cordl_internal_get_intensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensity;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_intensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intensity = value;
}
constexpr float_t& Enviro::EnviroSky::__cordl_internal_get_sunScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunScale;
}
constexpr float_t const& Enviro::EnviroSky::__cordl_internal_get_sunScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunScale;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_sunScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunScale = value;
}
constexpr float_t& Enviro::EnviroSky::__cordl_internal_get_moonScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moonScale;
}
constexpr float_t const& Enviro::EnviroSky::__cordl_internal_get_moonScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moonScale;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_moonScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moonScale = value;
}
constexpr float_t& Enviro::EnviroSky::__cordl_internal_get_mieScatteringMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mieScatteringMultiplier;
}
constexpr float_t const& Enviro::EnviroSky::__cordl_internal_get_mieScatteringMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mieScatteringMultiplier;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_mieScatteringMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mieScatteringMultiplier = value;
}
constexpr float_t& Enviro::EnviroSky::__cordl_internal_get_starsTwinklingSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___starsTwinklingSpeed;
}
constexpr float_t const& Enviro::EnviroSky::__cordl_internal_get_starsTwinklingSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___starsTwinklingSpeed;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_starsTwinklingSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___starsTwinklingSpeed = value;
}
constexpr float_t& Enviro::EnviroSky::__cordl_internal_get_moonPhase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moonPhase;
}
constexpr float_t const& Enviro::EnviroSky::__cordl_internal_get_moonPhase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moonPhase;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_moonPhase(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moonPhase = value;
}
constexpr ::UnityEngine::AnimationCurve*& Enviro::EnviroSky::__cordl_internal_get_skyExposureHDRP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyExposureHDRP;
}
constexpr ::UnityEngine::AnimationCurve* const& Enviro::EnviroSky::__cordl_internal_get_skyExposureHDRP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyExposureHDRP;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_skyExposureHDRP(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skyExposureHDRP = value;
}
constexpr ::UnityEngine::Color& Enviro::EnviroSky::__cordl_internal_get_skyColorTint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyColorTint;
}
constexpr ::UnityEngine::Color const& Enviro::EnviroSky::__cordl_internal_get_skyColorTint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyColorTint;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_skyColorTint(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skyColorTint = value;
}
constexpr float_t& Enviro::EnviroSky::__cordl_internal_get_skyColorExponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyColorExponent;
}
constexpr float_t const& Enviro::EnviroSky::__cordl_internal_get_skyColorExponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyColorExponent;
}
constexpr void Enviro::EnviroSky::__cordl_internal_set_skyColorExponent(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skyColorExponent = value;
}
inline void Enviro::EnviroSky::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroSky*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroSky* Enviro::EnviroSky::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroSky*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroSky::EnviroSky()   {
}
