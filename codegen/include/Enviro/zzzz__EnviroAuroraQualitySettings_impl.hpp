#pragma once
// IWYU pragma private; include "Enviro/EnviroAuroraQualitySettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Enviro/zzzz__EnviroAuroraQualitySettings_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroAuroraQualitySettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroAuroraQualitySettings::*)()>(&::Enviro::EnviroAuroraQualitySettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18060c290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroAuroraQualitySettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Enviro::EnviroAuroraQualitySettings::__cordl_internal_get_aurora()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aurora;
}
constexpr bool const& Enviro::EnviroAuroraQualitySettings::__cordl_internal_get_aurora() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aurora;
}
constexpr void Enviro::EnviroAuroraQualitySettings::__cordl_internal_set_aurora(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aurora = value;
}
constexpr int32_t& Enviro::EnviroAuroraQualitySettings::__cordl_internal_get_steps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steps;
}
constexpr int32_t const& Enviro::EnviroAuroraQualitySettings::__cordl_internal_get_steps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steps;
}
constexpr void Enviro::EnviroAuroraQualitySettings::__cordl_internal_set_steps(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___steps = value;
}
inline void Enviro::EnviroAuroraQualitySettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroAuroraQualitySettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroAuroraQualitySettings* Enviro::EnviroAuroraQualitySettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroAuroraQualitySettings*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroAuroraQualitySettings::EnviroAuroraQualitySettings()   {
}
