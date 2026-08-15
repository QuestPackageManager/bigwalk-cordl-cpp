#pragma once
// IWYU pragma private; include "Enviro/EnviroFogQualitySettings.hpp"
#include "Enviro/zzzz__EnviroFogSettings_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Enviro/zzzz__EnviroFogQualitySettings_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroFogQualitySettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroFogQualitySettings::*)()>(&::Enviro::EnviroFogQualitySettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180613c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogQualitySettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Enviro::EnviroFogQualitySettings::__cordl_internal_get_fog()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fog;
}
constexpr bool const& Enviro::EnviroFogQualitySettings::__cordl_internal_get_fog() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fog;
}
constexpr void Enviro::EnviroFogQualitySettings::__cordl_internal_set_fog(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fog = value;
}
constexpr ::Enviro::EnviroFogSettings_FogQualityMode& Enviro::EnviroFogQualitySettings::__cordl_internal_get_fogQualityMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogQualityMode;
}
constexpr ::Enviro::EnviroFogSettings_FogQualityMode const& Enviro::EnviroFogQualitySettings::__cordl_internal_get_fogQualityMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogQualityMode;
}
constexpr void Enviro::EnviroFogQualitySettings::__cordl_internal_set_fogQualityMode(::Enviro::EnviroFogSettings_FogQualityMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fogQualityMode = value;
}
constexpr bool& Enviro::EnviroFogQualitySettings::__cordl_internal_get_volumetrics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumetrics;
}
constexpr bool const& Enviro::EnviroFogQualitySettings::__cordl_internal_get_volumetrics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumetrics;
}
constexpr void Enviro::EnviroFogQualitySettings::__cordl_internal_set_volumetrics(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volumetrics = value;
}
constexpr bool& Enviro::EnviroFogQualitySettings::__cordl_internal_get_unityFog()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityFog;
}
constexpr bool const& Enviro::EnviroFogQualitySettings::__cordl_internal_get_unityFog() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityFog;
}
constexpr void Enviro::EnviroFogQualitySettings::__cordl_internal_set_unityFog(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unityFog = value;
}
constexpr ::Enviro::EnviroFogSettings_Quality& Enviro::EnviroFogQualitySettings::__cordl_internal_get_quality()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quality;
}
constexpr ::Enviro::EnviroFogSettings_Quality const& Enviro::EnviroFogQualitySettings::__cordl_internal_get_quality() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quality;
}
constexpr void Enviro::EnviroFogQualitySettings::__cordl_internal_set_quality(::Enviro::EnviroFogSettings_Quality  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___quality = value;
}
constexpr int32_t& Enviro::EnviroFogQualitySettings::__cordl_internal_get_steps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steps;
}
constexpr int32_t const& Enviro::EnviroFogQualitySettings::__cordl_internal_get_steps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steps;
}
constexpr void Enviro::EnviroFogQualitySettings::__cordl_internal_set_steps(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___steps = value;
}
inline void Enviro::EnviroFogQualitySettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogQualitySettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroFogQualitySettings* Enviro::EnviroFogQualitySettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroFogQualitySettings*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroFogQualitySettings::EnviroFogQualitySettings()   {
}
