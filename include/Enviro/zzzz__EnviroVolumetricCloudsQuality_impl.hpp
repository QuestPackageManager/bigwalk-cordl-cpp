#pragma once
// IWYU pragma private; include "Enviro/EnviroVolumetricCloudsQuality.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Enviro/zzzz__EnviroVolumetricCloudsQuality_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroVolumetricCloudsQuality._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroVolumetricCloudsQuality::*)()>(&::Enviro::EnviroVolumetricCloudsQuality::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180625e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsQuality*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Enviro::EnviroVolumetricCloudsQuality::__cordl_internal_get_volumetricClouds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumetricClouds;
}
constexpr bool const& Enviro::EnviroVolumetricCloudsQuality::__cordl_internal_get_volumetricClouds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumetricClouds;
}
constexpr void Enviro::EnviroVolumetricCloudsQuality::__cordl_internal_set_volumetricClouds(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volumetricClouds = value;
}
constexpr bool& Enviro::EnviroVolumetricCloudsQuality::__cordl_internal_get_lightningSupport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightningSupport;
}
constexpr bool const& Enviro::EnviroVolumetricCloudsQuality::__cordl_internal_get_lightningSupport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightningSupport;
}
constexpr void Enviro::EnviroVolumetricCloudsQuality::__cordl_internal_set_lightningSupport(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightningSupport = value;
}
constexpr bool& Enviro::EnviroVolumetricCloudsQuality::__cordl_internal_get_variableBottomNoise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___variableBottomNoise;
}
constexpr bool const& Enviro::EnviroVolumetricCloudsQuality::__cordl_internal_get_variableBottomNoise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___variableBottomNoise;
}
constexpr void Enviro::EnviroVolumetricCloudsQuality::__cordl_internal_set_variableBottomNoise(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___variableBottomNoise = value;
}
constexpr int32_t& Enviro::EnviroVolumetricCloudsQuality::__cordl_internal_get_downsampling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downsampling;
}
constexpr int32_t const& Enviro::EnviroVolumetricCloudsQuality::__cordl_internal_get_downsampling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downsampling;
}
constexpr void Enviro::EnviroVolumetricCloudsQuality::__cordl_internal_set_downsampling(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___downsampling = value;
}
constexpr int32_t& Enviro::EnviroVolumetricCloudsQuality::__cordl_internal_get_stepsLayer1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stepsLayer1;
}
constexpr int32_t const& Enviro::EnviroVolumetricCloudsQuality::__cordl_internal_get_stepsLayer1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stepsLayer1;
}
constexpr void Enviro::EnviroVolumetricCloudsQuality::__cordl_internal_set_stepsLayer1(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stepsLayer1 = value;
}
constexpr int32_t& Enviro::EnviroVolumetricCloudsQuality::__cordl_internal_get_stepsLayer2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stepsLayer2;
}
constexpr int32_t const& Enviro::EnviroVolumetricCloudsQuality::__cordl_internal_get_stepsLayer2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stepsLayer2;
}
constexpr void Enviro::EnviroVolumetricCloudsQuality::__cordl_internal_set_stepsLayer2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stepsLayer2 = value;
}
constexpr float_t& Enviro::EnviroVolumetricCloudsQuality::__cordl_internal_get_blueNoiseIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blueNoiseIntensity;
}
constexpr float_t const& Enviro::EnviroVolumetricCloudsQuality::__cordl_internal_get_blueNoiseIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blueNoiseIntensity;
}
constexpr void Enviro::EnviroVolumetricCloudsQuality::__cordl_internal_set_blueNoiseIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blueNoiseIntensity = value;
}
constexpr float_t& Enviro::EnviroVolumetricCloudsQuality::__cordl_internal_get_reprojectionBlendTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reprojectionBlendTime;
}
constexpr float_t const& Enviro::EnviroVolumetricCloudsQuality::__cordl_internal_get_reprojectionBlendTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reprojectionBlendTime;
}
constexpr void Enviro::EnviroVolumetricCloudsQuality::__cordl_internal_set_reprojectionBlendTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reprojectionBlendTime = value;
}
constexpr float_t& Enviro::EnviroVolumetricCloudsQuality::__cordl_internal_get_lodDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lodDistance;
}
constexpr float_t const& Enviro::EnviroVolumetricCloudsQuality::__cordl_internal_get_lodDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lodDistance;
}
constexpr void Enviro::EnviroVolumetricCloudsQuality::__cordl_internal_set_lodDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lodDistance = value;
}
inline void Enviro::EnviroVolumetricCloudsQuality::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsQuality*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroVolumetricCloudsQuality* Enviro::EnviroVolumetricCloudsQuality::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroVolumetricCloudsQuality*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroVolumetricCloudsQuality::EnviroVolumetricCloudsQuality()   {
}
