#pragma once
// IWYU pragma private; include "Enviro/EnviroWeatherTypeAuroraOverride.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Enviro/zzzz__EnviroWeatherTypeAuroraOverride_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroWeatherTypeAuroraOverride._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroWeatherTypeAuroraOverride::*)()>(&::Enviro::EnviroWeatherTypeAuroraOverride::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803eeeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeAuroraOverride*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Enviro::EnviroWeatherTypeAuroraOverride::__cordl_internal_get_auroraIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auroraIntensity;
}
constexpr float_t const& Enviro::EnviroWeatherTypeAuroraOverride::__cordl_internal_get_auroraIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auroraIntensity;
}
constexpr void Enviro::EnviroWeatherTypeAuroraOverride::__cordl_internal_set_auroraIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___auroraIntensity = value;
}
inline void Enviro::EnviroWeatherTypeAuroraOverride::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeAuroraOverride*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroWeatherTypeAuroraOverride* Enviro::EnviroWeatherTypeAuroraOverride::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroWeatherTypeAuroraOverride*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroWeatherTypeAuroraOverride::EnviroWeatherTypeAuroraOverride()   {
}
