#pragma once
// IWYU pragma private; include "System/TimeZoneInfo.hpp"
#include "GlobalNamespace/zzzz__Interop_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__DayOfWeek_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "System/zzzz__TimeZoneInfo_def.hpp"
#include "GlobalNamespace/zzzz__Interop_def.hpp"
#include "Microsoft/Win32/zzzz__RegistryKey_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Globalization/zzzz__DaylightTimeStruct_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__DateTimeKind_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__DayOfWeek_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Lazy_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__TimeZoneInfoOptions_def.hpp"
#include "System/zzzz__TimeZoneInfo_def.hpp"
//  Writing Method size for method: ::System::TimeZoneInfo_CachedData.GetCurrentOneYearLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo* (*)()>(&::System::TimeZoneInfo_CachedData::GetCurrentOneYearLocal)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18169daf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_CachedData*>(),
                        {"GetCurrentOneYearLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_CachedData.GetOneYearLocalFromUtc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo_OffsetAndRule* (::System::TimeZoneInfo_CachedData::*)(int32_t)>(&::System::TimeZoneInfo_CachedData::GetOneYearLocalFromUtc)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18169db80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_CachedData*>(),
                        {"GetOneYearLocalFromUtc", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_CachedData.CreateLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo* (::System::TimeZoneInfo_CachedData::*)()>(&::System::TimeZoneInfo_CachedData::CreateLocal)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18169d940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_CachedData*>(),
                        {"CreateLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_CachedData.get_Local
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo* (::System::TimeZoneInfo_CachedData::*)()>(&::System::TimeZoneInfo_CachedData::get_Local)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18169dcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_CachedData*>(),
                        {"get_Local", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_CachedData.GetCorrespondingKind
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeKind (::System::TimeZoneInfo_CachedData::*)(::System::TimeZoneInfo*)>(&::System::TimeZoneInfo_CachedData::GetCorrespondingKind)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18169da80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_CachedData*>(),
                        {"GetCorrespondingKind", {}, {::i2c::type_of<::System::TimeZoneInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_CachedData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo_CachedData::*)()>(&::System::TimeZoneInfo_CachedData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_CachedData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::TimeZoneInfo_OffsetAndRule*& System::TimeZoneInfo_CachedData::__cordl_internal_get__oneYearLocalFromUtc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oneYearLocalFromUtc;
}
constexpr ::System::TimeZoneInfo_OffsetAndRule* const& System::TimeZoneInfo_CachedData::__cordl_internal_get__oneYearLocalFromUtc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oneYearLocalFromUtc;
}
constexpr void System::TimeZoneInfo_CachedData::__cordl_internal_set__oneYearLocalFromUtc(::System::TimeZoneInfo_OffsetAndRule*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____oneYearLocalFromUtc = value;
}
constexpr ::System::TimeZoneInfo*& System::TimeZoneInfo_CachedData::__cordl_internal_get__localTimeZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localTimeZone;
}
constexpr ::System::TimeZoneInfo* const& System::TimeZoneInfo_CachedData::__cordl_internal_get__localTimeZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localTimeZone;
}
constexpr void System::TimeZoneInfo_CachedData::__cordl_internal_set__localTimeZone(::System::TimeZoneInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localTimeZone = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::TimeZoneInfo*>*& System::TimeZoneInfo_CachedData::__cordl_internal_get__systemTimeZones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____systemTimeZones;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::TimeZoneInfo*>* const& System::TimeZoneInfo_CachedData::__cordl_internal_get__systemTimeZones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____systemTimeZones;
}
constexpr void System::TimeZoneInfo_CachedData::__cordl_internal_set__systemTimeZones(::System::Collections::Generic::Dictionary_2<::StringW,::System::TimeZoneInfo*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____systemTimeZones = value;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::TimeZoneInfo*>*& System::TimeZoneInfo_CachedData::__cordl_internal_get__readOnlySystemTimeZones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readOnlySystemTimeZones;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::TimeZoneInfo*>* const& System::TimeZoneInfo_CachedData::__cordl_internal_get__readOnlySystemTimeZones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readOnlySystemTimeZones;
}
constexpr void System::TimeZoneInfo_CachedData::__cordl_internal_set__readOnlySystemTimeZones(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::TimeZoneInfo*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readOnlySystemTimeZones = value;
}
constexpr bool& System::TimeZoneInfo_CachedData::__cordl_internal_get__allSystemTimeZonesRead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allSystemTimeZonesRead;
}
constexpr bool const& System::TimeZoneInfo_CachedData::__cordl_internal_get__allSystemTimeZonesRead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allSystemTimeZonesRead;
}
constexpr void System::TimeZoneInfo_CachedData::__cordl_internal_set__allSystemTimeZonesRead(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allSystemTimeZonesRead = value;
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo_CachedData::GetCurrentOneYearLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_CachedData*>(),
                        {"GetCurrentOneYearLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo*>(nullptr, ___internal_method);
}
inline ::System::TimeZoneInfo_OffsetAndRule* System::TimeZoneInfo_CachedData::GetOneYearLocalFromUtc(int32_t  year)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_CachedData*>(),
                        {"GetOneYearLocalFromUtc", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo_OffsetAndRule*>(this, ___internal_method, year);
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo_CachedData::CreateLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_CachedData*>(),
                        {"CreateLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo*>(this, ___internal_method);
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo_CachedData::get_Local()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_CachedData*>(),
                        {"get_Local", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo*>(this, ___internal_method);
}
inline ::System::DateTimeKind System::TimeZoneInfo_CachedData::GetCorrespondingKind(::System::TimeZoneInfo*  timeZone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_CachedData*>(),
                        {"GetCorrespondingKind", {}, {::i2c::type_of<::System::TimeZoneInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTimeKind>(this, ___internal_method, timeZone);
}
inline void System::TimeZoneInfo_CachedData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_CachedData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::TimeZoneInfo_CachedData* System::TimeZoneInfo_CachedData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TimeZoneInfo_CachedData*>());
}
// Ctor Parameters []
constexpr ::System::TimeZoneInfo_CachedData::TimeZoneInfo_CachedData()   {
}
//  Writing Method size for method: ::System::TimeZoneInfo_OffsetAndRule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo_OffsetAndRule::*)(int32_t, ::System::TimeSpan, ::System::TimeZoneInfo_AdjustmentRule*)>(&::System::TimeZoneInfo_OffsetAndRule::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816a4250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_OffsetAndRule*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& System::TimeZoneInfo_OffsetAndRule::__cordl_internal_get_Year()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Year;
}
constexpr int32_t const& System::TimeZoneInfo_OffsetAndRule::__cordl_internal_get_Year() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Year;
}
constexpr void System::TimeZoneInfo_OffsetAndRule::__cordl_internal_set_Year(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Year = value;
}
constexpr ::System::TimeSpan& System::TimeZoneInfo_OffsetAndRule::__cordl_internal_get_Offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Offset;
}
constexpr ::System::TimeSpan const& System::TimeZoneInfo_OffsetAndRule::__cordl_internal_get_Offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Offset;
}
constexpr void System::TimeZoneInfo_OffsetAndRule::__cordl_internal_set_Offset(::System::TimeSpan  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Offset = value;
}
constexpr ::System::TimeZoneInfo_AdjustmentRule*& System::TimeZoneInfo_OffsetAndRule::__cordl_internal_get_Rule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Rule;
}
constexpr ::System::TimeZoneInfo_AdjustmentRule* const& System::TimeZoneInfo_OffsetAndRule::__cordl_internal_get_Rule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Rule;
}
constexpr void System::TimeZoneInfo_OffsetAndRule::__cordl_internal_set_Rule(::System::TimeZoneInfo_AdjustmentRule*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Rule = value;
}
inline void System::TimeZoneInfo_OffsetAndRule::_ctor(int32_t  year, ::System::TimeSpan  offset, ::System::TimeZoneInfo_AdjustmentRule*  rule)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_OffsetAndRule*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, year, offset, rule);
}
inline ::System::TimeZoneInfo_OffsetAndRule* System::TimeZoneInfo_OffsetAndRule::New_ctor(int32_t  year, ::System::TimeSpan  offset, ::System::TimeZoneInfo_AdjustmentRule*  rule)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TimeZoneInfo_OffsetAndRule*>(year, offset, rule));
}
// Ctor Parameters []
constexpr ::System::TimeZoneInfo_OffsetAndRule::TimeZoneInfo_OffsetAndRule()   {
}
// Ctor Parameters [CppParam { name: "TZI", ty: "::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION", modifiers: "", def_value: Some("{}") }, CppParam { name: "TimeZoneKeyName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "DynamicDaylightTimeDisabled", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION(::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION  TZI, ::StringW  TimeZoneKeyName, uint8_t  DynamicDaylightTimeDisabled) noexcept  {
this->TZI = TZI;
this->TimeZoneKeyName = TimeZoneKeyName;
this->DynamicDaylightTimeDisabled = DynamicDaylightTimeDisabled;
}
// Ctor Parameters []
constexpr ::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::TimeZoneInfo_TimeZoneInfoResult::TimeZoneInfo_TimeZoneInfoResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::TimeZoneInfo_TimeZoneInfoResult::TimeZoneInfo_TimeZoneInfoResult()   {
}
constexpr ::System::TimeZoneInfo_TimeZoneInfoResult  System::TimeZoneInfo_TimeZoneInfoResult::Success{static_cast<int32_t>(0x0)};
constexpr ::System::TimeZoneInfo_TimeZoneInfoResult  System::TimeZoneInfo_TimeZoneInfoResult::TimeZoneNotFoundException{static_cast<int32_t>(0x1)};
constexpr ::System::TimeZoneInfo_TimeZoneInfoResult  System::TimeZoneInfo_TimeZoneInfoResult::InvalidTimeZoneException{static_cast<int32_t>(0x2)};
constexpr ::System::TimeZoneInfo_TimeZoneInfoResult  System::TimeZoneInfo_TimeZoneInfoResult::SecurityException{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::System::TimeZoneInfo_TransitionTime.get_TimeOfDay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::TimeZoneInfo_TransitionTime::*)()>(&::System::TimeZoneInfo_TransitionTime::get_TimeOfDay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                        {"get_TimeOfDay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_TransitionTime.get_Month
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::TimeZoneInfo_TransitionTime::*)()>(&::System::TimeZoneInfo_TransitionTime::get_Month)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bd9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                        {"get_Month", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_TransitionTime.get_Week
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::TimeZoneInfo_TransitionTime::*)()>(&::System::TimeZoneInfo_TransitionTime::get_Week)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bd9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                        {"get_Week", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_TransitionTime.get_Day
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::TimeZoneInfo_TransitionTime::*)()>(&::System::TimeZoneInfo_TransitionTime::get_Day)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181699680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                        {"get_Day", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_TransitionTime.get_DayOfWeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DayOfWeek (::System::TimeZoneInfo_TransitionTime::*)()>(&::System::TimeZoneInfo_TransitionTime::get_DayOfWeek)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bdb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                        {"get_DayOfWeek", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_TransitionTime.get_IsFixedDateRule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TimeZoneInfo_TransitionTime::*)()>(&::System::TimeZoneInfo_TransitionTime::get_IsFixedDateRule)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                        {"get_IsFixedDateRule", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_TransitionTime.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TimeZoneInfo_TransitionTime::*)(::System::Object*)>(&::System::TimeZoneInfo_TransitionTime::Equals)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1816ad4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                    {::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_TransitionTime.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::TimeZoneInfo_TransitionTime, ::System::TimeZoneInfo_TransitionTime)>(&::System::TimeZoneInfo_TransitionTime::op_Inequality)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1816add50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                        {"op_Inequality", {}, {::i2c::type_of<::System::TimeZoneInfo_TransitionTime>(), ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_TransitionTime.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TimeZoneInfo_TransitionTime::*)(::System::TimeZoneInfo_TransitionTime)>(&::System::TimeZoneInfo_TransitionTime::Equals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1816ad610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                        {"Equals", {}, {::i2c::type_of<::System::TimeZoneInfo_TransitionTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_TransitionTime.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::TimeZoneInfo_TransitionTime::*)()>(&::System::TimeZoneInfo_TransitionTime::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816ad6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                    {::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_TransitionTime._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo_TransitionTime::*)(::System::DateTime, int32_t, int32_t, int32_t, ::System::DayOfWeek, bool)>(&::System::TimeZoneInfo_TransitionTime::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1816ada10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                        {".ctor", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DayOfWeek>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_TransitionTime.CreateFixedDateRule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo_TransitionTime (*)(::System::DateTime, int32_t, int32_t)>(&::System::TimeZoneInfo_TransitionTime::CreateFixedDateRule)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1816ad3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                        {"CreateFixedDateRule", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_TransitionTime.CreateFloatingDateRule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo_TransitionTime (*)(::System::DateTime, int32_t, int32_t, ::System::DayOfWeek)>(&::System::TimeZoneInfo_TransitionTime::CreateFloatingDateRule)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1816ad460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                        {"CreateFloatingDateRule", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DayOfWeek>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_TransitionTime.ValidateTransitionTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::DateTime, int32_t, int32_t, int32_t, ::System::DayOfWeek)>(&::System::TimeZoneInfo_TransitionTime::ValidateTransitionTime)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1816ad880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                        {"ValidateTransitionTime", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DayOfWeek>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_TransitionTime.System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo_TransitionTime::*)(::System::Object*)>(&::System::TimeZoneInfo_TransitionTime::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1816ad6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                        {"System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_TransitionTime.System_Runtime_Serialization_ISerializable_GetObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo_TransitionTime::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::TimeZoneInfo_TransitionTime::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1816ad780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                        {"System.Runtime.Serialization.ISerializable.GetObjectData", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_TransitionTime._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo_TransitionTime::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::TimeZoneInfo_TransitionTime::_ctor)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x1816adab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::DateTime System::TimeZoneInfo_TransitionTime::get_TimeOfDay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                        {"get_TimeOfDay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(*this, ___internal_method);
}
inline int32_t System::TimeZoneInfo_TransitionTime::get_Month()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                        {"get_Month", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::TimeZoneInfo_TransitionTime::get_Week()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                        {"get_Week", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::TimeZoneInfo_TransitionTime::get_Day()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                        {"get_Day", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::DayOfWeek System::TimeZoneInfo_TransitionTime::get_DayOfWeek()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                        {"get_DayOfWeek", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DayOfWeek>(*this, ___internal_method);
}
inline bool System::TimeZoneInfo_TransitionTime::get_IsFixedDateRule()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                        {"get_IsFixedDateRule", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool System::TimeZoneInfo_TransitionTime::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool System::TimeZoneInfo_TransitionTime::op_Inequality(::System::TimeZoneInfo_TransitionTime  t1, ::System::TimeZoneInfo_TransitionTime  t2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                        {"op_Inequality", {}, {::i2c::type_of<::System::TimeZoneInfo_TransitionTime>(), ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t1, t2);
}
inline bool System::TimeZoneInfo_TransitionTime::Equals(::System::TimeZoneInfo_TransitionTime  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                        {"Equals", {}, {::i2c::type_of<::System::TimeZoneInfo_TransitionTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t System::TimeZoneInfo_TransitionTime::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void System::TimeZoneInfo_TransitionTime::_ctor(::System::DateTime  timeOfDay, int32_t  month, int32_t  week, int32_t  day, ::System::DayOfWeek  dayOfWeek, bool  isFixedDateRule)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                        {".ctor", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DayOfWeek>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, timeOfDay, month, week, day, dayOfWeek, isFixedDateRule);
}
inline ::System::TimeZoneInfo_TransitionTime System::TimeZoneInfo_TransitionTime::CreateFixedDateRule(::System::DateTime  timeOfDay, int32_t  month, int32_t  day)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                        {"CreateFixedDateRule", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo_TransitionTime>(nullptr, ___internal_method, timeOfDay, month, day);
}
inline ::System::TimeZoneInfo_TransitionTime System::TimeZoneInfo_TransitionTime::CreateFloatingDateRule(::System::DateTime  timeOfDay, int32_t  month, int32_t  week, ::System::DayOfWeek  dayOfWeek)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                        {"CreateFloatingDateRule", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DayOfWeek>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo_TransitionTime>(nullptr, ___internal_method, timeOfDay, month, week, dayOfWeek);
}
inline void System::TimeZoneInfo_TransitionTime::ValidateTransitionTime(::System::DateTime  timeOfDay, int32_t  month, int32_t  week, int32_t  day, ::System::DayOfWeek  dayOfWeek)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                        {"ValidateTransitionTime", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DayOfWeek>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, timeOfDay, month, week, day, dayOfWeek);
}
inline void System::TimeZoneInfo_TransitionTime::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                        {"System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sender);
}
inline void System::TimeZoneInfo_TransitionTime::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                        {"System.Runtime.Serialization.ISerializable.GetObjectData", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, info, context);
}
inline void System::TimeZoneInfo_TransitionTime::_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, info, context);
}
/// @brief Convert operator to "::System::IEquatable_1<::System::TimeZoneInfo_TransitionTime>"
constexpr  System::TimeZoneInfo_TransitionTime::operator ::System::IEquatable_1<::System::TimeZoneInfo_TransitionTime>*()  {
return static_cast<::System::IEquatable_1<::System::TimeZoneInfo_TransitionTime>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::System::TimeZoneInfo_TransitionTime>"
constexpr ::System::IEquatable_1<::System::TimeZoneInfo_TransitionTime>* System::TimeZoneInfo_TransitionTime::i___System__IEquatable_1___System__TimeZoneInfo_TransitionTime_()  {
return static_cast<::System::IEquatable_1<::System::TimeZoneInfo_TransitionTime>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr  System::TimeZoneInfo_TransitionTime::operator ::System::Runtime::Serialization::ISerializable*()  {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::TimeZoneInfo_TransitionTime::i___System__Runtime__Serialization__ISerializable()  {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr  System::TimeZoneInfo_TransitionTime::operator ::System::Runtime::Serialization::IDeserializationCallback*()  {
return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr ::System::Runtime::Serialization::IDeserializationCallback* System::TimeZoneInfo_TransitionTime::i___System__Runtime__Serialization__IDeserializationCallback()  {
return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_timeOfDay", ty: "::System::DateTime", modifiers: "", def_value: Some("{}") }, CppParam { name: "_month", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_week", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_day", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_dayOfWeek", ty: "::System::DayOfWeek", modifiers: "", def_value: Some("{}") }, CppParam { name: "_isFixedDateRule", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::TimeZoneInfo_TransitionTime::TimeZoneInfo_TransitionTime(::System::DateTime  _timeOfDay, uint8_t  _month, uint8_t  _week, uint8_t  _day, ::System::DayOfWeek  _dayOfWeek, bool  _isFixedDateRule) noexcept  {
this->_timeOfDay = _timeOfDay;
this->_month = _month;
this->_week = _week;
this->_day = _day;
this->_dayOfWeek = _dayOfWeek;
this->_isFixedDateRule = _isFixedDateRule;
}
// Ctor Parameters []
constexpr ::System::TimeZoneInfo_TransitionTime::TimeZoneInfo_TransitionTime()   {
}
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule.get_DateStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::TimeZoneInfo_AdjustmentRule::*)()>(&::System::TimeZoneInfo_AdjustmentRule::get_DateStart)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {"get_DateStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule.get_DateEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::TimeZoneInfo_AdjustmentRule::*)()>(&::System::TimeZoneInfo_AdjustmentRule::get_DateEnd)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {"get_DateEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule.get_DaylightDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::TimeZoneInfo_AdjustmentRule::*)()>(&::System::TimeZoneInfo_AdjustmentRule::get_DaylightDelta)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {"get_DaylightDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule.get_DaylightTransitionStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo_TransitionTime (::System::TimeZoneInfo_AdjustmentRule::*)()>(&::System::TimeZoneInfo_AdjustmentRule::get_DaylightTransitionStart)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180503b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {"get_DaylightTransitionStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule.get_DaylightTransitionEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo_TransitionTime (::System::TimeZoneInfo_AdjustmentRule::*)()>(&::System::TimeZoneInfo_AdjustmentRule::get_DaylightTransitionEnd)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18169a410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {"get_DaylightTransitionEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule.get_BaseUtcOffsetDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::TimeZoneInfo_AdjustmentRule::*)()>(&::System::TimeZoneInfo_AdjustmentRule::get_BaseUtcOffsetDelta)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e75e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {"get_BaseUtcOffsetDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule.get_NoDaylightTransitions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TimeZoneInfo_AdjustmentRule::*)()>(&::System::TimeZoneInfo_AdjustmentRule::get_NoDaylightTransitions)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e75b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {"get_NoDaylightTransitions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule.get_HasDaylightSaving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TimeZoneInfo_AdjustmentRule::*)()>(&::System::TimeZoneInfo_AdjustmentRule::get_HasDaylightSaving)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x18169a430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {"get_HasDaylightSaving", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TimeZoneInfo_AdjustmentRule::*)(::System::TimeZoneInfo_AdjustmentRule*)>(&::System::TimeZoneInfo_AdjustmentRule::Equals)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1816997d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {"Equals", {}, {::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::TimeZoneInfo_AdjustmentRule::*)()>(&::System::TimeZoneInfo_AdjustmentRule::GetHashCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816998b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                    {::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo_AdjustmentRule::*)(::System::DateTime, ::System::DateTime, ::System::TimeSpan, ::System::TimeZoneInfo_TransitionTime, ::System::TimeZoneInfo_TransitionTime, ::System::TimeSpan, bool)>(&::System::TimeZoneInfo_AdjustmentRule::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18169a2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {".ctor", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>(), ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule.CreateAdjustmentRule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo_AdjustmentRule* (*)(::System::DateTime, ::System::DateTime, ::System::TimeSpan, ::System::TimeZoneInfo_TransitionTime, ::System::TimeZoneInfo_TransitionTime, ::System::TimeSpan, bool)>(&::System::TimeZoneInfo_AdjustmentRule::CreateAdjustmentRule)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1816996c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {"CreateAdjustmentRule", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>(), ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule.IsStartDateMarkerForBeginningOfYear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TimeZoneInfo_AdjustmentRule::*)()>(&::System::TimeZoneInfo_AdjustmentRule::IsStartDateMarkerForBeginningOfYear)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181699990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {"IsStartDateMarkerForBeginningOfYear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule.IsEndDateMarkerForEndOfYear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TimeZoneInfo_AdjustmentRule::*)()>(&::System::TimeZoneInfo_AdjustmentRule::IsEndDateMarkerForEndOfYear)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1816998c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {"IsEndDateMarkerForEndOfYear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule.ValidateAdjustmentRule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::DateTime, ::System::DateTime, ::System::TimeSpan, ::System::TimeZoneInfo_TransitionTime, ::System::TimeZoneInfo_TransitionTime, bool)>(&::System::TimeZoneInfo_AdjustmentRule::ValidateAdjustmentRule)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x181699c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {"ValidateAdjustmentRule", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>(), ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule.System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo_AdjustmentRule::*)(::System::Object*)>(&::System::TimeZoneInfo_AdjustmentRule::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181699a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {"System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule.System_Runtime_Serialization_ISerializable_GetObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo_AdjustmentRule::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::TimeZoneInfo_AdjustmentRule::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181699b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {"System.Runtime.Serialization.ISerializable.GetObjectData", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo_AdjustmentRule::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::TimeZoneInfo_AdjustmentRule::_ctor)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x18169a020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo_AdjustmentRule::*)()>(&::System::TimeZoneInfo_AdjustmentRule::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18169a3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::DateTime& System::TimeZoneInfo_AdjustmentRule::__cordl_internal_get__dateStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dateStart;
}
constexpr ::System::DateTime const& System::TimeZoneInfo_AdjustmentRule::__cordl_internal_get__dateStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dateStart;
}
constexpr void System::TimeZoneInfo_AdjustmentRule::__cordl_internal_set__dateStart(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dateStart = value;
}
constexpr ::System::DateTime& System::TimeZoneInfo_AdjustmentRule::__cordl_internal_get__dateEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dateEnd;
}
constexpr ::System::DateTime const& System::TimeZoneInfo_AdjustmentRule::__cordl_internal_get__dateEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dateEnd;
}
constexpr void System::TimeZoneInfo_AdjustmentRule::__cordl_internal_set__dateEnd(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dateEnd = value;
}
constexpr ::System::TimeSpan& System::TimeZoneInfo_AdjustmentRule::__cordl_internal_get__daylightDelta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____daylightDelta;
}
constexpr ::System::TimeSpan const& System::TimeZoneInfo_AdjustmentRule::__cordl_internal_get__daylightDelta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____daylightDelta;
}
constexpr void System::TimeZoneInfo_AdjustmentRule::__cordl_internal_set__daylightDelta(::System::TimeSpan  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____daylightDelta = value;
}
constexpr ::System::TimeZoneInfo_TransitionTime& System::TimeZoneInfo_AdjustmentRule::__cordl_internal_get__daylightTransitionStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____daylightTransitionStart;
}
constexpr ::System::TimeZoneInfo_TransitionTime const& System::TimeZoneInfo_AdjustmentRule::__cordl_internal_get__daylightTransitionStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____daylightTransitionStart;
}
constexpr void System::TimeZoneInfo_AdjustmentRule::__cordl_internal_set__daylightTransitionStart(::System::TimeZoneInfo_TransitionTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____daylightTransitionStart = value;
}
constexpr ::System::TimeZoneInfo_TransitionTime& System::TimeZoneInfo_AdjustmentRule::__cordl_internal_get__daylightTransitionEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____daylightTransitionEnd;
}
constexpr ::System::TimeZoneInfo_TransitionTime const& System::TimeZoneInfo_AdjustmentRule::__cordl_internal_get__daylightTransitionEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____daylightTransitionEnd;
}
constexpr void System::TimeZoneInfo_AdjustmentRule::__cordl_internal_set__daylightTransitionEnd(::System::TimeZoneInfo_TransitionTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____daylightTransitionEnd = value;
}
constexpr ::System::TimeSpan& System::TimeZoneInfo_AdjustmentRule::__cordl_internal_get__baseUtcOffsetDelta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseUtcOffsetDelta;
}
constexpr ::System::TimeSpan const& System::TimeZoneInfo_AdjustmentRule::__cordl_internal_get__baseUtcOffsetDelta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseUtcOffsetDelta;
}
constexpr void System::TimeZoneInfo_AdjustmentRule::__cordl_internal_set__baseUtcOffsetDelta(::System::TimeSpan  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____baseUtcOffsetDelta = value;
}
constexpr bool& System::TimeZoneInfo_AdjustmentRule::__cordl_internal_get__noDaylightTransitions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noDaylightTransitions;
}
constexpr bool const& System::TimeZoneInfo_AdjustmentRule::__cordl_internal_get__noDaylightTransitions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noDaylightTransitions;
}
constexpr void System::TimeZoneInfo_AdjustmentRule::__cordl_internal_set__noDaylightTransitions(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____noDaylightTransitions = value;
}
inline ::System::DateTime System::TimeZoneInfo_AdjustmentRule::get_DateStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {"get_DateStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::DateTime System::TimeZoneInfo_AdjustmentRule::get_DateEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {"get_DateEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::TimeSpan System::TimeZoneInfo_AdjustmentRule::get_DaylightDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {"get_DaylightDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline ::System::TimeZoneInfo_TransitionTime System::TimeZoneInfo_AdjustmentRule::get_DaylightTransitionStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {"get_DaylightTransitionStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo_TransitionTime>(this, ___internal_method);
}
inline ::System::TimeZoneInfo_TransitionTime System::TimeZoneInfo_AdjustmentRule::get_DaylightTransitionEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {"get_DaylightTransitionEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo_TransitionTime>(this, ___internal_method);
}
inline ::System::TimeSpan System::TimeZoneInfo_AdjustmentRule::get_BaseUtcOffsetDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {"get_BaseUtcOffsetDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline bool System::TimeZoneInfo_AdjustmentRule::get_NoDaylightTransitions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {"get_NoDaylightTransitions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::TimeZoneInfo_AdjustmentRule::get_HasDaylightSaving()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {"get_HasDaylightSaving", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::TimeZoneInfo_AdjustmentRule::Equals(::System::TimeZoneInfo_AdjustmentRule*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {"Equals", {}, {::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline int32_t System::TimeZoneInfo_AdjustmentRule::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::TimeZoneInfo_AdjustmentRule::_ctor(::System::DateTime  dateStart, ::System::DateTime  dateEnd, ::System::TimeSpan  daylightDelta, ::System::TimeZoneInfo_TransitionTime  daylightTransitionStart, ::System::TimeZoneInfo_TransitionTime  daylightTransitionEnd, ::System::TimeSpan  baseUtcOffsetDelta, bool  noDaylightTransitions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {".ctor", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>(), ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dateStart, dateEnd, daylightDelta, daylightTransitionStart, daylightTransitionEnd, baseUtcOffsetDelta, noDaylightTransitions);
}
inline ::System::TimeZoneInfo_AdjustmentRule* System::TimeZoneInfo_AdjustmentRule::CreateAdjustmentRule(::System::DateTime  dateStart, ::System::DateTime  dateEnd, ::System::TimeSpan  daylightDelta, ::System::TimeZoneInfo_TransitionTime  daylightTransitionStart, ::System::TimeZoneInfo_TransitionTime  daylightTransitionEnd, ::System::TimeSpan  baseUtcOffsetDelta, bool  noDaylightTransitions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {"CreateAdjustmentRule", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>(), ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo_AdjustmentRule*>(nullptr, ___internal_method, dateStart, dateEnd, daylightDelta, daylightTransitionStart, daylightTransitionEnd, baseUtcOffsetDelta, noDaylightTransitions);
}
inline bool System::TimeZoneInfo_AdjustmentRule::IsStartDateMarkerForBeginningOfYear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {"IsStartDateMarkerForBeginningOfYear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::TimeZoneInfo_AdjustmentRule::IsEndDateMarkerForEndOfYear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {"IsEndDateMarkerForEndOfYear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::TimeZoneInfo_AdjustmentRule::ValidateAdjustmentRule(::System::DateTime  dateStart, ::System::DateTime  dateEnd, ::System::TimeSpan  daylightDelta, ::System::TimeZoneInfo_TransitionTime  daylightTransitionStart, ::System::TimeZoneInfo_TransitionTime  daylightTransitionEnd, bool  noDaylightTransitions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {"ValidateAdjustmentRule", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>(), ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dateStart, dateEnd, daylightDelta, daylightTransitionStart, daylightTransitionEnd, noDaylightTransitions);
}
inline void System::TimeZoneInfo_AdjustmentRule::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {"System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender);
}
inline void System::TimeZoneInfo_AdjustmentRule::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {"System.Runtime.Serialization.ISerializable.GetObjectData", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::TimeZoneInfo_AdjustmentRule::_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::TimeZoneInfo_AdjustmentRule::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::TimeZoneInfo_AdjustmentRule* System::TimeZoneInfo_AdjustmentRule::New_ctor(::System::DateTime  dateStart, ::System::DateTime  dateEnd, ::System::TimeSpan  daylightDelta, ::System::TimeZoneInfo_TransitionTime  daylightTransitionStart, ::System::TimeZoneInfo_TransitionTime  daylightTransitionEnd, ::System::TimeSpan  baseUtcOffsetDelta, bool  noDaylightTransitions)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TimeZoneInfo_AdjustmentRule*>(dateStart, dateEnd, daylightDelta, daylightTransitionStart, daylightTransitionEnd, baseUtcOffsetDelta, noDaylightTransitions));
}
inline ::System::TimeZoneInfo_AdjustmentRule* System::TimeZoneInfo_AdjustmentRule::New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TimeZoneInfo_AdjustmentRule*>(info, context));
}
inline ::System::TimeZoneInfo_AdjustmentRule* System::TimeZoneInfo_AdjustmentRule::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TimeZoneInfo_AdjustmentRule*>());
}
/// @brief Convert operator to "::System::IEquatable_1<::System::TimeZoneInfo_AdjustmentRule*>"
constexpr  System::TimeZoneInfo_AdjustmentRule::operator ::System::IEquatable_1<::System::TimeZoneInfo_AdjustmentRule*>*() noexcept {
return static_cast<::System::IEquatable_1<::System::TimeZoneInfo_AdjustmentRule*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::System::TimeZoneInfo_AdjustmentRule*>"
constexpr ::System::IEquatable_1<::System::TimeZoneInfo_AdjustmentRule*>* System::TimeZoneInfo_AdjustmentRule::i___System__IEquatable_1___System__TimeZoneInfo_AdjustmentRule__() noexcept {
return static_cast<::System::IEquatable_1<::System::TimeZoneInfo_AdjustmentRule*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr  System::TimeZoneInfo_AdjustmentRule::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::TimeZoneInfo_AdjustmentRule::i___System__Runtime__Serialization__ISerializable() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr  System::TimeZoneInfo_AdjustmentRule::operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept {
return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr ::System::Runtime::Serialization::IDeserializationCallback* System::TimeZoneInfo_AdjustmentRule::i___System__Runtime__Serialization__IDeserializationCallback() noexcept {
return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::TimeZoneInfo_AdjustmentRule::TimeZoneInfo_AdjustmentRule()   {
}
//  Writing Method size for method: ::System::TimeZoneInfo___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo___c::*)()>(&::System::TimeZoneInfo___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo___c._GetSystemTimeZonesWinRTFallback_b__49_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::TimeZoneInfo___c::*)(::System::TimeZoneInfo*, ::System::TimeZoneInfo*)>(&::System::TimeZoneInfo___c::_GetSystemTimeZonesWinRTFallback_b__49_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1816ade40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo___c*>(),
                        {"<GetSystemTimeZonesWinRTFallback>b__49_0", {}, {::i2c::type_of<::System::TimeZoneInfo*>(), ::i2c::type_of<::System::TimeZoneInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo___c._GetSystemTimeZones_b__110_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::TimeZoneInfo___c::*)(::System::TimeZoneInfo*, ::System::TimeZoneInfo*)>(&::System::TimeZoneInfo___c::_GetSystemTimeZones_b__110_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1816ade40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo___c*>(),
                        {"<GetSystemTimeZones>b__110_0", {}, {::i2c::type_of<::System::TimeZoneInfo*>(), ::i2c::type_of<::System::TimeZoneInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo___c.__cctor_b__157_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TimeZoneInfo___c::*)()>(&::System::TimeZoneInfo___c::__cctor_b__157_0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1816adff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo___c*>(),
                        {"<.cctor>b__157_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::TimeZoneInfo___c::setStaticF___9(::System::TimeZoneInfo___c*  value)  {
::cordl_internals::setStaticField<::System::TimeZoneInfo___c*, "<>9", ::System::TimeZoneInfo___c*>(std::forward<::System::TimeZoneInfo___c*>(value));
}
inline ::System::TimeZoneInfo___c* System::TimeZoneInfo___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::System::TimeZoneInfo___c*, "<>9", ::System::TimeZoneInfo___c*>();
}
inline void System::TimeZoneInfo___c::setStaticF___9__49_0(::System::Comparison_1<::System::TimeZoneInfo*>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::System::TimeZoneInfo*>*, "<>9__49_0", ::System::TimeZoneInfo___c*>(std::forward<::System::Comparison_1<::System::TimeZoneInfo*>*>(value));
}
inline ::System::Comparison_1<::System::TimeZoneInfo*>* System::TimeZoneInfo___c::getStaticF___9__49_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::System::TimeZoneInfo*>*, "<>9__49_0", ::System::TimeZoneInfo___c*>();
}
inline void System::TimeZoneInfo___c::setStaticF___9__110_0(::System::Comparison_1<::System::TimeZoneInfo*>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::System::TimeZoneInfo*>*, "<>9__110_0", ::System::TimeZoneInfo___c*>(std::forward<::System::Comparison_1<::System::TimeZoneInfo*>*>(value));
}
inline ::System::Comparison_1<::System::TimeZoneInfo*>* System::TimeZoneInfo___c::getStaticF___9__110_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::System::TimeZoneInfo*>*, "<>9__110_0", ::System::TimeZoneInfo___c*>();
}
inline void System::TimeZoneInfo___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::TimeZoneInfo___c::_GetSystemTimeZonesWinRTFallback_b__49_0(::System::TimeZoneInfo*  x, ::System::TimeZoneInfo*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo___c*>(),
                        {"<GetSystemTimeZonesWinRTFallback>b__49_0", {}, {::i2c::type_of<::System::TimeZoneInfo*>(), ::i2c::type_of<::System::TimeZoneInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline int32_t System::TimeZoneInfo___c::_GetSystemTimeZones_b__110_0(::System::TimeZoneInfo*  x, ::System::TimeZoneInfo*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo___c*>(),
                        {"<GetSystemTimeZones>b__110_0", {}, {::i2c::type_of<::System::TimeZoneInfo*>(), ::i2c::type_of<::System::TimeZoneInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline bool System::TimeZoneInfo___c::__cctor_b__157_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo___c*>(),
                        {"<.cctor>b__157_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::TimeZoneInfo___c* System::TimeZoneInfo___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TimeZoneInfo___c*>());
}
// Ctor Parameters []
constexpr ::System::TimeZoneInfo___c::TimeZoneInfo___c()   {
}
//  Writing Method size for method: ::System::TimeZoneInfo.PopulateAllSystemTimeZones
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::TimeZoneInfo_CachedData*)>(&::System::TimeZoneInfo::PopulateAllSystemTimeZones)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1816a9280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"PopulateAllSystemTimeZones", {}, {::i2c::type_of<::System::TimeZoneInfo_CachedData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.PopulateAllSystemTimeZonesFromRegistry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::TimeZoneInfo_CachedData*)>(&::System::TimeZoneInfo::PopulateAllSystemTimeZonesFromRegistry)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1816a9150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"PopulateAllSystemTimeZonesFromRegistry", {}, {::i2c::type_of<::System::TimeZoneInfo_CachedData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo::*)(::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>, bool)>(&::System::TimeZoneInfo::_ctor)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x1816ad040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.CheckDaylightSavingTimeNotSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>)>(&::System::TimeZoneInfo::CheckDaylightSavingTimeNotSupported)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1816a4270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"CheckDaylightSavingTimeNotSupported", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.CreateAdjustmentRuleFromTimeZoneInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo_AdjustmentRule* (*)(::by_ref<::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT>, ::System::DateTime, ::System::DateTime, int32_t)>(&::System::TimeZoneInfo::CreateAdjustmentRuleFromTimeZoneInformation)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x1816a5130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"CreateAdjustmentRuleFromTimeZoneInformation", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT>>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.FindIdFromTimeZoneInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>, ::by_ref<bool>)>(&::System::TimeZoneInfo::FindIdFromTimeZoneInformation)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1816a57f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"FindIdFromTimeZoneInformation", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetLocalTimeZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo* (*)(::System::TimeZoneInfo_CachedData*)>(&::System::TimeZoneInfo::GetLocalTimeZone)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1816a76f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetLocalTimeZone", {}, {::i2c::type_of<::System::TimeZoneInfo_CachedData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetLocalTimeZoneFromWin32Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo* (*)(::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>, bool)>(&::System::TimeZoneInfo::GetLocalTimeZoneFromWin32Data)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1816a73b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetLocalTimeZoneFromWin32Data", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetDateTimeNowUtcOffsetFromUtc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::System::DateTime, ::by_ref<bool>)>(&::System::TimeZoneInfo::GetDateTimeNowUtcOffsetFromUtc)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x1816a5ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetDateTimeNowUtcOffsetFromUtc", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TransitionTimeFromTimeZoneInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT>, ::by_ref<::System::TimeZoneInfo_TransitionTime>, bool)>(&::System::TimeZoneInfo::TransitionTimeFromTimeZoneInformation)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1816aa340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"TransitionTimeFromTimeZoneInformation", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT>>(), ::i2c::type_of<::by_ref<::System::TimeZoneInfo_TransitionTime>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TryCreateAdjustmentRules
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT>, ::by_ref<::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>>, ::by_ref<::System::Exception*>, int32_t)>(&::System::TimeZoneInfo::TryCreateAdjustmentRules)> {
  constexpr static std::size_t size = 0x800;
  constexpr static std::size_t addrs = 0x1816aab20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"TryCreateAdjustmentRules", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT>>(), ::i2c::type_of<::by_ref<::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>>>(), ::i2c::type_of<::by_ref<::System::Exception*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TryGetTimeZoneEntryFromRegistry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Microsoft::Win32::RegistryKey*, ::StringW, ::by_ref<::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT>)>(&::System::TimeZoneInfo::TryGetTimeZoneEntryFromRegistry)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1816abde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"TryGetTimeZoneEntryFromRegistry", {}, {::i2c::type_of<::Microsoft::Win32::RegistryKey*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TryCompareStandardDate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>, ::by_ref<::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT>)>(&::System::TimeZoneInfo::TryCompareStandardDate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1816aa740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"TryCompareStandardDate", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TryCompareTimeZoneInformationToRegistry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>, ::StringW, ::by_ref<bool>)>(&::System::TimeZoneInfo::TryCompareTimeZoneInformationToRegistry)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x1816aa780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"TryCompareTimeZoneInformationToRegistry", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TryGetLocalizedNameByMuiNativeResource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::TimeZoneInfo::TryGetLocalizedNameByMuiNativeResource)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1816abb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"TryGetLocalizedNameByMuiNativeResource", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TryGetLocalizedNameByNativeResource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, int32_t)>(&::System::TimeZoneInfo::TryGetLocalizedNameByNativeResource)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1816abcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"TryGetLocalizedNameByNativeResource", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetLocalizedNamesByRegistryKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Microsoft::Win32::RegistryKey*, ::by_ref<::StringW>, ::by_ref<::StringW>, ::by_ref<::StringW>)>(&::System::TimeZoneInfo::GetLocalizedNamesByRegistryKey)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x1816a79f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetLocalizedNamesByRegistryKey", {}, {::i2c::type_of<::Microsoft::Win32::RegistryKey*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TryGetTimeZoneFromLocalMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo_TimeZoneInfoResult (*)(::StringW, ::by_ref<::System::TimeZoneInfo*>, ::by_ref<::System::Exception*>)>(&::System::TimeZoneInfo::TryGetTimeZoneFromLocalMachine)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1816ac0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"TryGetTimeZoneFromLocalMachine", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::TimeZoneInfo*>>(), ::i2c::type_of<::by_ref<::System::Exception*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TryGetTimeZoneFromLocalRegistry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo_TimeZoneInfoResult (*)(::StringW, ::by_ref<::System::TimeZoneInfo*>, ::by_ref<::System::Exception*>)>(&::System::TimeZoneInfo::TryGetTimeZoneFromLocalRegistry)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x1816ac150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"TryGetTimeZoneFromLocalRegistry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::TimeZoneInfo*>>(), ::i2c::type_of<::by_ref<::System::Exception*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.get_HaveRegistry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::TimeZoneInfo::get_HaveRegistry)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1816ad350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"get_HaveRegistry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.EnumDynamicTimeZoneInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, ::by_ref<::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION>)>(&::System::TimeZoneInfo::EnumDynamicTimeZoneInformation)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1816a55c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"EnumDynamicTimeZoneInformation", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetDynamicTimeZoneInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::by_ref<::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION>)>(&::System::TimeZoneInfo::GetDynamicTimeZoneInformation)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1816a6250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetDynamicTimeZoneInformation", {}, {::i2c::type_of<::by_ref<::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetDynamicTimeZoneInformationEffectiveYears
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::by_ref<::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION>, ::by_ref<uint32_t>, ::by_ref<uint32_t>)>(&::System::TimeZoneInfo::GetDynamicTimeZoneInformationEffectiveYears)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1816a60d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetDynamicTimeZoneInformationEffectiveYears", {}, {::i2c::type_of<::by_ref<::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetTimeZoneInformationForYear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint16_t, ::by_ref<::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION>, ::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>)>(&::System::TimeZoneInfo::GetTimeZoneInformationForYear)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1816a8570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetTimeZoneInformationForYear", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::by_ref<::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.CreateAdjustmentRuleFromTimeZoneInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo_AdjustmentRule* (*)(::by_ref<::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION>, ::System::DateTime, ::System::DateTime, int32_t)>(&::System::TimeZoneInfo::CreateAdjustmentRuleFromTimeZoneInformation)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x1816a4cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"CreateAdjustmentRuleFromTimeZoneInformation", {}, {::i2c::type_of<::by_ref<::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION>>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TransitionTimeFromTimeZoneInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION, ::by_ref<::System::TimeZoneInfo_TransitionTime>, bool)>(&::System::TimeZoneInfo::TransitionTimeFromTimeZoneInformation)> {
  constexpr static std::size_t size = 0xe10;
  constexpr static std::size_t addrs = 0x1816a9530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"TransitionTimeFromTimeZoneInformation", {}, {::i2c::type_of<::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION>(), ::i2c::type_of<::by_ref<::System::TimeZoneInfo_TransitionTime>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TryCreateTimeZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo* (*)(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION)>(&::System::TimeZoneInfo::TryCreateTimeZone)> {
  constexpr static std::size_t size = 0x7e0;
  constexpr static std::size_t addrs = 0x1816ab320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"TryCreateTimeZone", {}, {::i2c::type_of<::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetLocalTimeZoneInfoWinRTFallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo* (*)()>(&::System::TimeZoneInfo::GetLocalTimeZoneInfoWinRTFallback)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1816a7490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetLocalTimeZoneInfoWinRTFallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.FindSystemTimeZoneByIdWinRTFallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo* (*)(::StringW)>(&::System::TimeZoneInfo::FindSystemTimeZoneByIdWinRTFallback)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1816a5930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"FindSystemTimeZoneByIdWinRTFallback", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetSystemTimeZonesWinRTFallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::TimeZoneInfo_CachedData*)>(&::System::TimeZoneInfo::GetSystemTimeZonesWinRTFallback)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x1816a7dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetSystemTimeZonesWinRTFallback", {}, {::i2c::type_of<::System::TimeZoneInfo_CachedData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.get_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::TimeZoneInfo::*)()>(&::System::TimeZoneInfo::get_Id)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"get_Id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.get_DisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::TimeZoneInfo::*)()>(&::System::TimeZoneInfo::get_DisplayName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816a9510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"get_DisplayName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.get_BaseUtcOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::TimeZoneInfo::*)()>(&::System::TimeZoneInfo::get_BaseUtcOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"get_BaseUtcOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetPreviousAdjustmentRule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo_AdjustmentRule* (::System::TimeZoneInfo::*)(::System::TimeZoneInfo_AdjustmentRule*, ::System::Nullable_1<int32_t>)>(&::System::TimeZoneInfo::GetPreviousAdjustmentRule)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1816a7d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetPreviousAdjustmentRule", {}, {::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(), ::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetUtcOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::TimeZoneInfo::*)(::System::DateTime)>(&::System::TimeZoneInfo::GetUtcOffset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1816a8e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetUtcOffset", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetLocalUtcOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::System::DateTime, ::System::TimeZoneInfoOptions)>(&::System::TimeZoneInfo::GetLocalUtcOffset)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1816a7970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetLocalUtcOffset", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfoOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetUtcOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::TimeZoneInfo::*)(::System::DateTime, ::System::TimeZoneInfoOptions)>(&::System::TimeZoneInfo::GetUtcOffset)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1816a8980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetUtcOffset", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfoOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetUtcOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::TimeZoneInfo::*)(::System::DateTime, ::System::TimeZoneInfoOptions, ::System::TimeZoneInfo_CachedData*)>(&::System::TimeZoneInfo::GetUtcOffset)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1816a8a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetUtcOffset", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfoOptions>(), ::i2c::type_of<::System::TimeZoneInfo_CachedData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ConvertTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::System::DateTime, ::System::TimeZoneInfo*, ::System::TimeZoneInfo*, ::System::TimeZoneInfoOptions)>(&::System::TimeZoneInfo::ConvertTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1816a45b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"ConvertTime", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo*>(), ::i2c::type_of<::System::TimeZoneInfo*>(), ::i2c::type_of<::System::TimeZoneInfoOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ConvertTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::System::DateTime, ::System::TimeZoneInfo*, ::System::TimeZoneInfo*, ::System::TimeZoneInfoOptions, ::System::TimeZoneInfo_CachedData*)>(&::System::TimeZoneInfo::ConvertTime)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x1816a4630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"ConvertTime", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo*>(), ::i2c::type_of<::System::TimeZoneInfo*>(), ::i2c::type_of<::System::TimeZoneInfoOptions>(), ::i2c::type_of<::System::TimeZoneInfo_CachedData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ConvertTimeToUtc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::System::DateTime, ::System::TimeZoneInfoOptions)>(&::System::TimeZoneInfo::ConvertTimeToUtc)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1816a44f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"ConvertTimeToUtc", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfoOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TimeZoneInfo::*)(::System::TimeZoneInfo*)>(&::System::TimeZoneInfo::Equals)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1816a5720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"Equals", {}, {::i2c::type_of<::System::TimeZoneInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TimeZoneInfo::*)(::System::Object*)>(&::System::TimeZoneInfo::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1816a5780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::TimeZoneInfo*>(),
                    {::i2c::class_of<::System::TimeZoneInfo*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::TimeZoneInfo::*)()>(&::System::TimeZoneInfo::GetHashCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1816a63b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::TimeZoneInfo*>(),
                    {::i2c::class_of<::System::TimeZoneInfo*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetSystemTimeZones
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::TimeZoneInfo*>* (*)()>(&::System::TimeZoneInfo::GetSystemTimeZones)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1816a82e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetSystemTimeZones", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.HasSameRules
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TimeZoneInfo::*)(::System::TimeZoneInfo*)>(&::System::TimeZoneInfo::HasSameRules)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1816a8ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"HasSameRules", {}, {::i2c::type_of<::System::TimeZoneInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.get_Local
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo* (*)()>(&::System::TimeZoneInfo::get_Local)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1816ad390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"get_Local", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::TimeZoneInfo::*)()>(&::System::TimeZoneInfo::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816a9510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::TimeZoneInfo*>(),
                    {::i2c::class_of<::System::TimeZoneInfo*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.get_Utc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo* (*)()>(&::System::TimeZoneInfo::get_Utc)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181699640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"get_Utc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo::*)(::StringW, ::System::TimeSpan, ::StringW, ::StringW, ::StringW, ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>, bool)>(&::System::TimeZoneInfo::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1816acf60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.CreateCustomTimeZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo* (*)(::StringW, ::System::TimeSpan, ::StringW, ::StringW)>(&::System::TimeZoneInfo::CreateCustomTimeZone)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1816a5440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"CreateCustomTimeZone", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo::*)(::System::Object*)>(&::System::TimeZoneInfo::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1816a92e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.System_Runtime_Serialization_ISerializable_GetObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::TimeZoneInfo::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1816a9420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"System.Runtime.Serialization.ISerializable.GetObjectData", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::TimeZoneInfo::_ctor)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x1816acb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetAdjustmentRuleForTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo_AdjustmentRule* (::System::TimeZoneInfo::*)(::System::DateTime, ::by_ref<::System::Nullable_1<int32_t>>)>(&::System::TimeZoneInfo::GetAdjustmentRuleForTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816a5c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetAdjustmentRuleForTime", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::by_ref<::System::Nullable_1<int32_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetAdjustmentRuleForTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo_AdjustmentRule* (::System::TimeZoneInfo::*)(::System::DateTime, bool, ::by_ref<::System::Nullable_1<int32_t>>)>(&::System::TimeZoneInfo::GetAdjustmentRuleForTime)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1816a5b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetAdjustmentRuleForTime", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Nullable_1<int32_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.CompareAdjustmentRuleToDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::TimeZoneInfo::*)(::System::TimeZoneInfo_AdjustmentRule*, ::System::TimeZoneInfo_AdjustmentRule*, ::System::DateTime, ::System::DateTime, bool)>(&::System::TimeZoneInfo::CompareAdjustmentRuleToDateTime)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1816a43c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"CompareAdjustmentRuleToDateTime", {}, {::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ConvertToUtc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::TimeZoneInfo::*)(::System::DateTime, ::System::TimeSpan, ::System::TimeSpan)>(&::System::TimeZoneInfo::ConvertToUtc)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816a4b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"ConvertToUtc", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ConvertFromUtc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::TimeZoneInfo::*)(::System::DateTime, ::System::TimeSpan, ::System::TimeSpan)>(&::System::TimeZoneInfo::ConvertFromUtc)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816a44d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"ConvertFromUtc", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ConvertToFromUtc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::TimeZoneInfo::*)(::System::DateTime, ::System::TimeSpan, ::System::TimeSpan, bool)>(&::System::TimeZoneInfo::ConvertToFromUtc)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1816a4a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"ConvertToFromUtc", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ConvertUtcToTimeZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(int64_t, ::System::TimeZoneInfo*, ::by_ref<bool>)>(&::System::TimeZoneInfo::ConvertUtcToTimeZone)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1816a4b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"ConvertUtcToTimeZone", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::System::TimeZoneInfo*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetDaylightTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::DaylightTimeStruct (::System::TimeZoneInfo::*)(int32_t, ::System::TimeZoneInfo_AdjustmentRule*, ::System::Nullable_1<int32_t>)>(&::System::TimeZoneInfo::GetDaylightTime)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1816a5fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetDaylightTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(), ::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetIsDaylightSavings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTime, ::System::TimeZoneInfo_AdjustmentRule*, ::System::Globalization::DaylightTimeStruct, ::System::TimeZoneInfoOptions)>(&::System::TimeZoneInfo::GetIsDaylightSavings)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x1816a6e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetIsDaylightSavings", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(), ::i2c::type_of<::System::Globalization::DaylightTimeStruct>(), ::i2c::type_of<::System::TimeZoneInfoOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetDaylightSavingsStartOffsetFromUtc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::TimeZoneInfo::*)(::System::TimeSpan, ::System::TimeZoneInfo_AdjustmentRule*, ::System::Nullable_1<int32_t>)>(&::System::TimeZoneInfo::GetDaylightSavingsStartOffsetFromUtc)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1816a5f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetDaylightSavingsStartOffsetFromUtc", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(), ::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetDaylightSavingsEndOffsetFromUtc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::TimeZoneInfo::*)(::System::TimeSpan, ::System::TimeZoneInfo_AdjustmentRule*)>(&::System::TimeZoneInfo::GetDaylightSavingsEndOffsetFromUtc)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1816a5f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetDaylightSavingsEndOffsetFromUtc", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetIsDaylightSavingsFromUtc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTime, int32_t, ::System::TimeSpan, ::System::TimeZoneInfo_AdjustmentRule*, ::System::Nullable_1<int32_t>, ::by_ref<bool>, ::System::TimeZoneInfo*)>(&::System::TimeZoneInfo::GetIsDaylightSavingsFromUtc)> {
  constexpr static std::size_t size = 0x7d0;
  constexpr static std::size_t addrs = 0x1816a6640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetIsDaylightSavingsFromUtc", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::System::TimeZoneInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.CheckIsDst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTime, ::System::DateTime, ::System::DateTime, bool, ::System::TimeZoneInfo_AdjustmentRule*)>(&::System::TimeZoneInfo::CheckIsDst)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1816a42a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"CheckIsDst", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetIsAmbiguousTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTime, ::System::TimeZoneInfo_AdjustmentRule*, ::System::Globalization::DaylightTimeStruct)>(&::System::TimeZoneInfo::GetIsAmbiguousTime)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1816a6400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetIsAmbiguousTime", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(), ::i2c::type_of<::System::Globalization::DaylightTimeStruct>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetIsInvalidTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTime, ::System::TimeZoneInfo_AdjustmentRule*, ::System::Globalization::DaylightTimeStruct)>(&::System::TimeZoneInfo::GetIsInvalidTime)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1816a7160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetIsInvalidTime", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(), ::i2c::type_of<::System::Globalization::DaylightTimeStruct>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetUtcOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::System::DateTime, ::System::TimeZoneInfo*, ::System::TimeZoneInfoOptions)>(&::System::TimeZoneInfo::GetUtcOffset)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1816a8cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetUtcOffset", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo*>(), ::i2c::type_of<::System::TimeZoneInfoOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetUtcOffsetFromUtc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::System::DateTime, ::System::TimeZoneInfo*)>(&::System::TimeZoneInfo::GetUtcOffsetFromUtc)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1816a8730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetUtcOffsetFromUtc", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetUtcOffsetFromUtc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::System::DateTime, ::System::TimeZoneInfo*, ::by_ref<bool>)>(&::System::TimeZoneInfo::GetUtcOffsetFromUtc)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1816a8700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetUtcOffsetFromUtc", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetUtcOffsetFromUtc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::System::DateTime, ::System::TimeZoneInfo*, ::by_ref<bool>, ::by_ref<bool>)>(&::System::TimeZoneInfo::GetUtcOffsetFromUtc)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1816a8760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetUtcOffsetFromUtc", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo*>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TransitionTimeToDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(int32_t, ::System::TimeZoneInfo_TransitionTime)>(&::System::TimeZoneInfo::TransitionTimeToDateTime)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1816aa520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"TransitionTimeToDateTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TryGetTimeZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo_TimeZoneInfoResult (*)(::StringW, bool, ::by_ref<::System::TimeZoneInfo*>, ::by_ref<::System::Exception*>, ::System::TimeZoneInfo_CachedData*, bool)>(&::System::TimeZoneInfo::TryGetTimeZone)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1816ac520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"TryGetTimeZone", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::TimeZoneInfo*>>(), ::i2c::type_of<::by_ref<::System::Exception*>>(), ::i2c::type_of<::System::TimeZoneInfo_CachedData*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TryGetTimeZoneFromLocalMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo_TimeZoneInfoResult (*)(::StringW, bool, ::by_ref<::System::TimeZoneInfo*>, ::by_ref<::System::Exception*>, ::System::TimeZoneInfo_CachedData*)>(&::System::TimeZoneInfo::TryGetTimeZoneFromLocalMachine)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1816abe60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"TryGetTimeZoneFromLocalMachine", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::TimeZoneInfo*>>(), ::i2c::type_of<::by_ref<::System::Exception*>>(), ::i2c::type_of<::System::TimeZoneInfo_CachedData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ValidateTimeZoneInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::TimeSpan, ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>, ::by_ref<bool>)>(&::System::TimeZoneInfo::ValidateTimeZoneInfo)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1816ac720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"ValidateTimeZoneInfo", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.UtcOffsetOutOfRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::TimeSpan)>(&::System::TimeZoneInfo::UtcOffsetOutOfRange)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1816ac6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"UtcOffsetOutOfRange", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetUtcOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::System::TimeSpan, ::System::TimeZoneInfo_AdjustmentRule*)>(&::System::TimeZoneInfo::GetUtcOffset)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1816a89f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetUtcOffset", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.IsValidAdjustmentRuleOffest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::TimeSpan, ::System::TimeZoneInfo_AdjustmentRule*)>(&::System::TimeZoneInfo::IsValidAdjustmentRuleOffest)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1816a9060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"IsValidAdjustmentRuleOffest", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo::*)()>(&::System::TimeZoneInfo::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816acf40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& System::TimeZoneInfo::__cordl_internal_get__id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id;
}
constexpr ::StringW const& System::TimeZoneInfo::__cordl_internal_get__id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id;
}
constexpr void System::TimeZoneInfo::__cordl_internal_set__id(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____id = value;
}
constexpr ::StringW& System::TimeZoneInfo::__cordl_internal_get__displayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____displayName;
}
constexpr ::StringW const& System::TimeZoneInfo::__cordl_internal_get__displayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____displayName;
}
constexpr void System::TimeZoneInfo::__cordl_internal_set__displayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____displayName = value;
}
constexpr ::StringW& System::TimeZoneInfo::__cordl_internal_get__standardDisplayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____standardDisplayName;
}
constexpr ::StringW const& System::TimeZoneInfo::__cordl_internal_get__standardDisplayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____standardDisplayName;
}
constexpr void System::TimeZoneInfo::__cordl_internal_set__standardDisplayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____standardDisplayName = value;
}
constexpr ::StringW& System::TimeZoneInfo::__cordl_internal_get__daylightDisplayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____daylightDisplayName;
}
constexpr ::StringW const& System::TimeZoneInfo::__cordl_internal_get__daylightDisplayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____daylightDisplayName;
}
constexpr void System::TimeZoneInfo::__cordl_internal_set__daylightDisplayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____daylightDisplayName = value;
}
constexpr ::System::TimeSpan& System::TimeZoneInfo::__cordl_internal_get__baseUtcOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseUtcOffset;
}
constexpr ::System::TimeSpan const& System::TimeZoneInfo::__cordl_internal_get__baseUtcOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseUtcOffset;
}
constexpr void System::TimeZoneInfo::__cordl_internal_set__baseUtcOffset(::System::TimeSpan  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____baseUtcOffset = value;
}
constexpr bool& System::TimeZoneInfo::__cordl_internal_get__supportsDaylightSavingTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____supportsDaylightSavingTime;
}
constexpr bool const& System::TimeZoneInfo::__cordl_internal_get__supportsDaylightSavingTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____supportsDaylightSavingTime;
}
constexpr void System::TimeZoneInfo::__cordl_internal_set__supportsDaylightSavingTime(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____supportsDaylightSavingTime = value;
}
constexpr ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>& System::TimeZoneInfo::__cordl_internal_get__adjustmentRules()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____adjustmentRules;
}
constexpr ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*> const& System::TimeZoneInfo::__cordl_internal_get__adjustmentRules() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____adjustmentRules;
}
constexpr void System::TimeZoneInfo::__cordl_internal_set__adjustmentRules(::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____adjustmentRules = value;
}
inline void System::TimeZoneInfo::setStaticF_lazyHaveRegistry(::System::Lazy_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Lazy_1<bool>*, "lazyHaveRegistry", ::System::TimeZoneInfo*>(std::forward<::System::Lazy_1<bool>*>(value));
}
inline ::System::Lazy_1<bool>* System::TimeZoneInfo::getStaticF_lazyHaveRegistry()  {
return ::cordl_internals::getStaticField<::System::Lazy_1<bool>*, "lazyHaveRegistry", ::System::TimeZoneInfo*>();
}
inline void System::TimeZoneInfo::setStaticF_s_utcTimeZone(::System::TimeZoneInfo*  value)  {
::cordl_internals::setStaticField<::System::TimeZoneInfo*, "s_utcTimeZone", ::System::TimeZoneInfo*>(std::forward<::System::TimeZoneInfo*>(value));
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::getStaticF_s_utcTimeZone()  {
return ::cordl_internals::getStaticField<::System::TimeZoneInfo*, "s_utcTimeZone", ::System::TimeZoneInfo*>();
}
inline void System::TimeZoneInfo::setStaticF_s_cachedData(::System::TimeZoneInfo_CachedData*  value)  {
::cordl_internals::setStaticField<::System::TimeZoneInfo_CachedData*, "s_cachedData", ::System::TimeZoneInfo*>(std::forward<::System::TimeZoneInfo_CachedData*>(value));
}
inline ::System::TimeZoneInfo_CachedData* System::TimeZoneInfo::getStaticF_s_cachedData()  {
return ::cordl_internals::getStaticField<::System::TimeZoneInfo_CachedData*, "s_cachedData", ::System::TimeZoneInfo*>();
}
inline void System::TimeZoneInfo::setStaticF_s_maxDateOnly(::System::DateTime  value)  {
::cordl_internals::setStaticField<::System::DateTime, "s_maxDateOnly", ::System::TimeZoneInfo*>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime System::TimeZoneInfo::getStaticF_s_maxDateOnly()  {
return ::cordl_internals::getStaticField<::System::DateTime, "s_maxDateOnly", ::System::TimeZoneInfo*>();
}
inline void System::TimeZoneInfo::setStaticF_s_minDateOnly(::System::DateTime  value)  {
::cordl_internals::setStaticField<::System::DateTime, "s_minDateOnly", ::System::TimeZoneInfo*>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime System::TimeZoneInfo::getStaticF_s_minDateOnly()  {
return ::cordl_internals::getStaticField<::System::DateTime, "s_minDateOnly", ::System::TimeZoneInfo*>();
}
inline void System::TimeZoneInfo::setStaticF_MaxOffset(::System::TimeSpan  value)  {
::cordl_internals::setStaticField<::System::TimeSpan, "MaxOffset", ::System::TimeZoneInfo*>(std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan System::TimeZoneInfo::getStaticF_MaxOffset()  {
return ::cordl_internals::getStaticField<::System::TimeSpan, "MaxOffset", ::System::TimeZoneInfo*>();
}
inline void System::TimeZoneInfo::setStaticF_MinOffset(::System::TimeSpan  value)  {
::cordl_internals::setStaticField<::System::TimeSpan, "MinOffset", ::System::TimeZoneInfo*>(std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan System::TimeZoneInfo::getStaticF_MinOffset()  {
return ::cordl_internals::getStaticField<::System::TimeSpan, "MinOffset", ::System::TimeZoneInfo*>();
}
inline void System::TimeZoneInfo::PopulateAllSystemTimeZones(::System::TimeZoneInfo_CachedData*  cachedData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"PopulateAllSystemTimeZones", {}, {::i2c::type_of<::System::TimeZoneInfo_CachedData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cachedData);
}
inline void System::TimeZoneInfo::PopulateAllSystemTimeZonesFromRegistry(::System::TimeZoneInfo_CachedData*  cachedData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"PopulateAllSystemTimeZonesFromRegistry", {}, {::i2c::type_of<::System::TimeZoneInfo_CachedData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cachedData);
}
inline void System::TimeZoneInfo::_ctor(::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>  zone, bool  dstDisabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zone, dstDisabled);
}
inline bool System::TimeZoneInfo::CheckDaylightSavingTimeNotSupported(::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>  timeZone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"CheckDaylightSavingTimeNotSupported", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, timeZone);
}
inline ::System::TimeZoneInfo_AdjustmentRule* System::TimeZoneInfo::CreateAdjustmentRuleFromTimeZoneInformation(::by_ref<::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT>  timeZoneInformation, ::System::DateTime  startDate, ::System::DateTime  endDate, int32_t  defaultBaseUtcOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"CreateAdjustmentRuleFromTimeZoneInformation", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT>>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo_AdjustmentRule*>(nullptr, ___internal_method, timeZoneInformation, startDate, endDate, defaultBaseUtcOffset);
}
inline ::StringW System::TimeZoneInfo::FindIdFromTimeZoneInformation(::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>  timeZone, ::by_ref<bool>  dstDisabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"FindIdFromTimeZoneInformation", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, timeZone, dstDisabled);
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::GetLocalTimeZone(::System::TimeZoneInfo_CachedData*  cachedData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetLocalTimeZone", {}, {::i2c::type_of<::System::TimeZoneInfo_CachedData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo*>(nullptr, ___internal_method, cachedData);
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::GetLocalTimeZoneFromWin32Data(::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>  timeZoneInformation, bool  dstDisabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetLocalTimeZoneFromWin32Data", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo*>(nullptr, ___internal_method, timeZoneInformation, dstDisabled);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetDateTimeNowUtcOffsetFromUtc(::System::DateTime  time, ::by_ref<bool>  isAmbiguousLocalDst)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetDateTimeNowUtcOffsetFromUtc", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, time, isAmbiguousLocalDst);
}
inline bool System::TimeZoneInfo::TransitionTimeFromTimeZoneInformation(::by_ref<::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT>  timeZoneInformation, ::by_ref<::System::TimeZoneInfo_TransitionTime>  transitionTime, bool  readStartDate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"TransitionTimeFromTimeZoneInformation", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT>>(), ::i2c::type_of<::by_ref<::System::TimeZoneInfo_TransitionTime>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, timeZoneInformation, transitionTime, readStartDate);
}
inline bool System::TimeZoneInfo::TryCreateAdjustmentRules(::StringW  id, ::by_ref<::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT>  defaultTimeZoneInformation, ::by_ref<::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>>  rules, ::by_ref<::System::Exception*>  e, int32_t  defaultBaseUtcOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"TryCreateAdjustmentRules", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT>>(), ::i2c::type_of<::by_ref<::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>>>(), ::i2c::type_of<::by_ref<::System::Exception*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, id, defaultTimeZoneInformation, rules, e, defaultBaseUtcOffset);
}
inline bool System::TimeZoneInfo::TryGetTimeZoneEntryFromRegistry(::Microsoft::Win32::RegistryKey*  key, ::StringW  name, ::by_ref<::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT>  dtzi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"TryGetTimeZoneEntryFromRegistry", {}, {::i2c::type_of<::Microsoft::Win32::RegistryKey*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, key, name, dtzi);
}
inline bool System::TimeZoneInfo::TryCompareStandardDate(::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>  timeZone, ::by_ref<::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT>  registryTimeZoneInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"TryCompareStandardDate", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, timeZone, registryTimeZoneInfo);
}
inline bool System::TimeZoneInfo::TryCompareTimeZoneInformationToRegistry(::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>  timeZone, ::StringW  id, ::by_ref<bool>  dstDisabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"TryCompareTimeZoneInformationToRegistry", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, timeZone, id, dstDisabled);
}
inline ::StringW System::TimeZoneInfo::TryGetLocalizedNameByMuiNativeResource(::StringW  resource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"TryGetLocalizedNameByMuiNativeResource", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, resource);
}
inline ::StringW System::TimeZoneInfo::TryGetLocalizedNameByNativeResource(::StringW  filePath, int32_t  resource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"TryGetLocalizedNameByNativeResource", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, filePath, resource);
}
inline void System::TimeZoneInfo::GetLocalizedNamesByRegistryKey(::Microsoft::Win32::RegistryKey*  key, ::by_ref<::StringW>  displayName, ::by_ref<::StringW>  standardName, ::by_ref<::StringW>  daylightName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetLocalizedNamesByRegistryKey", {}, {::i2c::type_of<::Microsoft::Win32::RegistryKey*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, key, displayName, standardName, daylightName);
}
inline ::System::TimeZoneInfo_TimeZoneInfoResult System::TimeZoneInfo::TryGetTimeZoneFromLocalMachine(::StringW  id, ::by_ref<::System::TimeZoneInfo*>  value, ::by_ref<::System::Exception*>  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"TryGetTimeZoneFromLocalMachine", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::TimeZoneInfo*>>(), ::i2c::type_of<::by_ref<::System::Exception*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo_TimeZoneInfoResult>(nullptr, ___internal_method, id, value, e);
}
inline ::System::TimeZoneInfo_TimeZoneInfoResult System::TimeZoneInfo::TryGetTimeZoneFromLocalRegistry(::StringW  id, ::by_ref<::System::TimeZoneInfo*>  value, ::by_ref<::System::Exception*>  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"TryGetTimeZoneFromLocalRegistry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::TimeZoneInfo*>>(), ::i2c::type_of<::by_ref<::System::Exception*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo_TimeZoneInfoResult>(nullptr, ___internal_method, id, value, e);
}
inline bool System::TimeZoneInfo::get_HaveRegistry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"get_HaveRegistry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline uint32_t System::TimeZoneInfo::EnumDynamicTimeZoneInformation(uint32_t  dwIndex, ::by_ref<::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION>  lpTimeZoneInformation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"EnumDynamicTimeZoneInformation", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, dwIndex, lpTimeZoneInformation);
}
inline uint32_t System::TimeZoneInfo::GetDynamicTimeZoneInformation(::by_ref<::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION>  pTimeZoneInformation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetDynamicTimeZoneInformation", {}, {::i2c::type_of<::by_ref<::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, pTimeZoneInformation);
}
inline uint32_t System::TimeZoneInfo::GetDynamicTimeZoneInformationEffectiveYears(::by_ref<::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION>  lpTimeZoneInformation, ::by_ref<uint32_t>  FirstYear, ::by_ref<uint32_t>  LastYear)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetDynamicTimeZoneInformationEffectiveYears", {}, {::i2c::type_of<::by_ref<::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, lpTimeZoneInformation, FirstYear, LastYear);
}
inline bool System::TimeZoneInfo::GetTimeZoneInformationForYear(uint16_t  wYear, ::by_ref<::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION>  pdtzi, ::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>  ptzi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetTimeZoneInformationForYear", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::by_ref<::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, wYear, pdtzi, ptzi);
}
inline ::System::TimeZoneInfo_AdjustmentRule* System::TimeZoneInfo::CreateAdjustmentRuleFromTimeZoneInformation(::by_ref<::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION>  timeZoneInformation, ::System::DateTime  startDate, ::System::DateTime  endDate, int32_t  defaultBaseUtcOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"CreateAdjustmentRuleFromTimeZoneInformation", {}, {::i2c::type_of<::by_ref<::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION>>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo_AdjustmentRule*>(nullptr, ___internal_method, timeZoneInformation, startDate, endDate, defaultBaseUtcOffset);
}
inline bool System::TimeZoneInfo::TransitionTimeFromTimeZoneInformation(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION  timeZoneInformation, ::by_ref<::System::TimeZoneInfo_TransitionTime>  transitionTime, bool  readStartDate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"TransitionTimeFromTimeZoneInformation", {}, {::i2c::type_of<::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION>(), ::i2c::type_of<::by_ref<::System::TimeZoneInfo_TransitionTime>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, timeZoneInformation, transitionTime, readStartDate);
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::TryCreateTimeZone(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION  timeZoneInformation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"TryCreateTimeZone", {}, {::i2c::type_of<::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo*>(nullptr, ___internal_method, timeZoneInformation);
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::GetLocalTimeZoneInfoWinRTFallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetLocalTimeZoneInfoWinRTFallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo*>(nullptr, ___internal_method);
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::FindSystemTimeZoneByIdWinRTFallback(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"FindSystemTimeZoneByIdWinRTFallback", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo*>(nullptr, ___internal_method, id);
}
inline void System::TimeZoneInfo::GetSystemTimeZonesWinRTFallback(::System::TimeZoneInfo_CachedData*  cachedData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetSystemTimeZonesWinRTFallback", {}, {::i2c::type_of<::System::TimeZoneInfo_CachedData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cachedData);
}
inline ::StringW System::TimeZoneInfo::get_Id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"get_Id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::TimeZoneInfo::get_DisplayName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"get_DisplayName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::TimeSpan System::TimeZoneInfo::get_BaseUtcOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"get_BaseUtcOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline ::System::TimeZoneInfo_AdjustmentRule* System::TimeZoneInfo::GetPreviousAdjustmentRule(::System::TimeZoneInfo_AdjustmentRule*  rule, ::System::Nullable_1<int32_t>  ruleIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetPreviousAdjustmentRule", {}, {::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(), ::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo_AdjustmentRule*>(this, ___internal_method, rule, ruleIndex);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetUtcOffset(::System::DateTime  dateTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetUtcOffset", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method, dateTime);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetLocalUtcOffset(::System::DateTime  dateTime, ::System::TimeZoneInfoOptions  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetLocalUtcOffset", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfoOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, dateTime, flags);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetUtcOffset(::System::DateTime  dateTime, ::System::TimeZoneInfoOptions  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetUtcOffset", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfoOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method, dateTime, flags);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetUtcOffset(::System::DateTime  dateTime, ::System::TimeZoneInfoOptions  flags, ::System::TimeZoneInfo_CachedData*  cachedData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetUtcOffset", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfoOptions>(), ::i2c::type_of<::System::TimeZoneInfo_CachedData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method, dateTime, flags, cachedData);
}
inline ::System::DateTime System::TimeZoneInfo::ConvertTime(::System::DateTime  dateTime, ::System::TimeZoneInfo*  sourceTimeZone, ::System::TimeZoneInfo*  destinationTimeZone, ::System::TimeZoneInfoOptions  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"ConvertTime", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo*>(), ::i2c::type_of<::System::TimeZoneInfo*>(), ::i2c::type_of<::System::TimeZoneInfoOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, dateTime, sourceTimeZone, destinationTimeZone, flags);
}
inline ::System::DateTime System::TimeZoneInfo::ConvertTime(::System::DateTime  dateTime, ::System::TimeZoneInfo*  sourceTimeZone, ::System::TimeZoneInfo*  destinationTimeZone, ::System::TimeZoneInfoOptions  flags, ::System::TimeZoneInfo_CachedData*  cachedData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"ConvertTime", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo*>(), ::i2c::type_of<::System::TimeZoneInfo*>(), ::i2c::type_of<::System::TimeZoneInfoOptions>(), ::i2c::type_of<::System::TimeZoneInfo_CachedData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, dateTime, sourceTimeZone, destinationTimeZone, flags, cachedData);
}
inline ::System::DateTime System::TimeZoneInfo::ConvertTimeToUtc(::System::DateTime  dateTime, ::System::TimeZoneInfoOptions  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"ConvertTimeToUtc", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfoOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, dateTime, flags);
}
inline bool System::TimeZoneInfo::Equals(::System::TimeZoneInfo*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"Equals", {}, {::i2c::type_of<::System::TimeZoneInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline bool System::TimeZoneInfo::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::TimeZoneInfo*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::TimeZoneInfo::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::TimeZoneInfo*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::TimeZoneInfo*>* System::TimeZoneInfo::GetSystemTimeZones()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetSystemTimeZones", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::TimeZoneInfo*>*>(nullptr, ___internal_method);
}
inline bool System::TimeZoneInfo::HasSameRules(::System::TimeZoneInfo*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"HasSameRules", {}, {::i2c::type_of<::System::TimeZoneInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::get_Local()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"get_Local", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo*>(nullptr, ___internal_method);
}
inline ::StringW System::TimeZoneInfo::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::TimeZoneInfo*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::get_Utc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"get_Utc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo*>(nullptr, ___internal_method);
}
inline void System::TimeZoneInfo::_ctor(::StringW  id, ::System::TimeSpan  baseUtcOffset, ::StringW  displayName, ::StringW  standardDisplayName, ::StringW  daylightDisplayName, ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>  adjustmentRules, bool  disableDaylightSavingTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, baseUtcOffset, displayName, standardDisplayName, daylightDisplayName, adjustmentRules, disableDaylightSavingTime);
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::CreateCustomTimeZone(::StringW  id, ::System::TimeSpan  baseUtcOffset, ::StringW  displayName, ::StringW  standardDisplayName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"CreateCustomTimeZone", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo*>(nullptr, ___internal_method, id, baseUtcOffset, displayName, standardDisplayName);
}
inline void System::TimeZoneInfo::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender);
}
inline void System::TimeZoneInfo::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"System.Runtime.Serialization.ISerializable.GetObjectData", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::TimeZoneInfo::_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::TimeZoneInfo_AdjustmentRule* System::TimeZoneInfo::GetAdjustmentRuleForTime(::System::DateTime  dateTime, ::by_ref<::System::Nullable_1<int32_t>>  ruleIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetAdjustmentRuleForTime", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::by_ref<::System::Nullable_1<int32_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo_AdjustmentRule*>(this, ___internal_method, dateTime, ruleIndex);
}
inline ::System::TimeZoneInfo_AdjustmentRule* System::TimeZoneInfo::GetAdjustmentRuleForTime(::System::DateTime  dateTime, bool  dateTimeisUtc, ::by_ref<::System::Nullable_1<int32_t>>  ruleIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetAdjustmentRuleForTime", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Nullable_1<int32_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo_AdjustmentRule*>(this, ___internal_method, dateTime, dateTimeisUtc, ruleIndex);
}
inline int32_t System::TimeZoneInfo::CompareAdjustmentRuleToDateTime(::System::TimeZoneInfo_AdjustmentRule*  rule, ::System::TimeZoneInfo_AdjustmentRule*  previousRule, ::System::DateTime  dateTime, ::System::DateTime  dateOnly, bool  dateTimeisUtc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"CompareAdjustmentRuleToDateTime", {}, {::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, rule, previousRule, dateTime, dateOnly, dateTimeisUtc);
}
inline ::System::DateTime System::TimeZoneInfo::ConvertToUtc(::System::DateTime  dateTime, ::System::TimeSpan  daylightDelta, ::System::TimeSpan  baseUtcOffsetDelta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"ConvertToUtc", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, dateTime, daylightDelta, baseUtcOffsetDelta);
}
inline ::System::DateTime System::TimeZoneInfo::ConvertFromUtc(::System::DateTime  dateTime, ::System::TimeSpan  daylightDelta, ::System::TimeSpan  baseUtcOffsetDelta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"ConvertFromUtc", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, dateTime, daylightDelta, baseUtcOffsetDelta);
}
inline ::System::DateTime System::TimeZoneInfo::ConvertToFromUtc(::System::DateTime  dateTime, ::System::TimeSpan  daylightDelta, ::System::TimeSpan  baseUtcOffsetDelta, bool  convertToUtc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"ConvertToFromUtc", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, dateTime, daylightDelta, baseUtcOffsetDelta, convertToUtc);
}
inline ::System::DateTime System::TimeZoneInfo::ConvertUtcToTimeZone(int64_t  ticks, ::System::TimeZoneInfo*  destinationTimeZone, ::by_ref<bool>  isAmbiguousLocalDst)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"ConvertUtcToTimeZone", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::System::TimeZoneInfo*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, ticks, destinationTimeZone, isAmbiguousLocalDst);
}
inline ::System::Globalization::DaylightTimeStruct System::TimeZoneInfo::GetDaylightTime(int32_t  year, ::System::TimeZoneInfo_AdjustmentRule*  rule, ::System::Nullable_1<int32_t>  ruleIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetDaylightTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(), ::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::DaylightTimeStruct>(this, ___internal_method, year, rule, ruleIndex);
}
inline bool System::TimeZoneInfo::GetIsDaylightSavings(::System::DateTime  time, ::System::TimeZoneInfo_AdjustmentRule*  rule, ::System::Globalization::DaylightTimeStruct  daylightTime, ::System::TimeZoneInfoOptions  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetIsDaylightSavings", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(), ::i2c::type_of<::System::Globalization::DaylightTimeStruct>(), ::i2c::type_of<::System::TimeZoneInfoOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, time, rule, daylightTime, flags);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetDaylightSavingsStartOffsetFromUtc(::System::TimeSpan  baseUtcOffset, ::System::TimeZoneInfo_AdjustmentRule*  rule, ::System::Nullable_1<int32_t>  ruleIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetDaylightSavingsStartOffsetFromUtc", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(), ::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method, baseUtcOffset, rule, ruleIndex);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetDaylightSavingsEndOffsetFromUtc(::System::TimeSpan  baseUtcOffset, ::System::TimeZoneInfo_AdjustmentRule*  rule)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetDaylightSavingsEndOffsetFromUtc", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method, baseUtcOffset, rule);
}
inline bool System::TimeZoneInfo::GetIsDaylightSavingsFromUtc(::System::DateTime  time, int32_t  year, ::System::TimeSpan  utc, ::System::TimeZoneInfo_AdjustmentRule*  rule, ::System::Nullable_1<int32_t>  ruleIndex, ::by_ref<bool>  isAmbiguousLocalDst, ::System::TimeZoneInfo*  zone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetIsDaylightSavingsFromUtc", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::System::TimeZoneInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, time, year, utc, rule, ruleIndex, isAmbiguousLocalDst, zone);
}
inline bool System::TimeZoneInfo::CheckIsDst(::System::DateTime  startTime, ::System::DateTime  time, ::System::DateTime  endTime, bool  ignoreYearAdjustment, ::System::TimeZoneInfo_AdjustmentRule*  rule)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"CheckIsDst", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, startTime, time, endTime, ignoreYearAdjustment, rule);
}
inline bool System::TimeZoneInfo::GetIsAmbiguousTime(::System::DateTime  time, ::System::TimeZoneInfo_AdjustmentRule*  rule, ::System::Globalization::DaylightTimeStruct  daylightTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetIsAmbiguousTime", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(), ::i2c::type_of<::System::Globalization::DaylightTimeStruct>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, time, rule, daylightTime);
}
inline bool System::TimeZoneInfo::GetIsInvalidTime(::System::DateTime  time, ::System::TimeZoneInfo_AdjustmentRule*  rule, ::System::Globalization::DaylightTimeStruct  daylightTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetIsInvalidTime", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(), ::i2c::type_of<::System::Globalization::DaylightTimeStruct>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, time, rule, daylightTime);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetUtcOffset(::System::DateTime  time, ::System::TimeZoneInfo*  zone, ::System::TimeZoneInfoOptions  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetUtcOffset", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo*>(), ::i2c::type_of<::System::TimeZoneInfoOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, time, zone, flags);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetUtcOffsetFromUtc(::System::DateTime  time, ::System::TimeZoneInfo*  zone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetUtcOffsetFromUtc", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, time, zone);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetUtcOffsetFromUtc(::System::DateTime  time, ::System::TimeZoneInfo*  zone, ::by_ref<bool>  isDaylightSavings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetUtcOffsetFromUtc", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, time, zone, isDaylightSavings);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetUtcOffsetFromUtc(::System::DateTime  time, ::System::TimeZoneInfo*  zone, ::by_ref<bool>  isDaylightSavings, ::by_ref<bool>  isAmbiguousLocalDst)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetUtcOffsetFromUtc", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo*>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, time, zone, isDaylightSavings, isAmbiguousLocalDst);
}
inline ::System::DateTime System::TimeZoneInfo::TransitionTimeToDateTime(int32_t  year, ::System::TimeZoneInfo_TransitionTime  transitionTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"TransitionTimeToDateTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, year, transitionTime);
}
inline ::System::TimeZoneInfo_TimeZoneInfoResult System::TimeZoneInfo::TryGetTimeZone(::StringW  id, bool  dstDisabled, ::by_ref<::System::TimeZoneInfo*>  value, ::by_ref<::System::Exception*>  e, ::System::TimeZoneInfo_CachedData*  cachedData, bool  alwaysFallbackToLocalMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"TryGetTimeZone", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::TimeZoneInfo*>>(), ::i2c::type_of<::by_ref<::System::Exception*>>(), ::i2c::type_of<::System::TimeZoneInfo_CachedData*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo_TimeZoneInfoResult>(nullptr, ___internal_method, id, dstDisabled, value, e, cachedData, alwaysFallbackToLocalMachine);
}
inline ::System::TimeZoneInfo_TimeZoneInfoResult System::TimeZoneInfo::TryGetTimeZoneFromLocalMachine(::StringW  id, bool  dstDisabled, ::by_ref<::System::TimeZoneInfo*>  value, ::by_ref<::System::Exception*>  e, ::System::TimeZoneInfo_CachedData*  cachedData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"TryGetTimeZoneFromLocalMachine", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::TimeZoneInfo*>>(), ::i2c::type_of<::by_ref<::System::Exception*>>(), ::i2c::type_of<::System::TimeZoneInfo_CachedData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo_TimeZoneInfoResult>(nullptr, ___internal_method, id, dstDisabled, value, e, cachedData);
}
inline void System::TimeZoneInfo::ValidateTimeZoneInfo(::StringW  id, ::System::TimeSpan  baseUtcOffset, ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>  adjustmentRules, ::by_ref<bool>  adjustmentRulesSupportDst)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"ValidateTimeZoneInfo", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, id, baseUtcOffset, adjustmentRules, adjustmentRulesSupportDst);
}
inline bool System::TimeZoneInfo::UtcOffsetOutOfRange(::System::TimeSpan  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"UtcOffsetOutOfRange", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, offset);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetUtcOffset(::System::TimeSpan  baseUtcOffset, ::System::TimeZoneInfo_AdjustmentRule*  adjustmentRule)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"GetUtcOffset", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, baseUtcOffset, adjustmentRule);
}
inline bool System::TimeZoneInfo::IsValidAdjustmentRuleOffest(::System::TimeSpan  baseUtcOffset, ::System::TimeZoneInfo_AdjustmentRule*  adjustmentRule)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {"IsValidAdjustmentRuleOffest", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, baseUtcOffset, adjustmentRule);
}
inline void System::TimeZoneInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::New_ctor(::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>  zone, bool  dstDisabled)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TimeZoneInfo*>(zone, dstDisabled));
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::New_ctor(::StringW  id, ::System::TimeSpan  baseUtcOffset, ::StringW  displayName, ::StringW  standardDisplayName, ::StringW  daylightDisplayName, ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>  adjustmentRules, bool  disableDaylightSavingTime)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TimeZoneInfo*>(id, baseUtcOffset, displayName, standardDisplayName, daylightDisplayName, adjustmentRules, disableDaylightSavingTime));
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TimeZoneInfo*>(info, context));
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TimeZoneInfo*>());
}
/// @brief Convert operator to "::System::IEquatable_1<::System::TimeZoneInfo*>"
constexpr  System::TimeZoneInfo::operator ::System::IEquatable_1<::System::TimeZoneInfo*>*() noexcept {
return static_cast<::System::IEquatable_1<::System::TimeZoneInfo*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::System::TimeZoneInfo*>"
constexpr ::System::IEquatable_1<::System::TimeZoneInfo*>* System::TimeZoneInfo::i___System__IEquatable_1___System__TimeZoneInfo__() noexcept {
return static_cast<::System::IEquatable_1<::System::TimeZoneInfo*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr  System::TimeZoneInfo::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::TimeZoneInfo::i___System__Runtime__Serialization__ISerializable() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr  System::TimeZoneInfo::operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept {
return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr ::System::Runtime::Serialization::IDeserializationCallback* System::TimeZoneInfo::i___System__Runtime__Serialization__IDeserializationCallback() noexcept {
return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::TimeZoneInfo::TimeZoneInfo()   {
}
