#pragma once
// IWYU pragma private; include "System/Xml/BinXmlDateTime.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BinXmlDateTime)
namespace System::Text {
class StringBuilder;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct DateTime;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Xml {
class BinXmlDateTime;
}
// Write type traits
MARK_REF_T(::System::Xml::BinXmlDateTime*);
DEFINE_IL2CPP_CLASS(::System::Xml::BinXmlDateTime*, "System.Xml", "BinXmlDateTime");
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.BinXmlDateTime
class CORDL_TYPE BinXmlDateTime : public ::System::Object {
public:
// Declarations
/// @brief Field KatmaiTimeScaleMultiplicator, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_KatmaiTimeScaleMultiplicator, put=setStaticF_KatmaiTimeScaleMultiplicator)) ::ArrayW<int32_t>  KatmaiTimeScaleMultiplicator;

/// @brief Field SQLTicksPerDay, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_SQLTicksPerDay, put=setStaticF_SQLTicksPerDay)) int32_t  SQLTicksPerDay;

/// @brief Field SQLTicksPerHour, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_SQLTicksPerHour, put=setStaticF_SQLTicksPerHour)) int32_t  SQLTicksPerHour;

/// @brief Field SQLTicksPerMillisecond, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SQLTicksPerMillisecond, put=setStaticF_SQLTicksPerMillisecond)) double_t  SQLTicksPerMillisecond;

/// @brief Field SQLTicksPerMinute, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_SQLTicksPerMinute, put=setStaticF_SQLTicksPerMinute)) int32_t  SQLTicksPerMinute;

/// @brief Field SQLTicksPerSecond, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_SQLTicksPerSecond, put=setStaticF_SQLTicksPerSecond)) int32_t  SQLTicksPerSecond;

/// @brief Method BreakDownXsdDate, addr 0x181c1eb40, size 0x1b0, virtual false, abstract: false, final false
static inline void BreakDownXsdDate(int64_t  val, ::by_ref<int32_t>  yr, ::by_ref<int32_t>  mnth, ::by_ref<int32_t>  day, ::by_ref<bool>  negTimeZone, ::by_ref<int32_t>  hr, ::by_ref<int32_t>  min) ;

/// @brief Method BreakDownXsdDateTime, addr 0x181c1e920, size 0x220, virtual false, abstract: false, final false
static inline void BreakDownXsdDateTime(int64_t  val, ::by_ref<int32_t>  yr, ::by_ref<int32_t>  mnth, ::by_ref<int32_t>  day, ::by_ref<int32_t>  hr, ::by_ref<int32_t>  min, ::by_ref<int32_t>  sec, ::by_ref<int32_t>  ms) ;

/// @brief Method BreakDownXsdTime, addr 0x181c1ecf0, size 0x140, virtual false, abstract: false, final false
static inline void BreakDownXsdTime(int64_t  val, ::by_ref<int32_t>  hr, ::by_ref<int32_t>  min, ::by_ref<int32_t>  sec, ::by_ref<int32_t>  ms) ;

/// @brief Method GetFractions, addr 0x181c1ef20, size 0xf0, virtual false, abstract: false, final false
static inline int32_t GetFractions(::System::DateTime  dt) ;

/// @brief Method GetFractions, addr 0x181c1ee30, size 0xf0, virtual false, abstract: false, final false
static inline int32_t GetFractions(::System::DateTimeOffset  dt) ;

/// @brief Method GetKatmaiDateTicks, addr 0x181c1f010, size 0x40, virtual false, abstract: false, final false
static inline int64_t GetKatmaiDateTicks(::ArrayW<uint8_t>  data, ::by_ref<int32_t>  pos) ;

/// @brief Method GetKatmaiTimeTicks, addr 0x181c1f050, size 0x160, virtual false, abstract: false, final false
static inline int64_t GetKatmaiTimeTicks(::ArrayW<uint8_t>  data, ::by_ref<int32_t>  pos) ;

/// @brief Method GetKatmaiTimeZoneTicks, addr 0x181c1f1b0, size 0x30, virtual false, abstract: false, final false
static inline int64_t GetKatmaiTimeZoneTicks(::ArrayW<uint8_t>  data, int32_t  pos) ;

/// @brief Method SqlDateTimeToDateTime, addr 0x181c1f1e0, size 0x90, virtual false, abstract: false, final false
static inline ::System::DateTime SqlDateTimeToDateTime(int32_t  dateticks, uint32_t  timeticks) ;

/// @brief Method SqlDateTimeToString, addr 0x181c1f270, size 0x60, virtual false, abstract: false, final false
static inline ::StringW SqlDateTimeToString(int32_t  dateticks, uint32_t  timeticks) ;

/// @brief Method SqlSmallDateTimeToDateTime, addr 0x181c1f2d0, size 0x30, virtual false, abstract: false, final false
static inline ::System::DateTime SqlSmallDateTimeToDateTime(int16_t  dateticks, uint16_t  timeticks) ;

/// @brief Method SqlSmallDateTimeToString, addr 0x181c1f300, size 0x60, virtual false, abstract: false, final false
static inline ::StringW SqlSmallDateTimeToString(int16_t  dateticks, uint16_t  timeticks) ;

/// @brief Method Write2Dig, addr 0x1816f5c10, size 0x70, virtual false, abstract: false, final false
static inline void Write2Dig(::System::Text::StringBuilder*  sb, int32_t  val) ;

/// @brief Method Write3Dec, addr 0x181c1f360, size 0xd0, virtual false, abstract: false, final false
static inline void Write3Dec(::System::Text::StringBuilder*  sb, int32_t  val) ;

/// @brief Method Write4DigNeg, addr 0x181c1f430, size 0x100, virtual false, abstract: false, final false
static inline void Write4DigNeg(::System::Text::StringBuilder*  sb, int32_t  val) ;

/// @brief Method WriteDate, addr 0x181c1f530, size 0x1e0, virtual false, abstract: false, final false
static inline void WriteDate(::System::Text::StringBuilder*  sb, int32_t  yr, int32_t  mnth, int32_t  day) ;

/// @brief Method WriteTime, addr 0x181c1fad0, size 0x1f0, virtual false, abstract: false, final false
static inline void WriteTime(::System::Text::StringBuilder*  sb, int32_t  hr, int32_t  min, int32_t  sec, int32_t  ms) ;

/// @brief Method WriteTimeFullPrecision, addr 0x181c1f710, size 0x230, virtual false, abstract: false, final false
static inline void WriteTimeFullPrecision(::System::Text::StringBuilder*  sb, int32_t  hr, int32_t  min, int32_t  sec, int32_t  fraction) ;

/// @brief Method WriteTimeZone, addr 0x181c1f940, size 0x110, virtual false, abstract: false, final false
static inline void WriteTimeZone(::System::Text::StringBuilder*  sb, bool  negTimeZone, int32_t  hr, int32_t  min) ;

/// @brief Method WriteTimeZone, addr 0x181c1fa50, size 0x80, virtual false, abstract: false, final false
static inline void WriteTimeZone(::System::Text::StringBuilder*  sb, ::System::TimeSpan  zone) ;

/// @brief Method XsdDateTimeToString, addr 0x181c1fcc0, size 0x2b0, virtual false, abstract: false, final false
static inline ::StringW XsdDateTimeToString(int64_t  val) ;

/// @brief Method XsdDateToString, addr 0x181c1ff70, size 0x210, virtual false, abstract: false, final false
static inline ::StringW XsdDateToString(int64_t  val) ;

/// @brief Method XsdKatmaiDateOffsetToDateTimeOffset, addr 0x181c20180, size 0x20, virtual false, abstract: false, final false
static inline ::System::DateTimeOffset XsdKatmaiDateOffsetToDateTimeOffset(::ArrayW<uint8_t>  data, int32_t  offset) ;

/// @brief Method XsdKatmaiDateOffsetToString, addr 0x181c201a0, size 0xe0, virtual false, abstract: false, final false
static inline ::StringW XsdKatmaiDateOffsetToString(::ArrayW<uint8_t>  data, int32_t  offset) ;

/// @brief Method XsdKatmaiDateTimeOffsetToDateTimeOffset, addr 0x181c20280, size 0xc0, virtual false, abstract: false, final false
static inline ::System::DateTimeOffset XsdKatmaiDateTimeOffsetToDateTimeOffset(::ArrayW<uint8_t>  data, int32_t  offset) ;

/// @brief Method XsdKatmaiDateTimeOffsetToString, addr 0x181c20340, size 0x150, virtual false, abstract: false, final false
static inline ::StringW XsdKatmaiDateTimeOffsetToString(::ArrayW<uint8_t>  data, int32_t  offset) ;

/// @brief Method XsdKatmaiDateTimeToDateTime, addr 0x181c20490, size 0x90, virtual false, abstract: false, final false
static inline ::System::DateTime XsdKatmaiDateTimeToDateTime(::ArrayW<uint8_t>  data, int32_t  offset) ;

/// @brief Method XsdKatmaiDateTimeToString, addr 0x181c20520, size 0x120, virtual false, abstract: false, final false
static inline ::StringW XsdKatmaiDateTimeToString(::ArrayW<uint8_t>  data, int32_t  offset) ;

/// @brief Method XsdKatmaiDateToDateTime, addr 0x181c20640, size 0x60, virtual false, abstract: false, final false
static inline ::System::DateTime XsdKatmaiDateToDateTime(::ArrayW<uint8_t>  data, int32_t  offset) ;

/// @brief Method XsdKatmaiDateToString, addr 0x181c206a0, size 0x100, virtual false, abstract: false, final false
static inline ::StringW XsdKatmaiDateToString(::ArrayW<uint8_t>  data, int32_t  offset) ;

/// @brief Method XsdKatmaiTimeOffsetToDateTimeOffset, addr 0x181c20180, size 0x20, virtual false, abstract: false, final false
static inline ::System::DateTimeOffset XsdKatmaiTimeOffsetToDateTimeOffset(::ArrayW<uint8_t>  data, int32_t  offset) ;

/// @brief Method XsdKatmaiTimeOffsetToString, addr 0x181c207a0, size 0x100, virtual false, abstract: false, final false
static inline ::StringW XsdKatmaiTimeOffsetToString(::ArrayW<uint8_t>  data, int32_t  offset) ;

/// @brief Method XsdKatmaiTimeToDateTime, addr 0x181c208a0, size 0x10, virtual false, abstract: false, final false
static inline ::System::DateTime XsdKatmaiTimeToDateTime(::ArrayW<uint8_t>  data, int32_t  offset) ;

/// @brief Method XsdKatmaiTimeToString, addr 0x181c208b0, size 0xd0, virtual false, abstract: false, final false
static inline ::StringW XsdKatmaiTimeToString(::ArrayW<uint8_t>  data, int32_t  offset) ;

/// @brief Method XsdTimeToString, addr 0x181c20980, size 0x1b0, virtual false, abstract: false, final false
static inline ::StringW XsdTimeToString(int64_t  val) ;

static inline ::ArrayW<int32_t> getStaticF_KatmaiTimeScaleMultiplicator() ;

static inline int32_t getStaticF_SQLTicksPerDay() ;

static inline int32_t getStaticF_SQLTicksPerHour() ;

static inline double_t getStaticF_SQLTicksPerMillisecond() ;

static inline int32_t getStaticF_SQLTicksPerMinute() ;

static inline int32_t getStaticF_SQLTicksPerSecond() ;

static inline void setStaticF_KatmaiTimeScaleMultiplicator(::ArrayW<int32_t>  value) ;

static inline void setStaticF_SQLTicksPerDay(int32_t  value) ;

static inline void setStaticF_SQLTicksPerHour(int32_t  value) ;

static inline void setStaticF_SQLTicksPerMillisecond(double_t  value) ;

static inline void setStaticF_SQLTicksPerMinute(int32_t  value) ;

static inline void setStaticF_SQLTicksPerSecond(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BinXmlDateTime() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BinXmlDateTime", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BinXmlDateTime(BinXmlDateTime && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BinXmlDateTime", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BinXmlDateTime(BinXmlDateTime const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9621};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::BinXmlDateTime) == 0x10, "Size mismatch!");

} // namespace end def System::Xml
