#pragma once
// IWYU pragma private; include "Enviro/EnviroFlatClouds.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Enviro/zzzz__EnviroFlatClouds_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroFlatClouds._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroFlatClouds::*)()>(&::Enviro::EnviroFlatClouds::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18060eb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFlatClouds*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Enviro::EnviroFlatClouds::__cordl_internal_get_useCirrusClouds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useCirrusClouds;
}
constexpr bool const& Enviro::EnviroFlatClouds::__cordl_internal_get_useCirrusClouds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useCirrusClouds;
}
constexpr void Enviro::EnviroFlatClouds::__cordl_internal_set_useCirrusClouds(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useCirrusClouds = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& Enviro::EnviroFlatClouds::__cordl_internal_get_cirrusCloudsTex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cirrusCloudsTex;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& Enviro::EnviroFlatClouds::__cordl_internal_get_cirrusCloudsTex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cirrusCloudsTex;
}
constexpr void Enviro::EnviroFlatClouds::__cordl_internal_set_cirrusCloudsTex(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cirrusCloudsTex = value;
}
constexpr float_t& Enviro::EnviroFlatClouds::__cordl_internal_get_cirrusCloudsAlpha()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cirrusCloudsAlpha;
}
constexpr float_t const& Enviro::EnviroFlatClouds::__cordl_internal_get_cirrusCloudsAlpha() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cirrusCloudsAlpha;
}
constexpr void Enviro::EnviroFlatClouds::__cordl_internal_set_cirrusCloudsAlpha(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cirrusCloudsAlpha = value;
}
constexpr float_t& Enviro::EnviroFlatClouds::__cordl_internal_get_cirrusCloudsColorPower()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cirrusCloudsColorPower;
}
constexpr float_t const& Enviro::EnviroFlatClouds::__cordl_internal_get_cirrusCloudsColorPower() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cirrusCloudsColorPower;
}
constexpr void Enviro::EnviroFlatClouds::__cordl_internal_set_cirrusCloudsColorPower(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cirrusCloudsColorPower = value;
}
constexpr float_t& Enviro::EnviroFlatClouds::__cordl_internal_get_cirrusCloudsCoverage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cirrusCloudsCoverage;
}
constexpr float_t const& Enviro::EnviroFlatClouds::__cordl_internal_get_cirrusCloudsCoverage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cirrusCloudsCoverage;
}
constexpr void Enviro::EnviroFlatClouds::__cordl_internal_set_cirrusCloudsCoverage(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cirrusCloudsCoverage = value;
}
constexpr ::UnityEngine::Gradient*& Enviro::EnviroFlatClouds::__cordl_internal_get_cirrusCloudsColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cirrusCloudsColor;
}
constexpr ::UnityEngine::Gradient* const& Enviro::EnviroFlatClouds::__cordl_internal_get_cirrusCloudsColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cirrusCloudsColor;
}
constexpr void Enviro::EnviroFlatClouds::__cordl_internal_set_cirrusCloudsColor(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cirrusCloudsColor = value;
}
constexpr float_t& Enviro::EnviroFlatClouds::__cordl_internal_get_cirrusCloudsWindIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cirrusCloudsWindIntensity;
}
constexpr float_t const& Enviro::EnviroFlatClouds::__cordl_internal_get_cirrusCloudsWindIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cirrusCloudsWindIntensity;
}
constexpr void Enviro::EnviroFlatClouds::__cordl_internal_set_cirrusCloudsWindIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cirrusCloudsWindIntensity = value;
}
constexpr bool& Enviro::EnviroFlatClouds::__cordl_internal_get_useFlatClouds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useFlatClouds;
}
constexpr bool const& Enviro::EnviroFlatClouds::__cordl_internal_get_useFlatClouds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useFlatClouds;
}
constexpr void Enviro::EnviroFlatClouds::__cordl_internal_set_useFlatClouds(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useFlatClouds = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& Enviro::EnviroFlatClouds::__cordl_internal_get_flatCloudsBaseTex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsBaseTex;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& Enviro::EnviroFlatClouds::__cordl_internal_get_flatCloudsBaseTex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsBaseTex;
}
constexpr void Enviro::EnviroFlatClouds::__cordl_internal_set_flatCloudsBaseTex(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flatCloudsBaseTex = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& Enviro::EnviroFlatClouds::__cordl_internal_get_flatCloudsDetailTex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsDetailTex;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& Enviro::EnviroFlatClouds::__cordl_internal_get_flatCloudsDetailTex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsDetailTex;
}
constexpr void Enviro::EnviroFlatClouds::__cordl_internal_set_flatCloudsDetailTex(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flatCloudsDetailTex = value;
}
constexpr ::UnityEngine::Gradient*& Enviro::EnviroFlatClouds::__cordl_internal_get_flatCloudsLightColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsLightColor;
}
constexpr ::UnityEngine::Gradient* const& Enviro::EnviroFlatClouds::__cordl_internal_get_flatCloudsLightColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsLightColor;
}
constexpr void Enviro::EnviroFlatClouds::__cordl_internal_set_flatCloudsLightColor(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flatCloudsLightColor = value;
}
constexpr ::UnityEngine::Gradient*& Enviro::EnviroFlatClouds::__cordl_internal_get_flatCloudsAmbientColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsAmbientColor;
}
constexpr ::UnityEngine::Gradient* const& Enviro::EnviroFlatClouds::__cordl_internal_get_flatCloudsAmbientColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsAmbientColor;
}
constexpr void Enviro::EnviroFlatClouds::__cordl_internal_set_flatCloudsAmbientColor(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flatCloudsAmbientColor = value;
}
constexpr float_t& Enviro::EnviroFlatClouds::__cordl_internal_get_flatCloudsLightIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsLightIntensity;
}
constexpr float_t const& Enviro::EnviroFlatClouds::__cordl_internal_get_flatCloudsLightIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsLightIntensity;
}
constexpr void Enviro::EnviroFlatClouds::__cordl_internal_set_flatCloudsLightIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flatCloudsLightIntensity = value;
}
constexpr float_t& Enviro::EnviroFlatClouds::__cordl_internal_get_flatCloudsAmbientIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsAmbientIntensity;
}
constexpr float_t const& Enviro::EnviroFlatClouds::__cordl_internal_get_flatCloudsAmbientIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsAmbientIntensity;
}
constexpr void Enviro::EnviroFlatClouds::__cordl_internal_set_flatCloudsAmbientIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flatCloudsAmbientIntensity = value;
}
constexpr float_t& Enviro::EnviroFlatClouds::__cordl_internal_get_flatCloudsShadowIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsShadowIntensity;
}
constexpr float_t const& Enviro::EnviroFlatClouds::__cordl_internal_get_flatCloudsShadowIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsShadowIntensity;
}
constexpr void Enviro::EnviroFlatClouds::__cordl_internal_set_flatCloudsShadowIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flatCloudsShadowIntensity = value;
}
constexpr float_t& Enviro::EnviroFlatClouds::__cordl_internal_get_flatCloudsShadowSteps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsShadowSteps;
}
constexpr float_t const& Enviro::EnviroFlatClouds::__cordl_internal_get_flatCloudsShadowSteps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsShadowSteps;
}
constexpr void Enviro::EnviroFlatClouds::__cordl_internal_set_flatCloudsShadowSteps(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flatCloudsShadowSteps = value;
}
constexpr float_t& Enviro::EnviroFlatClouds::__cordl_internal_get_flatCloudsHGPhase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsHGPhase;
}
constexpr float_t const& Enviro::EnviroFlatClouds::__cordl_internal_get_flatCloudsHGPhase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsHGPhase;
}
constexpr void Enviro::EnviroFlatClouds::__cordl_internal_set_flatCloudsHGPhase(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flatCloudsHGPhase = value;
}
constexpr float_t& Enviro::EnviroFlatClouds::__cordl_internal_get_flatCloudsCoverage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsCoverage;
}
constexpr float_t const& Enviro::EnviroFlatClouds::__cordl_internal_get_flatCloudsCoverage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsCoverage;
}
constexpr void Enviro::EnviroFlatClouds::__cordl_internal_set_flatCloudsCoverage(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flatCloudsCoverage = value;
}
constexpr float_t& Enviro::EnviroFlatClouds::__cordl_internal_get_flatCloudsDensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsDensity;
}
constexpr float_t const& Enviro::EnviroFlatClouds::__cordl_internal_get_flatCloudsDensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsDensity;
}
constexpr void Enviro::EnviroFlatClouds::__cordl_internal_set_flatCloudsDensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flatCloudsDensity = value;
}
constexpr float_t& Enviro::EnviroFlatClouds::__cordl_internal_get_flatCloudsAltitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsAltitude;
}
constexpr float_t const& Enviro::EnviroFlatClouds::__cordl_internal_get_flatCloudsAltitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsAltitude;
}
constexpr void Enviro::EnviroFlatClouds::__cordl_internal_set_flatCloudsAltitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flatCloudsAltitude = value;
}
constexpr bool& Enviro::EnviroFlatClouds::__cordl_internal_get_flatCloudsTonemapping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsTonemapping;
}
constexpr bool const& Enviro::EnviroFlatClouds::__cordl_internal_get_flatCloudsTonemapping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsTonemapping;
}
constexpr void Enviro::EnviroFlatClouds::__cordl_internal_set_flatCloudsTonemapping(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flatCloudsTonemapping = value;
}
constexpr float_t& Enviro::EnviroFlatClouds::__cordl_internal_get_flatCloudsBaseTiling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsBaseTiling;
}
constexpr float_t const& Enviro::EnviroFlatClouds::__cordl_internal_get_flatCloudsBaseTiling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsBaseTiling;
}
constexpr void Enviro::EnviroFlatClouds::__cordl_internal_set_flatCloudsBaseTiling(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flatCloudsBaseTiling = value;
}
constexpr float_t& Enviro::EnviroFlatClouds::__cordl_internal_get_flatCloudsDetailTiling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsDetailTiling;
}
constexpr float_t const& Enviro::EnviroFlatClouds::__cordl_internal_get_flatCloudsDetailTiling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsDetailTiling;
}
constexpr void Enviro::EnviroFlatClouds::__cordl_internal_set_flatCloudsDetailTiling(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flatCloudsDetailTiling = value;
}
constexpr float_t& Enviro::EnviroFlatClouds::__cordl_internal_get_flatCloudsWindIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsWindIntensity;
}
constexpr float_t const& Enviro::EnviroFlatClouds::__cordl_internal_get_flatCloudsWindIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsWindIntensity;
}
constexpr void Enviro::EnviroFlatClouds::__cordl_internal_set_flatCloudsWindIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flatCloudsWindIntensity = value;
}
constexpr float_t& Enviro::EnviroFlatClouds::__cordl_internal_get_flatCloudsDetailWindIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsDetailWindIntensity;
}
constexpr float_t const& Enviro::EnviroFlatClouds::__cordl_internal_get_flatCloudsDetailWindIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsDetailWindIntensity;
}
constexpr void Enviro::EnviroFlatClouds::__cordl_internal_set_flatCloudsDetailWindIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flatCloudsDetailWindIntensity = value;
}
inline void Enviro::EnviroFlatClouds::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFlatClouds*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroFlatClouds* Enviro::EnviroFlatClouds::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroFlatClouds*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroFlatClouds::EnviroFlatClouds()   {
}
