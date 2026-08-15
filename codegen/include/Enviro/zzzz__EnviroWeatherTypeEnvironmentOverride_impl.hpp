#pragma once
// IWYU pragma private; include "Enviro/EnviroWeatherTypeEnvironmentOverride.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Enviro/zzzz__EnviroWeatherTypeEnvironmentOverride_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroWeatherTypeEnvironmentOverride._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroWeatherTypeEnvironmentOverride::*)()>(&::Enviro::EnviroWeatherTypeEnvironmentOverride::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180629a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeEnvironmentOverride*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Enviro::EnviroWeatherTypeEnvironmentOverride::__cordl_internal_get_temperatureWeatherMod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___temperatureWeatherMod;
}
constexpr float_t const& Enviro::EnviroWeatherTypeEnvironmentOverride::__cordl_internal_get_temperatureWeatherMod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___temperatureWeatherMod;
}
constexpr void Enviro::EnviroWeatherTypeEnvironmentOverride::__cordl_internal_set_temperatureWeatherMod(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___temperatureWeatherMod = value;
}
constexpr float_t& Enviro::EnviroWeatherTypeEnvironmentOverride::__cordl_internal_get_wetnessTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wetnessTarget;
}
constexpr float_t const& Enviro::EnviroWeatherTypeEnvironmentOverride::__cordl_internal_get_wetnessTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wetnessTarget;
}
constexpr void Enviro::EnviroWeatherTypeEnvironmentOverride::__cordl_internal_set_wetnessTarget(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wetnessTarget = value;
}
constexpr float_t& Enviro::EnviroWeatherTypeEnvironmentOverride::__cordl_internal_get_snowTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snowTarget;
}
constexpr float_t const& Enviro::EnviroWeatherTypeEnvironmentOverride::__cordl_internal_get_snowTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snowTarget;
}
constexpr void Enviro::EnviroWeatherTypeEnvironmentOverride::__cordl_internal_set_snowTarget(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snowTarget = value;
}
constexpr float_t& Enviro::EnviroWeatherTypeEnvironmentOverride::__cordl_internal_get_windDirectionX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windDirectionX;
}
constexpr float_t const& Enviro::EnviroWeatherTypeEnvironmentOverride::__cordl_internal_get_windDirectionX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windDirectionX;
}
constexpr void Enviro::EnviroWeatherTypeEnvironmentOverride::__cordl_internal_set_windDirectionX(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windDirectionX = value;
}
constexpr float_t& Enviro::EnviroWeatherTypeEnvironmentOverride::__cordl_internal_get_windDirectionY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windDirectionY;
}
constexpr float_t const& Enviro::EnviroWeatherTypeEnvironmentOverride::__cordl_internal_get_windDirectionY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windDirectionY;
}
constexpr void Enviro::EnviroWeatherTypeEnvironmentOverride::__cordl_internal_set_windDirectionY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windDirectionY = value;
}
constexpr float_t& Enviro::EnviroWeatherTypeEnvironmentOverride::__cordl_internal_get_windSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windSpeed;
}
constexpr float_t const& Enviro::EnviroWeatherTypeEnvironmentOverride::__cordl_internal_get_windSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windSpeed;
}
constexpr void Enviro::EnviroWeatherTypeEnvironmentOverride::__cordl_internal_set_windSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windSpeed = value;
}
constexpr float_t& Enviro::EnviroWeatherTypeEnvironmentOverride::__cordl_internal_get_windTurbulence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windTurbulence;
}
constexpr float_t const& Enviro::EnviroWeatherTypeEnvironmentOverride::__cordl_internal_get_windTurbulence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windTurbulence;
}
constexpr void Enviro::EnviroWeatherTypeEnvironmentOverride::__cordl_internal_set_windTurbulence(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windTurbulence = value;
}
inline void Enviro::EnviroWeatherTypeEnvironmentOverride::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeEnvironmentOverride*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroWeatherTypeEnvironmentOverride* Enviro::EnviroWeatherTypeEnvironmentOverride::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroWeatherTypeEnvironmentOverride*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroWeatherTypeEnvironmentOverride::EnviroWeatherTypeEnvironmentOverride()   {
}
