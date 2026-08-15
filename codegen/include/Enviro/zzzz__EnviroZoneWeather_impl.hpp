#pragma once
// IWYU pragma private; include "Enviro/EnviroZoneWeather.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Enviro/zzzz__EnviroZoneWeather_def.hpp"
#include "Enviro/zzzz__EnviroWeatherType_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroZoneWeather._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroZoneWeather::*)()>(&::Enviro::EnviroZoneWeather::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180629b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroZoneWeather*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Enviro::EnviroZoneWeather::__cordl_internal_get_showEditor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showEditor;
}
constexpr bool const& Enviro::EnviroZoneWeather::__cordl_internal_get_showEditor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showEditor;
}
constexpr void Enviro::EnviroZoneWeather::__cordl_internal_set_showEditor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showEditor = value;
}
constexpr ::UnityW<::Enviro::EnviroWeatherType>& Enviro::EnviroZoneWeather::__cordl_internal_get_weatherType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weatherType;
}
constexpr ::UnityW<::Enviro::EnviroWeatherType> const& Enviro::EnviroZoneWeather::__cordl_internal_get_weatherType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weatherType;
}
constexpr void Enviro::EnviroZoneWeather::__cordl_internal_set_weatherType(::UnityW<::Enviro::EnviroWeatherType>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weatherType = value;
}
constexpr float_t& Enviro::EnviroZoneWeather::__cordl_internal_get_probability()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___probability;
}
constexpr float_t const& Enviro::EnviroZoneWeather::__cordl_internal_get_probability() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___probability;
}
constexpr void Enviro::EnviroZoneWeather::__cordl_internal_set_probability(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___probability = value;
}
constexpr bool& Enviro::EnviroZoneWeather::__cordl_internal_get_seasonalProbability()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seasonalProbability;
}
constexpr bool const& Enviro::EnviroZoneWeather::__cordl_internal_get_seasonalProbability() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seasonalProbability;
}
constexpr void Enviro::EnviroZoneWeather::__cordl_internal_set_seasonalProbability(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seasonalProbability = value;
}
constexpr float_t& Enviro::EnviroZoneWeather::__cordl_internal_get_probabilitySpring()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___probabilitySpring;
}
constexpr float_t const& Enviro::EnviroZoneWeather::__cordl_internal_get_probabilitySpring() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___probabilitySpring;
}
constexpr void Enviro::EnviroZoneWeather::__cordl_internal_set_probabilitySpring(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___probabilitySpring = value;
}
constexpr float_t& Enviro::EnviroZoneWeather::__cordl_internal_get_probabilitySummer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___probabilitySummer;
}
constexpr float_t const& Enviro::EnviroZoneWeather::__cordl_internal_get_probabilitySummer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___probabilitySummer;
}
constexpr void Enviro::EnviroZoneWeather::__cordl_internal_set_probabilitySummer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___probabilitySummer = value;
}
constexpr float_t& Enviro::EnviroZoneWeather::__cordl_internal_get_probabilityAutumn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___probabilityAutumn;
}
constexpr float_t const& Enviro::EnviroZoneWeather::__cordl_internal_get_probabilityAutumn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___probabilityAutumn;
}
constexpr void Enviro::EnviroZoneWeather::__cordl_internal_set_probabilityAutumn(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___probabilityAutumn = value;
}
constexpr float_t& Enviro::EnviroZoneWeather::__cordl_internal_get_probabilityWinter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___probabilityWinter;
}
constexpr float_t const& Enviro::EnviroZoneWeather::__cordl_internal_get_probabilityWinter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___probabilityWinter;
}
constexpr void Enviro::EnviroZoneWeather::__cordl_internal_set_probabilityWinter(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___probabilityWinter = value;
}
inline void Enviro::EnviroZoneWeather::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroZoneWeather*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroZoneWeather* Enviro::EnviroZoneWeather::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroZoneWeather*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroZoneWeather::EnviroZoneWeather()   {
}
