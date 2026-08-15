#pragma once
// IWYU pragma private; include "Enviro/EnviroWeatherTypeAudioOverride.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Enviro/zzzz__EnviroWeatherTypeAudioOverride_def.hpp"
#include "Enviro/zzzz__EnviroAudioOverrideType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroWeatherTypeAudioOverride._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroWeatherTypeAudioOverride::*)()>(&::Enviro::EnviroWeatherTypeAudioOverride::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1806296d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeAudioOverride*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroAudioOverrideType*>*& Enviro::EnviroWeatherTypeAudioOverride::__cordl_internal_get_ambientOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientOverride;
}
constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroAudioOverrideType*>* const& Enviro::EnviroWeatherTypeAudioOverride::__cordl_internal_get_ambientOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientOverride;
}
constexpr void Enviro::EnviroWeatherTypeAudioOverride::__cordl_internal_set_ambientOverride(::System::Collections::Generic::List_1<::Enviro::EnviroAudioOverrideType*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ambientOverride = value;
}
constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroAudioOverrideType*>*& Enviro::EnviroWeatherTypeAudioOverride::__cordl_internal_get_weatherOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weatherOverride;
}
constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroAudioOverrideType*>* const& Enviro::EnviroWeatherTypeAudioOverride::__cordl_internal_get_weatherOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weatherOverride;
}
constexpr void Enviro::EnviroWeatherTypeAudioOverride::__cordl_internal_set_weatherOverride(::System::Collections::Generic::List_1<::Enviro::EnviroAudioOverrideType*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weatherOverride = value;
}
inline void Enviro::EnviroWeatherTypeAudioOverride::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeAudioOverride*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroWeatherTypeAudioOverride* Enviro::EnviroWeatherTypeAudioOverride::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroWeatherTypeAudioOverride*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroWeatherTypeAudioOverride::EnviroWeatherTypeAudioOverride()   {
}
