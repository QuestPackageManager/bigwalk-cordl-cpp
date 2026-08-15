#pragma once
// IWYU pragma private; include "System/Xml/XmlConvert.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlCharType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlConvert)
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System::Xml {
struct ExceptionType;
}
namespace System::Xml {
struct XmlDateTimeSerializationMode;
}
namespace System {
class ArgumentException;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class Exception;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Xml {
class XmlConvert;
}
// Write type traits
MARK_REF_T(::System::Xml::XmlConvert*);
DEFINE_IL2CPP_CLASS(::System::Xml::XmlConvert*, "System.Xml", "XmlConvert");
// Dependencies System.Object, System.Xml.XmlCharType
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlConvert
class CORDL_TYPE XmlConvert : public ::System::Object {
public:
// Declarations
/// @brief Field WhitespaceChars, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_WhitespaceChars, put=setStaticF_WhitespaceChars)) ::ArrayW<char16_t>  WhitespaceChars;

/// @brief Field c_DecodeCharPattern, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_c_DecodeCharPattern, put=setStaticF_c_DecodeCharPattern)) ::System::Text::RegularExpressions::Regex*  c_DecodeCharPattern;

/// @brief Field c_EncodeCharPattern, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_c_EncodeCharPattern, put=setStaticF_c_EncodeCharPattern)) ::System::Text::RegularExpressions::Regex*  c_EncodeCharPattern;

/// @brief Field c_EncodedCharLength, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_c_EncodedCharLength, put=setStaticF_c_EncodedCharLength)) int32_t  c_EncodedCharLength;

/// @brief Field crt, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_crt, put=setStaticF_crt)) ::ArrayW<char16_t>  crt;

/// @brief Field s_allDateTimeFormats, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_allDateTimeFormats, put=setStaticF_s_allDateTimeFormats)) ::ArrayW<::StringW>  s_allDateTimeFormats;

/// @brief Field xmlCharType, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_xmlCharType, put=setStaticF_xmlCharType)) ::System::Xml::XmlCharType  xmlCharType;

/// @brief Method CreateAllDateTimeFormats, addr 0x181d30d00, size 0x2c0, virtual false, abstract: false, final false
static inline void CreateAllDateTimeFormats() ;

/// @brief Method CreateException, addr 0x181d30fc0, size 0xc0, virtual false, abstract: false, final false
static inline ::System::Exception* CreateException(::StringW  res, ::StringW  arg, ::System::Xml::ExceptionType  exceptionType, int32_t  lineNo, int32_t  linePos) ;

/// @brief Method CreateException, addr 0x181d311e0, size 0xb0, virtual false, abstract: false, final false
static inline ::System::Exception* CreateException(::StringW  res, ::ArrayW<::StringW>  args, ::System::Xml::ExceptionType  exceptionType) ;

/// @brief Method CreateException, addr 0x181d31080, size 0xb0, virtual false, abstract: false, final false
static inline ::System::Exception* CreateException(::StringW  res, ::ArrayW<::StringW>  args, ::System::Xml::ExceptionType  exceptionType, int32_t  lineNo, int32_t  linePos) ;

/// @brief Method CreateException, addr 0x181d31130, size 0xb0, virtual false, abstract: false, final false
static inline ::System::Exception* CreateException(::StringW  res, ::System::Xml::ExceptionType  exceptionType, int32_t  lineNo, int32_t  linePos) ;

/// @brief Method CreateInvalidCharException, addr 0x181d31350, size 0x100, virtual false, abstract: false, final false
static inline ::System::Exception* CreateInvalidCharException(::StringW  data, int32_t  invCharPos, ::System::Xml::ExceptionType  exceptionType) ;

/// @brief Method CreateInvalidCharException, addr 0x181d31450, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* CreateInvalidCharException(char16_t  invChar, char16_t  nextChar) ;

/// @brief Method CreateInvalidCharException, addr 0x181d31290, size 0xc0, virtual false, abstract: false, final false
static inline ::System::Exception* CreateInvalidCharException(char16_t  invChar, char16_t  nextChar, ::System::Xml::ExceptionType  exceptionType) ;

/// @brief Method CreateInvalidHighSurrogateCharException, addr 0x181d31690, size 0xb0, virtual false, abstract: false, final false
static inline ::System::Exception* CreateInvalidHighSurrogateCharException(char16_t  hi) ;

/// @brief Method CreateInvalidHighSurrogateCharException, addr 0x181d314b0, size 0xf0, virtual false, abstract: false, final false
static inline ::System::Exception* CreateInvalidHighSurrogateCharException(char16_t  hi, ::System::Xml::ExceptionType  exceptionType) ;

/// @brief Method CreateInvalidHighSurrogateCharException, addr 0x181d315a0, size 0xf0, virtual false, abstract: false, final false
static inline ::System::Exception* CreateInvalidHighSurrogateCharException(char16_t  hi, ::System::Xml::ExceptionType  exceptionType, int32_t  lineNo, int32_t  linePos) ;

/// @brief Method CreateInvalidNameArgumentException, addr 0x181d31740, size 0x80, virtual false, abstract: false, final false
static inline ::System::ArgumentException* CreateInvalidNameArgumentException(::StringW  name, ::StringW  argumentName) ;

/// @brief Method CreateInvalidNameCharException, addr 0x181d317c0, size 0x110, virtual false, abstract: false, final false
static inline ::System::Exception* CreateInvalidNameCharException(::StringW  name, int32_t  index, ::System::Xml::ExceptionType  exceptionType) ;

/// @brief Method CreateInvalidSurrogatePairException, addr 0x181d318d0, size 0x20, virtual false, abstract: false, final false
static inline ::System::Exception* CreateInvalidSurrogatePairException(char16_t  low, char16_t  hi) ;

/// @brief Method CreateInvalidSurrogatePairException, addr 0x181d318f0, size 0x20, virtual false, abstract: false, final false
static inline ::System::Exception* CreateInvalidSurrogatePairException(char16_t  low, char16_t  hi, ::System::Xml::ExceptionType  exceptionType) ;

/// @brief Method CreateInvalidSurrogatePairException, addr 0x181d31910, size 0x140, virtual false, abstract: false, final false
static inline ::System::Exception* CreateInvalidSurrogatePairException(char16_t  low, char16_t  hi, ::System::Xml::ExceptionType  exceptionType, int32_t  lineNo, int32_t  linePos) ;

/// @brief Method DecodeName, addr 0x181d31a50, size 0x6b0, virtual false, abstract: false, final false
static inline ::StringW DecodeName(::StringW  name) ;

/// @brief Method DoubleToInt64Bits, addr 0x18169c190, size 0x10, virtual false, abstract: false, final false
static inline int64_t DoubleToInt64Bits(double_t  value) ;

/// @brief Method EncodeLocalName, addr 0x181d32100, size 0x10, virtual false, abstract: false, final false
static inline ::StringW EncodeLocalName(::StringW  name) ;

/// @brief Method EncodeName, addr 0x181d32110, size 0x10, virtual false, abstract: false, final false
static inline ::StringW EncodeName(::StringW  name) ;

/// @brief Method EncodeName, addr 0x181d32120, size 0x6a0, virtual false, abstract: false, final false
static inline ::StringW EncodeName(::StringW  name, bool  first, bool  local) ;

/// @brief Method FromBinHexString, addr 0x181d327c0, size 0x40, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> FromBinHexString(::StringW  s) ;

/// @brief Method FromBinHexString, addr 0x181d32800, size 0x40, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> FromBinHexString(::StringW  s, bool  allowOddCount) ;

/// @brief Method FromHex, addr 0x181d32840, size 0x30, virtual false, abstract: false, final false
static inline int32_t FromHex(char16_t  digit) ;

/// @brief Method IsNegativeZero, addr 0x181d32870, size 0x20, virtual false, abstract: false, final false
static inline bool IsNegativeZero(double_t  value) ;

/// @brief Method SplitString, addr 0x181d32890, size 0x50, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> SplitString(::StringW  value) ;

/// @brief Method StrEqual, addr 0x181d328e0, size 0x90, virtual false, abstract: false, final false
static inline bool StrEqual(::ArrayW<char16_t>  chars, int32_t  strPos1, int32_t  strLen1, ::StringW  str2) ;

/// @brief Method SwitchToLocalTime, addr 0x1817be930, size 0x80, virtual false, abstract: false, final false
static inline ::System::DateTime SwitchToLocalTime(::System::DateTime  value) ;

/// @brief Method SwitchToUtcTime, addr 0x1817be9b0, size 0x80, virtual false, abstract: false, final false
static inline ::System::DateTime SwitchToUtcTime(::System::DateTime  value) ;

/// @brief Method ToBinHexString, addr 0x181d32970, size 0x30, virtual false, abstract: false, final false
static inline ::StringW ToBinHexString(::ArrayW<uint8_t>  inArray) ;

/// @brief Method ToBoolean, addr 0x181d329a0, size 0x150, virtual false, abstract: false, final false
static inline bool ToBoolean(::StringW  s) ;

/// @brief Method ToByte, addr 0x181d32af0, size 0x30, virtual false, abstract: false, final false
static inline uint8_t ToByte(::StringW  s) ;

/// @brief Method ToChar, addr 0x181d32b20, size 0x90, virtual false, abstract: false, final false
static inline char16_t ToChar(::StringW  s) ;

/// @brief Method ToDateTime, addr 0x181d32d50, size 0x90, virtual false, abstract: false, final false
static inline ::System::DateTime ToDateTime(::StringW  s) ;

/// @brief Method ToDateTime, addr 0x181d32c10, size 0x140, virtual false, abstract: false, final false
static inline ::System::DateTime ToDateTime(::StringW  s, ::System::Xml::XmlDateTimeSerializationMode  dateTimeOption) ;

/// @brief Method ToDateTime, addr 0x181d32de0, size 0x40, virtual false, abstract: false, final false
static inline ::System::DateTime ToDateTime(::StringW  s, ::ArrayW<::StringW>  formats) ;

/// @brief Method ToDateTimeOffset, addr 0x181d32bb0, size 0x60, virtual false, abstract: false, final false
static inline ::System::DateTimeOffset ToDateTimeOffset(::StringW  s) ;

/// @brief Method ToDecimal, addr 0x181d32e20, size 0x50, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(::StringW  s) ;

/// @brief Method ToDouble, addr 0x181d32e70, size 0xf0, virtual false, abstract: false, final false
static inline double_t ToDouble(::StringW  s) ;

/// @brief Method ToGuid, addr 0x181d32f60, size 0x20, virtual false, abstract: false, final false
static inline ::System::Guid ToGuid(::StringW  s) ;

/// @brief Method ToInt16, addr 0x181d32f80, size 0x30, virtual false, abstract: false, final false
static inline int16_t ToInt16(::StringW  s) ;

/// @brief Method ToInt32, addr 0x181d32fb0, size 0x30, virtual false, abstract: false, final false
static inline int32_t ToInt32(::StringW  s) ;

/// @brief Method ToInt64, addr 0x181d32fe0, size 0x30, virtual false, abstract: false, final false
static inline int64_t ToInt64(::StringW  s) ;

/// @brief Method ToInteger, addr 0x181d33010, size 0x50, virtual false, abstract: false, final false
static inline ::System::Decimal ToInteger(::StringW  s) ;

/// @brief Method ToSByte, addr 0x181d33060, size 0x30, virtual false, abstract: false, final false
static inline int8_t ToSByte(::StringW  s) ;

/// @brief Method ToSingle, addr 0x181d33090, size 0xf0, virtual false, abstract: false, final false
static inline float_t ToSingle(::StringW  s) ;

/// @brief Method ToString, addr 0x181d33460, size 0x130, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::DateTime  value, ::System::Xml::XmlDateTimeSerializationMode  dateTimeOption) ;

/// @brief Method ToString, addr 0x181d33620, size 0x30, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::DateTime  value, ::StringW  format) ;

/// @brief Method ToString, addr 0x181d333f0, size 0x40, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::DateTimeOffset  value) ;

/// @brief Method ToString, addr 0x181d33370, size 0x30, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::Decimal  value) ;

/// @brief Method ToString, addr 0x181d33330, size 0x10, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::Guid  value) ;

/// @brief Method ToString, addr 0x181d335b0, size 0x70, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::TimeSpan  value) ;

/// @brief Method ToString, addr 0x181d33590, size 0x20, virtual false, abstract: false, final false
static inline ::StringW ToString(bool  value) ;

/// @brief Method ToString, addr 0x181d333a0, size 0x20, virtual false, abstract: false, final false
static inline ::StringW ToString(char16_t  value) ;

/// @brief Method ToString, addr 0x181d33180, size 0x90, virtual false, abstract: false, final false
static inline ::StringW ToString(double_t  value) ;

/// @brief Method ToString, addr 0x181d33210, size 0x90, virtual false, abstract: false, final false
static inline ::StringW ToString(float_t  value) ;

/// @brief Method ToString, addr 0x181d332d0, size 0x30, virtual false, abstract: false, final false
static inline ::StringW ToString(int16_t  value) ;

/// @brief Method ToString, addr 0x181d33300, size 0x30, virtual false, abstract: false, final false
static inline ::StringW ToString(int32_t  value) ;

/// @brief Method ToString, addr 0x181d33680, size 0x30, virtual false, abstract: false, final false
static inline ::StringW ToString(int64_t  value) ;

/// @brief Method ToString, addr 0x181d33650, size 0x30, virtual false, abstract: false, final false
static inline ::StringW ToString(int8_t  value) ;

/// @brief Method ToString, addr 0x181d332a0, size 0x30, virtual false, abstract: false, final false
static inline ::StringW ToString(uint16_t  value) ;

/// @brief Method ToString, addr 0x181d333c0, size 0x30, virtual false, abstract: false, final false
static inline ::StringW ToString(uint32_t  value) ;

/// @brief Method ToString, addr 0x181d33430, size 0x30, virtual false, abstract: false, final false
static inline ::StringW ToString(uint64_t  value) ;

/// @brief Method ToString, addr 0x181d33340, size 0x30, virtual false, abstract: false, final false
static inline ::StringW ToString(uint8_t  value) ;

/// @brief Method ToTimeSpan, addr 0x181d336b0, size 0x120, virtual false, abstract: false, final false
static inline ::System::TimeSpan ToTimeSpan(::StringW  s) ;

/// @brief Method ToUInt16, addr 0x181d337d0, size 0x30, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(::StringW  s) ;

/// @brief Method ToUInt32, addr 0x181d33800, size 0x30, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(::StringW  s) ;

/// @brief Method ToUInt64, addr 0x181d33830, size 0x30, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::StringW  s) ;

/// @brief Method ToUri, addr 0x181d33860, size 0x1d0, virtual false, abstract: false, final false
static inline ::System::Uri* ToUri(::StringW  s) ;

/// @brief Method ToXPathDouble, addr 0x181d33a30, size 0x190, virtual false, abstract: false, final false
static inline double_t ToXPathDouble(::System::Object*  o) ;

/// @brief Method TrimString, addr 0x181d33c60, size 0x50, virtual false, abstract: false, final false
static inline ::StringW TrimString(::StringW  value) ;

/// @brief Method TrimStringEnd, addr 0x181d33bc0, size 0x50, virtual false, abstract: false, final false
static inline ::StringW TrimStringEnd(::StringW  value) ;

/// @brief Method TrimStringStart, addr 0x181d33c10, size 0x50, virtual false, abstract: false, final false
static inline ::StringW TrimStringStart(::StringW  value) ;

/// @brief Method TryToBoolean, addr 0x181d33cb0, size 0x150, virtual false, abstract: false, final false
static inline ::System::Exception* TryToBoolean(::StringW  s, ::by_ref<bool>  result) ;

/// @brief Method TryToByte, addr 0x181d33e00, size 0xc0, virtual false, abstract: false, final false
static inline ::System::Exception* TryToByte(::StringW  s, ::by_ref<uint8_t>  result) ;

/// @brief Method TryToChar, addr 0x181d33ec0, size 0xa0, virtual false, abstract: false, final false
static inline ::System::Exception* TryToChar(::StringW  s, ::by_ref<char16_t>  result) ;

/// @brief Method TryToDecimal, addr 0x181d33f60, size 0xc0, virtual false, abstract: false, final false
static inline ::System::Exception* TryToDecimal(::StringW  s, ::by_ref<::System::Decimal>  result) ;

/// @brief Method TryToDouble, addr 0x181d34020, size 0x1a0, virtual false, abstract: false, final false
static inline ::System::Exception* TryToDouble(::StringW  s, ::by_ref<double_t>  result) ;

/// @brief Method TryToGuid, addr 0x181d341c0, size 0xf0, virtual false, abstract: false, final false
static inline ::System::Exception* TryToGuid(::StringW  s, ::by_ref<::System::Guid>  result) ;

/// @brief Method TryToInt16, addr 0x181d342b0, size 0xc0, virtual false, abstract: false, final false
static inline ::System::Exception* TryToInt16(::StringW  s, ::by_ref<int16_t>  result) ;

/// @brief Method TryToInt32, addr 0x181d34370, size 0xc0, virtual false, abstract: false, final false
static inline ::System::Exception* TryToInt32(::StringW  s, ::by_ref<int32_t>  result) ;

/// @brief Method TryToInt64, addr 0x181d34430, size 0xc0, virtual false, abstract: false, final false
static inline ::System::Exception* TryToInt64(::StringW  s, ::by_ref<int64_t>  result) ;

/// @brief Method TryToInteger, addr 0x181d344f0, size 0xc0, virtual false, abstract: false, final false
static inline ::System::Exception* TryToInteger(::StringW  s, ::by_ref<::System::Decimal>  result) ;

/// @brief Method TryToSByte, addr 0x181d345b0, size 0xc0, virtual false, abstract: false, final false
static inline ::System::Exception* TryToSByte(::StringW  s, ::by_ref<int8_t>  result) ;

/// @brief Method TryToSingle, addr 0x181d34670, size 0x190, virtual false, abstract: false, final false
static inline ::System::Exception* TryToSingle(::StringW  s, ::by_ref<float_t>  result) ;

/// @brief Method TryToTimeSpan, addr 0x181d34800, size 0x90, virtual false, abstract: false, final false
static inline ::System::Exception* TryToTimeSpan(::StringW  s, ::by_ref<::System::TimeSpan>  result) ;

/// @brief Method TryToUInt16, addr 0x181d34890, size 0xc0, virtual false, abstract: false, final false
static inline ::System::Exception* TryToUInt16(::StringW  s, ::by_ref<uint16_t>  result) ;

/// @brief Method TryToUInt32, addr 0x181d34950, size 0xc0, virtual false, abstract: false, final false
static inline ::System::Exception* TryToUInt32(::StringW  s, ::by_ref<uint32_t>  result) ;

/// @brief Method TryToUInt64, addr 0x181d34a10, size 0xc0, virtual false, abstract: false, final false
static inline ::System::Exception* TryToUInt64(::StringW  s, ::by_ref<uint64_t>  result) ;

/// @brief Method TryToUri, addr 0x181d34ad0, size 0x120, virtual false, abstract: false, final false
static inline ::System::Exception* TryToUri(::StringW  s, ::by_ref<::System::Uri*>  result) ;

/// @brief Method TryVerifyNCName, addr 0x181d34bf0, size 0x1e0, virtual false, abstract: false, final false
static inline ::System::Exception* TryVerifyNCName(::StringW  name) ;

/// @brief Method TryVerifyNMTOKEN, addr 0x181d34dd0, size 0x180, virtual false, abstract: false, final false
static inline ::System::Exception* TryVerifyNMTOKEN(::StringW  name) ;

/// @brief Method TryVerifyName, addr 0x181d34f50, size 0x140, virtual false, abstract: false, final false
static inline ::System::Exception* TryVerifyName(::StringW  name) ;

/// @brief Method TryVerifyNormalizedString, addr 0x181d35090, size 0x90, virtual false, abstract: false, final false
static inline ::System::Exception* TryVerifyNormalizedString(::StringW  str) ;

/// @brief Method TryVerifyTOKEN, addr 0x181d35120, size 0xe0, virtual false, abstract: false, final false
static inline ::System::Exception* TryVerifyTOKEN(::StringW  token) ;

/// @brief Method VerifyCharData, addr 0x181d35200, size 0x200, virtual false, abstract: false, final false
static inline void VerifyCharData(::StringW  data, ::System::Xml::ExceptionType  invCharExceptionType, ::System::Xml::ExceptionType  invSurrogateExceptionType) ;

/// @brief Method VerifyNCName, addr 0x181d35400, size 0x90, virtual false, abstract: false, final false
static inline ::StringW VerifyNCName(::StringW  name) ;

/// @brief Method VerifyNCName, addr 0x181d35490, size 0x90, virtual false, abstract: false, final false
static inline ::StringW VerifyNCName(::StringW  name, ::System::Xml::ExceptionType  exceptionType) ;

/// @brief Method VerifyName, addr 0x181d35520, size 0x90, virtual false, abstract: false, final false
static inline ::StringW VerifyName(::StringW  name) ;

/// @brief Method VerifyQName, addr 0x181d355b0, size 0xf0, virtual false, abstract: false, final false
static inline ::StringW VerifyQName(::StringW  name, ::System::Xml::ExceptionType  exceptionType) ;

/// @brief Method VerifyTOKEN, addr 0x181d356a0, size 0xf0, virtual false, abstract: false, final false
static inline ::StringW VerifyTOKEN(::StringW  token) ;

static inline ::ArrayW<char16_t> getStaticF_WhitespaceChars() ;

static inline ::System::Text::RegularExpressions::Regex* getStaticF_c_DecodeCharPattern() ;

static inline ::System::Text::RegularExpressions::Regex* getStaticF_c_EncodeCharPattern() ;

static inline int32_t getStaticF_c_EncodedCharLength() ;

static inline ::ArrayW<char16_t> getStaticF_crt() ;

static inline ::ArrayW<::StringW> getStaticF_s_allDateTimeFormats() ;

static inline ::System::Xml::XmlCharType getStaticF_xmlCharType() ;

/// @brief Method get_AllDateTimeFormats, addr 0x181d358d0, size 0x60, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> get_AllDateTimeFormats() ;

static inline void setStaticF_WhitespaceChars(::ArrayW<char16_t>  value) ;

static inline void setStaticF_c_DecodeCharPattern(::System::Text::RegularExpressions::Regex*  value) ;

static inline void setStaticF_c_EncodeCharPattern(::System::Text::RegularExpressions::Regex*  value) ;

static inline void setStaticF_c_EncodedCharLength(int32_t  value) ;

static inline void setStaticF_crt(::ArrayW<char16_t>  value) ;

static inline void setStaticF_s_allDateTimeFormats(::ArrayW<::StringW>  value) ;

static inline void setStaticF_xmlCharType(::System::Xml::XmlCharType  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlConvert() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlConvert", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlConvert(XmlConvert && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlConvert", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlConvert(XmlConvert const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9804};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::XmlConvert) == 0x10, "Size mismatch!");

} // namespace end def System::Xml
