#pragma once
// IWYU pragma private; include "Rewired/Utils/StringTools.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StringTools)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Enum;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
struct KeyCode;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Rewired::Utils {
class StringTools;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::StringTools*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::StringTools*, "Rewired.Utils", "StringTools");
// Dependencies System.Object
namespace Rewired::Utils {
// Is value type: false
// CS Name: Rewired.Utils.StringTools
class CORDL_TYPE StringTools : public ::System::Object {
public:
// Declarations
/// @brief Field fVrkVOFJcrOvHsPjciuTnuyKGElw, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_fVrkVOFJcrOvHsPjciuTnuyKGElw, put=setStaticF_fVrkVOFJcrOvHsPjciuTnuyKGElw)) ::StringW  fVrkVOFJcrOvHsPjciuTnuyKGElw;

/// @brief Method AddSpacesToCamelCase, addr 0x18190ef70, size 0x30, virtual false, abstract: false, final false
static inline ::StringW AddSpacesToCamelCase(::StringW  text) ;

/// @brief Method AddSpacesToCamelCase, addr 0x18190efa0, size 0x1f0, virtual false, abstract: false, final false
static inline ::StringW AddSpacesToCamelCase(::StringW  text, bool  preserveAcronyms) ;

/// @brief Method AddSpacesToSentence, addr 0x18190f190, size 0x1a0, virtual false, abstract: false, final false
static inline ::StringW AddSpacesToSentence(::StringW  text, bool  preserveAcronyms) ;

/// @brief Method ArrayToText, addr 0x18190f330, size 0x80, virtual false, abstract: false, final false
static inline ::StringW ArrayToText(::ArrayW<::StringW>  sA) ;

/// @brief Method ByteShiftEncode, addr 0x18190f3b0, size 0x100, virtual false, abstract: false, final false
static inline ::StringW ByteShiftEncode(::StringW  source, int16_t  shift) ;

/// @brief Method CSVDecode, addr 0x18190f4b0, size 0x180, virtual false, abstract: false, final false
static inline ::StringW CSVDecode(::StringW  s) ;

/// @brief Method CSVEncode, addr 0x18190f630, size 0x90, virtual false, abstract: false, final false
static inline ::StringW CSVEncode(::StringW  s) ;

/// @brief Method CSVToArray, addr 0x18190f6c0, size 0x220, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> CSVToArray(::StringW  s) ;

/// @brief Method CamelCaseToSnakeCase, addr 0x18190f8e0, size 0x120, virtual false, abstract: false, final false
static inline ::StringW CamelCaseToSnakeCase(::StringW  text) ;

/// @brief Method CharArrayToString, addr 0x18190fa00, size 0x20, virtual false, abstract: false, final false
static inline ::StringW CharArrayToString(::ArrayW<char16_t>  c) ;

/// @brief Method CleanUpFileName, addr 0x18190fa20, size 0xb0, virtual false, abstract: false, final false
static inline ::StringW CleanUpFileName(::StringW  name) ;

/// @brief Method CountChars, addr 0x18190fad0, size 0x80, virtual false, abstract: false, final false
static inline int32_t CountChars(::StringW  text, char16_t  character) ;

/// @brief Method DecodeNewlines, addr 0x18190fb50, size 0x30, virtual false, abstract: false, final false
static inline ::StringW DecodeNewlines(::StringW  s) ;

/// @brief Method EncodeNewlines, addr 0x18190fb80, size 0x30, virtual false, abstract: false, final false
static inline ::StringW EncodeNewlines(::StringW  s) ;

/// @brief Method GetBytes, addr 0x18190fbb0, size 0x70, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> GetBytes(::StringW  str) ;

/// @brief Method GetNullTerminatedUnicodeString, addr 0x18190fc20, size 0xa0, virtual false, abstract: false, final false
static inline ::StringW GetNullTerminatedUnicodeString(::ArrayW<uint8_t>  bytes) ;

/// @brief Method GetString, addr 0x18190fcc0, size 0x70, virtual false, abstract: false, final false
static inline ::StringW GetString(::ArrayW<uint8_t>  bytes) ;

/// @brief Method IterateName, addr 0x18190fd30, size 0x150, virtual false, abstract: false, final false
static inline ::StringW IterateName(::StringW  name, int32_t  indexInNameList, ::ArrayW<::StringW>  names) ;

/// @brief Method ReplaceChar, addr 0x18190fe80, size 0x80, virtual false, abstract: false, final false
static inline ::StringW ReplaceChar(::StringW  string, int32_t  index, char16_t  replacement) ;

/// @brief Method SanitizeDeviceString, addr 0x18190ff00, size 0x80, virtual false, abstract: false, final false
static inline ::StringW SanitizeDeviceString(::StringW  text) ;

/// @brief Method Split, addr 0x181910060, size 0x80, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> Split(::StringW  str, ::StringW  delimiter) ;

/// @brief Method SplitAndTrim, addr 0x18190ff80, size 0xe0, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> SplitAndTrim(::StringW  str, ::StringW  delimiter) ;

/// @brief Method StringToBoolean, addr 0x1819100e0, size 0x20, virtual false, abstract: false, final false
static inline bool StringToBoolean(::StringW  s) ;

/// @brief Method StringToCharArray, addr 0x181910100, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<char16_t> StringToCharArray(::StringW  s) ;

/// @brief Method StringToEnum, addr 0x181910110, size 0x60, virtual false, abstract: false, final false
static inline ::System::Enum* StringToEnum(::StringW  str, ::System::Type*  type) ;

/// @brief Method StringToFloat, addr 0x181910170, size 0x50, virtual false, abstract: false, final false
static inline float_t StringToFloat(::StringW  s) ;

/// @brief Method StringToInt, addr 0x1819101c0, size 0x30, virtual false, abstract: false, final false
static inline int32_t StringToInt(::StringW  s) ;

/// @brief Method StringToKeyCode, addr 0x1819101f0, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::KeyCode StringToKeyCode(::StringW  s) ;

/// @brief Method StringToString, addr 0x1804a02a0, size 0x10, virtual false, abstract: false, final false
static inline ::StringW StringToString(::StringW  s) ;

/// @brief Method StripTrailingNumbers, addr 0x181910360, size 0x40, virtual false, abstract: false, final false
static inline ::StringW StripTrailingNumbers(::StringW  name) ;

/// @brief Method StripTrailingNumbers, addr 0x181910250, size 0x110, virtual false, abstract: false, final false
static inline ::StringW StripTrailingNumbers(::StringW  name, ::by_ref<int32_t>  number) ;

/// @brief Method TextToArray, addr 0x1819103a0, size 0x40, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> TextToArray(::StringW  s) ;

/// @brief Method TimeToString, addr 0x1819103e0, size 0x1d0, virtual false, abstract: false, final false
static inline ::StringW TimeToString(float_t  seconds) ;

/// @brief Method TimeToString, addr 0x1819105b0, size 0x30, virtual false, abstract: false, final false
static inline ::StringW TimeToString(int32_t  seconds) ;

/// @brief Method ToGuid, addr 0x1819105e0, size 0x60, virtual false, abstract: false, final false
static inline ::System::Guid ToGuid(::StringW  guid) ;

/// @brief Method ToString, addr 0x181910b10, size 0x80, virtual false, abstract: false, final false
static inline ::StringW ToString(::ArrayW<::StringW>  inArray) ;

/// @brief Method ToString, addr 0x181910b90, size 0x160, virtual false, abstract: false, final false
static inline ::StringW ToString(::ArrayW<::UnityEngine::Vector3>  inArray) ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::StringW ToString(::ArrayW<T>  inArray) ;

/// @brief Method ToString, addr 0x181910d40, size 0x90, virtual false, abstract: false, final false
static inline ::StringW ToString(::ArrayW<bool>  inArray) ;

/// @brief Method ToString, addr 0x181910730, size 0x90, virtual false, abstract: false, final false
static inline ::StringW ToString(::ArrayW<float_t>  inArray) ;

/// @brief Method ToString, addr 0x181910e60, size 0x90, virtual false, abstract: false, final false
static inline ::StringW ToString(::ArrayW<int32_t>  inArray) ;

/// @brief Method ToString, addr 0x181910dd0, size 0x90, virtual false, abstract: false, final false
static inline ::StringW ToString(::ArrayW<uint8_t>  inArray) ;

/// @brief Method ToString, addr 0x1819107c0, size 0xe0, virtual false, abstract: false, final false
static inline ::StringW ToString(::ArrayW<uint8_t>  inArray, ::StringW  stringOptions, int32_t  maxItemsPerLine) ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::StringW ToString(::System::Collections::Generic::List_1<T>*  inList) ;

/// @brief Method ToString, addr 0x1819108a0, size 0xb0, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::Collections::Generic::List_1<::System::Object*>*  list) ;

/// @brief Method ToString, addr 0x181910a10, size 0x100, virtual false, abstract: false, final false
static inline ::StringW ToString(::UnityEngine::Rect  rect) ;

/// @brief Method ToString, addr 0x181910cf0, size 0x50, virtual false, abstract: false, final false
static inline ::StringW ToString(::UnityEngine::Vector2  v) ;

/// @brief Method ToString, addr 0x181910950, size 0xc0, virtual false, abstract: false, final false
static inline ::StringW ToString(::UnityEngine::Vector3  v) ;

/// @brief Method ToStringWithCount, addr 0x181910640, size 0xf0, virtual false, abstract: false, final false
static inline ::StringW ToStringWithCount(::StringW  s) ;

/// @brief Method Trim, addr 0x181910ef0, size 0x40, virtual false, abstract: false, final false
static inline ::StringW Trim(::StringW  str) ;

/// @brief Method TryParseEnum, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEnum>
static inline bool TryParseEnum(::StringW  value, ::by_ref<TEnum>  enumeration) ;

/// @brief Method VariableNameToDisplayName, addr 0x181910f30, size 0x310, virtual false, abstract: false, final false
static inline ::StringW VariableNameToDisplayName(::StringW  fieldName) ;

/// @brief Method VerifyName, addr 0x1819113e0, size 0x70, virtual false, abstract: false, final false
static inline ::StringW VerifyName(::StringW  name, int32_t  indexInNameList, ::ArrayW<::StringW>  names, bool  cleanUpIllegalFileChars) ;

/// @brief Method VerifyName, addr 0x181911240, size 0x1a0, virtual false, abstract: false, final false
static inline ::StringW VerifyName(::StringW  name, int32_t  indexInNameList, ::ArrayW<::StringW>  names, bool  cleanUpIllegalFileChars, bool  allowBlank) ;

/// @brief Method WriteVar, addr 0x181911530, size 0x110, virtual false, abstract: false, final false
static inline ::StringW WriteVar(::StringW  name, ::System::Object*  value) ;

/// @brief Method WriteVar, addr 0x181911640, size 0x100, virtual false, abstract: false, final false
static inline ::StringW WriteVar(::StringW  name, ::System::Object*  value, char16_t  delimiter) ;

/// @brief Method WriteVar, addr 0x181911450, size 0xe0, virtual false, abstract: false, final false
static inline void WriteVar(::System::Text::StringBuilder*  sb, ::StringW  name, ::System::Object*  value) ;

/// @brief Method WriteVar, addr 0x181911740, size 0xc0, virtual false, abstract: false, final false
static inline void WriteVar(::System::Text::StringBuilder*  sb, ::StringW  name, ::System::Object*  value, char16_t  delimiter) ;

static inline ::StringW getStaticF_fVrkVOFJcrOvHsPjciuTnuyKGElw() ;

static inline void setStaticF_fVrkVOFJcrOvHsPjciuTnuyKGElw(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringTools() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringTools", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StringTools(StringTools && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringTools", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringTools(StringTools const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2927};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Utils::StringTools) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Utils
