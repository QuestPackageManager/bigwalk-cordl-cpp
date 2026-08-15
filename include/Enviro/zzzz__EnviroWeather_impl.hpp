#pragma once
// IWYU pragma private; include "Enviro/EnviroWeather.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Enviro/zzzz__EnviroWeather_def.hpp"
#include "Enviro/zzzz__EnviroWeatherType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroWeather._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroWeather::*)()>(&::Enviro::EnviroWeather::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180629af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeather*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroWeatherType>>*& Enviro::EnviroWeather::__cordl_internal_get_weatherTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weatherTypes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroWeatherType>>* const& Enviro::EnviroWeather::__cordl_internal_get_weatherTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weatherTypes;
}
constexpr void Enviro::EnviroWeather::__cordl_internal_set_weatherTypes(::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroWeatherType>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weatherTypes = value;
}
constexpr float_t& Enviro::EnviroWeather::__cordl_internal_get_cloudsTransitionSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudsTransitionSpeed;
}
constexpr float_t const& Enviro::EnviroWeather::__cordl_internal_get_cloudsTransitionSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudsTransitionSpeed;
}
constexpr void Enviro::EnviroWeather::__cordl_internal_set_cloudsTransitionSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cloudsTransitionSpeed = value;
}
constexpr float_t& Enviro::EnviroWeather::__cordl_internal_get_fogTransitionSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogTransitionSpeed;
}
constexpr float_t const& Enviro::EnviroWeather::__cordl_internal_get_fogTransitionSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogTransitionSpeed;
}
constexpr void Enviro::EnviroWeather::__cordl_internal_set_fogTransitionSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fogTransitionSpeed = value;
}
constexpr float_t& Enviro::EnviroWeather::__cordl_internal_get_lightingTransitionSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightingTransitionSpeed;
}
constexpr float_t const& Enviro::EnviroWeather::__cordl_internal_get_lightingTransitionSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightingTransitionSpeed;
}
constexpr void Enviro::EnviroWeather::__cordl_internal_set_lightingTransitionSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightingTransitionSpeed = value;
}
constexpr float_t& Enviro::EnviroWeather::__cordl_internal_get_skyTransitionSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyTransitionSpeed;
}
constexpr float_t const& Enviro::EnviroWeather::__cordl_internal_get_skyTransitionSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyTransitionSpeed;
}
constexpr void Enviro::EnviroWeather::__cordl_internal_set_skyTransitionSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skyTransitionSpeed = value;
}
constexpr float_t& Enviro::EnviroWeather::__cordl_internal_get_effectsTransitionSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectsTransitionSpeed;
}
constexpr float_t const& Enviro::EnviroWeather::__cordl_internal_get_effectsTransitionSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectsTransitionSpeed;
}
constexpr void Enviro::EnviroWeather::__cordl_internal_set_effectsTransitionSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___effectsTransitionSpeed = value;
}
constexpr float_t& Enviro::EnviroWeather::__cordl_internal_get_auroraTransitionSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auroraTransitionSpeed;
}
constexpr float_t const& Enviro::EnviroWeather::__cordl_internal_get_auroraTransitionSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auroraTransitionSpeed;
}
constexpr void Enviro::EnviroWeather::__cordl_internal_set_auroraTransitionSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___auroraTransitionSpeed = value;
}
constexpr float_t& Enviro::EnviroWeather::__cordl_internal_get_environmentTransitionSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___environmentTransitionSpeed;
}
constexpr float_t const& Enviro::EnviroWeather::__cordl_internal_get_environmentTransitionSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___environmentTransitionSpeed;
}
constexpr void Enviro::EnviroWeather::__cordl_internal_set_environmentTransitionSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___environmentTransitionSpeed = value;
}
constexpr float_t& Enviro::EnviroWeather::__cordl_internal_get_audioTransitionSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioTransitionSpeed;
}
constexpr float_t const& Enviro::EnviroWeather::__cordl_internal_get_audioTransitionSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioTransitionSpeed;
}
constexpr void Enviro::EnviroWeather::__cordl_internal_set_audioTransitionSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioTransitionSpeed = value;
}
inline void Enviro::EnviroWeather::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeather*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroWeather* Enviro::EnviroWeather::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroWeather*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroWeather::EnviroWeather()   {
}
