#pragma once
// IWYU pragma private; include "System/DateTimeFormat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeFormat)
namespace System::Globalization {
class DateTimeFormatInfo;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
struct DateTime;
}
namespace System {
class IFormatProvider;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System {
class DateTimeFormat;
}
// Write type traits
MARK_REF_T(::System::DateTimeFormat*);
DEFINE_IL2CPP_CLASS(::System::DateTimeFormat*, "System", "DateTimeFormat");
// Dependencies System.Object, System.TimeSpan
namespace System {
// Is value type: false
// CS Name: System.DateTimeFormat
class CORDL_TYPE DateTimeFormat : public ::System::Object {
public:
// Declarations
/// @brief Field InvariantAbbreviatedDayNames, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InvariantAbbreviatedDayNames, put=setStaticF_InvariantAbbreviatedDayNames)) ::ArrayW<::StringW>  InvariantAbbreviatedDayNames;

/// @brief Field InvariantAbbreviatedMonthNames, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InvariantAbbreviatedMonthNames, put=setStaticF_InvariantAbbreviatedMonthNames)) ::ArrayW<::StringW>  InvariantAbbreviatedMonthNames;

/// @brief Field InvariantFormatInfo, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InvariantFormatInfo, put=setStaticF_InvariantFormatInfo)) ::System::Globalization::DateTimeFormatInfo*  InvariantFormatInfo;

/// @brief Field NullOffset, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_NullOffset, put=setStaticF_NullOffset)) ::System::TimeSpan  NullOffset;

/// @brief Field allStandardFormats, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_allStandardFormats, put=setStaticF_allStandardFormats)) ::ArrayW<char16_t>  allStandardFormats;

/// @brief Field fixedNumberFormats, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_fixedNumberFormats, put=setStaticF_fixedNumberFormats)) ::ArrayW<::StringW>  fixedNumberFormats;

/// @brief Method Append2DigitNumber, addr 0x1816f5c10, size 0x70, virtual false, abstract: false, final false
static inline void Append2DigitNumber(::System::Text::StringBuilder*  result, int32_t  val) ;

/// @brief Method ExpandPredefinedFormat, addr 0x1816f5c80, size 0x290, virtual false, abstract: false, final false
static inline ::StringW ExpandPredefinedFormat(::System::ReadOnlySpan_1<char16_t>  format, ::by_ref<::System::DateTime>  dateTime, ::by_ref<::System::Globalization::DateTimeFormatInfo*>  dtfi, ::by_ref<::System::TimeSpan>  offset) ;

/// @brief Method Format, addr 0x1816f77a0, size 0x70, virtual false, abstract: false, final false
static inline ::StringW Format(::System::DateTime  dateTime, ::StringW  format, ::System::IFormatProvider*  provider) ;

/// @brief Method Format, addr 0x1816f7810, size 0x1e0, virtual false, abstract: false, final false
static inline ::StringW Format(::System::DateTime  dateTime, ::StringW  format, ::System::IFormatProvider*  provider, ::System::TimeSpan  offset) ;

/// @brief Method FormatCustomized, addr 0x1816f6320, size 0x1060, virtual false, abstract: false, final false
static inline ::System::Text::StringBuilder* FormatCustomized(::System::DateTime  dateTime, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::System::TimeSpan  offset, ::System::Text::StringBuilder*  result) ;

/// @brief Method FormatCustomizedRoundripTimeZone, addr 0x1816f5f10, size 0x200, virtual false, abstract: false, final false
static inline void FormatCustomizedRoundripTimeZone(::System::DateTime  dateTime, ::System::TimeSpan  offset, ::System::Text::StringBuilder*  result) ;

/// @brief Method FormatCustomizedTimeZone, addr 0x1816f6110, size 0x210, virtual false, abstract: false, final false
static inline void FormatCustomizedTimeZone(::System::DateTime  dateTime, ::System::TimeSpan  offset, ::System::ReadOnlySpan_1<char16_t>  format, int32_t  tokenLen, bool  timeOnly, ::System::Text::StringBuilder*  result) ;

/// @brief Method FormatDayOfWeek, addr 0x1816f7380, size 0x20, virtual false, abstract: false, final false
static inline ::StringW FormatDayOfWeek(int32_t  dayOfWeek, int32_t  repeat, ::System::Globalization::DateTimeFormatInfo*  dtfi) ;

/// @brief Method FormatDigits, addr 0x1816f73a0, size 0x20, virtual false, abstract: false, final false
static inline void FormatDigits(::System::Text::StringBuilder*  outputBuffer, int32_t  value, int32_t  len) ;

/// @brief Method FormatDigits, addr 0x1816f73c0, size 0xf0, virtual false, abstract: false, final false
static inline void FormatDigits(::System::Text::StringBuilder*  outputBuffer, int32_t  value, int32_t  len, bool  overrideLengthLimit) ;

/// @brief Method FormatHebrewMonthName, addr 0x1816f74b0, size 0xb0, virtual false, abstract: false, final false
static inline ::StringW FormatHebrewMonthName(::System::DateTime  time, int32_t  month, int32_t  repeatCount, ::System::Globalization::DateTimeFormatInfo*  dtfi) ;

/// @brief Method FormatMonth, addr 0x1816f7560, size 0x20, virtual false, abstract: false, final false
static inline ::StringW FormatMonth(int32_t  month, int32_t  repeatCount, ::System::Globalization::DateTimeFormatInfo*  dtfi) ;

/// @brief Method FormatStringBuilder, addr 0x1816f7580, size 0x220, virtual false, abstract: false, final false
static inline ::System::Text::StringBuilder* FormatStringBuilder(::System::DateTime  dateTime, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::System::TimeSpan  offset) ;

/// @brief Method GetRealFormat, addr 0x1816f79f0, size 0x280, virtual false, abstract: false, final false
static inline ::StringW GetRealFormat(::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::DateTimeFormatInfo*  dtfi) ;

/// @brief Method HebrewFormatDigits, addr 0x1816f7c70, size 0x30, virtual false, abstract: false, final false
static inline void HebrewFormatDigits(::System::Text::StringBuilder*  outputBuffer, int32_t  digits) ;

/// @brief Method InvalidFormatForLocal, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void InvalidFormatForLocal(::System::ReadOnlySpan_1<char16_t>  format, ::System::DateTime  dateTime) ;

/// @brief Method IsUseGenitiveForm, addr 0x1816f7ca0, size 0x100, virtual false, abstract: false, final false
static inline bool IsUseGenitiveForm(::System::ReadOnlySpan_1<char16_t>  format, int32_t  index, int32_t  tokenLen, char16_t  patternToMatch) ;

/// @brief Method ParseNextChar, addr 0x1816f7da0, size 0x20, virtual false, abstract: false, final false
static inline int32_t ParseNextChar(::System::ReadOnlySpan_1<char16_t>  format, int32_t  pos) ;

/// @brief Method ParseQuoteString, addr 0x1816f7dc0, size 0x150, virtual false, abstract: false, final false
static inline int32_t ParseQuoteString(::System::ReadOnlySpan_1<char16_t>  format, int32_t  pos, ::System::Text::StringBuilder*  result) ;

/// @brief Method ParseRepeatPattern, addr 0x1816f7f10, size 0x40, virtual false, abstract: false, final false
static inline int32_t ParseRepeatPattern(::System::ReadOnlySpan_1<char16_t>  format, int32_t  pos, char16_t  patternChar) ;

/// @brief Method TryFormat, addr 0x1816f8880, size 0xb0, virtual false, abstract: false, final false
static inline bool TryFormat(::System::DateTime  dateTime, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  provider) ;

/// @brief Method TryFormat, addr 0x1816f8930, size 0x170, virtual false, abstract: false, final false
static inline bool TryFormat(::System::DateTime  dateTime, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  provider, ::System::TimeSpan  offset) ;

/// @brief Method TryFormatO, addr 0x1816f7f50, size 0x510, virtual false, abstract: false, final false
static inline bool TryFormatO(::System::DateTime  dateTime, ::System::TimeSpan  offset, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten) ;

/// @brief Method TryFormatR, addr 0x1816f8460, size 0x420, virtual false, abstract: false, final false
static inline bool TryFormatR(::System::DateTime  dateTime, ::System::TimeSpan  offset, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten) ;

/// @brief Method WriteDigits, addr 0x1816f8aa0, size 0x80, virtual false, abstract: false, final false
static inline void WriteDigits(uint64_t  value, ::System::Span_1<char16_t>  buffer) ;

/// @brief Method WriteFourDecimalDigits, addr 0x1816f8b20, size 0xb0, virtual false, abstract: false, final false
static inline void WriteFourDecimalDigits(uint32_t  value, ::System::Span_1<char16_t>  buffer, int32_t  startingIndex) ;

/// @brief Method WriteTwoDecimalDigits, addr 0x1816f8bd0, size 0x40, virtual false, abstract: false, final false
static inline void WriteTwoDecimalDigits(uint32_t  value, ::System::Span_1<char16_t>  destination, int32_t  offset) ;

static inline ::ArrayW<::StringW> getStaticF_InvariantAbbreviatedDayNames() ;

static inline ::ArrayW<::StringW> getStaticF_InvariantAbbreviatedMonthNames() ;

static inline ::System::Globalization::DateTimeFormatInfo* getStaticF_InvariantFormatInfo() ;

static inline ::System::TimeSpan getStaticF_NullOffset() ;

static inline ::ArrayW<char16_t> getStaticF_allStandardFormats() ;

static inline ::ArrayW<::StringW> getStaticF_fixedNumberFormats() ;

static inline void setStaticF_InvariantAbbreviatedDayNames(::ArrayW<::StringW>  value) ;

static inline void setStaticF_InvariantAbbreviatedMonthNames(::ArrayW<::StringW>  value) ;

static inline void setStaticF_InvariantFormatInfo(::System::Globalization::DateTimeFormatInfo*  value) ;

static inline void setStaticF_NullOffset(::System::TimeSpan  value) ;

static inline void setStaticF_allStandardFormats(::ArrayW<char16_t>  value) ;

static inline void setStaticF_fixedNumberFormats(::ArrayW<::StringW>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DateTimeFormat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DateTimeFormat", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DateTimeFormat(DateTimeFormat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeFormat", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DateTimeFormat(DateTimeFormat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{216};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::DateTimeFormat) == 0x10, "Size mismatch!");

} // namespace end def System
