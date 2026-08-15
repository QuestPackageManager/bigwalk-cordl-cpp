#pragma once
// IWYU pragma private; include "System/TimeZoneInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Interop_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__DayOfWeek_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeZoneInfo)
namespace GlobalNamespace {
struct Kernel32_Interop_REG_TZI_FORMAT;
}
namespace GlobalNamespace {
struct Kernel32_Interop_TIME_ZONE_INFORMATION;
}
namespace Microsoft::Win32 {
class RegistryKey;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
namespace System::Globalization {
struct DaylightTimeStruct;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System {
struct DateTimeKind;
}
namespace System {
struct DateTime;
}
namespace System {
struct DayOfWeek;
}
namespace System {
class Exception;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
template<typename T>
class Lazy_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace System {
struct TimeZoneInfoOptions;
}
namespace System {
class TimeZoneInfo_AdjustmentRule;
}
namespace System {
class TimeZoneInfo_CachedData;
}
namespace System {
struct TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION;
}
namespace System {
class TimeZoneInfo_OffsetAndRule;
}
namespace System {
struct TimeZoneInfo_TimeZoneInfoResult;
}
namespace System {
struct TimeZoneInfo_TransitionTime;
}
namespace System {
class TimeZoneInfo___c;
}
// Forward declare root types
namespace System {
struct TimeZoneInfo_TimeZoneInfoResult;
}
namespace System {
class TimeZoneInfo;
}
namespace System {
class TimeZoneInfo_AdjustmentRule;
}
namespace System {
class TimeZoneInfo_CachedData;
}
namespace System {
class TimeZoneInfo_OffsetAndRule;
}
namespace System {
class TimeZoneInfo___c;
}
namespace System {
struct TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION;
}
namespace System {
struct TimeZoneInfo_TransitionTime;
}
// Write type traits
MARK_VAL_T(::System::TimeZoneInfo_TimeZoneInfoResult);
MARK_REF_T(::System::TimeZoneInfo*);
MARK_REF_T(::System::TimeZoneInfo_AdjustmentRule*);
MARK_REF_T(::System::TimeZoneInfo_CachedData*);
MARK_REF_T(::System::TimeZoneInfo_OffsetAndRule*);
MARK_REF_T(::System::TimeZoneInfo___c*);
MARK_VAL_T(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION);
MARK_VAL_T(::System::TimeZoneInfo_TransitionTime);
DEFINE_IL2CPP_CLASS(::System::TimeZoneInfo_TimeZoneInfoResult, "System", "TimeZoneInfo/TimeZoneInfoResult");
DEFINE_IL2CPP_CLASS(::System::TimeZoneInfo*, "System", "TimeZoneInfo");
DEFINE_IL2CPP_CLASS(::System::TimeZoneInfo_AdjustmentRule*, "System", "TimeZoneInfo/AdjustmentRule");
DEFINE_IL2CPP_CLASS(::System::TimeZoneInfo_CachedData*, "System", "TimeZoneInfo/CachedData");
DEFINE_IL2CPP_CLASS(::System::TimeZoneInfo_OffsetAndRule*, "System", "TimeZoneInfo/OffsetAndRule");
DEFINE_IL2CPP_CLASS(::System::TimeZoneInfo___c*, "System", "TimeZoneInfo/<>c");
DEFINE_IL2CPP_CLASS(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION, "System", "TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION");
DEFINE_IL2CPP_CLASS(::System::TimeZoneInfo_TransitionTime, "System", "TimeZoneInfo/TransitionTime");
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.TimeZoneInfo/CachedData
class CORDL_TYPE TimeZoneInfo_CachedData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Local)) ::System::TimeZoneInfo*  Local;

/// @brief Field _allSystemTimeZonesRead, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__allSystemTimeZonesRead, put=__cordl_internal_set__allSystemTimeZonesRead)) bool  _allSystemTimeZonesRead;

/// @brief Field _localTimeZone, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__localTimeZone, put=__cordl_internal_set__localTimeZone)) ::System::TimeZoneInfo*  _localTimeZone;

/// @brief Field _oneYearLocalFromUtc, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__oneYearLocalFromUtc, put=__cordl_internal_set__oneYearLocalFromUtc)) ::System::TimeZoneInfo_OffsetAndRule*  _oneYearLocalFromUtc;

/// @brief Field _readOnlySystemTimeZones, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__readOnlySystemTimeZones, put=__cordl_internal_set__readOnlySystemTimeZones)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::TimeZoneInfo*>*  _readOnlySystemTimeZones;

/// @brief Field _systemTimeZones, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__systemTimeZones, put=__cordl_internal_set__systemTimeZones)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::TimeZoneInfo*>*  _systemTimeZones;

/// @brief Method CreateLocal, addr 0x18169d940, size 0x140, virtual false, abstract: false, final false
inline ::System::TimeZoneInfo* CreateLocal() ;

/// @brief Method GetCorrespondingKind, addr 0x18169da80, size 0x70, virtual false, abstract: false, final false
inline ::System::DateTimeKind GetCorrespondingKind(::System::TimeZoneInfo*  timeZone) ;

/// @brief Method GetCurrentOneYearLocal, addr 0x18169daf0, size 0x90, virtual false, abstract: false, final false
static inline ::System::TimeZoneInfo* GetCurrentOneYearLocal() ;

/// @brief Method GetOneYearLocalFromUtc, addr 0x18169db80, size 0x130, virtual false, abstract: false, final false
inline ::System::TimeZoneInfo_OffsetAndRule* GetOneYearLocalFromUtc(int32_t  year) ;

static inline ::System::TimeZoneInfo_CachedData* New_ctor() ;

constexpr bool const& __cordl_internal_get__allSystemTimeZonesRead() const;

constexpr bool& __cordl_internal_get__allSystemTimeZonesRead() ;

constexpr ::System::TimeZoneInfo* const& __cordl_internal_get__localTimeZone() const;

constexpr ::System::TimeZoneInfo*& __cordl_internal_get__localTimeZone() ;

constexpr ::System::TimeZoneInfo_OffsetAndRule* const& __cordl_internal_get__oneYearLocalFromUtc() const;

constexpr ::System::TimeZoneInfo_OffsetAndRule*& __cordl_internal_get__oneYearLocalFromUtc() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::TimeZoneInfo*>* const& __cordl_internal_get__readOnlySystemTimeZones() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::TimeZoneInfo*>*& __cordl_internal_get__readOnlySystemTimeZones() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::TimeZoneInfo*>* const& __cordl_internal_get__systemTimeZones() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::TimeZoneInfo*>*& __cordl_internal_get__systemTimeZones() ;

constexpr void __cordl_internal_set__allSystemTimeZonesRead(bool  value) ;

constexpr void __cordl_internal_set__localTimeZone(::System::TimeZoneInfo*  value) ;

constexpr void __cordl_internal_set__oneYearLocalFromUtc(::System::TimeZoneInfo_OffsetAndRule*  value) ;

constexpr void __cordl_internal_set__readOnlySystemTimeZones(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::TimeZoneInfo*>*  value) ;

constexpr void __cordl_internal_set__systemTimeZones(::System::Collections::Generic::Dictionary_2<::StringW,::System::TimeZoneInfo*>*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Local, addr 0x18169dcb0, size 0x20, virtual false, abstract: false, final false
inline ::System::TimeZoneInfo* get_Local() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeZoneInfo_CachedData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeZoneInfo_CachedData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeZoneInfo_CachedData(TimeZoneInfo_CachedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeZoneInfo_CachedData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeZoneInfo_CachedData(TimeZoneInfo_CachedData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{143};

/// @brief Field _oneYearLocalFromUtc, offset: 0x10, size: 0x8, def value: None
 ::System::TimeZoneInfo_OffsetAndRule*  ____oneYearLocalFromUtc;

/// @brief Field _localTimeZone, offset: 0x18, size: 0x8, def value: None
 ::System::TimeZoneInfo*  ____localTimeZone;

/// @brief Field _systemTimeZones, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::TimeZoneInfo*>*  ____systemTimeZones;

/// @brief Field _readOnlySystemTimeZones, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::TimeZoneInfo*>*  ____readOnlySystemTimeZones;

/// @brief Field _allSystemTimeZonesRead, offset: 0x30, size: 0x1, def value: None
 bool  ____allSystemTimeZonesRead;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::TimeZoneInfo_CachedData, ____oneYearLocalFromUtc) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_CachedData, ____localTimeZone) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_CachedData, ____systemTimeZones) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_CachedData, ____readOnlySystemTimeZones) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_CachedData, ____allSystemTimeZonesRead) == 0x30, "Offset mismatch!");

static_assert(sizeof(::System::TimeZoneInfo_CachedData) == 0x38, "Size mismatch!");

} // namespace end def System
// Dependencies System.Object, System.TimeSpan
namespace System {
// Is value type: false
// CS Name: System.TimeZoneInfo/OffsetAndRule
class CORDL_TYPE TimeZoneInfo_OffsetAndRule : public ::System::Object {
public:
// Declarations
/// @brief Field Offset, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Offset, put=__cordl_internal_set_Offset)) ::System::TimeSpan  Offset;

/// @brief Field Rule, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Rule, put=__cordl_internal_set_Rule)) ::System::TimeZoneInfo_AdjustmentRule*  Rule;

/// @brief Field Year, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Year, put=__cordl_internal_set_Year)) int32_t  Year;

static inline ::System::TimeZoneInfo_OffsetAndRule* New_ctor(int32_t  year, ::System::TimeSpan  offset, ::System::TimeZoneInfo_AdjustmentRule*  rule) ;

constexpr ::System::TimeSpan const& __cordl_internal_get_Offset() const;

constexpr ::System::TimeSpan& __cordl_internal_get_Offset() ;

constexpr ::System::TimeZoneInfo_AdjustmentRule* const& __cordl_internal_get_Rule() const;

constexpr ::System::TimeZoneInfo_AdjustmentRule*& __cordl_internal_get_Rule() ;

constexpr int32_t const& __cordl_internal_get_Year() const;

constexpr int32_t& __cordl_internal_get_Year() ;

constexpr void __cordl_internal_set_Offset(::System::TimeSpan  value) ;

constexpr void __cordl_internal_set_Rule(::System::TimeZoneInfo_AdjustmentRule*  value) ;

constexpr void __cordl_internal_set_Year(int32_t  value) ;

/// @brief Method .ctor, addr 0x1816a4250, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  year, ::System::TimeSpan  offset, ::System::TimeZoneInfo_AdjustmentRule*  rule) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeZoneInfo_OffsetAndRule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeZoneInfo_OffsetAndRule", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeZoneInfo_OffsetAndRule(TimeZoneInfo_OffsetAndRule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeZoneInfo_OffsetAndRule", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeZoneInfo_OffsetAndRule(TimeZoneInfo_OffsetAndRule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{144};

/// @brief Field Year, offset: 0x10, size: 0x4, def value: None
 int32_t  ___Year;

/// @brief Field Offset, offset: 0x18, size: 0x8, def value: None
 ::System::TimeSpan  ___Offset;

/// @brief Field Rule, offset: 0x20, size: 0x8, def value: None
 ::System::TimeZoneInfo_AdjustmentRule*  ___Rule;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::TimeZoneInfo_OffsetAndRule, ___Year) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_OffsetAndRule, ___Offset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_OffsetAndRule, ___Rule) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::TimeZoneInfo_OffsetAndRule) == 0x28, "Size mismatch!");

} // namespace end def System
// Dependencies Interop::Kernel32::TIME_ZONE_INFORMATION
namespace System {
// Is value type: true
// CS Name: System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION
struct CORDL_TYPE TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION() ;

// Ctor Parameters [CppParam { name: "TZI", ty: "::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION", modifiers: "", def_value: None }, CppParam { name: "TimeZoneKeyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "DynamicDaylightTimeDisabled", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION(::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION  TZI, ::StringW  TimeZoneKeyName, uint8_t  DynamicDaylightTimeDisabled) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{145};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc0};

/// @brief Field TZI, offset: 0x0, size: 0xac, def value: None
 ::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION  TZI;

/// @brief Field TimeZoneKeyName, offset: 0xb0, size: 0x8, def value: None
 ::StringW  TimeZoneKeyName;

/// @brief Field DynamicDaylightTimeDisabled, offset: 0xb8, size: 0x1, def value: None
 uint8_t  DynamicDaylightTimeDisabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION, TZI) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION, TimeZoneKeyName) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION, DynamicDaylightTimeDisabled) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION) == 0xc0, "Size mismatch!");

} // namespace end def System
// Dependencies 
namespace System {
// Is value type: true
// CS Name: System.TimeZoneInfo/TimeZoneInfoResult
struct CORDL_TYPE TimeZoneInfo_TimeZoneInfoResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TimeZoneInfo_TimeZoneInfoResult_Unwrapped
enum struct __TimeZoneInfo_TimeZoneInfoResult_Unwrapped : int32_t {
__E_Success = static_cast<int32_t>(0x0),
__E_TimeZoneNotFoundException = static_cast<int32_t>(0x1),
__E_InvalidTimeZoneException = static_cast<int32_t>(0x2),
__E_SecurityException = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TimeZoneInfo_TimeZoneInfoResult_Unwrapped () const noexcept {
return static_cast<__TimeZoneInfo_TimeZoneInfoResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TimeZoneInfo_TimeZoneInfoResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TimeZoneInfo_TimeZoneInfoResult(int32_t  value__) noexcept;

/// @brief Field InvalidTimeZoneException value: I32(2)
static ::System::TimeZoneInfo_TimeZoneInfoResult const InvalidTimeZoneException;

/// @brief Field SecurityException value: I32(3)
static ::System::TimeZoneInfo_TimeZoneInfoResult const SecurityException;

/// @brief Field Success value: I32(0)
static ::System::TimeZoneInfo_TimeZoneInfoResult const Success;

/// @brief Field TimeZoneNotFoundException value: I32(1)
static ::System::TimeZoneInfo_TimeZoneInfoResult const TimeZoneNotFoundException;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{146};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::TimeZoneInfo_TimeZoneInfoResult, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::System::TimeZoneInfo_TimeZoneInfoResult) == 0x4, "Size mismatch!");

} // namespace end def System
// Dependencies System.DateTime, System.DayOfWeek
namespace System {
// Is value type: true
// CS Name: System.TimeZoneInfo/TransitionTime
struct CORDL_TYPE TimeZoneInfo_TransitionTime {
public:
// Declarations
 __declspec(property(get=get_Day)) int32_t  Day;

 __declspec(property(get=get_DayOfWeek)) ::System::DayOfWeek  DayOfWeek;

 __declspec(property(get=get_IsFixedDateRule)) bool  IsFixedDateRule;

 __declspec(property(get=get_Month)) int32_t  Month;

 __declspec(property(get=get_TimeOfDay)) ::System::DateTime  TimeOfDay;

 __declspec(property(get=get_Week)) int32_t  Week;

/// @brief Convert operator to "::System::IEquatable_1<::System::TimeZoneInfo_TransitionTime>"
constexpr operator  ::System::IEquatable_1<::System::TimeZoneInfo_TransitionTime>*() ;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() ;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() ;

/// @brief Method CreateFixedDateRule, addr 0x1816ad3e0, size 0x80, virtual false, abstract: false, final false
static inline ::System::TimeZoneInfo_TransitionTime CreateFixedDateRule(::System::DateTime  timeOfDay, int32_t  month, int32_t  day) ;

/// @brief Method CreateFloatingDateRule, addr 0x1816ad460, size 0x90, virtual false, abstract: false, final false
static inline ::System::TimeZoneInfo_TransitionTime CreateFloatingDateRule(::System::DateTime  timeOfDay, int32_t  month, int32_t  week, ::System::DayOfWeek  dayOfWeek) ;

/// @brief Method Equals, addr 0x1816ad4f0, size 0x120, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1816ad610, size 0xb0, virtual true, abstract: false, final true
inline bool Equals(::System::TimeZoneInfo_TransitionTime  other) ;

/// @brief Method GetHashCode, addr 0x1816ad6c0, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization, addr 0x1816ad6e0, size 0xa0, virtual true, abstract: false, final true
inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x1816ad780, size 0x100, virtual true, abstract: false, final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method ValidateTransitionTime, addr 0x1816ad880, size 0x190, virtual false, abstract: false, final false
static inline void ValidateTransitionTime(::System::DateTime  timeOfDay, int32_t  month, int32_t  week, int32_t  day, ::System::DayOfWeek  dayOfWeek) ;

/// @brief Method .ctor, addr 0x1816adab0, size 0x2a0, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0x1816ada10, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::DateTime  timeOfDay, int32_t  month, int32_t  week, int32_t  day, ::System::DayOfWeek  dayOfWeek, bool  isFixedDateRule) ;

/// @brief Method get_Day, addr 0x181699680, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Day() ;

/// @brief Method get_DayOfWeek, addr 0x1803bdb30, size 0x10, virtual false, abstract: false, final false
inline ::System::DayOfWeek get_DayOfWeek() ;

/// @brief Method get_IsFixedDateRule, addr 0x180392490, size 0x10, virtual false, abstract: false, final false
inline bool get_IsFixedDateRule() ;

/// @brief Method get_Month, addr 0x1803bd9e0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Month() ;

/// @brief Method get_TimeOfDay, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::DateTime get_TimeOfDay() ;

/// @brief Method get_Week, addr 0x1803bd9f0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Week() ;

/// @brief Convert to "::System::IEquatable_1<::System::TimeZoneInfo_TransitionTime>"
constexpr ::System::IEquatable_1<::System::TimeZoneInfo_TransitionTime>* i___System__IEquatable_1___System__TimeZoneInfo_TransitionTime_() ;

/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback() ;

/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() ;

/// @brief Method op_Inequality, addr 0x1816add50, size 0xf0, virtual false, abstract: false, final false
static inline bool op_Inequality(::System::TimeZoneInfo_TransitionTime  t1, ::System::TimeZoneInfo_TransitionTime  t2) ;

// Ctor Parameters []
// @brief default ctor
constexpr TimeZoneInfo_TransitionTime() ;

// Ctor Parameters [CppParam { name: "_timeOfDay", ty: "::System::DateTime", modifiers: "", def_value: None }, CppParam { name: "_month", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_week", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_day", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_dayOfWeek", ty: "::System::DayOfWeek", modifiers: "", def_value: None }, CppParam { name: "_isFixedDateRule", ty: "bool", modifiers: "", def_value: None }]
constexpr TimeZoneInfo_TransitionTime(::System::DateTime  _timeOfDay, uint8_t  _month, uint8_t  _week, uint8_t  _day, ::System::DayOfWeek  _dayOfWeek, bool  _isFixedDateRule) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{148};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _timeOfDay, offset: 0x0, size: 0x8, def value: None
 ::System::DateTime  _timeOfDay;

/// @brief Field _month, offset: 0x8, size: 0x1, def value: None
 uint8_t  _month;

/// @brief Field _week, offset: 0x9, size: 0x1, def value: None
 uint8_t  _week;

/// @brief Field _day, offset: 0xa, size: 0x1, def value: None
 uint8_t  _day;

/// @brief Field _dayOfWeek, offset: 0xc, size: 0x4, def value: None
 ::System::DayOfWeek  _dayOfWeek;

/// @brief Field _isFixedDateRule, offset: 0x10, size: 0x1, def value: None
 bool  _isFixedDateRule;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::TimeZoneInfo_TransitionTime, _timeOfDay) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_TransitionTime, _month) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_TransitionTime, _week) == 0x9, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_TransitionTime, _day) == 0xa, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_TransitionTime, _dayOfWeek) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_TransitionTime, _isFixedDateRule) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::TimeZoneInfo_TransitionTime) == 0x18, "Size mismatch!");

} // namespace end def System
// Dependencies System.DateTime, System.Object, System.TimeSpan, System.TimeZoneInfo::TransitionTime
namespace System {
// Is value type: false
// CS Name: System.TimeZoneInfo/AdjustmentRule
class CORDL_TYPE TimeZoneInfo_AdjustmentRule : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_BaseUtcOffsetDelta)) ::System::TimeSpan  BaseUtcOffsetDelta;

 __declspec(property(get=get_DateEnd)) ::System::DateTime  DateEnd;

 __declspec(property(get=get_DateStart)) ::System::DateTime  DateStart;

 __declspec(property(get=get_DaylightDelta)) ::System::TimeSpan  DaylightDelta;

 __declspec(property(get=get_DaylightTransitionEnd)) ::System::TimeZoneInfo_TransitionTime  DaylightTransitionEnd;

 __declspec(property(get=get_DaylightTransitionStart)) ::System::TimeZoneInfo_TransitionTime  DaylightTransitionStart;

 __declspec(property(get=get_HasDaylightSaving)) bool  HasDaylightSaving;

 __declspec(property(get=get_NoDaylightTransitions)) bool  NoDaylightTransitions;

/// @brief Field _baseUtcOffsetDelta, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__baseUtcOffsetDelta, put=__cordl_internal_set__baseUtcOffsetDelta)) ::System::TimeSpan  _baseUtcOffsetDelta;

/// @brief Field _dateEnd, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__dateEnd, put=__cordl_internal_set__dateEnd)) ::System::DateTime  _dateEnd;

/// @brief Field _dateStart, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__dateStart, put=__cordl_internal_set__dateStart)) ::System::DateTime  _dateStart;

/// @brief Field _daylightDelta, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__daylightDelta, put=__cordl_internal_set__daylightDelta)) ::System::TimeSpan  _daylightDelta;

/// @brief Field _daylightTransitionEnd, offset 0x40, size 0x18 
 __declspec(property(get=__cordl_internal_get__daylightTransitionEnd, put=__cordl_internal_set__daylightTransitionEnd)) ::System::TimeZoneInfo_TransitionTime  _daylightTransitionEnd;

/// @brief Field _daylightTransitionStart, offset 0x28, size 0x18 
 __declspec(property(get=__cordl_internal_get__daylightTransitionStart, put=__cordl_internal_set__daylightTransitionStart)) ::System::TimeZoneInfo_TransitionTime  _daylightTransitionStart;

/// @brief Field _noDaylightTransitions, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__noDaylightTransitions, put=__cordl_internal_set__noDaylightTransitions)) bool  _noDaylightTransitions;

/// @brief Convert operator to "::System::IEquatable_1<::System::TimeZoneInfo_AdjustmentRule*>"
constexpr operator  ::System::IEquatable_1<::System::TimeZoneInfo_AdjustmentRule*>*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Method CreateAdjustmentRule, addr 0x1816996c0, size 0x110, virtual false, abstract: false, final false
static inline ::System::TimeZoneInfo_AdjustmentRule* CreateAdjustmentRule(::System::DateTime  dateStart, ::System::DateTime  dateEnd, ::System::TimeSpan  daylightDelta, ::System::TimeZoneInfo_TransitionTime  daylightTransitionStart, ::System::TimeZoneInfo_TransitionTime  daylightTransitionEnd, ::System::TimeSpan  baseUtcOffsetDelta, bool  noDaylightTransitions) ;

/// @brief Method Equals, addr 0x1816997d0, size 0xe0, virtual true, abstract: false, final true
inline bool Equals(::System::TimeZoneInfo_AdjustmentRule*  other) ;

/// @brief Method GetHashCode, addr 0x1816998b0, size 0x10, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsEndDateMarkerForEndOfYear, addr 0x1816998c0, size 0xd0, virtual false, abstract: false, final false
inline bool IsEndDateMarkerForEndOfYear() ;

/// @brief Method IsStartDateMarkerForBeginningOfYear, addr 0x181699990, size 0xd0, virtual false, abstract: false, final false
inline bool IsStartDateMarkerForBeginningOfYear() ;

static inline ::System::TimeZoneInfo_AdjustmentRule* New_ctor() ;

static inline ::System::TimeZoneInfo_AdjustmentRule* New_ctor(::System::DateTime  dateStart, ::System::DateTime  dateEnd, ::System::TimeSpan  daylightDelta, ::System::TimeZoneInfo_TransitionTime  daylightTransitionStart, ::System::TimeZoneInfo_TransitionTime  daylightTransitionEnd, ::System::TimeSpan  baseUtcOffsetDelta, bool  noDaylightTransitions) ;

static inline ::System::TimeZoneInfo_AdjustmentRule* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization, addr 0x181699a60, size 0xd0, virtual true, abstract: false, final true
inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x181699b30, size 0x150, virtual true, abstract: false, final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method ValidateAdjustmentRule, addr 0x181699c80, size 0x3a0, virtual false, abstract: false, final false
static inline void ValidateAdjustmentRule(::System::DateTime  dateStart, ::System::DateTime  dateEnd, ::System::TimeSpan  daylightDelta, ::System::TimeZoneInfo_TransitionTime  daylightTransitionStart, ::System::TimeZoneInfo_TransitionTime  daylightTransitionEnd, bool  noDaylightTransitions) ;

constexpr ::System::TimeSpan const& __cordl_internal_get__baseUtcOffsetDelta() const;

constexpr ::System::TimeSpan& __cordl_internal_get__baseUtcOffsetDelta() ;

constexpr ::System::DateTime const& __cordl_internal_get__dateEnd() const;

constexpr ::System::DateTime& __cordl_internal_get__dateEnd() ;

constexpr ::System::DateTime const& __cordl_internal_get__dateStart() const;

constexpr ::System::DateTime& __cordl_internal_get__dateStart() ;

constexpr ::System::TimeSpan const& __cordl_internal_get__daylightDelta() const;

constexpr ::System::TimeSpan& __cordl_internal_get__daylightDelta() ;

constexpr ::System::TimeZoneInfo_TransitionTime const& __cordl_internal_get__daylightTransitionEnd() const;

constexpr ::System::TimeZoneInfo_TransitionTime& __cordl_internal_get__daylightTransitionEnd() ;

constexpr ::System::TimeZoneInfo_TransitionTime const& __cordl_internal_get__daylightTransitionStart() const;

constexpr ::System::TimeZoneInfo_TransitionTime& __cordl_internal_get__daylightTransitionStart() ;

constexpr bool const& __cordl_internal_get__noDaylightTransitions() const;

constexpr bool& __cordl_internal_get__noDaylightTransitions() ;

constexpr void __cordl_internal_set__baseUtcOffsetDelta(::System::TimeSpan  value) ;

constexpr void __cordl_internal_set__dateEnd(::System::DateTime  value) ;

constexpr void __cordl_internal_set__dateStart(::System::DateTime  value) ;

constexpr void __cordl_internal_set__daylightDelta(::System::TimeSpan  value) ;

constexpr void __cordl_internal_set__daylightTransitionEnd(::System::TimeZoneInfo_TransitionTime  value) ;

constexpr void __cordl_internal_set__daylightTransitionStart(::System::TimeZoneInfo_TransitionTime  value) ;

constexpr void __cordl_internal_set__noDaylightTransitions(bool  value) ;

/// @brief Method .ctor, addr 0x18169a3f0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x18169a2f0, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::System::DateTime  dateStart, ::System::DateTime  dateEnd, ::System::TimeSpan  daylightDelta, ::System::TimeZoneInfo_TransitionTime  daylightTransitionStart, ::System::TimeZoneInfo_TransitionTime  daylightTransitionEnd, ::System::TimeSpan  baseUtcOffsetDelta, bool  noDaylightTransitions) ;

/// @brief Method .ctor, addr 0x18169a020, size 0x2d0, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method get_BaseUtcOffsetDelta, addr 0x1802e75e0, size 0x10, virtual false, abstract: false, final false
inline ::System::TimeSpan get_BaseUtcOffsetDelta() ;

/// @brief Method get_DateEnd, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::System::DateTime get_DateEnd() ;

/// @brief Method get_DateStart, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::System::DateTime get_DateStart() ;

/// @brief Method get_DaylightDelta, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::System::TimeSpan get_DaylightDelta() ;

/// @brief Method get_DaylightTransitionEnd, addr 0x18169a410, size 0x20, virtual false, abstract: false, final false
inline ::System::TimeZoneInfo_TransitionTime get_DaylightTransitionEnd() ;

/// @brief Method get_DaylightTransitionStart, addr 0x180503b20, size 0x20, virtual false, abstract: false, final false
inline ::System::TimeZoneInfo_TransitionTime get_DaylightTransitionStart() ;

/// @brief Method get_HasDaylightSaving, addr 0x18169a430, size 0x250, virtual false, abstract: false, final false
inline bool get_HasDaylightSaving() ;

/// @brief Method get_NoDaylightTransitions, addr 0x1802e75b0, size 0x10, virtual false, abstract: false, final false
inline bool get_NoDaylightTransitions() ;

/// @brief Convert to "::System::IEquatable_1<::System::TimeZoneInfo_AdjustmentRule*>"
constexpr ::System::IEquatable_1<::System::TimeZoneInfo_AdjustmentRule*>* i___System__IEquatable_1___System__TimeZoneInfo_AdjustmentRule__() noexcept;

/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback() noexcept;

/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeZoneInfo_AdjustmentRule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeZoneInfo_AdjustmentRule", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeZoneInfo_AdjustmentRule(TimeZoneInfo_AdjustmentRule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeZoneInfo_AdjustmentRule", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeZoneInfo_AdjustmentRule(TimeZoneInfo_AdjustmentRule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{147};

/// @brief Field _dateStart, offset: 0x10, size: 0x8, def value: None
 ::System::DateTime  ____dateStart;

/// @brief Field _dateEnd, offset: 0x18, size: 0x8, def value: None
 ::System::DateTime  ____dateEnd;

/// @brief Field _daylightDelta, offset: 0x20, size: 0x8, def value: None
 ::System::TimeSpan  ____daylightDelta;

/// @brief Field _daylightTransitionStart, offset: 0x28, size: 0x18, def value: None
 ::System::TimeZoneInfo_TransitionTime  ____daylightTransitionStart;

/// @brief Field _daylightTransitionEnd, offset: 0x40, size: 0x18, def value: None
 ::System::TimeZoneInfo_TransitionTime  ____daylightTransitionEnd;

/// @brief Field _baseUtcOffsetDelta, offset: 0x58, size: 0x8, def value: None
 ::System::TimeSpan  ____baseUtcOffsetDelta;

/// @brief Field _noDaylightTransitions, offset: 0x60, size: 0x1, def value: None
 bool  ____noDaylightTransitions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::TimeZoneInfo_AdjustmentRule, ____dateStart) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_AdjustmentRule, ____dateEnd) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_AdjustmentRule, ____daylightDelta) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_AdjustmentRule, ____daylightTransitionStart) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_AdjustmentRule, ____daylightTransitionEnd) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_AdjustmentRule, ____baseUtcOffsetDelta) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_AdjustmentRule, ____noDaylightTransitions) == 0x60, "Offset mismatch!");

static_assert(sizeof(::System::TimeZoneInfo_AdjustmentRule) == 0x68, "Size mismatch!");

} // namespace end def System
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.TimeZoneInfo/<>c
class CORDL_TYPE TimeZoneInfo___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::System::TimeZoneInfo___c*  __9;

/// @brief Field <>9__110_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__110_0, put=setStaticF___9__110_0)) ::System::Comparison_1<::System::TimeZoneInfo*>*  __9__110_0;

/// @brief Field <>9__49_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__49_0, put=setStaticF___9__49_0)) ::System::Comparison_1<::System::TimeZoneInfo*>*  __9__49_0;

static inline ::System::TimeZoneInfo___c* New_ctor() ;

/// @brief Method <GetSystemTimeZonesWinRTFallback>b__49_0, addr 0x1816ade40, size 0x70, virtual false, abstract: false, final false
inline int32_t _GetSystemTimeZonesWinRTFallback_b__49_0(::System::TimeZoneInfo*  x, ::System::TimeZoneInfo*  y) ;

/// @brief Method <GetSystemTimeZones>b__110_0, addr 0x1816ade40, size 0x70, virtual false, abstract: false, final false
inline int32_t _GetSystemTimeZones_b__110_0(::System::TimeZoneInfo*  x, ::System::TimeZoneInfo*  y) ;

/// @brief Method <.cctor>b__157_0, addr 0x1816adff0, size 0x90, virtual false, abstract: false, final false
inline bool __cctor_b__157_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::TimeZoneInfo___c* getStaticF___9() ;

static inline ::System::Comparison_1<::System::TimeZoneInfo*>* getStaticF___9__110_0() ;

static inline ::System::Comparison_1<::System::TimeZoneInfo*>* getStaticF___9__49_0() ;

static inline void setStaticF___9(::System::TimeZoneInfo___c*  value) ;

static inline void setStaticF___9__110_0(::System::Comparison_1<::System::TimeZoneInfo*>*  value) ;

static inline void setStaticF___9__49_0(::System::Comparison_1<::System::TimeZoneInfo*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeZoneInfo___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeZoneInfo___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeZoneInfo___c(TimeZoneInfo___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeZoneInfo___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeZoneInfo___c(TimeZoneInfo___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{149};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::TimeZoneInfo___c) == 0x10, "Size mismatch!");

} // namespace end def System
// Dependencies System.DateTime, System.Object, System.TimeSpan, System.TimeZoneInfo::AdjustmentRule
namespace System {
// Is value type: false
// CS Name: System.TimeZoneInfo
class CORDL_TYPE TimeZoneInfo : public ::System::Object {
public:
// Declarations
using AdjustmentRule = ::System::TimeZoneInfo_AdjustmentRule;

using CachedData = ::System::TimeZoneInfo_CachedData;

using DYNAMIC_TIME_ZONE_INFORMATION = ::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION;

using OffsetAndRule = ::System::TimeZoneInfo_OffsetAndRule;

using TimeZoneInfoResult = ::System::TimeZoneInfo_TimeZoneInfoResult;

using TransitionTime = ::System::TimeZoneInfo_TransitionTime;

using __c = ::System::TimeZoneInfo___c;

 __declspec(property(get=get_BaseUtcOffset)) ::System::TimeSpan  BaseUtcOffset;

 __declspec(property(get=get_DisplayName)) ::StringW  DisplayName;

 __declspec(property(get=get_Id)) ::StringW  Id;

/// @brief Field MaxOffset, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MaxOffset, put=setStaticF_MaxOffset)) ::System::TimeSpan  MaxOffset;

/// @brief Field MinOffset, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MinOffset, put=setStaticF_MinOffset)) ::System::TimeSpan  MinOffset;

/// @brief Field _adjustmentRules, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__adjustmentRules, put=__cordl_internal_set__adjustmentRules)) ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>  _adjustmentRules;

/// @brief Field _baseUtcOffset, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__baseUtcOffset, put=__cordl_internal_set__baseUtcOffset)) ::System::TimeSpan  _baseUtcOffset;

/// @brief Field _daylightDisplayName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__daylightDisplayName, put=__cordl_internal_set__daylightDisplayName)) ::StringW  _daylightDisplayName;

/// @brief Field _displayName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__displayName, put=__cordl_internal_set__displayName)) ::StringW  _displayName;

/// @brief Field _id, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__id, put=__cordl_internal_set__id)) ::StringW  _id;

/// @brief Field _standardDisplayName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__standardDisplayName, put=__cordl_internal_set__standardDisplayName)) ::StringW  _standardDisplayName;

/// @brief Field _supportsDaylightSavingTime, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__supportsDaylightSavingTime, put=__cordl_internal_set__supportsDaylightSavingTime)) bool  _supportsDaylightSavingTime;

/// @brief Field lazyHaveRegistry, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_lazyHaveRegistry, put=setStaticF_lazyHaveRegistry)) ::System::Lazy_1<bool>*  lazyHaveRegistry;

/// @brief Field s_cachedData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_cachedData, put=setStaticF_s_cachedData)) ::System::TimeZoneInfo_CachedData*  s_cachedData;

/// @brief Field s_maxDateOnly, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_maxDateOnly, put=setStaticF_s_maxDateOnly)) ::System::DateTime  s_maxDateOnly;

/// @brief Field s_minDateOnly, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_minDateOnly, put=setStaticF_s_minDateOnly)) ::System::DateTime  s_minDateOnly;

/// @brief Field s_utcTimeZone, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_utcTimeZone, put=setStaticF_s_utcTimeZone)) ::System::TimeZoneInfo*  s_utcTimeZone;

/// @brief Convert operator to "::System::IEquatable_1<::System::TimeZoneInfo*>"
constexpr operator  ::System::IEquatable_1<::System::TimeZoneInfo*>*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Method CheckDaylightSavingTimeNotSupported, addr 0x1816a4270, size 0x30, virtual false, abstract: false, final false
static inline bool CheckDaylightSavingTimeNotSupported(::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>  timeZone) ;

/// @brief Method CheckIsDst, addr 0x1816a42a0, size 0x120, virtual false, abstract: false, final false
static inline bool CheckIsDst(::System::DateTime  startTime, ::System::DateTime  time, ::System::DateTime  endTime, bool  ignoreYearAdjustment, ::System::TimeZoneInfo_AdjustmentRule*  rule) ;

/// @brief Method CompareAdjustmentRuleToDateTime, addr 0x1816a43c0, size 0x110, virtual false, abstract: false, final false
inline int32_t CompareAdjustmentRuleToDateTime(::System::TimeZoneInfo_AdjustmentRule*  rule, ::System::TimeZoneInfo_AdjustmentRule*  previousRule, ::System::DateTime  dateTime, ::System::DateTime  dateOnly, bool  dateTimeisUtc) ;

/// @brief Method ConvertFromUtc, addr 0x1816a44d0, size 0x20, virtual false, abstract: false, final false
inline ::System::DateTime ConvertFromUtc(::System::DateTime  dateTime, ::System::TimeSpan  daylightDelta, ::System::TimeSpan  baseUtcOffsetDelta) ;

/// @brief Method ConvertTime, addr 0x1816a45b0, size 0x80, virtual false, abstract: false, final false
static inline ::System::DateTime ConvertTime(::System::DateTime  dateTime, ::System::TimeZoneInfo*  sourceTimeZone, ::System::TimeZoneInfo*  destinationTimeZone, ::System::TimeZoneInfoOptions  flags) ;

/// @brief Method ConvertTime, addr 0x1816a4630, size 0x400, virtual false, abstract: false, final false
static inline ::System::DateTime ConvertTime(::System::DateTime  dateTime, ::System::TimeZoneInfo*  sourceTimeZone, ::System::TimeZoneInfo*  destinationTimeZone, ::System::TimeZoneInfoOptions  flags, ::System::TimeZoneInfo_CachedData*  cachedData) ;

/// @brief Method ConvertTimeToUtc, addr 0x1816a44f0, size 0xc0, virtual false, abstract: false, final false
static inline ::System::DateTime ConvertTimeToUtc(::System::DateTime  dateTime, ::System::TimeZoneInfoOptions  flags) ;

/// @brief Method ConvertToFromUtc, addr 0x1816a4a30, size 0x110, virtual false, abstract: false, final false
inline ::System::DateTime ConvertToFromUtc(::System::DateTime  dateTime, ::System::TimeSpan  daylightDelta, ::System::TimeSpan  baseUtcOffsetDelta, bool  convertToUtc) ;

/// @brief Method ConvertToUtc, addr 0x1816a4b40, size 0x20, virtual false, abstract: false, final false
inline ::System::DateTime ConvertToUtc(::System::DateTime  dateTime, ::System::TimeSpan  daylightDelta, ::System::TimeSpan  baseUtcOffsetDelta) ;

/// @brief Method ConvertUtcToTimeZone, addr 0x1816a4b60, size 0x170, virtual false, abstract: false, final false
static inline ::System::DateTime ConvertUtcToTimeZone(int64_t  ticks, ::System::TimeZoneInfo*  destinationTimeZone, ::by_ref<bool>  isAmbiguousLocalDst) ;

/// @brief Method CreateAdjustmentRuleFromTimeZoneInformation, addr 0x1816a5130, size 0x310, virtual false, abstract: false, final false
static inline ::System::TimeZoneInfo_AdjustmentRule* CreateAdjustmentRuleFromTimeZoneInformation(::by_ref<::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT>  timeZoneInformation, ::System::DateTime  startDate, ::System::DateTime  endDate, int32_t  defaultBaseUtcOffset) ;

/// @brief Method CreateAdjustmentRuleFromTimeZoneInformation, addr 0x1816a4cd0, size 0x460, virtual false, abstract: false, final false
static inline ::System::TimeZoneInfo_AdjustmentRule* CreateAdjustmentRuleFromTimeZoneInformation(::by_ref<::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION>  timeZoneInformation, ::System::DateTime  startDate, ::System::DateTime  endDate, int32_t  defaultBaseUtcOffset) ;

/// @brief Method CreateCustomTimeZone, addr 0x1816a5440, size 0x180, virtual false, abstract: false, final false
static inline ::System::TimeZoneInfo* CreateCustomTimeZone(::StringW  id, ::System::TimeSpan  baseUtcOffset, ::StringW  displayName, ::StringW  standardDisplayName) ;

/// @brief Method EnumDynamicTimeZoneInformation, addr 0x1816a55c0, size 0x160, virtual false, abstract: false, final false
static inline uint32_t EnumDynamicTimeZoneInformation(uint32_t  dwIndex, ::by_ref<::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION>  lpTimeZoneInformation) ;

/// @brief Method Equals, addr 0x1816a5780, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1816a5720, size 0x60, virtual true, abstract: false, final true
inline bool Equals(::System::TimeZoneInfo*  other) ;

/// @brief Method FindIdFromTimeZoneInformation, addr 0x1816a57f0, size 0x140, virtual false, abstract: false, final false
static inline ::StringW FindIdFromTimeZoneInformation(::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>  timeZone, ::by_ref<bool>  dstDisabled) ;

/// @brief Method FindSystemTimeZoneByIdWinRTFallback, addr 0x1816a5930, size 0x200, virtual false, abstract: false, final false
static inline ::System::TimeZoneInfo* FindSystemTimeZoneByIdWinRTFallback(::StringW  id) ;

/// @brief Method GetAdjustmentRuleForTime, addr 0x1816a5b30, size 0x150, virtual false, abstract: false, final false
inline ::System::TimeZoneInfo_AdjustmentRule* GetAdjustmentRuleForTime(::System::DateTime  dateTime, bool  dateTimeisUtc, ::by_ref<::System::Nullable_1<int32_t>>  ruleIndex) ;

/// @brief Method GetAdjustmentRuleForTime, addr 0x1816a5c80, size 0x20, virtual false, abstract: false, final false
inline ::System::TimeZoneInfo_AdjustmentRule* GetAdjustmentRuleForTime(::System::DateTime  dateTime, ::by_ref<::System::Nullable_1<int32_t>>  ruleIndex) ;

/// @brief Method GetDateTimeNowUtcOffsetFromUtc, addr 0x1816a5ca0, size 0x270, virtual false, abstract: false, final false
static inline ::System::TimeSpan GetDateTimeNowUtcOffsetFromUtc(::System::DateTime  time, ::by_ref<bool>  isAmbiguousLocalDst) ;

/// @brief Method GetDaylightSavingsEndOffsetFromUtc, addr 0x1816a5f10, size 0x30, virtual false, abstract: false, final false
inline ::System::TimeSpan GetDaylightSavingsEndOffsetFromUtc(::System::TimeSpan  baseUtcOffset, ::System::TimeZoneInfo_AdjustmentRule*  rule) ;

/// @brief Method GetDaylightSavingsStartOffsetFromUtc, addr 0x1816a5f40, size 0x70, virtual false, abstract: false, final false
inline ::System::TimeSpan GetDaylightSavingsStartOffsetFromUtc(::System::TimeSpan  baseUtcOffset, ::System::TimeZoneInfo_AdjustmentRule*  rule, ::System::Nullable_1<int32_t>  ruleIndex) ;

/// @brief Method GetDaylightTime, addr 0x1816a5fb0, size 0x120, virtual false, abstract: false, final false
inline ::System::Globalization::DaylightTimeStruct GetDaylightTime(int32_t  year, ::System::TimeZoneInfo_AdjustmentRule*  rule, ::System::Nullable_1<int32_t>  ruleIndex) ;

/// @brief Method GetDynamicTimeZoneInformation, addr 0x1816a6250, size 0x160, virtual false, abstract: false, final false
static inline uint32_t GetDynamicTimeZoneInformation(::by_ref<::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION>  pTimeZoneInformation) ;

/// @brief Method GetDynamicTimeZoneInformationEffectiveYears, addr 0x1816a60d0, size 0x180, virtual false, abstract: false, final false
static inline uint32_t GetDynamicTimeZoneInformationEffectiveYears(::by_ref<::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION>  lpTimeZoneInformation, ::by_ref<uint32_t>  FirstYear, ::by_ref<uint32_t>  LastYear) ;

/// @brief Method GetHashCode, addr 0x1816a63b0, size 0x50, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetIsAmbiguousTime, addr 0x1816a6400, size 0x240, virtual false, abstract: false, final false
static inline bool GetIsAmbiguousTime(::System::DateTime  time, ::System::TimeZoneInfo_AdjustmentRule*  rule, ::System::Globalization::DaylightTimeStruct  daylightTime) ;

/// @brief Method GetIsDaylightSavings, addr 0x1816a6e10, size 0x350, virtual false, abstract: false, final false
static inline bool GetIsDaylightSavings(::System::DateTime  time, ::System::TimeZoneInfo_AdjustmentRule*  rule, ::System::Globalization::DaylightTimeStruct  daylightTime, ::System::TimeZoneInfoOptions  flags) ;

/// @brief Method GetIsDaylightSavingsFromUtc, addr 0x1816a6640, size 0x7d0, virtual false, abstract: false, final false
static inline bool GetIsDaylightSavingsFromUtc(::System::DateTime  time, int32_t  year, ::System::TimeSpan  utc, ::System::TimeZoneInfo_AdjustmentRule*  rule, ::System::Nullable_1<int32_t>  ruleIndex, ::by_ref<bool>  isAmbiguousLocalDst, ::System::TimeZoneInfo*  zone) ;

/// @brief Method GetIsInvalidTime, addr 0x1816a7160, size 0x250, virtual false, abstract: false, final false
static inline bool GetIsInvalidTime(::System::DateTime  time, ::System::TimeZoneInfo_AdjustmentRule*  rule, ::System::Globalization::DaylightTimeStruct  daylightTime) ;

/// @brief Method GetLocalTimeZone, addr 0x1816a76f0, size 0x280, virtual false, abstract: false, final false
static inline ::System::TimeZoneInfo* GetLocalTimeZone(::System::TimeZoneInfo_CachedData*  cachedData) ;

/// @brief Method GetLocalTimeZoneFromWin32Data, addr 0x1816a73b0, size 0xe0, virtual false, abstract: false, final false
static inline ::System::TimeZoneInfo* GetLocalTimeZoneFromWin32Data(::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>  timeZoneInformation, bool  dstDisabled) ;

/// @brief Method GetLocalTimeZoneInfoWinRTFallback, addr 0x1816a7490, size 0x260, virtual false, abstract: false, final false
static inline ::System::TimeZoneInfo* GetLocalTimeZoneInfoWinRTFallback() ;

/// @brief Method GetLocalUtcOffset, addr 0x1816a7970, size 0x80, virtual false, abstract: false, final false
static inline ::System::TimeSpan GetLocalUtcOffset(::System::DateTime  dateTime, ::System::TimeZoneInfoOptions  flags) ;

/// @brief Method GetLocalizedNamesByRegistryKey, addr 0x1816a79f0, size 0x320, virtual false, abstract: false, final false
static inline void GetLocalizedNamesByRegistryKey(::Microsoft::Win32::RegistryKey*  key, ::by_ref<::StringW>  displayName, ::by_ref<::StringW>  standardName, ::by_ref<::StringW>  daylightName) ;

/// @brief Method GetPreviousAdjustmentRule, addr 0x1816a7d10, size 0xc0, virtual false, abstract: false, final false
inline ::System::TimeZoneInfo_AdjustmentRule* GetPreviousAdjustmentRule(::System::TimeZoneInfo_AdjustmentRule*  rule, ::System::Nullable_1<int32_t>  ruleIndex) ;

/// @brief Method GetSystemTimeZones, addr 0x1816a82e0, size 0x290, virtual false, abstract: false, final false
static inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::TimeZoneInfo*>* GetSystemTimeZones() ;

/// @brief Method GetSystemTimeZonesWinRTFallback, addr 0x1816a7dd0, size 0x510, virtual false, abstract: false, final false
static inline void GetSystemTimeZonesWinRTFallback(::System::TimeZoneInfo_CachedData*  cachedData) ;

/// @brief Method GetTimeZoneInformationForYear, addr 0x1816a8570, size 0x190, virtual false, abstract: false, final false
static inline bool GetTimeZoneInformationForYear(uint16_t  wYear, ::by_ref<::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION>  pdtzi, ::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>  ptzi) ;

/// @brief Method GetUtcOffset, addr 0x1816a89f0, size 0x80, virtual false, abstract: false, final false
static inline ::System::TimeSpan GetUtcOffset(::System::TimeSpan  baseUtcOffset, ::System::TimeZoneInfo_AdjustmentRule*  adjustmentRule) ;

/// @brief Method GetUtcOffset, addr 0x1816a8e40, size 0x60, virtual false, abstract: false, final false
inline ::System::TimeSpan GetUtcOffset(::System::DateTime  dateTime) ;

/// @brief Method GetUtcOffset, addr 0x1816a8980, size 0x70, virtual false, abstract: false, final false
inline ::System::TimeSpan GetUtcOffset(::System::DateTime  dateTime, ::System::TimeZoneInfoOptions  flags) ;

/// @brief Method GetUtcOffset, addr 0x1816a8a70, size 0x280, virtual false, abstract: false, final false
inline ::System::TimeSpan GetUtcOffset(::System::DateTime  dateTime, ::System::TimeZoneInfoOptions  flags, ::System::TimeZoneInfo_CachedData*  cachedData) ;

/// @brief Method GetUtcOffset, addr 0x1816a8cf0, size 0x150, virtual false, abstract: false, final false
static inline ::System::TimeSpan GetUtcOffset(::System::DateTime  time, ::System::TimeZoneInfo*  zone, ::System::TimeZoneInfoOptions  flags) ;

/// @brief Method GetUtcOffsetFromUtc, addr 0x1816a8730, size 0x30, virtual false, abstract: false, final false
static inline ::System::TimeSpan GetUtcOffsetFromUtc(::System::DateTime  time, ::System::TimeZoneInfo*  zone) ;

/// @brief Method GetUtcOffsetFromUtc, addr 0x1816a8700, size 0x30, virtual false, abstract: false, final false
static inline ::System::TimeSpan GetUtcOffsetFromUtc(::System::DateTime  time, ::System::TimeZoneInfo*  zone, ::by_ref<bool>  isDaylightSavings) ;

/// @brief Method GetUtcOffsetFromUtc, addr 0x1816a8760, size 0x220, virtual false, abstract: false, final false
static inline ::System::TimeSpan GetUtcOffsetFromUtc(::System::DateTime  time, ::System::TimeZoneInfo*  zone, ::by_ref<bool>  isDaylightSavings, ::by_ref<bool>  isAmbiguousLocalDst) ;

/// @brief Method HasSameRules, addr 0x1816a8ea0, size 0x1c0, virtual false, abstract: false, final false
inline bool HasSameRules(::System::TimeZoneInfo*  other) ;

/// @brief Method IsValidAdjustmentRuleOffest, addr 0x1816a9060, size 0xf0, virtual false, abstract: false, final false
static inline bool IsValidAdjustmentRuleOffest(::System::TimeSpan  baseUtcOffset, ::System::TimeZoneInfo_AdjustmentRule*  adjustmentRule) ;

static inline ::System::TimeZoneInfo* New_ctor() ;

static inline ::System::TimeZoneInfo* New_ctor(::StringW  id, ::System::TimeSpan  baseUtcOffset, ::StringW  displayName, ::StringW  standardDisplayName, ::StringW  daylightDisplayName, ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>  adjustmentRules, bool  disableDaylightSavingTime) ;

static inline ::System::TimeZoneInfo* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::TimeZoneInfo* New_ctor(::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>  zone, bool  dstDisabled) ;

/// @brief Method PopulateAllSystemTimeZones, addr 0x1816a9280, size 0x60, virtual false, abstract: false, final false
static inline void PopulateAllSystemTimeZones(::System::TimeZoneInfo_CachedData*  cachedData) ;

/// @brief Method PopulateAllSystemTimeZonesFromRegistry, addr 0x1816a9150, size 0x130, virtual false, abstract: false, final false
static inline void PopulateAllSystemTimeZonesFromRegistry(::System::TimeZoneInfo_CachedData*  cachedData) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization, addr 0x1816a92e0, size 0x140, virtual true, abstract: false, final true
inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x1816a9420, size 0xf0, virtual true, abstract: false, final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method ToString, addr 0x1816a9510, size 0x20, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TransitionTimeFromTimeZoneInformation, addr 0x1816a9530, size 0xe10, virtual false, abstract: false, final false
static inline bool TransitionTimeFromTimeZoneInformation(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION  timeZoneInformation, ::by_ref<::System::TimeZoneInfo_TransitionTime>  transitionTime, bool  readStartDate) ;

/// @brief Method TransitionTimeFromTimeZoneInformation, addr 0x1816aa340, size 0x1e0, virtual false, abstract: false, final false
static inline bool TransitionTimeFromTimeZoneInformation(::by_ref<::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT>  timeZoneInformation, ::by_ref<::System::TimeZoneInfo_TransitionTime>  transitionTime, bool  readStartDate) ;

/// @brief Method TransitionTimeToDateTime, addr 0x1816aa520, size 0x220, virtual false, abstract: false, final false
static inline ::System::DateTime TransitionTimeToDateTime(int32_t  year, ::System::TimeZoneInfo_TransitionTime  transitionTime) ;

/// @brief Method TryCompareStandardDate, addr 0x1816aa740, size 0x40, virtual false, abstract: false, final false
static inline bool TryCompareStandardDate(::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>  timeZone, ::by_ref<::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT>  registryTimeZoneInfo) ;

/// @brief Method TryCompareTimeZoneInformationToRegistry, addr 0x1816aa780, size 0x3a0, virtual false, abstract: false, final false
static inline bool TryCompareTimeZoneInformationToRegistry(::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>  timeZone, ::StringW  id, ::by_ref<bool>  dstDisabled) ;

/// @brief Method TryCreateAdjustmentRules, addr 0x1816aab20, size 0x800, virtual false, abstract: false, final false
static inline bool TryCreateAdjustmentRules(::StringW  id, ::by_ref<::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT>  defaultTimeZoneInformation, ::by_ref<::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>>  rules, ::by_ref<::System::Exception*>  e, int32_t  defaultBaseUtcOffset) ;

/// @brief Method TryCreateTimeZone, addr 0x1816ab320, size 0x7e0, virtual false, abstract: false, final false
static inline ::System::TimeZoneInfo* TryCreateTimeZone(::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION  timeZoneInformation) ;

/// @brief Method TryGetLocalizedNameByMuiNativeResource, addr 0x1816abb00, size 0x1c0, virtual false, abstract: false, final false
static inline ::StringW TryGetLocalizedNameByMuiNativeResource(::StringW  resource) ;

/// @brief Method TryGetLocalizedNameByNativeResource, addr 0x1816abcc0, size 0x120, virtual false, abstract: false, final false
static inline ::StringW TryGetLocalizedNameByNativeResource(::StringW  filePath, int32_t  resource) ;

/// @brief Method TryGetTimeZone, addr 0x1816ac520, size 0x190, virtual false, abstract: false, final false
static inline ::System::TimeZoneInfo_TimeZoneInfoResult TryGetTimeZone(::StringW  id, bool  dstDisabled, ::by_ref<::System::TimeZoneInfo*>  value, ::by_ref<::System::Exception*>  e, ::System::TimeZoneInfo_CachedData*  cachedData, bool  alwaysFallbackToLocalMachine) ;

/// @brief Method TryGetTimeZoneEntryFromRegistry, addr 0x1816abde0, size 0x80, virtual false, abstract: false, final false
static inline bool TryGetTimeZoneEntryFromRegistry(::Microsoft::Win32::RegistryKey*  key, ::StringW  name, ::by_ref<::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT>  dtzi) ;

/// @brief Method TryGetTimeZoneFromLocalMachine, addr 0x1816abe60, size 0x240, virtual false, abstract: false, final false
static inline ::System::TimeZoneInfo_TimeZoneInfoResult TryGetTimeZoneFromLocalMachine(::StringW  id, bool  dstDisabled, ::by_ref<::System::TimeZoneInfo*>  value, ::by_ref<::System::Exception*>  e, ::System::TimeZoneInfo_CachedData*  cachedData) ;

/// @brief Method TryGetTimeZoneFromLocalMachine, addr 0x1816ac0a0, size 0xb0, virtual false, abstract: false, final false
static inline ::System::TimeZoneInfo_TimeZoneInfoResult TryGetTimeZoneFromLocalMachine(::StringW  id, ::by_ref<::System::TimeZoneInfo*>  value, ::by_ref<::System::Exception*>  e) ;

/// @brief Method TryGetTimeZoneFromLocalRegistry, addr 0x1816ac150, size 0x3d0, virtual false, abstract: false, final false
static inline ::System::TimeZoneInfo_TimeZoneInfoResult TryGetTimeZoneFromLocalRegistry(::StringW  id, ::by_ref<::System::TimeZoneInfo*>  value, ::by_ref<::System::Exception*>  e) ;

/// @brief Method UtcOffsetOutOfRange, addr 0x1816ac6b0, size 0x70, virtual false, abstract: false, final false
static inline bool UtcOffsetOutOfRange(::System::TimeSpan  offset) ;

/// @brief Method ValidateTimeZoneInfo, addr 0x1816ac720, size 0x230, virtual false, abstract: false, final false
static inline void ValidateTimeZoneInfo(::StringW  id, ::System::TimeSpan  baseUtcOffset, ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>  adjustmentRules, ::by_ref<bool>  adjustmentRulesSupportDst) ;

constexpr ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*> const& __cordl_internal_get__adjustmentRules() const;

constexpr ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>& __cordl_internal_get__adjustmentRules() ;

constexpr ::System::TimeSpan const& __cordl_internal_get__baseUtcOffset() const;

constexpr ::System::TimeSpan& __cordl_internal_get__baseUtcOffset() ;

constexpr ::StringW const& __cordl_internal_get__daylightDisplayName() const;

constexpr ::StringW& __cordl_internal_get__daylightDisplayName() ;

constexpr ::StringW const& __cordl_internal_get__displayName() const;

constexpr ::StringW& __cordl_internal_get__displayName() ;

constexpr ::StringW const& __cordl_internal_get__id() const;

constexpr ::StringW& __cordl_internal_get__id() ;

constexpr ::StringW const& __cordl_internal_get__standardDisplayName() const;

constexpr ::StringW& __cordl_internal_get__standardDisplayName() ;

constexpr bool const& __cordl_internal_get__supportsDaylightSavingTime() const;

constexpr bool& __cordl_internal_get__supportsDaylightSavingTime() ;

constexpr void __cordl_internal_set__adjustmentRules(::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>  value) ;

constexpr void __cordl_internal_set__baseUtcOffset(::System::TimeSpan  value) ;

constexpr void __cordl_internal_set__daylightDisplayName(::StringW  value) ;

constexpr void __cordl_internal_set__displayName(::StringW  value) ;

constexpr void __cordl_internal_set__id(::StringW  value) ;

constexpr void __cordl_internal_set__standardDisplayName(::StringW  value) ;

constexpr void __cordl_internal_set__supportsDaylightSavingTime(bool  value) ;

/// @brief Method .ctor, addr 0x1816acf40, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1816acf60, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::StringW  id, ::System::TimeSpan  baseUtcOffset, ::StringW  displayName, ::StringW  standardDisplayName, ::StringW  daylightDisplayName, ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>  adjustmentRules, bool  disableDaylightSavingTime) ;

/// @brief Method .ctor, addr 0x1816acb70, size 0x3d0, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0x1816ad040, size 0x310, virtual false, abstract: false, final false
inline void _ctor(::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>  zone, bool  dstDisabled) ;

static inline ::System::TimeSpan getStaticF_MaxOffset() ;

static inline ::System::TimeSpan getStaticF_MinOffset() ;

static inline ::System::Lazy_1<bool>* getStaticF_lazyHaveRegistry() ;

static inline ::System::TimeZoneInfo_CachedData* getStaticF_s_cachedData() ;

static inline ::System::DateTime getStaticF_s_maxDateOnly() ;

static inline ::System::DateTime getStaticF_s_minDateOnly() ;

static inline ::System::TimeZoneInfo* getStaticF_s_utcTimeZone() ;

/// @brief Method get_BaseUtcOffset, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::System::TimeSpan get_BaseUtcOffset() ;

/// @brief Method get_DisplayName, addr 0x1816a9510, size 0x20, virtual false, abstract: false, final false
inline ::StringW get_DisplayName() ;

/// @brief Method get_HaveRegistry, addr 0x1816ad350, size 0x40, virtual false, abstract: false, final false
static inline bool get_HaveRegistry() ;

/// @brief Method get_Id, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_Id() ;

/// @brief Method get_Local, addr 0x1816ad390, size 0x50, virtual false, abstract: false, final false
static inline ::System::TimeZoneInfo* get_Local() ;

/// @brief Method get_Utc, addr 0x181699640, size 0x40, virtual false, abstract: false, final false
static inline ::System::TimeZoneInfo* get_Utc() ;

/// @brief Convert to "::System::IEquatable_1<::System::TimeZoneInfo*>"
constexpr ::System::IEquatable_1<::System::TimeZoneInfo*>* i___System__IEquatable_1___System__TimeZoneInfo__() noexcept;

/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback() noexcept;

/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

static inline void setStaticF_MaxOffset(::System::TimeSpan  value) ;

static inline void setStaticF_MinOffset(::System::TimeSpan  value) ;

static inline void setStaticF_lazyHaveRegistry(::System::Lazy_1<bool>*  value) ;

static inline void setStaticF_s_cachedData(::System::TimeZoneInfo_CachedData*  value) ;

static inline void setStaticF_s_maxDateOnly(::System::DateTime  value) ;

static inline void setStaticF_s_minDateOnly(::System::DateTime  value) ;

static inline void setStaticF_s_utcTimeZone(::System::TimeZoneInfo*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeZoneInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeZoneInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeZoneInfo(TimeZoneInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeZoneInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeZoneInfo(TimeZoneInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{150};

/// @brief Field _id, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____id;

/// @brief Field _displayName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____displayName;

/// @brief Field _standardDisplayName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____standardDisplayName;

/// @brief Field _daylightDisplayName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____daylightDisplayName;

/// @brief Field _baseUtcOffset, offset: 0x30, size: 0x8, def value: None
 ::System::TimeSpan  ____baseUtcOffset;

/// @brief Field _supportsDaylightSavingTime, offset: 0x38, size: 0x1, def value: None
 bool  ____supportsDaylightSavingTime;

/// @brief Field _adjustmentRules, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>  ____adjustmentRules;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::TimeZoneInfo, ____id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo, ____displayName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo, ____standardDisplayName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo, ____daylightDisplayName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo, ____baseUtcOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo, ____supportsDaylightSavingTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo, ____adjustmentRules) == 0x40, "Offset mismatch!");

static_assert(sizeof(::System::TimeZoneInfo) == 0x48, "Size mismatch!");

} // namespace end def System
