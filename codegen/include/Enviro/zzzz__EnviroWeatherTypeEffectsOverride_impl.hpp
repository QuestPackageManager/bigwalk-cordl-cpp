#pragma once
// IWYU pragma private; include "Enviro/EnviroWeatherTypeEffectsOverride.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Enviro/zzzz__EnviroWeatherTypeEffectsOverride_def.hpp"
#include "Enviro/zzzz__EnviroEffectsOverrideType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroWeatherTypeEffectsOverride._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroWeatherTypeEffectsOverride::*)()>(&::Enviro::EnviroWeatherTypeEffectsOverride::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1806299b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeEffectsOverride*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroEffectsOverrideType*>*& Enviro::EnviroWeatherTypeEffectsOverride::__cordl_internal_get_effectsOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectsOverride;
}
constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroEffectsOverrideType*>* const& Enviro::EnviroWeatherTypeEffectsOverride::__cordl_internal_get_effectsOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectsOverride;
}
constexpr void Enviro::EnviroWeatherTypeEffectsOverride::__cordl_internal_set_effectsOverride(::System::Collections::Generic::List_1<::Enviro::EnviroEffectsOverrideType*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___effectsOverride = value;
}
inline void Enviro::EnviroWeatherTypeEffectsOverride::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeEffectsOverride*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroWeatherTypeEffectsOverride* Enviro::EnviroWeatherTypeEffectsOverride::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroWeatherTypeEffectsOverride*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroWeatherTypeEffectsOverride::EnviroWeatherTypeEffectsOverride()   {
}
