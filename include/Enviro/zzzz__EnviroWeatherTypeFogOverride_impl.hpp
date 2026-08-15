#pragma once
// IWYU pragma private; include "Enviro/EnviroWeatherTypeFogOverride.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "Enviro/zzzz__EnviroWeatherTypeFogOverride_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroWeatherTypeFogOverride._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroWeatherTypeFogOverride::*)()>(&::Enviro::EnviroWeatherTypeFogOverride::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180629a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeFogOverride*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_get_fogDensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogDensity;
}
constexpr float_t const& Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_get_fogDensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogDensity;
}
constexpr void Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_set_fogDensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fogDensity = value;
}
constexpr float_t& Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_get_fogHeightFalloff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogHeightFalloff;
}
constexpr float_t const& Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_get_fogHeightFalloff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogHeightFalloff;
}
constexpr void Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_set_fogHeightFalloff(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fogHeightFalloff = value;
}
constexpr float_t& Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_get_fogHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogHeight;
}
constexpr float_t const& Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_get_fogHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogHeight;
}
constexpr void Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_set_fogHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fogHeight = value;
}
constexpr float_t& Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_get_fogDensity2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogDensity2;
}
constexpr float_t const& Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_get_fogDensity2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogDensity2;
}
constexpr void Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_set_fogDensity2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fogDensity2 = value;
}
constexpr float_t& Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_get_fogHeightFalloff2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogHeightFalloff2;
}
constexpr float_t const& Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_get_fogHeightFalloff2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogHeightFalloff2;
}
constexpr void Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_set_fogHeightFalloff2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fogHeightFalloff2 = value;
}
constexpr float_t& Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_get_fogHeight2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogHeight2;
}
constexpr float_t const& Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_get_fogHeight2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogHeight2;
}
constexpr void Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_set_fogHeight2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fogHeight2 = value;
}
constexpr float_t& Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_get_fogColorBlend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogColorBlend;
}
constexpr float_t const& Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_get_fogColorBlend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogColorBlend;
}
constexpr void Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_set_fogColorBlend(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fogColorBlend = value;
}
constexpr ::UnityEngine::Color& Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_get_fogColorMod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogColorMod;
}
constexpr ::UnityEngine::Color const& Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_get_fogColorMod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogColorMod;
}
constexpr void Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_set_fogColorMod(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fogColorMod = value;
}
constexpr float_t& Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_get_scattering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scattering;
}
constexpr float_t const& Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_get_scattering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scattering;
}
constexpr void Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_set_scattering(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scattering = value;
}
constexpr float_t& Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_get_extinction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extinction;
}
constexpr float_t const& Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_get_extinction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extinction;
}
constexpr void Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_set_extinction(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extinction = value;
}
constexpr float_t& Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_get_anistropy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anistropy;
}
constexpr float_t const& Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_get_anistropy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anistropy;
}
constexpr void Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_set_anistropy(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anistropy = value;
}
constexpr float_t& Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_get_unityFogDensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityFogDensity;
}
constexpr float_t const& Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_get_unityFogDensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityFogDensity;
}
constexpr void Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_set_unityFogDensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unityFogDensity = value;
}
constexpr float_t& Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_get_unityFogStartDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityFogStartDistance;
}
constexpr float_t const& Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_get_unityFogStartDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityFogStartDistance;
}
constexpr void Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_set_unityFogStartDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unityFogStartDistance = value;
}
constexpr float_t& Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_get_unityFogEndDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityFogEndDistance;
}
constexpr float_t const& Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_get_unityFogEndDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityFogEndDistance;
}
constexpr void Enviro::EnviroWeatherTypeFogOverride::__cordl_internal_set_unityFogEndDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unityFogEndDistance = value;
}
inline void Enviro::EnviroWeatherTypeFogOverride::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeFogOverride*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroWeatherTypeFogOverride* Enviro::EnviroWeatherTypeFogOverride::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroWeatherTypeFogOverride*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroWeatherTypeFogOverride::EnviroWeatherTypeFogOverride()   {
}
