#pragma once
// IWYU pragma private; include "Enviro/EnviroEffectsQualitySettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Enviro/zzzz__EnviroEffectsQualitySettings_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroEffectsQualitySettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEffectsQualitySettings::*)()>(&::Enviro::EnviroEffectsQualitySettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803eeeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectsQualitySettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Enviro::EnviroEffectsQualitySettings::__cordl_internal_get_particeEmissionRateModifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particeEmissionRateModifier;
}
constexpr float_t const& Enviro::EnviroEffectsQualitySettings::__cordl_internal_get_particeEmissionRateModifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particeEmissionRateModifier;
}
constexpr void Enviro::EnviroEffectsQualitySettings::__cordl_internal_set_particeEmissionRateModifier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particeEmissionRateModifier = value;
}
inline void Enviro::EnviroEffectsQualitySettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectsQualitySettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroEffectsQualitySettings* Enviro::EnviroEffectsQualitySettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroEffectsQualitySettings*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroEffectsQualitySettings::EnviroEffectsQualitySettings()   {
}
