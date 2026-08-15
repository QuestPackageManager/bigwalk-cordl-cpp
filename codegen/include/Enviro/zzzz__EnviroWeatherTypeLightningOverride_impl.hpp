#pragma once
// IWYU pragma private; include "Enviro/EnviroWeatherTypeLightningOverride.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Enviro/zzzz__EnviroWeatherTypeLightningOverride_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroWeatherTypeLightningOverride._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroWeatherTypeLightningOverride::*)()>(&::Enviro::EnviroWeatherTypeLightningOverride::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804b96d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeLightningOverride*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Enviro::EnviroWeatherTypeLightningOverride::__cordl_internal_get_lightningStorm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightningStorm;
}
constexpr bool const& Enviro::EnviroWeatherTypeLightningOverride::__cordl_internal_get_lightningStorm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightningStorm;
}
constexpr void Enviro::EnviroWeatherTypeLightningOverride::__cordl_internal_set_lightningStorm(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightningStorm = value;
}
constexpr float_t& Enviro::EnviroWeatherTypeLightningOverride::__cordl_internal_get_randomLightningDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomLightningDelay;
}
constexpr float_t const& Enviro::EnviroWeatherTypeLightningOverride::__cordl_internal_get_randomLightningDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomLightningDelay;
}
constexpr void Enviro::EnviroWeatherTypeLightningOverride::__cordl_internal_set_randomLightningDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomLightningDelay = value;
}
inline void Enviro::EnviroWeatherTypeLightningOverride::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeLightningOverride*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroWeatherTypeLightningOverride* Enviro::EnviroWeatherTypeLightningOverride::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroWeatherTypeLightningOverride*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroWeatherTypeLightningOverride::EnviroWeatherTypeLightningOverride()   {
}
