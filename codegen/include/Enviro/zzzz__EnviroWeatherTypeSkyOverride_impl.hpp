#pragma once
// IWYU pragma private; include "Enviro/EnviroWeatherTypeSkyOverride.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "Enviro/zzzz__EnviroWeatherTypeSkyOverride_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroWeatherTypeSkyOverride._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroWeatherTypeSkyOverride::*)()>(&::Enviro::EnviroWeatherTypeSkyOverride::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180629ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeSkyOverride*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Enviro::EnviroWeatherTypeSkyOverride::__cordl_internal_get_intensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensity;
}
constexpr float_t const& Enviro::EnviroWeatherTypeSkyOverride::__cordl_internal_get_intensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensity;
}
constexpr void Enviro::EnviroWeatherTypeSkyOverride::__cordl_internal_set_intensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intensity = value;
}
constexpr float_t& Enviro::EnviroWeatherTypeSkyOverride::__cordl_internal_get_mieScatteringMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mieScatteringMultiplier;
}
constexpr float_t const& Enviro::EnviroWeatherTypeSkyOverride::__cordl_internal_get_mieScatteringMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mieScatteringMultiplier;
}
constexpr void Enviro::EnviroWeatherTypeSkyOverride::__cordl_internal_set_mieScatteringMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mieScatteringMultiplier = value;
}
constexpr float_t& Enviro::EnviroWeatherTypeSkyOverride::__cordl_internal_get_skyColorExponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyColorExponent;
}
constexpr float_t const& Enviro::EnviroWeatherTypeSkyOverride::__cordl_internal_get_skyColorExponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyColorExponent;
}
constexpr void Enviro::EnviroWeatherTypeSkyOverride::__cordl_internal_set_skyColorExponent(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skyColorExponent = value;
}
constexpr ::UnityEngine::Color& Enviro::EnviroWeatherTypeSkyOverride::__cordl_internal_get_skyColorTint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyColorTint;
}
constexpr ::UnityEngine::Color const& Enviro::EnviroWeatherTypeSkyOverride::__cordl_internal_get_skyColorTint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyColorTint;
}
constexpr void Enviro::EnviroWeatherTypeSkyOverride::__cordl_internal_set_skyColorTint(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skyColorTint = value;
}
inline void Enviro::EnviroWeatherTypeSkyOverride::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeSkyOverride*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroWeatherTypeSkyOverride* Enviro::EnviroWeatherTypeSkyOverride::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroWeatherTypeSkyOverride*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroWeatherTypeSkyOverride::EnviroWeatherTypeSkyOverride()   {
}
