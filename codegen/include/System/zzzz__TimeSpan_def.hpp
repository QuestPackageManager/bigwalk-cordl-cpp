#pragma once
// IWYU pragma private; include "System/TimeSpan.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSpan)
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
class IComparable;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace System {
class ISpanFormattable;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System {
struct TimeSpan;
}
// Write type traits
MARK_VAL_T(::System::TimeSpan);
DEFINE_IL2CPP_CLASS(::System::TimeSpan, "System", "TimeSpan");
// Dependencies 
namespace System {
// Is value type: true
// CS Name: System.TimeSpan
struct CORDL_TYPE TimeSpan {
public:
// Declarations
 __declspec(property(get=get_Days)) int32_t  Days;

 __declspec(property(get=get_Hours)) int32_t  Hours;

/// @brief Field MaxValue, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MaxValue, put=setStaticF_MaxValue)) ::System::TimeSpan  MaxValue;

 __declspec(property(get=get_Milliseconds)) int32_t  Milliseconds;

/// @brief Field MinValue, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MinValue, put=setStaticF_MinValue)) ::System::TimeSpan  MinValue;

 __declspec(property(get=get_Minutes)) int32_t  Minutes;

 __declspec(property(get=get_Seconds)) int32_t  Seconds;

 __declspec(property(get=get_Ticks)) int64_t  Ticks;

 __declspec(property(get=get_TotalDays)) double_t  TotalDays;

 __declspec(property(get=get_TotalHours)) double_t  TotalHours;

 __declspec(property(get=get_TotalMilliseconds)) double_t  TotalMilliseconds;

 __declspec(property(get=get_TotalMinutes)) double_t  TotalMinutes;

 __declspec(property(get=get_TotalSeconds)) double_t  TotalSeconds;

/// @brief Field Zero, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Zero, put=setStaticF_Zero)) ::System::TimeSpan  Zero;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IComparable_1<::System::TimeSpan>"
constexpr operator  ::System::IComparable_1<::System::TimeSpan>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::System::TimeSpan>"
constexpr operator  ::System::IEquatable_1<::System::TimeSpan>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Convert operator to "::System::ISpanFormattable"
constexpr operator  ::System::ISpanFormattable*() ;

/// @brief Method Add, addr 0x1817279a0, size 0x80, virtual false, abstract: false, final false
inline ::System::TimeSpan Add(::System::TimeSpan  ts) ;

/// @brief Method Compare, addr 0x181727ae0, size 0x20, virtual false, abstract: false, final false
static inline int32_t Compare(::System::TimeSpan  t1, ::System::TimeSpan  t2) ;

/// @brief Method CompareTo, addr 0x181727a50, size 0x90, virtual true, abstract: false, final true
inline int32_t CompareTo(::System::Object*  value) ;

/// @brief Method CompareTo, addr 0x181727a20, size 0x30, virtual true, abstract: false, final true
inline int32_t CompareTo(::System::TimeSpan  value) ;

/// @brief Method Equals, addr 0x1805a8500, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::System::TimeSpan  obj) ;

/// @brief Method Equals, addr 0x181727b00, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  value) ;

/// @brief Method FromDays, addr 0x181727b70, size 0x10, virtual false, abstract: false, final false
static inline ::System::TimeSpan FromDays(double_t  value) ;

/// @brief Method FromHours, addr 0x181727b80, size 0x10, virtual false, abstract: false, final false
static inline ::System::TimeSpan FromHours(double_t  value) ;

/// @brief Method FromMilliseconds, addr 0x181727b90, size 0x10, virtual false, abstract: false, final false
static inline ::System::TimeSpan FromMilliseconds(double_t  value) ;

/// @brief Method FromMinutes, addr 0x181727ba0, size 0x10, virtual false, abstract: false, final false
static inline ::System::TimeSpan FromMinutes(double_t  value) ;

/// @brief Method FromSeconds, addr 0x181727bb0, size 0x10, virtual false, abstract: false, final false
static inline ::System::TimeSpan FromSeconds(double_t  value) ;

/// @brief Method FromTicks, addr 0x1802e0ba0, size 0x10, virtual false, abstract: false, final false
static inline ::System::TimeSpan FromTicks(int64_t  value) ;

/// @brief Method GetHashCode, addr 0x18170e250, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Interval, addr 0x181727bc0, size 0xe0, virtual false, abstract: false, final false
static inline ::System::TimeSpan Interval(double_t  value, int32_t  scale) ;

/// @brief Method Negate, addr 0x181727ca0, size 0x90, virtual false, abstract: false, final false
inline ::System::TimeSpan Negate() ;

/// @brief Method Parse, addr 0x181727d30, size 0x60, virtual false, abstract: false, final false
static inline ::System::TimeSpan Parse(::StringW  input, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method Parse, addr 0x181727d90, size 0x50, virtual false, abstract: false, final false
static inline ::System::TimeSpan Parse(::StringW  s) ;

/// @brief Method Subtract, addr 0x181727de0, size 0x80, virtual false, abstract: false, final false
inline ::System::TimeSpan Subtract(::System::TimeSpan  ts) ;

/// @brief Method TimeToTicks, addr 0x181727e60, size 0x90, virtual false, abstract: false, final false
static inline int64_t TimeToTicks(int32_t  hour, int32_t  minute, int32_t  second) ;

/// @brief Method ToString, addr 0x181727ef0, size 0x20, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x181727f10, size 0x20, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method TryFormat, addr 0x181727f30, size 0x90, virtual true, abstract: false, final true
inline bool TryFormat(::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x181728020, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(int32_t  days, int32_t  hours, int32_t  minutes, int32_t  seconds, int32_t  milliseconds) ;

/// @brief Method .ctor, addr 0x1817280e0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(int32_t  hours, int32_t  minutes, int32_t  seconds) ;

/// @brief Method .ctor, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int64_t  ticks) ;

static inline ::System::TimeSpan getStaticF_MaxValue() ;

static inline ::System::TimeSpan getStaticF_MinValue() ;

static inline ::System::TimeSpan getStaticF_Zero() ;

/// @brief Method get_Days, addr 0x181728190, size 0x20, virtual false, abstract: false, final false
inline int32_t get_Days() ;

/// @brief Method get_Hours, addr 0x1817281b0, size 0x50, virtual false, abstract: false, final false
inline int32_t get_Hours() ;

/// @brief Method get_Milliseconds, addr 0x181728200, size 0x60, virtual false, abstract: false, final false
inline int32_t get_Milliseconds() ;

/// @brief Method get_Minutes, addr 0x181728260, size 0x60, virtual false, abstract: false, final false
inline int32_t get_Minutes() ;

/// @brief Method get_Seconds, addr 0x1817282c0, size 0x60, virtual false, abstract: false, final false
inline int32_t get_Seconds() ;

/// @brief Method get_Ticks, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline int64_t get_Ticks() ;

/// @brief Method get_TotalDays, addr 0x181728320, size 0x20, virtual false, abstract: false, final false
inline double_t get_TotalDays() ;

/// @brief Method get_TotalHours, addr 0x181728340, size 0x20, virtual false, abstract: false, final false
inline double_t get_TotalHours() ;

/// @brief Method get_TotalMilliseconds, addr 0x181728360, size 0x40, virtual false, abstract: false, final false
inline double_t get_TotalMilliseconds() ;

/// @brief Method get_TotalMinutes, addr 0x1817283a0, size 0x20, virtual false, abstract: false, final false
inline double_t get_TotalMinutes() ;

/// @brief Method get_TotalSeconds, addr 0x1817283c0, size 0x20, virtual false, abstract: false, final false
inline double_t get_TotalSeconds() ;

/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* i___System__IComparable() ;

/// @brief Convert to "::System::IComparable_1<::System::TimeSpan>"
constexpr ::System::IComparable_1<::System::TimeSpan>* i___System__IComparable_1___System__TimeSpan_() ;

/// @brief Convert to "::System::IEquatable_1<::System::TimeSpan>"
constexpr ::System::IEquatable_1<::System::TimeSpan>* i___System__IEquatable_1___System__TimeSpan_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Convert to "::System::ISpanFormattable"
constexpr ::System::ISpanFormattable* i___System__ISpanFormattable() ;

/// @brief Method op_Addition, addr 0x1817283e0, size 0x70, virtual false, abstract: false, final false
static inline ::System::TimeSpan op_Addition(::System::TimeSpan  t1, ::System::TimeSpan  t2) ;

/// @brief Method op_Equality, addr 0x1805a8800, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::System::TimeSpan  t1, ::System::TimeSpan  t2) ;

/// @brief Method op_GreaterThan, addr 0x181728460, size 0x10, virtual false, abstract: false, final false
static inline bool op_GreaterThan(::System::TimeSpan  t1, ::System::TimeSpan  t2) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181728450, size 0x10, virtual false, abstract: false, final false
static inline bool op_GreaterThanOrEqual(::System::TimeSpan  t1, ::System::TimeSpan  t2) ;

/// @brief Method op_Inequality, addr 0x1805a8810, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::System::TimeSpan  t1, ::System::TimeSpan  t2) ;

/// @brief Method op_LessThan, addr 0x181728480, size 0x10, virtual false, abstract: false, final false
static inline bool op_LessThan(::System::TimeSpan  t1, ::System::TimeSpan  t2) ;

/// @brief Method op_LessThanOrEqual, addr 0x181728470, size 0x10, virtual false, abstract: false, final false
static inline bool op_LessThanOrEqual(::System::TimeSpan  t1, ::System::TimeSpan  t2) ;

/// @brief Method op_Subtraction, addr 0x181728490, size 0x80, virtual false, abstract: false, final false
static inline ::System::TimeSpan op_Subtraction(::System::TimeSpan  t1, ::System::TimeSpan  t2) ;

/// @brief Method op_UnaryNegation, addr 0x181728510, size 0x80, virtual false, abstract: false, final false
static inline ::System::TimeSpan op_UnaryNegation(::System::TimeSpan  t) ;

static inline void setStaticF_MaxValue(::System::TimeSpan  value) ;

static inline void setStaticF_MinValue(::System::TimeSpan  value) ;

static inline void setStaticF_Zero(::System::TimeSpan  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr TimeSpan() ;

// Ctor Parameters [CppParam { name: "_ticks", ty: "int64_t", modifiers: "", def_value: None }]
constexpr TimeSpan(int64_t  _ticks) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{317};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _ticks, offset: 0x0, size: 0x8, def value: None
 int64_t  _ticks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::TimeSpan, _ticks) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::TimeSpan) == 0x8, "Size mismatch!");

} // namespace end def System
