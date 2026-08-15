#pragma once
// IWYU pragma private; include "Enviro/EnviroTime.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnviroTime)
namespace Enviro {
struct EnviroTime_CalenderType;
}
// Forward declare root types
namespace Enviro {
struct EnviroTime_CalenderType;
}
namespace Enviro {
class EnviroTime;
}
// Write type traits
MARK_VAL_T(::Enviro::EnviroTime_CalenderType);
MARK_REF_T(::Enviro::EnviroTime*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroTime_CalenderType, "Enviro", "EnviroTime/CalenderType");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroTime*, "Enviro", "EnviroTime");
// Dependencies 
namespace Enviro {
// Is value type: true
// CS Name: Enviro.EnviroTime/CalenderType
struct CORDL_TYPE EnviroTime_CalenderType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EnviroTime_CalenderType_Unwrapped
enum struct __EnviroTime_CalenderType_Unwrapped : int32_t {
__E_Realistic = static_cast<int32_t>(0x0),
__E_Custom = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EnviroTime_CalenderType_Unwrapped () const noexcept {
return static_cast<__EnviroTime_CalenderType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EnviroTime_CalenderType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EnviroTime_CalenderType(int32_t  value__) noexcept;

/// @brief Field Custom value: I32(1)
static ::Enviro::EnviroTime_CalenderType const Custom;

/// @brief Field Realistic value: I32(0)
static ::Enviro::EnviroTime_CalenderType const Realistic;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18498};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroTime_CalenderType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroTime_CalenderType) == 0x4, "Size mismatch!");

} // namespace end def Enviro
// Dependencies Enviro.EnviroTime::CalenderType, System.DateTime, System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroTime
class CORDL_TYPE EnviroTime : public ::System::Object {
public:
// Declarations
using CalenderType = ::Enviro::EnviroTime_CalenderType;

/// @brief Field calenderType, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_calenderType, put=__cordl_internal_set_calenderType)) ::Enviro::EnviroTime_CalenderType  calenderType;

/// @brief Field customSunOffset, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_customSunOffset, put=__cordl_internal_set_customSunOffset)) float_t  customSunOffset;

/// @brief Field customSunRotation, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_customSunRotation, put=__cordl_internal_set_customSunRotation)) float_t  customSunRotation;

/// @brief Field cycleLengthInMinutes, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_cycleLengthInMinutes, put=__cordl_internal_set_cycleLengthInMinutes)) float_t  cycleLengthInMinutes;

/// @brief Field date, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_date, put=__cordl_internal_set_date)) ::System::DateTime  date;

/// @brief Field dayLengthModifier, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_dayLengthModifier, put=__cordl_internal_set_dayLengthModifier)) float_t  dayLengthModifier;

/// @brief Field daySerial, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_daySerial, put=__cordl_internal_set_daySerial)) int32_t  daySerial;

/// @brief Field daysInMonth, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_daysInMonth, put=__cordl_internal_set_daysInMonth)) int32_t  daysInMonth;

/// @brief Field hourSerial, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_hourSerial, put=__cordl_internal_set_hourSerial)) int32_t  hourSerial;

/// @brief Field latitude, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_latitude, put=__cordl_internal_set_latitude)) float_t  latitude;

/// @brief Field longitude, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_longitude, put=__cordl_internal_set_longitude)) float_t  longitude;

/// @brief Field minSerial, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_minSerial, put=__cordl_internal_set_minSerial)) int32_t  minSerial;

/// @brief Field monthSerial, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_monthSerial, put=__cordl_internal_set_monthSerial)) int32_t  monthSerial;

/// @brief Field monthsInYear, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_monthsInYear, put=__cordl_internal_set_monthsInYear)) int32_t  monthsInYear;

/// @brief Field nightLengthModifier, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_nightLengthModifier, put=__cordl_internal_set_nightLengthModifier)) float_t  nightLengthModifier;

/// @brief Field secSerial, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_secSerial, put=__cordl_internal_set_secSerial)) int32_t  secSerial;

/// @brief Field simulate, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_simulate, put=__cordl_internal_set_simulate)) bool  simulate;

/// @brief Field timeOfDay, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeOfDay, put=__cordl_internal_set_timeOfDay)) float_t  timeOfDay;

/// @brief Field utcOffset, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_utcOffset, put=__cordl_internal_set_utcOffset)) int32_t  utcOffset;

/// @brief Field yearSerial, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_yearSerial, put=__cordl_internal_set_yearSerial)) int32_t  yearSerial;

static inline ::Enviro::EnviroTime* New_ctor() ;

constexpr ::Enviro::EnviroTime_CalenderType const& __cordl_internal_get_calenderType() const;

constexpr ::Enviro::EnviroTime_CalenderType& __cordl_internal_get_calenderType() ;

constexpr float_t const& __cordl_internal_get_customSunOffset() const;

constexpr float_t& __cordl_internal_get_customSunOffset() ;

constexpr float_t const& __cordl_internal_get_customSunRotation() const;

constexpr float_t& __cordl_internal_get_customSunRotation() ;

constexpr float_t const& __cordl_internal_get_cycleLengthInMinutes() const;

constexpr float_t& __cordl_internal_get_cycleLengthInMinutes() ;

constexpr ::System::DateTime const& __cordl_internal_get_date() const;

constexpr ::System::DateTime& __cordl_internal_get_date() ;

constexpr float_t const& __cordl_internal_get_dayLengthModifier() const;

constexpr float_t& __cordl_internal_get_dayLengthModifier() ;

constexpr int32_t const& __cordl_internal_get_daySerial() const;

constexpr int32_t& __cordl_internal_get_daySerial() ;

constexpr int32_t const& __cordl_internal_get_daysInMonth() const;

constexpr int32_t& __cordl_internal_get_daysInMonth() ;

constexpr int32_t const& __cordl_internal_get_hourSerial() const;

constexpr int32_t& __cordl_internal_get_hourSerial() ;

constexpr float_t const& __cordl_internal_get_latitude() const;

constexpr float_t& __cordl_internal_get_latitude() ;

constexpr float_t const& __cordl_internal_get_longitude() const;

constexpr float_t& __cordl_internal_get_longitude() ;

constexpr int32_t const& __cordl_internal_get_minSerial() const;

constexpr int32_t& __cordl_internal_get_minSerial() ;

constexpr int32_t const& __cordl_internal_get_monthSerial() const;

constexpr int32_t& __cordl_internal_get_monthSerial() ;

constexpr int32_t const& __cordl_internal_get_monthsInYear() const;

constexpr int32_t& __cordl_internal_get_monthsInYear() ;

constexpr float_t const& __cordl_internal_get_nightLengthModifier() const;

constexpr float_t& __cordl_internal_get_nightLengthModifier() ;

constexpr int32_t const& __cordl_internal_get_secSerial() const;

constexpr int32_t& __cordl_internal_get_secSerial() ;

constexpr bool const& __cordl_internal_get_simulate() const;

constexpr bool& __cordl_internal_get_simulate() ;

constexpr float_t const& __cordl_internal_get_timeOfDay() const;

constexpr float_t& __cordl_internal_get_timeOfDay() ;

constexpr int32_t const& __cordl_internal_get_utcOffset() const;

constexpr int32_t& __cordl_internal_get_utcOffset() ;

constexpr int32_t const& __cordl_internal_get_yearSerial() const;

constexpr int32_t& __cordl_internal_get_yearSerial() ;

constexpr void __cordl_internal_set_calenderType(::Enviro::EnviroTime_CalenderType  value) ;

constexpr void __cordl_internal_set_customSunOffset(float_t  value) ;

constexpr void __cordl_internal_set_customSunRotation(float_t  value) ;

constexpr void __cordl_internal_set_cycleLengthInMinutes(float_t  value) ;

constexpr void __cordl_internal_set_date(::System::DateTime  value) ;

constexpr void __cordl_internal_set_dayLengthModifier(float_t  value) ;

constexpr void __cordl_internal_set_daySerial(int32_t  value) ;

constexpr void __cordl_internal_set_daysInMonth(int32_t  value) ;

constexpr void __cordl_internal_set_hourSerial(int32_t  value) ;

constexpr void __cordl_internal_set_latitude(float_t  value) ;

constexpr void __cordl_internal_set_longitude(float_t  value) ;

constexpr void __cordl_internal_set_minSerial(int32_t  value) ;

constexpr void __cordl_internal_set_monthSerial(int32_t  value) ;

constexpr void __cordl_internal_set_monthsInYear(int32_t  value) ;

constexpr void __cordl_internal_set_nightLengthModifier(float_t  value) ;

constexpr void __cordl_internal_set_secSerial(int32_t  value) ;

constexpr void __cordl_internal_set_simulate(bool  value) ;

constexpr void __cordl_internal_set_timeOfDay(float_t  value) ;

constexpr void __cordl_internal_set_utcOffset(int32_t  value) ;

constexpr void __cordl_internal_set_yearSerial(int32_t  value) ;

/// @brief Method .ctor, addr 0x18061fb60, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroTime() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroTime", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroTime(EnviroTime && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroTime", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroTime(EnviroTime const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18499};

/// @brief Field simulate, offset: 0x10, size: 0x1, def value: None
 bool  ___simulate;

/// @brief Field date, offset: 0x18, size: 0x8, def value: None
 ::System::DateTime  ___date;

/// @brief Field secSerial, offset: 0x20, size: 0x4, def value: None
 int32_t  ___secSerial;

/// @brief Field minSerial, offset: 0x24, size: 0x4, def value: None
 int32_t  ___minSerial;

/// @brief Field hourSerial, offset: 0x28, size: 0x4, def value: None
 int32_t  ___hourSerial;

/// @brief Field daySerial, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___daySerial;

/// @brief Field monthSerial, offset: 0x30, size: 0x4, def value: None
 int32_t  ___monthSerial;

/// @brief Field yearSerial, offset: 0x34, size: 0x4, def value: None
 int32_t  ___yearSerial;

/// @brief Field timeOfDay, offset: 0x38, size: 0x4, def value: None
 float_t  ___timeOfDay;

/// @brief Field latitude, offset: 0x3c, size: 0x4, def value: None
 float_t  ___latitude;

/// @brief Field longitude, offset: 0x40, size: 0x4, def value: None
 float_t  ___longitude;

/// @brief Field utcOffset, offset: 0x44, size: 0x4, def value: None
 int32_t  ___utcOffset;

/// @brief Field cycleLengthInMinutes, offset: 0x48, size: 0x4, def value: None
 float_t  ___cycleLengthInMinutes;

/// @brief Field dayLengthModifier, offset: 0x4c, size: 0x4, def value: None
 float_t  ___dayLengthModifier;

/// @brief Field nightLengthModifier, offset: 0x50, size: 0x4, def value: None
 float_t  ___nightLengthModifier;

/// @brief Field calenderType, offset: 0x54, size: 0x4, def value: None
 ::Enviro::EnviroTime_CalenderType  ___calenderType;

/// @brief Field daysInMonth, offset: 0x58, size: 0x4, def value: None
 int32_t  ___daysInMonth;

/// @brief Field monthsInYear, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___monthsInYear;

/// @brief Field customSunOffset, offset: 0x60, size: 0x4, def value: None
 float_t  ___customSunOffset;

/// @brief Field customSunRotation, offset: 0x64, size: 0x4, def value: None
 float_t  ___customSunRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroTime, ___simulate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroTime, ___date) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroTime, ___secSerial) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroTime, ___minSerial) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroTime, ___hourSerial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroTime, ___daySerial) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroTime, ___monthSerial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroTime, ___yearSerial) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroTime, ___timeOfDay) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroTime, ___latitude) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroTime, ___longitude) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroTime, ___utcOffset) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroTime, ___cycleLengthInMinutes) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroTime, ___dayLengthModifier) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroTime, ___nightLengthModifier) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroTime, ___calenderType) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroTime, ___daysInMonth) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroTime, ___monthsInYear) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroTime, ___customSunOffset) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroTime, ___customSunRotation) == 0x64, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroTime) == 0x68, "Size mismatch!");

} // namespace end def Enviro
