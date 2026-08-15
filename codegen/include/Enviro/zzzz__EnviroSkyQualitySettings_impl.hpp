#pragma once
// IWYU pragma private; include "Enviro/EnviroSkyQualitySettings.hpp"
#include "Enviro/zzzz__EnviroSky_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Enviro/zzzz__EnviroSkyQualitySettings_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroSkyQualitySettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroSkyQualitySettings::*)()>(&::Enviro::EnviroSkyQualitySettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroSkyQualitySettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Enviro::EnviroSky_SkyMode& Enviro::EnviroSkyQualitySettings::__cordl_internal_get_skyMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyMode;
}
constexpr ::Enviro::EnviroSky_SkyMode const& Enviro::EnviroSkyQualitySettings::__cordl_internal_get_skyMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyMode;
}
constexpr void Enviro::EnviroSkyQualitySettings::__cordl_internal_set_skyMode(::Enviro::EnviroSky_SkyMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skyMode = value;
}
inline void Enviro::EnviroSkyQualitySettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroSkyQualitySettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroSkyQualitySettings* Enviro::EnviroSkyQualitySettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroSkyQualitySettings*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroSkyQualitySettings::EnviroSkyQualitySettings()   {
}
