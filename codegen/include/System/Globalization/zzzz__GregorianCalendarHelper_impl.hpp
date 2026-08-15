#pragma once
// IWYU pragma private; include "System/Globalization/GregorianCalendarHelper.hpp"
#include "System/Globalization/zzzz__EraInfo_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Globalization/zzzz__GregorianCalendarHelper_def.hpp"
#include "System/Globalization/zzzz__Calendar_def.hpp"
#include "System/Globalization/zzzz__EraInfo_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__DayOfWeek_def.hpp"
//  Writing Method size for method: ::System::Globalization::GregorianCalendarHelper.get_MaxYear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::GregorianCalendarHelper::*)()>(&::System::Globalization::GregorianCalendarHelper::get_MaxYear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"get_MaxYear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendarHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::GregorianCalendarHelper::*)(::System::Globalization::Calendar*, ::ArrayW<::System::Globalization::EraInfo*>)>(&::System::Globalization::GregorianCalendarHelper::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18168f570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Globalization::Calendar*>(), ::i2c::type_of<::ArrayW<::System::Globalization::EraInfo*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendarHelper.GetYearOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::GregorianCalendarHelper::*)(int32_t, int32_t, bool)>(&::System::Globalization::GregorianCalendarHelper::GetYearOffset)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18168ebe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"GetYearOffset", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendarHelper.GetGregorianYear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::GregorianCalendarHelper::*)(int32_t, int32_t)>(&::System::Globalization::GregorianCalendarHelper::GetGregorianYear)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18168eb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"GetGregorianYear", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendarHelper.IsValidYear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::GregorianCalendarHelper::*)(int32_t, int32_t)>(&::System::Globalization::GregorianCalendarHelper::IsValidYear)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18168ef20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"IsValidYear", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendarHelper.GetDatePart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::GregorianCalendarHelper::*)(int64_t, int32_t)>(&::System::Globalization::GregorianCalendarHelper::GetDatePart)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18168e710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                    {::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendarHelper.GetAbsoluteDate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int32_t, int32_t, int32_t)>(&::System::Globalization::GregorianCalendarHelper::GetAbsoluteDate)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18168e5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"GetAbsoluteDate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendarHelper.DateToTicks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int32_t, int32_t, int32_t)>(&::System::Globalization::GregorianCalendarHelper::DateToTicks)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18168e420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"DateToTicks", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendarHelper.TimeToTicks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int32_t, int32_t, int32_t, int32_t)>(&::System::Globalization::GregorianCalendarHelper::TimeToTicks)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18168ef40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"TimeToTicks", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendarHelper.CheckTicksRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::GregorianCalendarHelper::*)(int64_t)>(&::System::Globalization::GregorianCalendarHelper::CheckTicksRange)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18168e2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"CheckTicksRange", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendarHelper.GetDayOfMonth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::GregorianCalendarHelper::*)(::System::DateTime)>(&::System::Globalization::GregorianCalendarHelper::GetDayOfMonth)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18168e890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"GetDayOfMonth", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendarHelper.GetDayOfWeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DayOfWeek (::System::Globalization::GregorianCalendarHelper::*)(::System::DateTime)>(&::System::Globalization::GregorianCalendarHelper::GetDayOfWeek)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18168e8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"GetDayOfWeek", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendarHelper.GetDaysInMonth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::GregorianCalendarHelper::*)(int32_t, int32_t, int32_t)>(&::System::Globalization::GregorianCalendarHelper::GetDaysInMonth)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18168e940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"GetDaysInMonth", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendarHelper.GetDaysInYear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::GregorianCalendarHelper::*)(int32_t, int32_t)>(&::System::Globalization::GregorianCalendarHelper::GetDaysInYear)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18168ea20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"GetDaysInYear", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendarHelper.GetEra
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::GregorianCalendarHelper::*)(::System::DateTime)>(&::System::Globalization::GregorianCalendarHelper::GetEra)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18168eab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"GetEra", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendarHelper.get_Eras
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::System::Globalization::GregorianCalendarHelper::*)()>(&::System::Globalization::GregorianCalendarHelper::get_Eras)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18168f5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"get_Eras", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendarHelper.GetMonth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::GregorianCalendarHelper::*)(::System::DateTime)>(&::System::Globalization::GregorianCalendarHelper::GetMonth)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18168eb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"GetMonth", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendarHelper.GetMonthsInYear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::GregorianCalendarHelper::*)(int32_t, int32_t)>(&::System::Globalization::GregorianCalendarHelper::GetMonthsInYear)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18168ebc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"GetMonthsInYear", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendarHelper.GetYear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::GregorianCalendarHelper::*)(::System::DateTime)>(&::System::Globalization::GregorianCalendarHelper::GetYear)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18168ede0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"GetYear", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendarHelper.IsLeapYear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::GregorianCalendarHelper::*)(int32_t, int32_t)>(&::System::Globalization::GregorianCalendarHelper::IsLeapYear)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18168eea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"IsLeapYear", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendarHelper.ToDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Globalization::GregorianCalendarHelper::*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::System::Globalization::GregorianCalendarHelper::ToDateTime)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x18168f060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"ToDateTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendarHelper.ToFourDigitYear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::GregorianCalendarHelper::*)(int32_t, int32_t)>(&::System::Globalization::GregorianCalendarHelper::ToFourDigitYear)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18168f360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"ToFourDigitYear", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& System::Globalization::GregorianCalendarHelper::__cordl_internal_get_m_maxYear()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxYear;
}
constexpr int32_t const& System::Globalization::GregorianCalendarHelper::__cordl_internal_get_m_maxYear() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxYear;
}
constexpr void System::Globalization::GregorianCalendarHelper::__cordl_internal_set_m_maxYear(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_maxYear = value;
}
constexpr int32_t& System::Globalization::GregorianCalendarHelper::__cordl_internal_get_m_minYear()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_minYear;
}
constexpr int32_t const& System::Globalization::GregorianCalendarHelper::__cordl_internal_get_m_minYear() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_minYear;
}
constexpr void System::Globalization::GregorianCalendarHelper::__cordl_internal_set_m_minYear(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_minYear = value;
}
constexpr ::System::Globalization::Calendar*& System::Globalization::GregorianCalendarHelper::__cordl_internal_get_m_Cal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Cal;
}
constexpr ::System::Globalization::Calendar* const& System::Globalization::GregorianCalendarHelper::__cordl_internal_get_m_Cal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Cal;
}
constexpr void System::Globalization::GregorianCalendarHelper::__cordl_internal_set_m_Cal(::System::Globalization::Calendar*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Cal = value;
}
constexpr ::ArrayW<::System::Globalization::EraInfo*>& System::Globalization::GregorianCalendarHelper::__cordl_internal_get_m_EraInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EraInfo;
}
constexpr ::ArrayW<::System::Globalization::EraInfo*> const& System::Globalization::GregorianCalendarHelper::__cordl_internal_get_m_EraInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EraInfo;
}
constexpr void System::Globalization::GregorianCalendarHelper::__cordl_internal_set_m_EraInfo(::ArrayW<::System::Globalization::EraInfo*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EraInfo = value;
}
constexpr ::ArrayW<int32_t>& System::Globalization::GregorianCalendarHelper::__cordl_internal_get_m_eras()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_eras;
}
constexpr ::ArrayW<int32_t> const& System::Globalization::GregorianCalendarHelper::__cordl_internal_get_m_eras() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_eras;
}
constexpr void System::Globalization::GregorianCalendarHelper::__cordl_internal_set_m_eras(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_eras = value;
}
constexpr ::System::DateTime& System::Globalization::GregorianCalendarHelper::__cordl_internal_get_m_minDate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_minDate;
}
constexpr ::System::DateTime const& System::Globalization::GregorianCalendarHelper::__cordl_internal_get_m_minDate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_minDate;
}
constexpr void System::Globalization::GregorianCalendarHelper::__cordl_internal_set_m_minDate(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_minDate = value;
}
inline void System::Globalization::GregorianCalendarHelper::setStaticF_DaysToMonth365(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "DaysToMonth365", ::System::Globalization::GregorianCalendarHelper*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> System::Globalization::GregorianCalendarHelper::getStaticF_DaysToMonth365()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "DaysToMonth365", ::System::Globalization::GregorianCalendarHelper*>();
}
inline void System::Globalization::GregorianCalendarHelper::setStaticF_DaysToMonth366(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "DaysToMonth366", ::System::Globalization::GregorianCalendarHelper*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> System::Globalization::GregorianCalendarHelper::getStaticF_DaysToMonth366()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "DaysToMonth366", ::System::Globalization::GregorianCalendarHelper*>();
}
inline int32_t System::Globalization::GregorianCalendarHelper::get_MaxYear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"get_MaxYear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Globalization::GregorianCalendarHelper::_ctor(::System::Globalization::Calendar*  cal, ::ArrayW<::System::Globalization::EraInfo*>  eraInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Globalization::Calendar*>(), ::i2c::type_of<::ArrayW<::System::Globalization::EraInfo*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cal, eraInfo);
}
inline int32_t System::Globalization::GregorianCalendarHelper::GetYearOffset(int32_t  year, int32_t  era, bool  throwOnError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"GetYearOffset", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, year, era, throwOnError);
}
inline int32_t System::Globalization::GregorianCalendarHelper::GetGregorianYear(int32_t  year, int32_t  era)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"GetGregorianYear", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, year, era);
}
inline bool System::Globalization::GregorianCalendarHelper::IsValidYear(int32_t  year, int32_t  era)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"IsValidYear", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, year, era);
}
inline int32_t System::Globalization::GregorianCalendarHelper::GetDatePart(int64_t  ticks, int32_t  part)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, ticks, part);
}
inline int64_t System::Globalization::GregorianCalendarHelper::GetAbsoluteDate(int32_t  year, int32_t  month, int32_t  day)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"GetAbsoluteDate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, year, month, day);
}
inline int64_t System::Globalization::GregorianCalendarHelper::DateToTicks(int32_t  year, int32_t  month, int32_t  day)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"DateToTicks", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, year, month, day);
}
inline int64_t System::Globalization::GregorianCalendarHelper::TimeToTicks(int32_t  hour, int32_t  minute, int32_t  second, int32_t  millisecond)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"TimeToTicks", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, hour, minute, second, millisecond);
}
inline void System::Globalization::GregorianCalendarHelper::CheckTicksRange(int64_t  ticks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"CheckTicksRange", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ticks);
}
inline int32_t System::Globalization::GregorianCalendarHelper::GetDayOfMonth(::System::DateTime  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"GetDayOfMonth", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, time);
}
inline ::System::DayOfWeek System::Globalization::GregorianCalendarHelper::GetDayOfWeek(::System::DateTime  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"GetDayOfWeek", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DayOfWeek>(this, ___internal_method, time);
}
inline int32_t System::Globalization::GregorianCalendarHelper::GetDaysInMonth(int32_t  year, int32_t  month, int32_t  era)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"GetDaysInMonth", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, year, month, era);
}
inline int32_t System::Globalization::GregorianCalendarHelper::GetDaysInYear(int32_t  year, int32_t  era)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"GetDaysInYear", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, year, era);
}
inline int32_t System::Globalization::GregorianCalendarHelper::GetEra(::System::DateTime  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"GetEra", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, time);
}
inline ::ArrayW<int32_t> System::Globalization::GregorianCalendarHelper::get_Eras()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"get_Eras", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline int32_t System::Globalization::GregorianCalendarHelper::GetMonth(::System::DateTime  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"GetMonth", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, time);
}
inline int32_t System::Globalization::GregorianCalendarHelper::GetMonthsInYear(int32_t  year, int32_t  era)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"GetMonthsInYear", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, year, era);
}
inline int32_t System::Globalization::GregorianCalendarHelper::GetYear(::System::DateTime  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"GetYear", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, time);
}
inline bool System::Globalization::GregorianCalendarHelper::IsLeapYear(int32_t  year, int32_t  era)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"IsLeapYear", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, year, era);
}
inline ::System::DateTime System::Globalization::GregorianCalendarHelper::ToDateTime(int32_t  year, int32_t  month, int32_t  day, int32_t  hour, int32_t  minute, int32_t  second, int32_t  millisecond, int32_t  era)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"ToDateTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, year, month, day, hour, minute, second, millisecond, era);
}
inline int32_t System::Globalization::GregorianCalendarHelper::ToFourDigitYear(int32_t  year, int32_t  twoDigitYearMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::GregorianCalendarHelper*>(),
                        {"ToFourDigitYear", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, year, twoDigitYearMax);
}
inline ::System::Globalization::GregorianCalendarHelper* System::Globalization::GregorianCalendarHelper::New_ctor(::System::Globalization::Calendar*  cal, ::ArrayW<::System::Globalization::EraInfo*>  eraInfo)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::GregorianCalendarHelper*>(cal, eraInfo));
}
// Ctor Parameters []
constexpr ::System::Globalization::GregorianCalendarHelper::GregorianCalendarHelper()   {
}
