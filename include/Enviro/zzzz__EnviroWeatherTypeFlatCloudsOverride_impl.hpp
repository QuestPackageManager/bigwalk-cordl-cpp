#pragma once
// IWYU pragma private; include "Enviro/EnviroWeatherTypeFlatCloudsOverride.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Enviro/zzzz__EnviroWeatherTypeFlatCloudsOverride_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroWeatherTypeFlatCloudsOverride._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroWeatherTypeFlatCloudsOverride::*)()>(&::Enviro::EnviroWeatherTypeFlatCloudsOverride::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180629a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeFlatCloudsOverride*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Enviro::EnviroWeatherTypeFlatCloudsOverride::__cordl_internal_get_cirrusCloudsAlpha()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cirrusCloudsAlpha;
}
constexpr float_t const& Enviro::EnviroWeatherTypeFlatCloudsOverride::__cordl_internal_get_cirrusCloudsAlpha() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cirrusCloudsAlpha;
}
constexpr void Enviro::EnviroWeatherTypeFlatCloudsOverride::__cordl_internal_set_cirrusCloudsAlpha(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cirrusCloudsAlpha = value;
}
constexpr float_t& Enviro::EnviroWeatherTypeFlatCloudsOverride::__cordl_internal_get_cirrusCloudsCoverage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cirrusCloudsCoverage;
}
constexpr float_t const& Enviro::EnviroWeatherTypeFlatCloudsOverride::__cordl_internal_get_cirrusCloudsCoverage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cirrusCloudsCoverage;
}
constexpr void Enviro::EnviroWeatherTypeFlatCloudsOverride::__cordl_internal_set_cirrusCloudsCoverage(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cirrusCloudsCoverage = value;
}
constexpr float_t& Enviro::EnviroWeatherTypeFlatCloudsOverride::__cordl_internal_get_cirrusCloudsColorPower()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cirrusCloudsColorPower;
}
constexpr float_t const& Enviro::EnviroWeatherTypeFlatCloudsOverride::__cordl_internal_get_cirrusCloudsColorPower() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cirrusCloudsColorPower;
}
constexpr void Enviro::EnviroWeatherTypeFlatCloudsOverride::__cordl_internal_set_cirrusCloudsColorPower(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cirrusCloudsColorPower = value;
}
constexpr float_t& Enviro::EnviroWeatherTypeFlatCloudsOverride::__cordl_internal_get_flatCloudsCoverage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsCoverage;
}
constexpr float_t const& Enviro::EnviroWeatherTypeFlatCloudsOverride::__cordl_internal_get_flatCloudsCoverage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsCoverage;
}
constexpr void Enviro::EnviroWeatherTypeFlatCloudsOverride::__cordl_internal_set_flatCloudsCoverage(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flatCloudsCoverage = value;
}
constexpr float_t& Enviro::EnviroWeatherTypeFlatCloudsOverride::__cordl_internal_get_flatCloudsDensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsDensity;
}
constexpr float_t const& Enviro::EnviroWeatherTypeFlatCloudsOverride::__cordl_internal_get_flatCloudsDensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsDensity;
}
constexpr void Enviro::EnviroWeatherTypeFlatCloudsOverride::__cordl_internal_set_flatCloudsDensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flatCloudsDensity = value;
}
constexpr float_t& Enviro::EnviroWeatherTypeFlatCloudsOverride::__cordl_internal_get_flatCloudsLightIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsLightIntensity;
}
constexpr float_t const& Enviro::EnviroWeatherTypeFlatCloudsOverride::__cordl_internal_get_flatCloudsLightIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsLightIntensity;
}
constexpr void Enviro::EnviroWeatherTypeFlatCloudsOverride::__cordl_internal_set_flatCloudsLightIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flatCloudsLightIntensity = value;
}
constexpr float_t& Enviro::EnviroWeatherTypeFlatCloudsOverride::__cordl_internal_get_flatCloudsAmbientIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsAmbientIntensity;
}
constexpr float_t const& Enviro::EnviroWeatherTypeFlatCloudsOverride::__cordl_internal_get_flatCloudsAmbientIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsAmbientIntensity;
}
constexpr void Enviro::EnviroWeatherTypeFlatCloudsOverride::__cordl_internal_set_flatCloudsAmbientIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flatCloudsAmbientIntensity = value;
}
constexpr float_t& Enviro::EnviroWeatherTypeFlatCloudsOverride::__cordl_internal_get_flatCloudsShadowIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsShadowIntensity;
}
constexpr float_t const& Enviro::EnviroWeatherTypeFlatCloudsOverride::__cordl_internal_get_flatCloudsShadowIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsShadowIntensity;
}
constexpr void Enviro::EnviroWeatherTypeFlatCloudsOverride::__cordl_internal_set_flatCloudsShadowIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flatCloudsShadowIntensity = value;
}
constexpr int32_t& Enviro::EnviroWeatherTypeFlatCloudsOverride::__cordl_internal_get_flatCloudsShadowSteps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsShadowSteps;
}
constexpr int32_t const& Enviro::EnviroWeatherTypeFlatCloudsOverride::__cordl_internal_get_flatCloudsShadowSteps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsShadowSteps;
}
constexpr void Enviro::EnviroWeatherTypeFlatCloudsOverride::__cordl_internal_set_flatCloudsShadowSteps(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flatCloudsShadowSteps = value;
}
inline void Enviro::EnviroWeatherTypeFlatCloudsOverride::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeFlatCloudsOverride*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroWeatherTypeFlatCloudsOverride* Enviro::EnviroWeatherTypeFlatCloudsOverride::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroWeatherTypeFlatCloudsOverride*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroWeatherTypeFlatCloudsOverride::EnviroWeatherTypeFlatCloudsOverride()   {
}
