#pragma once
// IWYU pragma private; include "System/Convert.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Convert)
namespace System {
struct Base64FormattingOptions;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class IConvertible;
}
namespace System {
class IFormatProvider;
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
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class Convert;
}
// Write type traits
MARK_REF_T(::System::Convert*);
DEFINE_IL2CPP_CLASS(::System::Convert*, "System", "Convert");
// Dependencies System.Object, System.Type
namespace System {
// Is value type: false
// CS Name: System.Convert
class CORDL_TYPE Convert : public ::System::Object {
public:
// Declarations
/// @brief Field ConvertTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ConvertTypes, put=setStaticF_ConvertTypes)) ::ArrayW<::System::Type*>  ConvertTypes;

/// @brief Field DBNull, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DBNull, put=setStaticF_DBNull)) ::System::Object*  DBNull;

/// @brief Field EnumType, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EnumType, put=setStaticF_EnumType)) ::System::Type*  EnumType;

/// @brief Field base64Table, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_base64Table, put=setStaticF_base64Table)) ::ArrayW<char16_t>  base64Table;

/// @brief Field s_decodingMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_decodingMap, put=setStaticF_s_decodingMap)) ::ArrayW<int8_t>  s_decodingMap;

/// @brief Method ChangeType, addr 0x18169efa0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Object* ChangeType(::System::Object*  value, ::System::Type*  conversionType) ;

/// @brief Method ChangeType, addr 0x18169efe0, size 0x500, virtual false, abstract: false, final false
static inline ::System::Object* ChangeType(::System::Object*  value, ::System::Type*  conversionType, ::System::IFormatProvider*  provider) ;

/// @brief Method ChangeType, addr 0x18169f4e0, size 0x410, virtual false, abstract: false, final false
static inline ::System::Object* ChangeType(::System::Object*  value, ::System::TypeCode  typeCode, ::System::IFormatProvider*  provider) ;

/// @brief Method ConvertToBase64Array, addr 0x18169f8f0, size 0x330, virtual false, abstract: false, final false
static inline int32_t ConvertToBase64Array(char16_t*  outChars, uint8_t*  inData, int32_t  offset, int32_t  length, bool  insertLineBreaks) ;

/// @brief Method CopyToTempBufferWithoutWhiteSpace, addr 0x18169fc20, size 0x90, virtual false, abstract: false, final false
static inline void CopyToTempBufferWithoutWhiteSpace(::System::ReadOnlySpan_1<char16_t>  chars, ::System::Span_1<char16_t>  tempBuffer, ::by_ref<int32_t>  consumed, ::by_ref<int32_t>  charsWritten) ;

/// @brief Method Decode, addr 0x18169fcb0, size 0x60, virtual false, abstract: false, final false
static inline int32_t Decode(::by_ref<char16_t>  encodedChars, ::by_ref<int8_t>  decodingMap) ;

/// @brief Method DefaultToType, addr 0x18169fd10, size 0x570, virtual false, abstract: false, final false
static inline ::System::Object* DefaultToType(::System::IConvertible*  value, ::System::Type*  targetType, ::System::IFormatProvider*  provider) ;

/// @brief Method FromBase64CharArray, addr 0x1816a0280, size 0xe0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> FromBase64CharArray(::ArrayW<char16_t>  inArray, int32_t  offset, int32_t  length) ;

/// @brief Method FromBase64CharPtr, addr 0x1816a0360, size 0x1c0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> FromBase64CharPtr(char16_t*  inputPtr, int32_t  inputLength) ;

/// @brief Method FromBase64String, addr 0x1816a0520, size 0x40, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> FromBase64String(::StringW  s) ;

/// @brief Method FromBase64_ComputeResultLength, addr 0x1816a0560, size 0xb0, virtual false, abstract: false, final false
static inline int32_t FromBase64_ComputeResultLength(char16_t*  inputPtr, int32_t  inputLength) ;

/// @brief Method GetTypeCode, addr 0x1816a0610, size 0x40, virtual false, abstract: false, final false
static inline ::System::TypeCode GetTypeCode(::System::Object*  value) ;

/// @brief Method IsSpace, addr 0x1816a0650, size 0x30, virtual false, abstract: false, final false
static inline bool IsSpace(char16_t  c) ;

/// @brief Method ThrowByteOverflowException, addr 0x1816a0680, size 0x50, virtual false, abstract: false, final false
static inline void ThrowByteOverflowException() ;

/// @brief Method ThrowCharOverflowException, addr 0x1816a06d0, size 0x50, virtual false, abstract: false, final false
static inline void ThrowCharOverflowException() ;

/// @brief Method ThrowInt16OverflowException, addr 0x1816a0720, size 0x50, virtual false, abstract: false, final false
static inline void ThrowInt16OverflowException() ;

/// @brief Method ThrowInt32OverflowException, addr 0x1816a0770, size 0x50, virtual false, abstract: false, final false
static inline void ThrowInt32OverflowException() ;

/// @brief Method ThrowInt64OverflowException, addr 0x1816a07c0, size 0x50, virtual false, abstract: false, final false
static inline void ThrowInt64OverflowException() ;

/// @brief Method ThrowSByteOverflowException, addr 0x1816a0810, size 0x50, virtual false, abstract: false, final false
static inline void ThrowSByteOverflowException() ;

/// @brief Method ThrowUInt16OverflowException, addr 0x1816a0860, size 0x50, virtual false, abstract: false, final false
static inline void ThrowUInt16OverflowException() ;

/// @brief Method ThrowUInt32OverflowException, addr 0x1816a08b0, size 0x50, virtual false, abstract: false, final false
static inline void ThrowUInt32OverflowException() ;

/// @brief Method ThrowUInt64OverflowException, addr 0x1816a0900, size 0x50, virtual false, abstract: false, final false
static inline void ThrowUInt64OverflowException() ;

/// @brief Method ToBase64CharArray, addr 0x1816a0950, size 0x170, virtual false, abstract: false, final false
static inline int32_t ToBase64CharArray(::ArrayW<uint8_t>  inArray, int32_t  offsetIn, int32_t  length, ::ArrayW<char16_t>  outArray, int32_t  offsetOut) ;

/// @brief Method ToBase64CharArray, addr 0x1816a0ac0, size 0x1d0, virtual false, abstract: false, final false
static inline int32_t ToBase64CharArray(::ArrayW<uint8_t>  inArray, int32_t  offsetIn, int32_t  length, ::ArrayW<char16_t>  outArray, int32_t  offsetOut, ::System::Base64FormattingOptions  options) ;

/// @brief Method ToBase64String, addr 0x1816a0d90, size 0x110, virtual false, abstract: false, final false
static inline ::StringW ToBase64String(::System::ReadOnlySpan_1<uint8_t>  bytes, ::System::Base64FormattingOptions  options) ;

/// @brief Method ToBase64String, addr 0x1816a0ea0, size 0xf0, virtual false, abstract: false, final false
static inline ::StringW ToBase64String(::ArrayW<uint8_t>  inArray) ;

/// @brief Method ToBase64String, addr 0x1816a0f90, size 0x170, virtual false, abstract: false, final false
static inline ::StringW ToBase64String(::ArrayW<uint8_t>  inArray, int32_t  offset, int32_t  length) ;

/// @brief Method ToBase64String, addr 0x1816a0c90, size 0x100, virtual false, abstract: false, final false
static inline ::StringW ToBase64String(::ArrayW<uint8_t>  inArray, int32_t  offset, int32_t  length, ::System::Base64FormattingOptions  options) ;

/// @brief Method ToBase64_CalculateAndValidateOutputLength, addr 0x1816a1100, size 0xe0, virtual false, abstract: false, final false
static inline int32_t ToBase64_CalculateAndValidateOutputLength(int32_t  inputLength, bool  insertLineBreaks) ;

/// @brief Method ToBoolean, addr 0x1816a1320, size 0xa0, virtual false, abstract: false, final false
static inline bool ToBoolean(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToBoolean, addr 0x1816a12c0, size 0x60, virtual false, abstract: false, final false
static inline bool ToBoolean(::System::Decimal  value) ;

/// @brief Method ToBoolean, addr 0x1816a1200, size 0x70, virtual false, abstract: false, final false
static inline bool ToBoolean(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToBoolean, addr 0x1816a12a0, size 0x20, virtual false, abstract: false, final false
static inline bool ToBoolean(double_t  value) ;

/// @brief Method ToBoolean, addr 0x1816a1280, size 0x10, virtual false, abstract: false, final false
static inline bool ToBoolean(float_t  value) ;

/// @brief Method ToBoolean, addr 0x1816a1290, size 0x10, virtual false, abstract: false, final false
static inline bool ToBoolean(int16_t  value) ;

/// @brief Method ToBoolean, addr 0x1816a1270, size 0x10, virtual false, abstract: false, final false
static inline bool ToBoolean(int32_t  value) ;

/// @brief Method ToBoolean, addr 0x1816a11e0, size 0x10, virtual false, abstract: false, final false
static inline bool ToBoolean(int64_t  value) ;

/// @brief Method ToBoolean, addr 0x1816a11f0, size 0x10, virtual false, abstract: false, final false
static inline bool ToBoolean(int8_t  value) ;

/// @brief Method ToBoolean, addr 0x1816a1290, size 0x10, virtual false, abstract: false, final false
static inline bool ToBoolean(uint16_t  value) ;

/// @brief Method ToBoolean, addr 0x1816a1270, size 0x10, virtual false, abstract: false, final false
static inline bool ToBoolean(uint32_t  value) ;

/// @brief Method ToBoolean, addr 0x1816a11e0, size 0x10, virtual false, abstract: false, final false
static inline bool ToBoolean(uint64_t  value) ;

/// @brief Method ToBoolean, addr 0x1816a11f0, size 0x10, virtual false, abstract: false, final false
static inline bool ToBoolean(uint8_t  value) ;

/// @brief Method ToByte, addr 0x1816a1660, size 0x80, virtual false, abstract: false, final false
static inline uint8_t ToByte(::StringW  value) ;

/// @brief Method ToByte, addr 0x1816a15b0, size 0x90, virtual false, abstract: false, final false
static inline uint8_t ToByte(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToByte, addr 0x1816a1520, size 0x90, virtual false, abstract: false, final false
static inline uint8_t ToByte(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToByte, addr 0x1816a14a0, size 0x40, virtual false, abstract: false, final false
static inline uint8_t ToByte(::System::Decimal  value) ;

/// @brief Method ToByte, addr 0x1816a1430, size 0x70, virtual false, abstract: false, final false
static inline uint8_t ToByte(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToByte, addr 0x1816a11f0, size 0x10, virtual false, abstract: false, final false
static inline uint8_t ToByte(bool  value) ;

/// @brief Method ToByte, addr 0x1816a13e0, size 0x20, virtual false, abstract: false, final false
static inline uint8_t ToByte(char16_t  value) ;

/// @brief Method ToByte, addr 0x1816a14e0, size 0x20, virtual false, abstract: false, final false
static inline uint8_t ToByte(double_t  value) ;

/// @brief Method ToByte, addr 0x1816a1400, size 0x30, virtual false, abstract: false, final false
static inline uint8_t ToByte(float_t  value) ;

/// @brief Method ToByte, addr 0x1816a13e0, size 0x20, virtual false, abstract: false, final false
static inline uint8_t ToByte(int16_t  value) ;

/// @brief Method ToByte, addr 0x1816a1500, size 0x20, virtual false, abstract: false, final false
static inline uint8_t ToByte(int32_t  value) ;

/// @brief Method ToByte, addr 0x1816a13c0, size 0x20, virtual false, abstract: false, final false
static inline uint8_t ToByte(int64_t  value) ;

/// @brief Method ToByte, addr 0x1816a1640, size 0x20, virtual false, abstract: false, final false
static inline uint8_t ToByte(int8_t  value) ;

/// @brief Method ToByte, addr 0x1816a13e0, size 0x20, virtual false, abstract: false, final false
static inline uint8_t ToByte(uint16_t  value) ;

/// @brief Method ToByte, addr 0x1816a1500, size 0x20, virtual false, abstract: false, final false
static inline uint8_t ToByte(uint32_t  value) ;

/// @brief Method ToByte, addr 0x1816a13c0, size 0x20, virtual false, abstract: false, final false
static inline uint8_t ToByte(uint64_t  value) ;

/// @brief Method ToChar, addr 0x1816a1700, size 0x80, virtual false, abstract: false, final false
static inline char16_t ToChar(::StringW  value) ;

/// @brief Method ToChar, addr 0x1816a1700, size 0x80, virtual false, abstract: false, final false
static inline char16_t ToChar(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToChar, addr 0x1816a17e0, size 0x70, virtual false, abstract: false, final false
static inline char16_t ToChar(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToChar, addr 0x1816a1780, size 0x20, virtual false, abstract: false, final false
static inline char16_t ToChar(int16_t  value) ;

/// @brief Method ToChar, addr 0x1816a17a0, size 0x20, virtual false, abstract: false, final false
static inline char16_t ToChar(int32_t  value) ;

/// @brief Method ToChar, addr 0x1816a16e0, size 0x20, virtual false, abstract: false, final false
static inline char16_t ToChar(int64_t  value) ;

/// @brief Method ToChar, addr 0x1816a17c0, size 0x20, virtual false, abstract: false, final false
static inline char16_t ToChar(int8_t  value) ;

/// @brief Method ToChar, addr 0x1805a9e00, size 0x10, virtual false, abstract: false, final false
static inline char16_t ToChar(uint16_t  value) ;

/// @brief Method ToChar, addr 0x1816a17a0, size 0x20, virtual false, abstract: false, final false
static inline char16_t ToChar(uint32_t  value) ;

/// @brief Method ToChar, addr 0x1816a16e0, size 0x20, virtual false, abstract: false, final false
static inline char16_t ToChar(uint64_t  value) ;

/// @brief Method ToChar, addr 0x1805ed850, size 0x10, virtual false, abstract: false, final false
static inline char16_t ToChar(uint8_t  value) ;

/// @brief Method ToDateTime, addr 0x1816a18f0, size 0x40, virtual false, abstract: false, final false
static inline ::System::DateTime ToDateTime(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDateTime, addr 0x1816a1850, size 0xa0, virtual false, abstract: false, final false
static inline ::System::DateTime ToDateTime(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDecimal, addr 0x1816a1b50, size 0xa0, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDecimal, addr 0x1816a1990, size 0xc0, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDecimal, addr 0x1816a1a70, size 0x20, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(bool  value) ;

/// @brief Method ToDecimal, addr 0x1816a1b10, size 0x20, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(double_t  value) ;

/// @brief Method ToDecimal, addr 0x1816a1930, size 0x20, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(float_t  value) ;

/// @brief Method ToDecimal, addr 0x1816a1a90, size 0x20, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(int16_t  value) ;

/// @brief Method ToDecimal, addr 0x1816a1a50, size 0x20, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(int32_t  value) ;

/// @brief Method ToDecimal, addr 0x1816a1970, size 0x20, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(int64_t  value) ;

/// @brief Method ToDecimal, addr 0x1816a1ab0, size 0x20, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(int8_t  value) ;

/// @brief Method ToDecimal, addr 0x1816a1ad0, size 0x20, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(uint16_t  value) ;

/// @brief Method ToDecimal, addr 0x1816a1b30, size 0x20, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(uint32_t  value) ;

/// @brief Method ToDecimal, addr 0x1816a1af0, size 0x20, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(uint64_t  value) ;

/// @brief Method ToDecimal, addr 0x1816a1950, size 0x20, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(uint8_t  value) ;

/// @brief Method ToDouble, addr 0x1816a1d30, size 0x20, virtual false, abstract: false, final false
static inline double_t ToDouble(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDouble, addr 0x1816a1c70, size 0x20, virtual false, abstract: false, final false
static inline double_t ToDouble(::System::Decimal  value) ;

/// @brief Method ToDouble, addr 0x1816a1ca0, size 0x70, virtual false, abstract: false, final false
static inline double_t ToDouble(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDouble, addr 0x1816a1c20, size 0x10, virtual false, abstract: false, final false
static inline double_t ToDouble(bool  value) ;

/// @brief Method ToDouble, addr 0x1816a1d20, size 0x10, virtual false, abstract: false, final false
static inline double_t ToDouble(float_t  value) ;

/// @brief Method ToDouble, addr 0x1816a1d50, size 0x10, virtual false, abstract: false, final false
static inline double_t ToDouble(int16_t  value) ;

/// @brief Method ToDouble, addr 0x1816a1c00, size 0x10, virtual false, abstract: false, final false
static inline double_t ToDouble(int32_t  value) ;

/// @brief Method ToDouble, addr 0x1816a1c10, size 0x10, virtual false, abstract: false, final false
static inline double_t ToDouble(int64_t  value) ;

/// @brief Method ToDouble, addr 0x1816a1bf0, size 0x10, virtual false, abstract: false, final false
static inline double_t ToDouble(int8_t  value) ;

/// @brief Method ToDouble, addr 0x1816a1c60, size 0x10, virtual false, abstract: false, final false
static inline double_t ToDouble(uint16_t  value) ;

/// @brief Method ToDouble, addr 0x1816a1d10, size 0x10, virtual false, abstract: false, final false
static inline double_t ToDouble(uint32_t  value) ;

/// @brief Method ToDouble, addr 0x1816a1c30, size 0x30, virtual false, abstract: false, final false
static inline double_t ToDouble(uint64_t  value) ;

/// @brief Method ToDouble, addr 0x1816a1c90, size 0x10, virtual false, abstract: false, final false
static inline double_t ToDouble(uint8_t  value) ;

/// @brief Method ToInt16, addr 0x1816a1e40, size 0xa0, virtual false, abstract: false, final false
static inline int16_t ToInt16(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToInt16, addr 0x1816a1f30, size 0x20, virtual false, abstract: false, final false
static inline int16_t ToInt16(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt16, addr 0x1816a1ee0, size 0x40, virtual false, abstract: false, final false
static inline int16_t ToInt16(::System::Decimal  value) ;

/// @brief Method ToInt16, addr 0x1816a1d80, size 0x70, virtual false, abstract: false, final false
static inline int16_t ToInt16(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt16, addr 0x18145a560, size 0x10, virtual false, abstract: false, final false
static inline int16_t ToInt16(bool  value) ;

/// @brief Method ToInt16, addr 0x1816a1d60, size 0x20, virtual false, abstract: false, final false
static inline int16_t ToInt16(char16_t  value) ;

/// @brief Method ToInt16, addr 0x1816a1fd0, size 0x30, virtual false, abstract: false, final false
static inline int16_t ToInt16(double_t  value) ;

/// @brief Method ToInt16, addr 0x1816a1f50, size 0x30, virtual false, abstract: false, final false
static inline int16_t ToInt16(float_t  value) ;

/// @brief Method ToInt16, addr 0x1816a1f80, size 0x30, virtual false, abstract: false, final false
static inline int16_t ToInt16(int32_t  value) ;

/// @brief Method ToInt16, addr 0x1816a1df0, size 0x30, virtual false, abstract: false, final false
static inline int16_t ToInt16(int64_t  value) ;

/// @brief Method ToInt16, addr 0x1816a1f20, size 0x10, virtual false, abstract: false, final false
static inline int16_t ToInt16(int8_t  value) ;

/// @brief Method ToInt16, addr 0x1816a1d60, size 0x20, virtual false, abstract: false, final false
static inline int16_t ToInt16(uint16_t  value) ;

/// @brief Method ToInt16, addr 0x1816a1fb0, size 0x20, virtual false, abstract: false, final false
static inline int16_t ToInt16(uint32_t  value) ;

/// @brief Method ToInt16, addr 0x1816a1e20, size 0x20, virtual false, abstract: false, final false
static inline int16_t ToInt16(uint64_t  value) ;

/// @brief Method ToInt16, addr 0x1805ed850, size 0x10, virtual false, abstract: false, final false
static inline int16_t ToInt16(uint8_t  value) ;

/// @brief Method ToInt32, addr 0x1816a22c0, size 0x90, virtual false, abstract: false, final false
static inline int32_t ToInt32(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToInt32, addr 0x1816a2000, size 0x20, virtual false, abstract: false, final false
static inline int32_t ToInt32(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt32, addr 0x1816a2280, size 0x40, virtual false, abstract: false, final false
static inline int32_t ToInt32(::System::Decimal  value) ;

/// @brief Method ToInt32, addr 0x1816a21f0, size 0x60, virtual false, abstract: false, final false
static inline int32_t ToInt32(::System::Object*  value) ;

/// @brief Method ToInt32, addr 0x1816a2070, size 0x70, virtual false, abstract: false, final false
static inline int32_t ToInt32(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt32, addr 0x18145a560, size 0x10, virtual false, abstract: false, final false
static inline int32_t ToInt32(bool  value) ;

/// @brief Method ToInt32, addr 0x1805a9e00, size 0x10, virtual false, abstract: false, final false
static inline int32_t ToInt32(char16_t  value) ;

/// @brief Method ToInt32, addr 0x1816a20e0, size 0x100, virtual false, abstract: false, final false
static inline int32_t ToInt32(double_t  value) ;

/// @brief Method ToInt32, addr 0x1816a2040, size 0x10, virtual false, abstract: false, final false
static inline int32_t ToInt32(float_t  value) ;

/// @brief Method ToInt32, addr 0x1816a21e0, size 0x10, virtual false, abstract: false, final false
static inline int32_t ToInt32(int16_t  value) ;

/// @brief Method ToInt32, addr 0x1816a2250, size 0x30, virtual false, abstract: false, final false
static inline int32_t ToInt32(int64_t  value) ;

/// @brief Method ToInt32, addr 0x1805a9e00, size 0x10, virtual false, abstract: false, final false
static inline int32_t ToInt32(uint16_t  value) ;

/// @brief Method ToInt32, addr 0x1816a2050, size 0x20, virtual false, abstract: false, final false
static inline int32_t ToInt32(uint32_t  value) ;

/// @brief Method ToInt32, addr 0x1816a2020, size 0x20, virtual false, abstract: false, final false
static inline int32_t ToInt32(uint64_t  value) ;

/// @brief Method ToInt32, addr 0x1805ed850, size 0x10, virtual false, abstract: false, final false
static inline int32_t ToInt32(uint8_t  value) ;

/// @brief Method ToInt64, addr 0x1816a25d0, size 0x30, virtual false, abstract: false, final false
static inline int64_t ToInt64(::StringW  value) ;

/// @brief Method ToInt64, addr 0x1816a2350, size 0x90, virtual false, abstract: false, final false
static inline int64_t ToInt64(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToInt64, addr 0x1816a24e0, size 0x20, virtual false, abstract: false, final false
static inline int64_t ToInt64(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt64, addr 0x1816a2420, size 0x40, virtual false, abstract: false, final false
static inline int64_t ToInt64(::System::Decimal  value) ;

/// @brief Method ToInt64, addr 0x1816a2570, size 0x60, virtual false, abstract: false, final false
static inline int64_t ToInt64(::System::Object*  value) ;

/// @brief Method ToInt64, addr 0x1816a2470, size 0x70, virtual false, abstract: false, final false
static inline int64_t ToInt64(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt64, addr 0x1816a2600, size 0x10, virtual false, abstract: false, final false
static inline int64_t ToInt64(bool  value) ;

/// @brief Method ToInt64, addr 0x1805a9e00, size 0x10, virtual false, abstract: false, final false
static inline int64_t ToInt64(char16_t  value) ;

/// @brief Method ToInt64, addr 0x1816a2540, size 0x30, virtual false, abstract: false, final false
static inline int64_t ToInt64(double_t  value) ;

/// @brief Method ToInt64, addr 0x1816a23e0, size 0x40, virtual false, abstract: false, final false
static inline int64_t ToInt64(float_t  value) ;

/// @brief Method ToInt64, addr 0x1816a2460, size 0x10, virtual false, abstract: false, final false
static inline int64_t ToInt64(int16_t  value) ;

/// @brief Method ToInt64, addr 0x180543880, size 0x10, virtual false, abstract: false, final false
static inline int64_t ToInt64(int32_t  value) ;

/// @brief Method ToInt64, addr 0x1816a2500, size 0x10, virtual false, abstract: false, final false
static inline int64_t ToInt64(int8_t  value) ;

/// @brief Method ToInt64, addr 0x1805a9e00, size 0x10, virtual false, abstract: false, final false
static inline int64_t ToInt64(uint16_t  value) ;

/// @brief Method ToInt64, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline int64_t ToInt64(uint32_t  value) ;

/// @brief Method ToInt64, addr 0x1816a2510, size 0x30, virtual false, abstract: false, final false
static inline int64_t ToInt64(uint64_t  value) ;

/// @brief Method ToInt64, addr 0x1805ed850, size 0x10, virtual false, abstract: false, final false
static inline int64_t ToInt64(uint8_t  value) ;

/// @brief Method ToSByte, addr 0x1816a2730, size 0xb0, virtual false, abstract: false, final false
static inline int8_t ToSByte(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToSByte, addr 0x1816a26c0, size 0x10, virtual false, abstract: false, final false
static inline int8_t ToSByte(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToSByte, addr 0x1816a26f0, size 0x40, virtual false, abstract: false, final false
static inline int8_t ToSByte(::System::Decimal  value) ;

/// @brief Method ToSByte, addr 0x1816a2880, size 0x70, virtual false, abstract: false, final false
static inline int8_t ToSByte(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToSByte, addr 0x1816a11f0, size 0x10, virtual false, abstract: false, final false
static inline int8_t ToSByte(bool  value) ;

/// @brief Method ToSByte, addr 0x1816a26d0, size 0x20, virtual false, abstract: false, final false
static inline int8_t ToSByte(char16_t  value) ;

/// @brief Method ToSByte, addr 0x1816a2610, size 0x30, virtual false, abstract: false, final false
static inline int8_t ToSByte(double_t  value) ;

/// @brief Method ToSByte, addr 0x1816a2690, size 0x30, virtual false, abstract: false, final false
static inline int8_t ToSByte(float_t  value) ;

/// @brief Method ToSByte, addr 0x1816a27e0, size 0x30, virtual false, abstract: false, final false
static inline int8_t ToSByte(int16_t  value) ;

/// @brief Method ToSByte, addr 0x1816a2810, size 0x30, virtual false, abstract: false, final false
static inline int8_t ToSByte(int32_t  value) ;

/// @brief Method ToSByte, addr 0x1816a2660, size 0x30, virtual false, abstract: false, final false
static inline int8_t ToSByte(int64_t  value) ;

/// @brief Method ToSByte, addr 0x1816a26d0, size 0x20, virtual false, abstract: false, final false
static inline int8_t ToSByte(uint16_t  value) ;

/// @brief Method ToSByte, addr 0x1816a2640, size 0x20, virtual false, abstract: false, final false
static inline int8_t ToSByte(uint32_t  value) ;

/// @brief Method ToSByte, addr 0x1816a2840, size 0x20, virtual false, abstract: false, final false
static inline int8_t ToSByte(uint64_t  value) ;

/// @brief Method ToSByte, addr 0x1816a2860, size 0x20, virtual false, abstract: false, final false
static inline int8_t ToSByte(uint8_t  value) ;

/// @brief Method ToSingle, addr 0x1816a2950, size 0x20, virtual false, abstract: false, final false
static inline float_t ToSingle(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToSingle, addr 0x1816a29a0, size 0x20, virtual false, abstract: false, final false
static inline float_t ToSingle(::System::Decimal  value) ;

/// @brief Method ToSingle, addr 0x1816a29e0, size 0x70, virtual false, abstract: false, final false
static inline float_t ToSingle(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToSingle, addr 0x1816a29c0, size 0x10, virtual false, abstract: false, final false
static inline float_t ToSingle(bool  value) ;

/// @brief Method ToSingle, addr 0x1816a2a50, size 0x10, virtual false, abstract: false, final false
static inline float_t ToSingle(double_t  value) ;

/// @brief Method ToSingle, addr 0x1816a2910, size 0x10, virtual false, abstract: false, final false
static inline float_t ToSingle(int16_t  value) ;

/// @brief Method ToSingle, addr 0x1816a29d0, size 0x10, virtual false, abstract: false, final false
static inline float_t ToSingle(int32_t  value) ;

/// @brief Method ToSingle, addr 0x1816a2930, size 0x10, virtual false, abstract: false, final false
static inline float_t ToSingle(int64_t  value) ;

/// @brief Method ToSingle, addr 0x1816a2940, size 0x10, virtual false, abstract: false, final false
static inline float_t ToSingle(int8_t  value) ;

/// @brief Method ToSingle, addr 0x1816a28f0, size 0x10, virtual false, abstract: false, final false
static inline float_t ToSingle(uint16_t  value) ;

/// @brief Method ToSingle, addr 0x1816a2920, size 0x10, virtual false, abstract: false, final false
static inline float_t ToSingle(uint32_t  value) ;

/// @brief Method ToSingle, addr 0x1816a2970, size 0x30, virtual false, abstract: false, final false
static inline float_t ToSingle(uint64_t  value) ;

/// @brief Method ToSingle, addr 0x1816a2900, size 0x10, virtual false, abstract: false, final false
static inline float_t ToSingle(uint8_t  value) ;

/// @brief Method ToString, addr 0x1816a2ab0, size 0x130, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0x18169ee00, size 0x10, virtual false, abstract: false, final false
static inline ::StringW ToString(char16_t  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0x1816a2c30, size 0x20, virtual false, abstract: false, final false
static inline ::StringW ToString(int32_t  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0x1816a2be0, size 0x50, virtual false, abstract: false, final false
static inline ::StringW ToString(int32_t  value, int32_t  toBase) ;

/// @brief Method ToString, addr 0x1816a2c50, size 0x50, virtual false, abstract: false, final false
static inline ::StringW ToString(int64_t  value, int32_t  toBase) ;

/// @brief Method ToString, addr 0x1816a2a60, size 0x50, virtual false, abstract: false, final false
static inline ::StringW ToString(uint8_t  value, int32_t  toBase) ;

/// @brief Method ToUInt16, addr 0x1816a2ca0, size 0x90, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToUInt16, addr 0x1816a2db0, size 0x20, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToUInt16, addr 0x1816a2d50, size 0x40, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(::System::Decimal  value) ;

/// @brief Method ToUInt16, addr 0x1816a2df0, size 0x70, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToUInt16, addr 0x18145a560, size 0x10, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(bool  value) ;

/// @brief Method ToUInt16, addr 0x1805a9e00, size 0x10, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(char16_t  value) ;

/// @brief Method ToUInt16, addr 0x1816a2e80, size 0x20, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(double_t  value) ;

/// @brief Method ToUInt16, addr 0x1816a2ea0, size 0x30, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(float_t  value) ;

/// @brief Method ToUInt16, addr 0x1816a2dd0, size 0x20, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(int16_t  value) ;

/// @brief Method ToUInt16, addr 0x1816a2e60, size 0x20, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(int32_t  value) ;

/// @brief Method ToUInt16, addr 0x1816a2d90, size 0x20, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(int64_t  value) ;

/// @brief Method ToUInt16, addr 0x1816a2d30, size 0x20, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(int8_t  value) ;

/// @brief Method ToUInt16, addr 0x1816a2e60, size 0x20, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(uint32_t  value) ;

/// @brief Method ToUInt16, addr 0x1816a2d90, size 0x20, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(uint64_t  value) ;

/// @brief Method ToUInt16, addr 0x1805ed850, size 0x10, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(uint8_t  value) ;

/// @brief Method ToUInt32, addr 0x1816a3040, size 0x90, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToUInt32, addr 0x1816a31a0, size 0x20, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToUInt32, addr 0x1816a3230, size 0x40, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(::System::Decimal  value) ;

/// @brief Method ToUInt32, addr 0x1816a2fe0, size 0x60, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(::System::Object*  value) ;

/// @brief Method ToUInt32, addr 0x1816a31c0, size 0x70, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToUInt32, addr 0x18145a560, size 0x10, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(bool  value) ;

/// @brief Method ToUInt32, addr 0x1805a9e00, size 0x10, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(char16_t  value) ;

/// @brief Method ToUInt32, addr 0x1816a30d0, size 0xb0, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(double_t  value) ;

/// @brief Method ToUInt32, addr 0x1816a2ef0, size 0xb0, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(float_t  value) ;

/// @brief Method ToUInt32, addr 0x1816a2ed0, size 0x20, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(int16_t  value) ;

/// @brief Method ToUInt32, addr 0x1816a2fc0, size 0x20, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(int32_t  value) ;

/// @brief Method ToUInt32, addr 0x1816a2fa0, size 0x20, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(int64_t  value) ;

/// @brief Method ToUInt32, addr 0x1816a3180, size 0x20, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(int8_t  value) ;

/// @brief Method ToUInt32, addr 0x1805a9e00, size 0x10, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(uint16_t  value) ;

/// @brief Method ToUInt32, addr 0x1816a2fa0, size 0x20, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(uint64_t  value) ;

/// @brief Method ToUInt32, addr 0x1805ed850, size 0x10, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(uint8_t  value) ;

/// @brief Method ToUInt64, addr 0x1816a34e0, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToUInt64, addr 0x1816a3290, size 0x20, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToUInt64, addr 0x1816a3460, size 0x40, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::System::Decimal  value) ;

/// @brief Method ToUInt64, addr 0x1816a33a0, size 0x60, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::System::Object*  value) ;

/// @brief Method ToUInt64, addr 0x1816a3330, size 0x70, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToUInt64, addr 0x18145a560, size 0x10, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(bool  value) ;

/// @brief Method ToUInt64, addr 0x1805a9e00, size 0x10, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(char16_t  value) ;

/// @brief Method ToUInt64, addr 0x1816a32d0, size 0x60, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(double_t  value) ;

/// @brief Method ToUInt64, addr 0x1816a3400, size 0x60, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(float_t  value) ;

/// @brief Method ToUInt64, addr 0x1816a34a0, size 0x20, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(int16_t  value) ;

/// @brief Method ToUInt64, addr 0x1816a32b0, size 0x20, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(int32_t  value) ;

/// @brief Method ToUInt64, addr 0x1816a34c0, size 0x20, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(int64_t  value) ;

/// @brief Method ToUInt64, addr 0x1816a3270, size 0x20, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(int8_t  value) ;

/// @brief Method ToUInt64, addr 0x1805a9e00, size 0x10, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(uint16_t  value) ;

/// @brief Method ToUInt64, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(uint32_t  value) ;

/// @brief Method ToUInt64, addr 0x1805ed850, size 0x10, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(uint8_t  value) ;

/// @brief Method TryDecodeFromUtf16, addr 0x1816a3570, size 0x2c0, virtual false, abstract: false, final false
static inline bool TryDecodeFromUtf16(::System::ReadOnlySpan_1<char16_t>  utf16, ::System::Span_1<uint8_t>  bytes, ::by_ref<int32_t>  consumed, ::by_ref<int32_t>  written) ;

/// @brief Method TryFromBase64Chars, addr 0x1816a3830, size 0x3c0, virtual false, abstract: false, final false
static inline bool TryFromBase64Chars(::System::ReadOnlySpan_1<char16_t>  chars, ::System::Span_1<uint8_t>  bytes, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method WriteThreeLowOrderBytes, addr 0x1816a3bf0, size 0x20, virtual false, abstract: false, final false
static inline void WriteThreeLowOrderBytes(::by_ref<uint8_t>  destination, int32_t  value) ;

static inline ::ArrayW<::System::Type*> getStaticF_ConvertTypes() ;

static inline ::System::Object* getStaticF_DBNull() ;

static inline ::System::Type* getStaticF_EnumType() ;

static inline ::ArrayW<char16_t> getStaticF_base64Table() ;

static inline ::ArrayW<int8_t> getStaticF_s_decodingMap() ;

static inline void setStaticF_ConvertTypes(::ArrayW<::System::Type*>  value) ;

static inline void setStaticF_DBNull(::System::Object*  value) ;

static inline void setStaticF_EnumType(::System::Type*  value) ;

static inline void setStaticF_base64Table(::ArrayW<char16_t>  value) ;

static inline void setStaticF_s_decodingMap(::ArrayW<int8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Convert() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Convert", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Convert(Convert && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Convert", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Convert(Convert const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{196};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Convert) == 0x10, "Size mismatch!");

} // namespace end def System
