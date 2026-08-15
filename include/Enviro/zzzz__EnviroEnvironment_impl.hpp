#pragma once
// IWYU pragma private; include "Enviro/EnviroEnvironment.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Enviro/zzzz__EnviroEnvironment_def.hpp"
#include "Enviro/zzzz__EnviroEnvironment_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Enviro::EnviroEnvironment_Seasons::EnviroEnvironment_Seasons(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Enviro::EnviroEnvironment_Seasons::EnviroEnvironment_Seasons()   {
}
constexpr ::Enviro::EnviroEnvironment_Seasons  Enviro::EnviroEnvironment_Seasons::Spring{static_cast<int32_t>(0x0)};
constexpr ::Enviro::EnviroEnvironment_Seasons  Enviro::EnviroEnvironment_Seasons::Summer{static_cast<int32_t>(0x1)};
constexpr ::Enviro::EnviroEnvironment_Seasons  Enviro::EnviroEnvironment_Seasons::Autumn{static_cast<int32_t>(0x2)};
constexpr ::Enviro::EnviroEnvironment_Seasons  Enviro::EnviroEnvironment_Seasons::Winter{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::Enviro::EnviroEnvironment._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEnvironment::*)()>(&::Enviro::EnviroEnvironment::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18060dc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEnvironment*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Enviro::EnviroEnvironment_Seasons& Enviro::EnviroEnvironment::__cordl_internal_get_season()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___season;
}
constexpr ::Enviro::EnviroEnvironment_Seasons const& Enviro::EnviroEnvironment::__cordl_internal_get_season() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___season;
}
constexpr void Enviro::EnviroEnvironment::__cordl_internal_set_season(::Enviro::EnviroEnvironment_Seasons  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___season = value;
}
constexpr bool& Enviro::EnviroEnvironment::__cordl_internal_get_changeSeason()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changeSeason;
}
constexpr bool const& Enviro::EnviroEnvironment::__cordl_internal_get_changeSeason() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changeSeason;
}
constexpr void Enviro::EnviroEnvironment::__cordl_internal_set_changeSeason(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___changeSeason = value;
}
constexpr int32_t& Enviro::EnviroEnvironment::__cordl_internal_get_springStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___springStart;
}
constexpr int32_t const& Enviro::EnviroEnvironment::__cordl_internal_get_springStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___springStart;
}
constexpr void Enviro::EnviroEnvironment::__cordl_internal_set_springStart(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___springStart = value;
}
constexpr int32_t& Enviro::EnviroEnvironment::__cordl_internal_get_springEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___springEnd;
}
constexpr int32_t const& Enviro::EnviroEnvironment::__cordl_internal_get_springEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___springEnd;
}
constexpr void Enviro::EnviroEnvironment::__cordl_internal_set_springEnd(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___springEnd = value;
}
constexpr int32_t& Enviro::EnviroEnvironment::__cordl_internal_get_summerStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summerStart;
}
constexpr int32_t const& Enviro::EnviroEnvironment::__cordl_internal_get_summerStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summerStart;
}
constexpr void Enviro::EnviroEnvironment::__cordl_internal_set_summerStart(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___summerStart = value;
}
constexpr int32_t& Enviro::EnviroEnvironment::__cordl_internal_get_summerEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summerEnd;
}
constexpr int32_t const& Enviro::EnviroEnvironment::__cordl_internal_get_summerEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summerEnd;
}
constexpr void Enviro::EnviroEnvironment::__cordl_internal_set_summerEnd(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___summerEnd = value;
}
constexpr int32_t& Enviro::EnviroEnvironment::__cordl_internal_get_autumnStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autumnStart;
}
constexpr int32_t const& Enviro::EnviroEnvironment::__cordl_internal_get_autumnStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autumnStart;
}
constexpr void Enviro::EnviroEnvironment::__cordl_internal_set_autumnStart(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autumnStart = value;
}
constexpr int32_t& Enviro::EnviroEnvironment::__cordl_internal_get_autumnEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autumnEnd;
}
constexpr int32_t const& Enviro::EnviroEnvironment::__cordl_internal_get_autumnEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autumnEnd;
}
constexpr void Enviro::EnviroEnvironment::__cordl_internal_set_autumnEnd(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autumnEnd = value;
}
constexpr int32_t& Enviro::EnviroEnvironment::__cordl_internal_get_winterStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___winterStart;
}
constexpr int32_t const& Enviro::EnviroEnvironment::__cordl_internal_get_winterStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___winterStart;
}
constexpr void Enviro::EnviroEnvironment::__cordl_internal_set_winterStart(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___winterStart = value;
}
constexpr int32_t& Enviro::EnviroEnvironment::__cordl_internal_get_winterEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___winterEnd;
}
constexpr int32_t const& Enviro::EnviroEnvironment::__cordl_internal_get_winterEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___winterEnd;
}
constexpr void Enviro::EnviroEnvironment::__cordl_internal_set_winterEnd(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___winterEnd = value;
}
constexpr ::UnityEngine::AnimationCurve*& Enviro::EnviroEnvironment::__cordl_internal_get_springBaseTemperature()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___springBaseTemperature;
}
constexpr ::UnityEngine::AnimationCurve* const& Enviro::EnviroEnvironment::__cordl_internal_get_springBaseTemperature() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___springBaseTemperature;
}
constexpr void Enviro::EnviroEnvironment::__cordl_internal_set_springBaseTemperature(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___springBaseTemperature = value;
}
constexpr ::UnityEngine::AnimationCurve*& Enviro::EnviroEnvironment::__cordl_internal_get_summerBaseTemperature()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summerBaseTemperature;
}
constexpr ::UnityEngine::AnimationCurve* const& Enviro::EnviroEnvironment::__cordl_internal_get_summerBaseTemperature() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summerBaseTemperature;
}
constexpr void Enviro::EnviroEnvironment::__cordl_internal_set_summerBaseTemperature(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___summerBaseTemperature = value;
}
constexpr ::UnityEngine::AnimationCurve*& Enviro::EnviroEnvironment::__cordl_internal_get_autumnBaseTemperature()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autumnBaseTemperature;
}
constexpr ::UnityEngine::AnimationCurve* const& Enviro::EnviroEnvironment::__cordl_internal_get_autumnBaseTemperature() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autumnBaseTemperature;
}
constexpr void Enviro::EnviroEnvironment::__cordl_internal_set_autumnBaseTemperature(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autumnBaseTemperature = value;
}
constexpr ::UnityEngine::AnimationCurve*& Enviro::EnviroEnvironment::__cordl_internal_get_winterBaseTemperature()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___winterBaseTemperature;
}
constexpr ::UnityEngine::AnimationCurve* const& Enviro::EnviroEnvironment::__cordl_internal_get_winterBaseTemperature() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___winterBaseTemperature;
}
constexpr void Enviro::EnviroEnvironment::__cordl_internal_set_winterBaseTemperature(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___winterBaseTemperature = value;
}
constexpr float_t& Enviro::EnviroEnvironment::__cordl_internal_get_temperature()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___temperature;
}
constexpr float_t const& Enviro::EnviroEnvironment::__cordl_internal_get_temperature() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___temperature;
}
constexpr void Enviro::EnviroEnvironment::__cordl_internal_set_temperature(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___temperature = value;
}
constexpr float_t& Enviro::EnviroEnvironment::__cordl_internal_get_temperatureWeatherMod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___temperatureWeatherMod;
}
constexpr float_t const& Enviro::EnviroEnvironment::__cordl_internal_get_temperatureWeatherMod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___temperatureWeatherMod;
}
constexpr void Enviro::EnviroEnvironment::__cordl_internal_set_temperatureWeatherMod(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___temperatureWeatherMod = value;
}
constexpr float_t& Enviro::EnviroEnvironment::__cordl_internal_get_temperatureCustomMod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___temperatureCustomMod;
}
constexpr float_t const& Enviro::EnviroEnvironment::__cordl_internal_get_temperatureCustomMod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___temperatureCustomMod;
}
constexpr void Enviro::EnviroEnvironment::__cordl_internal_set_temperatureCustomMod(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___temperatureCustomMod = value;
}
constexpr float_t& Enviro::EnviroEnvironment::__cordl_internal_get_temperatureChangingSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___temperatureChangingSpeed;
}
constexpr float_t const& Enviro::EnviroEnvironment::__cordl_internal_get_temperatureChangingSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___temperatureChangingSpeed;
}
constexpr void Enviro::EnviroEnvironment::__cordl_internal_set_temperatureChangingSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___temperatureChangingSpeed = value;
}
constexpr float_t& Enviro::EnviroEnvironment::__cordl_internal_get_wetness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wetness;
}
constexpr float_t const& Enviro::EnviroEnvironment::__cordl_internal_get_wetness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wetness;
}
constexpr void Enviro::EnviroEnvironment::__cordl_internal_set_wetness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wetness = value;
}
constexpr float_t& Enviro::EnviroEnvironment::__cordl_internal_get_wetnessTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wetnessTarget;
}
constexpr float_t const& Enviro::EnviroEnvironment::__cordl_internal_get_wetnessTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wetnessTarget;
}
constexpr void Enviro::EnviroEnvironment::__cordl_internal_set_wetnessTarget(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wetnessTarget = value;
}
constexpr float_t& Enviro::EnviroEnvironment::__cordl_internal_get_snow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snow;
}
constexpr float_t const& Enviro::EnviroEnvironment::__cordl_internal_get_snow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snow;
}
constexpr void Enviro::EnviroEnvironment::__cordl_internal_set_snow(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snow = value;
}
constexpr float_t& Enviro::EnviroEnvironment::__cordl_internal_get_snowTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snowTarget;
}
constexpr float_t const& Enviro::EnviroEnvironment::__cordl_internal_get_snowTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snowTarget;
}
constexpr void Enviro::EnviroEnvironment::__cordl_internal_set_snowTarget(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snowTarget = value;
}
constexpr float_t& Enviro::EnviroEnvironment::__cordl_internal_get_wetnessAccumulationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wetnessAccumulationSpeed;
}
constexpr float_t const& Enviro::EnviroEnvironment::__cordl_internal_get_wetnessAccumulationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wetnessAccumulationSpeed;
}
constexpr void Enviro::EnviroEnvironment::__cordl_internal_set_wetnessAccumulationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wetnessAccumulationSpeed = value;
}
constexpr float_t& Enviro::EnviroEnvironment::__cordl_internal_get_wetnessDrySpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wetnessDrySpeed;
}
constexpr float_t const& Enviro::EnviroEnvironment::__cordl_internal_get_wetnessDrySpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wetnessDrySpeed;
}
constexpr void Enviro::EnviroEnvironment::__cordl_internal_set_wetnessDrySpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wetnessDrySpeed = value;
}
constexpr float_t& Enviro::EnviroEnvironment::__cordl_internal_get_snowAccumulationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snowAccumulationSpeed;
}
constexpr float_t const& Enviro::EnviroEnvironment::__cordl_internal_get_snowAccumulationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snowAccumulationSpeed;
}
constexpr void Enviro::EnviroEnvironment::__cordl_internal_set_snowAccumulationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snowAccumulationSpeed = value;
}
constexpr float_t& Enviro::EnviroEnvironment::__cordl_internal_get_snowMeltSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snowMeltSpeed;
}
constexpr float_t const& Enviro::EnviroEnvironment::__cordl_internal_get_snowMeltSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snowMeltSpeed;
}
constexpr void Enviro::EnviroEnvironment::__cordl_internal_set_snowMeltSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snowMeltSpeed = value;
}
constexpr float_t& Enviro::EnviroEnvironment::__cordl_internal_get_snowMeltingTresholdTemperature()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snowMeltingTresholdTemperature;
}
constexpr float_t const& Enviro::EnviroEnvironment::__cordl_internal_get_snowMeltingTresholdTemperature() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snowMeltingTresholdTemperature;
}
constexpr void Enviro::EnviroEnvironment::__cordl_internal_set_snowMeltingTresholdTemperature(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snowMeltingTresholdTemperature = value;
}
constexpr float_t& Enviro::EnviroEnvironment::__cordl_internal_get_windDirectionX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windDirectionX;
}
constexpr float_t const& Enviro::EnviroEnvironment::__cordl_internal_get_windDirectionX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windDirectionX;
}
constexpr void Enviro::EnviroEnvironment::__cordl_internal_set_windDirectionX(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windDirectionX = value;
}
constexpr float_t& Enviro::EnviroEnvironment::__cordl_internal_get_windDirectionY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windDirectionY;
}
constexpr float_t const& Enviro::EnviroEnvironment::__cordl_internal_get_windDirectionY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windDirectionY;
}
constexpr void Enviro::EnviroEnvironment::__cordl_internal_set_windDirectionY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windDirectionY = value;
}
constexpr float_t& Enviro::EnviroEnvironment::__cordl_internal_get_windSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windSpeed;
}
constexpr float_t const& Enviro::EnviroEnvironment::__cordl_internal_get_windSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windSpeed;
}
constexpr void Enviro::EnviroEnvironment::__cordl_internal_set_windSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windSpeed = value;
}
constexpr float_t& Enviro::EnviroEnvironment::__cordl_internal_get_windTurbulence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windTurbulence;
}
constexpr float_t const& Enviro::EnviroEnvironment::__cordl_internal_get_windTurbulence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windTurbulence;
}
constexpr void Enviro::EnviroEnvironment::__cordl_internal_set_windTurbulence(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windTurbulence = value;
}
inline void Enviro::EnviroEnvironment::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEnvironment*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroEnvironment* Enviro::EnviroEnvironment::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroEnvironment*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroEnvironment::EnviroEnvironment()   {
}
