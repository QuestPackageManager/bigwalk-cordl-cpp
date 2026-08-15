#pragma once
// IWYU pragma private; include "Enviro/EnviroTime.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Enviro/zzzz__EnviroTime_def.hpp"
#include "Enviro/zzzz__EnviroTime_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Enviro::EnviroTime_CalenderType::EnviroTime_CalenderType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Enviro::EnviroTime_CalenderType::EnviroTime_CalenderType()   {
}
constexpr ::Enviro::EnviroTime_CalenderType  Enviro::EnviroTime_CalenderType::Realistic{static_cast<int32_t>(0x0)};
constexpr ::Enviro::EnviroTime_CalenderType  Enviro::EnviroTime_CalenderType::Custom{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Enviro::EnviroTime._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroTime::*)()>(&::Enviro::EnviroTime::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18061fb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTime*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Enviro::EnviroTime::__cordl_internal_get_simulate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___simulate;
}
constexpr bool const& Enviro::EnviroTime::__cordl_internal_get_simulate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___simulate;
}
constexpr void Enviro::EnviroTime::__cordl_internal_set_simulate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___simulate = value;
}
constexpr ::System::DateTime& Enviro::EnviroTime::__cordl_internal_get_date()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___date;
}
constexpr ::System::DateTime const& Enviro::EnviroTime::__cordl_internal_get_date() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___date;
}
constexpr void Enviro::EnviroTime::__cordl_internal_set_date(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___date = value;
}
constexpr int32_t& Enviro::EnviroTime::__cordl_internal_get_secSerial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secSerial;
}
constexpr int32_t const& Enviro::EnviroTime::__cordl_internal_get_secSerial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secSerial;
}
constexpr void Enviro::EnviroTime::__cordl_internal_set_secSerial(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___secSerial = value;
}
constexpr int32_t& Enviro::EnviroTime::__cordl_internal_get_minSerial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minSerial;
}
constexpr int32_t const& Enviro::EnviroTime::__cordl_internal_get_minSerial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minSerial;
}
constexpr void Enviro::EnviroTime::__cordl_internal_set_minSerial(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minSerial = value;
}
constexpr int32_t& Enviro::EnviroTime::__cordl_internal_get_hourSerial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hourSerial;
}
constexpr int32_t const& Enviro::EnviroTime::__cordl_internal_get_hourSerial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hourSerial;
}
constexpr void Enviro::EnviroTime::__cordl_internal_set_hourSerial(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hourSerial = value;
}
constexpr int32_t& Enviro::EnviroTime::__cordl_internal_get_daySerial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___daySerial;
}
constexpr int32_t const& Enviro::EnviroTime::__cordl_internal_get_daySerial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___daySerial;
}
constexpr void Enviro::EnviroTime::__cordl_internal_set_daySerial(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___daySerial = value;
}
constexpr int32_t& Enviro::EnviroTime::__cordl_internal_get_monthSerial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monthSerial;
}
constexpr int32_t const& Enviro::EnviroTime::__cordl_internal_get_monthSerial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monthSerial;
}
constexpr void Enviro::EnviroTime::__cordl_internal_set_monthSerial(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___monthSerial = value;
}
constexpr int32_t& Enviro::EnviroTime::__cordl_internal_get_yearSerial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yearSerial;
}
constexpr int32_t const& Enviro::EnviroTime::__cordl_internal_get_yearSerial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yearSerial;
}
constexpr void Enviro::EnviroTime::__cordl_internal_set_yearSerial(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___yearSerial = value;
}
constexpr float_t& Enviro::EnviroTime::__cordl_internal_get_timeOfDay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeOfDay;
}
constexpr float_t const& Enviro::EnviroTime::__cordl_internal_get_timeOfDay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeOfDay;
}
constexpr void Enviro::EnviroTime::__cordl_internal_set_timeOfDay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeOfDay = value;
}
constexpr float_t& Enviro::EnviroTime::__cordl_internal_get_latitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___latitude;
}
constexpr float_t const& Enviro::EnviroTime::__cordl_internal_get_latitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___latitude;
}
constexpr void Enviro::EnviroTime::__cordl_internal_set_latitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___latitude = value;
}
constexpr float_t& Enviro::EnviroTime::__cordl_internal_get_longitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___longitude;
}
constexpr float_t const& Enviro::EnviroTime::__cordl_internal_get_longitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___longitude;
}
constexpr void Enviro::EnviroTime::__cordl_internal_set_longitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___longitude = value;
}
constexpr int32_t& Enviro::EnviroTime::__cordl_internal_get_utcOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___utcOffset;
}
constexpr int32_t const& Enviro::EnviroTime::__cordl_internal_get_utcOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___utcOffset;
}
constexpr void Enviro::EnviroTime::__cordl_internal_set_utcOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___utcOffset = value;
}
constexpr float_t& Enviro::EnviroTime::__cordl_internal_get_cycleLengthInMinutes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cycleLengthInMinutes;
}
constexpr float_t const& Enviro::EnviroTime::__cordl_internal_get_cycleLengthInMinutes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cycleLengthInMinutes;
}
constexpr void Enviro::EnviroTime::__cordl_internal_set_cycleLengthInMinutes(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cycleLengthInMinutes = value;
}
constexpr float_t& Enviro::EnviroTime::__cordl_internal_get_dayLengthModifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dayLengthModifier;
}
constexpr float_t const& Enviro::EnviroTime::__cordl_internal_get_dayLengthModifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dayLengthModifier;
}
constexpr void Enviro::EnviroTime::__cordl_internal_set_dayLengthModifier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dayLengthModifier = value;
}
constexpr float_t& Enviro::EnviroTime::__cordl_internal_get_nightLengthModifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nightLengthModifier;
}
constexpr float_t const& Enviro::EnviroTime::__cordl_internal_get_nightLengthModifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nightLengthModifier;
}
constexpr void Enviro::EnviroTime::__cordl_internal_set_nightLengthModifier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nightLengthModifier = value;
}
constexpr ::Enviro::EnviroTime_CalenderType& Enviro::EnviroTime::__cordl_internal_get_calenderType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calenderType;
}
constexpr ::Enviro::EnviroTime_CalenderType const& Enviro::EnviroTime::__cordl_internal_get_calenderType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calenderType;
}
constexpr void Enviro::EnviroTime::__cordl_internal_set_calenderType(::Enviro::EnviroTime_CalenderType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___calenderType = value;
}
constexpr int32_t& Enviro::EnviroTime::__cordl_internal_get_daysInMonth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___daysInMonth;
}
constexpr int32_t const& Enviro::EnviroTime::__cordl_internal_get_daysInMonth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___daysInMonth;
}
constexpr void Enviro::EnviroTime::__cordl_internal_set_daysInMonth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___daysInMonth = value;
}
constexpr int32_t& Enviro::EnviroTime::__cordl_internal_get_monthsInYear()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monthsInYear;
}
constexpr int32_t const& Enviro::EnviroTime::__cordl_internal_get_monthsInYear() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monthsInYear;
}
constexpr void Enviro::EnviroTime::__cordl_internal_set_monthsInYear(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___monthsInYear = value;
}
constexpr float_t& Enviro::EnviroTime::__cordl_internal_get_customSunOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customSunOffset;
}
constexpr float_t const& Enviro::EnviroTime::__cordl_internal_get_customSunOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customSunOffset;
}
constexpr void Enviro::EnviroTime::__cordl_internal_set_customSunOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customSunOffset = value;
}
constexpr float_t& Enviro::EnviroTime::__cordl_internal_get_customSunRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customSunRotation;
}
constexpr float_t const& Enviro::EnviroTime::__cordl_internal_get_customSunRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customSunRotation;
}
constexpr void Enviro::EnviroTime::__cordl_internal_set_customSunRotation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customSunRotation = value;
}
inline void Enviro::EnviroTime::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTime*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroTime* Enviro::EnviroTime::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroTime*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroTime::EnviroTime()   {
}
