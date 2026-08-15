#pragma once
// IWYU pragma private; include "Enviro/EnviroWeatherTypeLightingOverride.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Enviro/zzzz__EnviroWeatherTypeLightingOverride_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroWeatherTypeLightingOverride._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroWeatherTypeLightingOverride::*)()>(&::Enviro::EnviroWeatherTypeLightingOverride::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804b96b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeLightingOverride*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Enviro::EnviroWeatherTypeLightingOverride::__cordl_internal_get_directLightIntensityModifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directLightIntensityModifier;
}
constexpr float_t const& Enviro::EnviroWeatherTypeLightingOverride::__cordl_internal_get_directLightIntensityModifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directLightIntensityModifier;
}
constexpr void Enviro::EnviroWeatherTypeLightingOverride::__cordl_internal_set_directLightIntensityModifier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___directLightIntensityModifier = value;
}
constexpr float_t& Enviro::EnviroWeatherTypeLightingOverride::__cordl_internal_get_ambientIntensityModifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientIntensityModifier;
}
constexpr float_t const& Enviro::EnviroWeatherTypeLightingOverride::__cordl_internal_get_ambientIntensityModifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientIntensityModifier;
}
constexpr void Enviro::EnviroWeatherTypeLightingOverride::__cordl_internal_set_ambientIntensityModifier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ambientIntensityModifier = value;
}
constexpr float_t& Enviro::EnviroWeatherTypeLightingOverride::__cordl_internal_get_shadowIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowIntensity;
}
constexpr float_t const& Enviro::EnviroWeatherTypeLightingOverride::__cordl_internal_get_shadowIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowIntensity;
}
constexpr void Enviro::EnviroWeatherTypeLightingOverride::__cordl_internal_set_shadowIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shadowIntensity = value;
}
inline void Enviro::EnviroWeatherTypeLightingOverride::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeLightingOverride*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroWeatherTypeLightingOverride* Enviro::EnviroWeatherTypeLightingOverride::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroWeatherTypeLightingOverride*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroWeatherTypeLightingOverride::EnviroWeatherTypeLightingOverride()   {
}
