#pragma once
// IWYU pragma private; include "System/String.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(String)
namespace System::Buffers {
template<typename T,typename TArg>
class SpanAction_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
struct ValueListBuilder_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Globalization {
struct CompareOptions;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Text {
class Encoding;
}
namespace System::Text {
struct NormalizationForm;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class ICloneable;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
class IComparable;
}
namespace System {
class IConvertible;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace System {
struct ParamsArray;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
struct StringComparison;
}
namespace System {
struct StringSplitOptions;
}
namespace System {
struct String_ProbabilisticMap;
}
namespace System {
struct String_TrimType;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
struct String_TrimType;
}
namespace System {
class String;
}
namespace System {
struct String_ProbabilisticMap;
}
// Write type traits
MARK_VAL_T(::System::String_TrimType);
MARK_REF_T(::System::String*);
MARK_VAL_T(::System::String_ProbabilisticMap);
DEFINE_IL2CPP_CLASS(::System::String_TrimType, "System", "String/TrimType");
DEFINE_IL2CPP_CLASS(::System::String*, "System", "String");
DEFINE_IL2CPP_CLASS(::System::String_ProbabilisticMap, "System", "String/ProbabilisticMap");
// Dependencies 
namespace System {
// Is value type: true
// CS Name: System.String/TrimType
struct CORDL_TYPE String_TrimType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __String_TrimType_Unwrapped
enum struct __String_TrimType_Unwrapped : int32_t {
__E_Head = static_cast<int32_t>(0x0),
__E_Tail = static_cast<int32_t>(0x1),
__E_Both = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __String_TrimType_Unwrapped () const noexcept {
return static_cast<__String_TrimType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr String_TrimType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr String_TrimType(int32_t  value__) noexcept;

/// @brief Field Both value: I32(2)
static ::System::String_TrimType const Both;

/// @brief Field Head value: I32(0)
static ::System::String_TrimType const Head;

/// @brief Field Tail value: I32(1)
static ::System::String_TrimType const Tail;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{140};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::String_TrimType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::System::String_TrimType) == 0x4, "Size mismatch!");

} // namespace end def System
// Dependencies 
namespace System {
// Is value type: true
// CS Name: System.String/ProbabilisticMap
#pragma pack(push, 0)
struct CORDL_TYPE String_ProbabilisticMap {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr String_ProbabilisticMap() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{141};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Size padding 0x20 - 0x0 = 0x20, packed as 0x20
 uint8_t  _cordl_size_padding[0x20];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::System::String_ProbabilisticMap) == 0x20, "Size mismatch!");

} // namespace end def System
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.String
class CORDL_TYPE String : public ::System::Object {
public:
// Declarations
using ProbabilisticMap = ::System::String_ProbabilisticMap;

using TrimType = ::System::String_TrimType;

 __declspec(property(get=get_Chars)) char16_t  Chars[];

/// @brief Field Empty, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Empty, put=setStaticF_Empty)) ::StringW  Empty;

 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Field _firstChar, offset 0x14, size 0x2 
 __declspec(property(get=__cordl_internal_get__firstChar, put=__cordl_internal_set__firstChar)) char16_t  _firstChar;

/// @brief Field _stringLength, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__stringLength, put=__cordl_internal_set__stringLength)) int32_t  _stringLength;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<char16_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<char16_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::ICloneable"
constexpr operator  ::System::ICloneable*() noexcept;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() noexcept;

/// @brief Convert operator to "::System::IComparable_1<::StringW>"
constexpr operator  ::System::IComparable_1<::StringW>*() noexcept;

/// @brief Convert operator to "::System::IConvertible"
constexpr operator  ::System::IConvertible*() noexcept;

/// @brief Convert operator to "::System::IEquatable_1<::StringW>"
constexpr operator  ::System::IEquatable_1<::StringW>*() noexcept;

/// @brief Method ArrayContains, addr 0x1815dda80, size 0x30, virtual false, abstract: false, final false
static inline bool ArrayContains(char16_t  searchChar, ::ArrayW<char16_t>  anyOf) ;

/// @brief Method CheckStringComparison, addr 0x1815ddab0, size 0x20, virtual false, abstract: false, final false
static inline void CheckStringComparison(::System::StringComparison  comparisonType) ;

/// @brief Method Clone, addr 0x1802e0ba0, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* Clone() ;

/// @brief Method Compare, addr 0x1815ddf20, size 0x370, virtual false, abstract: false, final false
static inline int32_t Compare(::StringW  strA, int32_t  indexA, ::StringW  strB, int32_t  indexB, int32_t  length, ::System::StringComparison  comparisonType) ;

/// @brief Method Compare, addr 0x1815dddc0, size 0xa0, virtual false, abstract: false, final false
static inline int32_t Compare(::StringW  strA, ::StringW  strB) ;

/// @brief Method Compare, addr 0x1815de2a0, size 0x2c0, virtual false, abstract: false, final false
static inline int32_t Compare(::StringW  strA, ::StringW  strB, ::System::StringComparison  comparisonType) ;

/// @brief Method Compare, addr 0x1815de5e0, size 0x80, virtual false, abstract: false, final false
static inline int32_t Compare(::StringW  strA, ::StringW  strB, ::System::Globalization::CultureInfo*  culture, ::System::Globalization::CompareOptions  options) ;

/// @brief Method Compare, addr 0x1815de290, size 0x10, virtual false, abstract: false, final false
static inline int32_t Compare(::StringW  strA, ::StringW  strB, bool  ignoreCase) ;

/// @brief Method Compare, addr 0x1815de560, size 0x80, virtual false, abstract: false, final false
static inline int32_t Compare(::StringW  strA, ::StringW  strB, bool  ignoreCase, ::System::Globalization::CultureInfo*  culture) ;

/// @brief Method CompareOrdinal, addr 0x1815ddc50, size 0x130, virtual false, abstract: false, final false
static inline int32_t CompareOrdinal(::StringW  strA, int32_t  indexA, ::StringW  strB, int32_t  indexB, int32_t  length) ;

/// @brief Method CompareOrdinal, addr 0x1815ddd80, size 0x40, virtual false, abstract: false, final false
static inline int32_t CompareOrdinal(::StringW  strA, ::StringW  strB) ;

/// @brief Method CompareOrdinal, addr 0x1815ddbe0, size 0x70, virtual false, abstract: false, final false
static inline int32_t CompareOrdinal(::System::ReadOnlySpan_1<char16_t>  strA, ::System::ReadOnlySpan_1<char16_t>  strB) ;

/// @brief Method CompareOrdinalHelper, addr 0x1815ddba0, size 0x40, virtual false, abstract: false, final false
static inline int32_t CompareOrdinalHelper(::StringW  strA, int32_t  indexA, int32_t  countA, ::StringW  strB, int32_t  indexB, int32_t  countB) ;

/// @brief Method CompareOrdinalHelper, addr 0x1815ddad0, size 0xd0, virtual false, abstract: false, final false
static inline int32_t CompareOrdinalHelper(::StringW  strA, ::StringW  strB) ;

/// @brief Method CompareTo, addr 0x1815dddc0, size 0xa0, virtual true, abstract: false, final true
inline int32_t CompareTo(::StringW  strB) ;

/// @brief Method CompareTo, addr 0x1815dde60, size 0xc0, virtual true, abstract: false, final true
inline int32_t CompareTo(::System::Object*  value) ;

/// @brief Method Concat, addr 0x1815ded20, size 0xb0, virtual false, abstract: false, final false
static inline ::StringW Concat(::System::Object*  arg0, ::System::Object*  arg1, ::System::Object*  arg2) ;

/// @brief Method Concat, addr 0x1815dedd0, size 0x110, virtual false, abstract: false, final false
static inline ::StringW Concat(::StringW  str0, ::StringW  str1) ;

/// @brief Method Concat, addr 0x1815de9e0, size 0x340, virtual false, abstract: false, final false
static inline ::StringW Concat(::StringW  str0, ::StringW  str1, ::StringW  str2) ;

/// @brief Method Concat, addr 0x1815de660, size 0x180, virtual false, abstract: false, final false
static inline ::StringW Concat(::StringW  str0, ::StringW  str1, ::StringW  str2, ::StringW  str3) ;

/// @brief Method Concat, addr 0x1815de7e0, size 0x200, virtual false, abstract: false, final false
static inline ::StringW Concat(::ArrayW<::StringW>  values) ;

/// @brief Method Concat, addr 0x1815deee0, size 0x2c0, virtual false, abstract: false, final false
static inline ::StringW Concat(::System::Collections::Generic::IEnumerable_1<::StringW>*  values) ;

/// @brief Method Contains, addr 0x1815df1a0, size 0xb0, virtual false, abstract: false, final false
inline bool Contains(::StringW  value) ;

/// @brief Method Contains, addr 0x1815df250, size 0x20, virtual false, abstract: false, final false
inline bool Contains(char16_t  value) ;

/// @brief Method Copy, addr 0x1815df390, size 0x90, virtual false, abstract: false, final false
static inline ::StringW Copy(::StringW  str) ;

/// @brief Method CopyTo, addr 0x1815df270, size 0x120, virtual false, abstract: false, final false
inline void CopyTo(int32_t  sourceIndex, ::ArrayW<char16_t>  destination, int32_t  destinationIndex, int32_t  count) ;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TState>
static inline ::StringW Create(int32_t  length, TState  state, ::System::Buffers::SpanAction_2<char16_t,TState>*  action) ;

/// @brief Method CreateFromChar, addr 0x1815df420, size 0x20, virtual false, abstract: false, final false
static inline ::StringW CreateFromChar(char16_t  c) ;

/// @brief Method CreateString, addr 0x1815dfa20, size 0xa0, virtual false, abstract: false, final false
inline ::StringW CreateString(char16_t  c, int32_t  count) ;

/// @brief Method CreateString, addr 0x1815dfe10, size 0xa0, virtual false, abstract: false, final false
inline ::StringW CreateString(::ArrayW<char16_t>  val) ;

/// @brief Method CreateString, addr 0x1815dfb70, size 0x130, virtual false, abstract: false, final false
inline ::StringW CreateString(::ArrayW<char16_t>  val, int32_t  startIndex, int32_t  length) ;

/// @brief Method CreateString, addr 0x1815df560, size 0xd0, virtual false, abstract: false, final false
inline ::StringW CreateString(::System::ReadOnlySpan_1<char16_t>  value) ;

/// @brief Method CreateString, addr 0x1815df630, size 0x150, virtual false, abstract: false, final false
inline ::StringW CreateString(char16_t*  value) ;

/// @brief Method CreateString, addr 0x1815df780, size 0x140, virtual false, abstract: false, final false
inline ::StringW CreateString(char16_t*  value, int32_t  startIndex, int32_t  length) ;

/// @brief Method CreateString, addr 0x1815dfca0, size 0x170, virtual false, abstract: false, final false
inline ::StringW CreateString(int8_t*  value) ;

/// @brief Method CreateString, addr 0x1815dfac0, size 0xb0, virtual false, abstract: false, final false
inline ::StringW CreateString(int8_t*  value, int32_t  startIndex, int32_t  length) ;

/// @brief Method CreateString, addr 0x1815df8c0, size 0x160, virtual false, abstract: false, final false
inline ::StringW CreateString(int8_t*  value, int32_t  startIndex, int32_t  length, ::System::Text::Encoding*  enc) ;

/// @brief Method CreateStringForSByteConstructor, addr 0x1815df440, size 0x60, virtual false, abstract: false, final false
static inline ::StringW CreateStringForSByteConstructor(uint8_t*  pb, int32_t  numBytes) ;

/// @brief Method CreateStringFromEncoding, addr 0x1815df4a0, size 0xc0, virtual false, abstract: false, final false
static inline ::StringW CreateStringFromEncoding(uint8_t*  bytes, int32_t  byteLength, ::System::Text::Encoding*  encoding) ;

/// @brief Method CreateTrimmedString, addr 0x1815dfeb0, size 0x30, virtual false, abstract: false, final false
inline ::StringW CreateTrimmedString(int32_t  start, int32_t  end) ;

/// @brief Method Ctor, addr 0x1815e03e0, size 0xa0, virtual false, abstract: false, final false
static inline ::StringW Ctor(char16_t  c, int32_t  count) ;

/// @brief Method Ctor, addr 0x1815dff90, size 0x160, virtual false, abstract: false, final false
static inline ::StringW Ctor(char16_t*  ptr) ;

/// @brief Method Ctor, addr 0x1815e0600, size 0x130, virtual false, abstract: false, final false
static inline ::StringW Ctor(char16_t*  ptr, int32_t  startIndex, int32_t  length) ;

/// @brief Method Ctor, addr 0x1815e0340, size 0xa0, virtual false, abstract: false, final false
static inline ::StringW Ctor(::ArrayW<char16_t>  value) ;

/// @brief Method Ctor, addr 0x1815e0730, size 0x140, virtual false, abstract: false, final false
static inline ::StringW Ctor(::ArrayW<char16_t>  value, int32_t  startIndex, int32_t  length) ;

/// @brief Method Ctor, addr 0x1815e0280, size 0xc0, virtual false, abstract: false, final false
static inline ::StringW Ctor(::System::ReadOnlySpan_1<char16_t>  value) ;

/// @brief Method Ctor, addr 0x1815e00f0, size 0x190, virtual false, abstract: false, final false
static inline ::StringW Ctor(int8_t*  value) ;

/// @brief Method Ctor, addr 0x1815dfee0, size 0xb0, virtual false, abstract: false, final false
static inline ::StringW Ctor(int8_t*  value, int32_t  startIndex, int32_t  length) ;

/// @brief Method Ctor, addr 0x1815e0480, size 0x180, virtual false, abstract: false, final false
static inline ::StringW Ctor(int8_t*  value, int32_t  startIndex, int32_t  length, ::System::Text::Encoding*  enc) ;

/// @brief Method EndsWith, addr 0x1815e0af0, size 0x90, virtual false, abstract: false, final false
inline bool EndsWith(::StringW  value) ;

/// @brief Method EndsWith, addr 0x1815e0870, size 0x280, virtual false, abstract: false, final false
inline bool EndsWith(::StringW  value, ::System::StringComparison  comparisonType) ;

/// @brief Method Equals, addr 0x1815e0ba0, size 0x40, virtual false, abstract: false, final false
static inline bool Equals(::StringW  a, ::StringW  b) ;

/// @brief Method Equals, addr 0x1815e0ea0, size 0x280, virtual false, abstract: false, final false
static inline bool Equals(::StringW  a, ::StringW  b, ::System::StringComparison  comparisonType) ;

/// @brief Method Equals, addr 0x1815e0be0, size 0x50, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1815e1120, size 0x30, virtual true, abstract: false, final true
inline bool Equals(::StringW  value) ;

/// @brief Method Equals, addr 0x1815e0c30, size 0x270, virtual false, abstract: false, final false
inline bool Equals(::StringW  value, ::System::StringComparison  comparisonType) ;

/// @brief Method EqualsHelper, addr 0x1815e0b80, size 0x20, virtual false, abstract: false, final false
static inline bool EqualsHelper(::StringW  strA, ::StringW  strB) ;

/// @brief Method FastAllocateString, addr 0x1815e1150, size 0x10, virtual false, abstract: false, final false
static inline ::StringW FastAllocateString(int32_t  length) ;

/// @brief Method FillStringChecked, addr 0x1815e1160, size 0x70, virtual false, abstract: false, final false
static inline void FillStringChecked(::StringW  dest, int32_t  destPos, ::StringW  src) ;

/// @brief Method Format, addr 0x1815e1710, size 0xc0, virtual false, abstract: false, final false
static inline ::StringW Format(::StringW  format, ::System::Object*  arg0) ;

/// @brief Method Format, addr 0x1815e18c0, size 0xc0, virtual false, abstract: false, final false
static inline ::StringW Format(::StringW  format, ::System::Object*  arg0, ::System::Object*  arg1) ;

/// @brief Method Format, addr 0x1815e1640, size 0xd0, virtual false, abstract: false, final false
static inline ::StringW Format(::StringW  format, ::System::Object*  arg0, ::System::Object*  arg1, ::System::Object*  arg2) ;

/// @brief Method Format, addr 0x1815e1540, size 0x100, virtual false, abstract: false, final false
static inline ::StringW Format(::StringW  format, ::ArrayW<::System::Object*>  args) ;

/// @brief Method Format, addr 0x1815e1270, size 0xe0, virtual false, abstract: false, final false
static inline ::StringW Format(::System::IFormatProvider*  provider, ::StringW  format, ::System::Object*  arg0) ;

/// @brief Method Format, addr 0x1815e1460, size 0xe0, virtual false, abstract: false, final false
static inline ::StringW Format(::System::IFormatProvider*  provider, ::StringW  format, ::System::Object*  arg0, ::System::Object*  arg1) ;

/// @brief Method Format, addr 0x1815e17d0, size 0xf0, virtual false, abstract: false, final false
static inline ::StringW Format(::System::IFormatProvider*  provider, ::StringW  format, ::System::Object*  arg0, ::System::Object*  arg1, ::System::Object*  arg2) ;

/// @brief Method Format, addr 0x1815e1350, size 0x110, virtual false, abstract: false, final false
static inline ::StringW Format(::System::IFormatProvider*  provider, ::StringW  format, ::ArrayW<::System::Object*>  args) ;

/// @brief Method FormatHelper, addr 0x1815e11d0, size 0xa0, virtual false, abstract: false, final false
static inline ::StringW FormatHelper(::System::IFormatProvider*  provider, ::StringW  format, ::System::ParamsArray  args) ;

/// @brief Method GetHashCode, addr 0x1815e1980, size 0x50, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetLegacyNonRandomizedHashCode, addr 0x1815e1980, size 0x50, virtual false, abstract: false, final false
inline int32_t GetLegacyNonRandomizedHashCode() ;

/// @brief Method GetRawStringData, addr 0x1815e19d0, size 0x10, virtual false, abstract: false, final false
inline ::by_ref<char16_t> GetRawStringData() ;

/// @brief Method GetTypeCode, addr 0x1815e19e0, size 0x10, virtual true, abstract: false, final true
inline ::System::TypeCode GetTypeCode() ;

/// @brief Method IndexOf, addr 0x1815e24c0, size 0xb0, virtual false, abstract: false, final false
inline int32_t IndexOf(::StringW  value) ;

/// @brief Method IndexOf, addr 0x1815e2210, size 0x30, virtual false, abstract: false, final false
inline int32_t IndexOf(::StringW  value, ::System::StringComparison  comparisonType) ;

/// @brief Method IndexOf, addr 0x1815e2570, size 0xf0, virtual false, abstract: false, final false
inline int32_t IndexOf(::StringW  value, int32_t  startIndex) ;

/// @brief Method IndexOf, addr 0x1815e21e0, size 0x30, virtual false, abstract: false, final false
inline int32_t IndexOf(::StringW  value, int32_t  startIndex, ::System::StringComparison  comparisonType) ;

/// @brief Method IndexOf, addr 0x1815e2240, size 0x280, virtual false, abstract: false, final false
inline int32_t IndexOf(::StringW  value, int32_t  startIndex, int32_t  count, ::System::StringComparison  comparisonType) ;

/// @brief Method IndexOf, addr 0x1815e2660, size 0x10, virtual false, abstract: false, final false
inline int32_t IndexOf(char16_t  value) ;

/// @brief Method IndexOf, addr 0x1815e2180, size 0x60, virtual false, abstract: false, final false
inline int32_t IndexOf(char16_t  value, int32_t  startIndex) ;

/// @brief Method IndexOf, addr 0x1815e2670, size 0x80, virtual false, abstract: false, final false
inline int32_t IndexOf(char16_t  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method IndexOfAny, addr 0x1815e1ce0, size 0x20, virtual false, abstract: false, final false
inline int32_t IndexOfAny(::ArrayW<char16_t>  anyOf) ;

/// @brief Method IndexOfAny, addr 0x1815e19f0, size 0x20, virtual false, abstract: false, final false
inline int32_t IndexOfAny(::ArrayW<char16_t>  anyOf, int32_t  startIndex) ;

/// @brief Method IndexOfAny, addr 0x1815e1a10, size 0x2d0, virtual false, abstract: false, final false
inline int32_t IndexOfAny(::ArrayW<char16_t>  anyOf, int32_t  startIndex, int32_t  count) ;

/// @brief Method IndexOfAny, addr 0x1815e1d50, size 0x70, virtual false, abstract: false, final false
inline int32_t IndexOfAny(char16_t  value1, char16_t  value2, int32_t  startIndex, int32_t  count) ;

/// @brief Method IndexOfAny, addr 0x1815e1d00, size 0x50, virtual false, abstract: false, final false
inline int32_t IndexOfAny(char16_t  value1, char16_t  value2, char16_t  value3, int32_t  startIndex, int32_t  count) ;

/// @brief Method IndexOfCharArray, addr 0x1815e1dc0, size 0x160, virtual false, abstract: false, final false
inline int32_t IndexOfCharArray(::ArrayW<char16_t>  anyOf, int32_t  startIndex, int32_t  count) ;

/// @brief Method IndexOfUnchecked, addr 0x1815e20b0, size 0xd0, virtual false, abstract: false, final false
inline int32_t IndexOfUnchecked(::StringW  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method IndexOfUncheckedIgnoreCase, addr 0x1815e1f20, size 0x190, virtual false, abstract: false, final false
inline int32_t IndexOfUncheckedIgnoreCase(::StringW  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method InitializeProbabilisticMap, addr 0x1815e26f0, size 0x80, virtual false, abstract: false, final false
static inline void InitializeProbabilisticMap(uint32_t*  charMap, ::System::ReadOnlySpan_1<char16_t>  anyOf) ;

/// @brief Method Insert, addr 0x1815e2770, size 0x190, virtual false, abstract: false, final false
inline ::StringW Insert(int32_t  startIndex, ::StringW  value) ;

/// @brief Method InternalSubString, addr 0x1815e2900, size 0x80, virtual false, abstract: false, final false
inline ::StringW InternalSubString(int32_t  startIndex, int32_t  length) ;

/// @brief Method IsCharBitSet, addr 0x1815e2980, size 0x20, virtual false, abstract: false, final false
static inline bool IsCharBitSet(uint32_t*  charMap, uint8_t  value) ;

/// @brief Method IsNullOrEmpty, addr 0x1815e29a0, size 0x10, virtual false, abstract: false, final false
static inline bool IsNullOrEmpty(::StringW  value) ;

/// @brief Method IsNullOrWhiteSpace, addr 0x1815e29b0, size 0x80, virtual false, abstract: false, final false
static inline bool IsNullOrWhiteSpace(::StringW  value) ;

/// @brief Method Join, addr 0x1815e2dd0, size 0x60, virtual false, abstract: false, final false
static inline ::StringW Join(::StringW  separator, ::ArrayW<::StringW>  value) ;

/// @brief Method Join, addr 0x1815e3110, size 0x50, virtual false, abstract: false, final false
static inline ::StringW Join(::StringW  separator, ::ArrayW<::StringW>  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Join, addr 0x1815e2e30, size 0x2e0, virtual false, abstract: false, final false
static inline ::StringW Join(::StringW  separator, ::System::Collections::Generic::IEnumerable_1<::StringW>*  values) ;

/// @brief Method Join, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::StringW Join(::StringW  separator, ::System::Collections::Generic::IEnumerable_1<T>*  values) ;

/// @brief Method Join, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::StringW Join(char16_t  separator, ::System::Collections::Generic::IEnumerable_1<T>*  values) ;

/// @brief Method JoinCore, addr 0x1815e2a30, size 0x3a0, virtual false, abstract: false, final false
static inline ::StringW JoinCore(char16_t*  separator, int32_t  separatorLength, ::ArrayW<::StringW>  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method JoinCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::StringW JoinCore(char16_t*  separator, int32_t  separatorLength, ::System::Collections::Generic::IEnumerable_1<T>*  values) ;

/// @brief Method LastIndexOf, addr 0x1815e3ad0, size 0x110, virtual false, abstract: false, final false
inline int32_t LastIndexOf(::StringW  value) ;

/// @brief Method LastIndexOf, addr 0x1815e3a90, size 0x30, virtual false, abstract: false, final false
inline int32_t LastIndexOf(::StringW  value, ::System::StringComparison  comparisonType) ;

/// @brief Method LastIndexOf, addr 0x1815e3a00, size 0x30, virtual false, abstract: false, final false
inline int32_t LastIndexOf(::StringW  value, int32_t  startIndex, ::System::StringComparison  comparisonType) ;

/// @brief Method LastIndexOf, addr 0x1815e3750, size 0x2b0, virtual false, abstract: false, final false
inline int32_t LastIndexOf(::StringW  value, int32_t  startIndex, int32_t  count, ::System::StringComparison  comparisonType) ;

/// @brief Method LastIndexOf, addr 0x1815e3ac0, size 0x10, virtual false, abstract: false, final false
inline int32_t LastIndexOf(char16_t  value) ;

/// @brief Method LastIndexOf, addr 0x1815e3a30, size 0x60, virtual false, abstract: false, final false
inline int32_t LastIndexOf(char16_t  value, int32_t  startIndex) ;

/// @brief Method LastIndexOf, addr 0x1815e3be0, size 0xa0, virtual false, abstract: false, final false
inline int32_t LastIndexOf(char16_t  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOfAny, addr 0x1815e3160, size 0x30, virtual false, abstract: false, final false
inline int32_t LastIndexOfAny(::ArrayW<char16_t>  anyOf) ;

/// @brief Method LastIndexOfAny, addr 0x1815e3390, size 0x20, virtual false, abstract: false, final false
inline int32_t LastIndexOfAny(::ArrayW<char16_t>  anyOf, int32_t  startIndex) ;

/// @brief Method LastIndexOfAny, addr 0x1815e3190, size 0x200, virtual false, abstract: false, final false
inline int32_t LastIndexOfAny(::ArrayW<char16_t>  anyOf, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOfCharArray, addr 0x1815e33b0, size 0x160, virtual false, abstract: false, final false
inline int32_t LastIndexOfCharArray(::ArrayW<char16_t>  anyOf, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOfUnchecked, addr 0x1815e3680, size 0xd0, virtual false, abstract: false, final false
inline int32_t LastIndexOfUnchecked(::StringW  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOfUncheckedIgnoreCase, addr 0x1815e3510, size 0x170, virtual false, abstract: false, final false
inline int32_t LastIndexOfUncheckedIgnoreCase(::StringW  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method MakeSeparatorList, addr 0x1815e3c80, size 0x160, virtual false, abstract: false, final false
inline void MakeSeparatorList(::StringW  separator, ::by_ref<::System::Collections::Generic::ValueListBuilder_1<int32_t>>  sepListBuilder) ;

/// @brief Method MakeSeparatorList, addr 0x1815e3de0, size 0x1a0, virtual false, abstract: false, final false
inline void MakeSeparatorList(::ArrayW<::StringW>  separators, ::by_ref<::System::Collections::Generic::ValueListBuilder_1<int32_t>>  sepListBuilder, ::by_ref<::System::Collections::Generic::ValueListBuilder_1<int32_t>>  lengthListBuilder) ;

/// @brief Method MakeSeparatorList, addr 0x1815e3f80, size 0x310, virtual false, abstract: false, final false
inline void MakeSeparatorList(::System::ReadOnlySpan_1<char16_t>  separators, ::by_ref<::System::Collections::Generic::ValueListBuilder_1<int32_t>>  sepListBuilder) ;

static inline ::System::String* New_ctor(char16_t  c, int32_t  count) ;

static inline ::System::String* New_ctor(::ArrayW<char16_t>  value) ;

static inline ::System::String* New_ctor(::ArrayW<char16_t>  value, int32_t  startIndex, int32_t  length) ;

static inline ::System::String* New_ctor(::System::ReadOnlySpan_1<char16_t>  value) ;

static inline ::System::String* New_ctor(char16_t*  value) ;

static inline ::System::String* New_ctor(char16_t*  value, int32_t  startIndex, int32_t  length) ;

static inline ::System::String* New_ctor(int8_t*  value) ;

static inline ::System::String* New_ctor(int8_t*  value, int32_t  startIndex, int32_t  length) ;

static inline ::System::String* New_ctor(int8_t*  value, int32_t  startIndex, int32_t  length, ::System::Text::Encoding*  enc) ;

/// @brief Method Normalize, addr 0x1815e4290, size 0x40, virtual false, abstract: false, final false
inline ::StringW Normalize(::System::Text::NormalizationForm  normalizationForm) ;

/// @brief Method PadLeft, addr 0x1815e42d0, size 0xd0, virtual false, abstract: false, final false
inline ::StringW PadLeft(int32_t  totalWidth, char16_t  paddingChar) ;

/// @brief Method PadRight, addr 0x1815e43a0, size 0xf0, virtual false, abstract: false, final false
inline ::StringW PadRight(int32_t  totalWidth, char16_t  paddingChar) ;

/// @brief Method Remove, addr 0x1815e4610, size 0xc0, virtual false, abstract: false, final false
inline ::StringW Remove(int32_t  startIndex) ;

/// @brief Method Remove, addr 0x1815e4490, size 0x180, virtual false, abstract: false, final false
inline ::StringW Remove(int32_t  startIndex, int32_t  count) ;

/// @brief Method Replace, addr 0x1815e4950, size 0x110, virtual false, abstract: false, final false
inline ::StringW Replace(char16_t  oldChar, char16_t  newChar) ;

/// @brief Method Replace, addr 0x1815e4a60, size 0x210, virtual false, abstract: false, final false
inline ::StringW Replace(::StringW  oldValue, ::StringW  newValue) ;

/// @brief Method ReplaceHelper, addr 0x1815e46d0, size 0x280, virtual false, abstract: false, final false
inline ::StringW ReplaceHelper(int32_t  oldValueLength, ::StringW  newValue, ::System::ReadOnlySpan_1<int32_t>  indices) ;

/// @brief Method SetCharBit, addr 0x1815e4c70, size 0x20, virtual false, abstract: false, final false
static inline void SetCharBit(uint32_t*  charMap, uint8_t  value) ;

/// @brief Method Split, addr 0x1815e59a0, size 0x30, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> Split(::ArrayW<::StringW>  separator, ::System::StringSplitOptions  options) ;

/// @brief Method Split, addr 0x1815e59d0, size 0x50, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> Split(::ArrayW<char16_t>  separator) ;

/// @brief Method Split, addr 0x1815e5a70, size 0x60, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> Split(::ArrayW<char16_t>  separator, ::System::StringSplitOptions  options) ;

/// @brief Method Split, addr 0x1815e5a20, size 0x50, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> Split(::StringW  separator, ::System::StringSplitOptions  options) ;

/// @brief Method Split, addr 0x1815e5ad0, size 0x50, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> Split(char16_t  separator, ::System::StringSplitOptions  options) ;

/// @brief Method SplitInternal, addr 0x1815e4e70, size 0x280, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> SplitInternal(::StringW  separator, int32_t  count, ::System::StringSplitOptions  options) ;

/// @brief Method SplitInternal, addr 0x1815e50f0, size 0x470, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> SplitInternal(::StringW  separator, ::ArrayW<::StringW>  separators, int32_t  count, ::System::StringSplitOptions  options) ;

/// @brief Method SplitInternal, addr 0x1815e4c90, size 0x1e0, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> SplitInternal(::System::ReadOnlySpan_1<char16_t>  separators, int32_t  count, ::System::StringSplitOptions  options) ;

/// @brief Method SplitKeepEmptyEntries, addr 0x1815e5560, size 0x200, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> SplitKeepEmptyEntries(::System::ReadOnlySpan_1<int32_t>  sepList, ::System::ReadOnlySpan_1<int32_t>  lengthList, int32_t  defaultLength, int32_t  count) ;

/// @brief Method SplitOmitEmptyEntries, addr 0x1815e5760, size 0x240, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> SplitOmitEmptyEntries(::System::ReadOnlySpan_1<int32_t>  sepList, ::System::ReadOnlySpan_1<int32_t>  lengthList, int32_t  defaultLength, int32_t  count) ;

/// @brief Method StartsWith, addr 0x1815e5df0, size 0x90, virtual false, abstract: false, final false
inline bool StartsWith(::StringW  value) ;

/// @brief Method StartsWith, addr 0x1815e5b60, size 0x290, virtual false, abstract: false, final false
inline bool StartsWith(::StringW  value, ::System::StringComparison  comparisonType) ;

/// @brief Method StartsWithOrdinalUnchecked, addr 0x1815e5b20, size 0x40, virtual false, abstract: false, final false
inline bool StartsWithOrdinalUnchecked(::StringW  value) ;

/// @brief Method Substring, addr 0x1815e5e80, size 0x10, virtual false, abstract: false, final false
inline ::StringW Substring(int32_t  startIndex) ;

/// @brief Method Substring, addr 0x1815e5e90, size 0xc0, virtual false, abstract: false, final false
inline ::StringW Substring(int32_t  startIndex, int32_t  length) ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Char>.GetEnumerator, addr 0x1815e5f50, size 0x40, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<char16_t>* System_Collections_Generic_IEnumerable_System_Char__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x1815e5f50, size 0x40, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.IConvertible.ToBoolean, addr 0x1815e5f90, size 0x10, virtual true, abstract: false, final true
inline bool System_IConvertible_ToBoolean(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToByte, addr 0x1815e5fa0, size 0x10, virtual true, abstract: false, final true
inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToChar, addr 0x1815e5fb0, size 0x10, virtual true, abstract: false, final true
inline char16_t System_IConvertible_ToChar(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDateTime, addr 0x1815e5fc0, size 0x10, virtual true, abstract: false, final true
inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDecimal, addr 0x1815e5fd0, size 0x20, virtual true, abstract: false, final true
inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDouble, addr 0x1815e5ff0, size 0x10, virtual true, abstract: false, final true
inline double_t System_IConvertible_ToDouble(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt16, addr 0x1815e6000, size 0x10, virtual true, abstract: false, final true
inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt32, addr 0x1815e6010, size 0x10, virtual true, abstract: false, final true
inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt64, addr 0x1815e6020, size 0x10, virtual true, abstract: false, final true
inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToSByte, addr 0x1815e6030, size 0x10, virtual true, abstract: false, final true
inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToSingle, addr 0x1815e6040, size 0x10, virtual true, abstract: false, final true
inline float_t System_IConvertible_ToSingle(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToType, addr 0x1815e6050, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_IConvertible_ToType(::System::Type*  type, ::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt16, addr 0x1815e6060, size 0x10, virtual true, abstract: false, final true
inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt32, addr 0x1815e6070, size 0x10, virtual true, abstract: false, final true
inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt64, addr 0x1815e6080, size 0x10, virtual true, abstract: false, final true
inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider*  provider) ;

/// @brief Method ToCharArray, addr 0x1815e6090, size 0xb0, virtual false, abstract: false, final false
inline ::ArrayW<char16_t> ToCharArray() ;

/// @brief Method ToLower, addr 0x1815e6190, size 0x50, virtual false, abstract: false, final false
inline ::StringW ToLower() ;

/// @brief Method ToLower, addr 0x1815e61e0, size 0x60, virtual false, abstract: false, final false
inline ::StringW ToLower(::System::Globalization::CultureInfo*  culture) ;

/// @brief Method ToLowerInvariant, addr 0x1815e6140, size 0x50, virtual false, abstract: false, final false
inline ::StringW ToLowerInvariant() ;

/// @brief Method ToString, addr 0x1802e0ba0, size 0x10, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x1802e0ba0, size 0x10, virtual true, abstract: false, final true
inline ::StringW ToString(::System::IFormatProvider*  provider) ;

/// @brief Method ToUpper, addr 0x1815e6290, size 0x50, virtual false, abstract: false, final false
inline ::StringW ToUpper() ;

/// @brief Method ToUpper, addr 0x1815e62e0, size 0x60, virtual false, abstract: false, final false
inline ::StringW ToUpper(::System::Globalization::CultureInfo*  culture) ;

/// @brief Method ToUpperInvariant, addr 0x1815e6240, size 0x50, virtual false, abstract: false, final false
inline ::StringW ToUpperInvariant() ;

/// @brief Method Trim, addr 0x1815e6720, size 0x10, virtual false, abstract: false, final false
inline ::StringW Trim() ;

/// @brief Method Trim, addr 0x1815e6730, size 0x30, virtual false, abstract: false, final false
inline ::StringW Trim(char16_t  trimChar) ;

/// @brief Method Trim, addr 0x1815e66d0, size 0x50, virtual false, abstract: false, final false
inline ::StringW Trim(::ArrayW<char16_t>  trimChars) ;

/// @brief Method TrimEnd, addr 0x1815e6340, size 0x10, virtual false, abstract: false, final false
inline ::StringW TrimEnd() ;

/// @brief Method TrimEnd, addr 0x1815e63a0, size 0x30, virtual false, abstract: false, final false
inline ::StringW TrimEnd(char16_t  trimChar) ;

/// @brief Method TrimEnd, addr 0x1815e6350, size 0x50, virtual false, abstract: false, final false
inline ::StringW TrimEnd(::ArrayW<char16_t>  trimChars) ;

/// @brief Method TrimHelper, addr 0x1815e63d0, size 0x180, virtual false, abstract: false, final false
inline ::StringW TrimHelper(char16_t*  trimChars, int32_t  trimCharsLength, ::System::String_TrimType  trimType) ;

/// @brief Method TrimStart, addr 0x1815e6550, size 0x30, virtual false, abstract: false, final false
inline ::StringW TrimStart(char16_t  trimChar) ;

/// @brief Method TrimStart, addr 0x1815e6580, size 0x40, virtual false, abstract: false, final false
inline ::StringW TrimStart(::ArrayW<char16_t>  trimChars) ;

/// @brief Method TrimWhiteSpaceHelper, addr 0x1815e65c0, size 0x110, virtual false, abstract: false, final false
inline ::StringW TrimWhiteSpaceHelper(::System::String_TrimType  trimType) ;

constexpr char16_t const& __cordl_internal_get__firstChar() const;

constexpr char16_t& __cordl_internal_get__firstChar() ;

constexpr int32_t const& __cordl_internal_get__stringLength() const;

constexpr int32_t& __cordl_internal_get__stringLength() ;

constexpr void __cordl_internal_set__firstChar(char16_t  value) ;

constexpr void __cordl_internal_set__stringLength(int32_t  value) ;

/// @brief Method bzero, addr 0x1815e6790, size 0x20, virtual false, abstract: false, final false
static inline void _cordl_bzero(uint8_t*  dest, int32_t  len) ;

/// @brief Method .ctor, addr 0x1815e6760, size 0x10, virtual false, abstract: false, final false
inline void _ctor(char16_t  c, int32_t  count) ;

/// @brief Method .ctor, addr 0x1815e6760, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<char16_t>  value) ;

/// @brief Method .ctor, addr 0x1815e6760, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<char16_t>  value, int32_t  startIndex, int32_t  length) ;

/// @brief Method .ctor, addr 0x1815e6770, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::System::ReadOnlySpan_1<char16_t>  value) ;

/// @brief Method .ctor, addr 0x1815e6760, size 0x10, virtual false, abstract: false, final false
inline void _ctor(char16_t*  value) ;

/// @brief Method .ctor, addr 0x1815e6760, size 0x10, virtual false, abstract: false, final false
inline void _ctor(char16_t*  value, int32_t  startIndex, int32_t  length) ;

/// @brief Method .ctor, addr 0x1815e6760, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int8_t*  value) ;

/// @brief Method .ctor, addr 0x1815e6760, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int8_t*  value, int32_t  startIndex, int32_t  length) ;

/// @brief Method .ctor, addr 0x1815e6760, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int8_t*  value, int32_t  startIndex, int32_t  length, ::System::Text::Encoding*  enc) ;

/// @brief Method bzero_aligned_1, addr 0x181477870, size 0x10, virtual false, abstract: false, final false
static inline void bzero_aligned_1(uint8_t*  dest, int32_t  len) ;

/// @brief Method bzero_aligned_2, addr 0x1813ad2d0, size 0x4d30, virtual false, abstract: false, final false
static inline void bzero_aligned_2(uint8_t*  dest, int32_t  len) ;

/// @brief Method bzero_aligned_4, addr 0x1805d77b0, size 0x20, virtual false, abstract: false, final false
static inline void bzero_aligned_4(uint8_t*  dest, int32_t  len) ;

/// @brief Method bzero_aligned_8, addr 0x18035d7d0, size 0x20, virtual false, abstract: false, final false
static inline void bzero_aligned_8(uint8_t*  dest, int32_t  len) ;

static inline ::StringW getStaticF_Empty() ;

/// @brief Method get_Chars, addr 0x1815e67b0, size 0x50, virtual false, abstract: false, final false
inline char16_t get_Chars(int32_t  index) ;

/// @brief Method get_Length, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<char16_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<char16_t>* i___System__Collections__Generic__IEnumerable_1_char16_t_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* i___System__IComparable() noexcept;

/// @brief Convert to "::System::IComparable_1<::StringW>"
constexpr ::System::IComparable_1<::StringW>* i___System__IComparable_1___StringW_() noexcept;

/// @brief Convert to "::System::IConvertible"
constexpr ::System::IConvertible* i___System__IConvertible() noexcept;

/// @brief Convert to "::System::IEquatable_1<::StringW>"
constexpr ::System::IEquatable_1<::StringW>* i___System__IEquatable_1___StringW_() noexcept;

/// @brief Method memcpy, addr 0x1815e6830, size 0x20, virtual false, abstract: false, final false
static inline void memcpy(uint8_t*  dest, uint8_t*  src, int32_t  size) ;

/// @brief Method memcpy_aligned_1, addr 0x1815e6800, size 0x10, virtual false, abstract: false, final false
static inline void memcpy_aligned_1(uint8_t*  dest, uint8_t*  src, int32_t  size) ;

/// @brief Method memcpy_aligned_2, addr 0x1815e6810, size 0x10, virtual false, abstract: false, final false
static inline void memcpy_aligned_2(uint8_t*  dest, uint8_t*  src, int32_t  size) ;

/// @brief Method memcpy_aligned_4, addr 0x1815e6820, size 0x10, virtual false, abstract: false, final false
static inline void memcpy_aligned_4(uint8_t*  dest, uint8_t*  src, int32_t  size) ;

/// @brief Method memcpy_aligned_8, addr 0x180c162b0, size 0x1ce0, virtual false, abstract: false, final false
static inline void memcpy_aligned_8(uint8_t*  dest, uint8_t*  src, int32_t  size) ;

/// @brief Method memset, addr 0x1815e6850, size 0xf0, virtual false, abstract: false, final false
static inline void memset(uint8_t*  dest, int32_t  val, int32_t  len) ;

/// @brief Method op_Equality, addr 0x1815e0ba0, size 0x40, virtual false, abstract: false, final false
static inline bool op_Equality(::StringW  a, ::StringW  b) ;

/// @brief Method op_Implicit, addr 0x1815e6940, size 0x40, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<char16_t> op_Implicit___System__ReadOnlySpan_1_char16_t_(::StringW  value) ;

/// @brief Method op_Inequality, addr 0x1815e6980, size 0x50, virtual false, abstract: false, final false
static inline bool op_Inequality(::StringW  a, ::StringW  b) ;

static inline void setStaticF_Empty(::StringW  value) ;

/// @brief Method wcslen, addr 0x1815e69d0, size 0xc0, virtual false, abstract: false, final false
static inline int32_t wcslen(char16_t*  ptr) ;

/// @brief Method wstrcpy, addr 0x180714910, size 0x6760, virtual false, abstract: false, final false
static inline void wstrcpy(char16_t*  dmem, char16_t*  smem, int32_t  charCount) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr String() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "String", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
String(String && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "String", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
String(String const& ) = delete;

/// @brief Field PROBABILISTICMAP_BLOCK_INDEX_MASK offset 0xffffffff size 0x4
static constexpr int32_t  PROBABILISTICMAP_BLOCK_INDEX_MASK{static_cast<int32_t>(0x7)};

/// @brief Field PROBABILISTICMAP_BLOCK_INDEX_SHIFT offset 0xffffffff size 0x4
static constexpr int32_t  PROBABILISTICMAP_BLOCK_INDEX_SHIFT{static_cast<int32_t>(0x3)};

/// @brief Field PROBABILISTICMAP_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  PROBABILISTICMAP_SIZE{static_cast<int32_t>(0x8)};

/// @brief Field StackallocIntBufferSizeLimit offset 0xffffffff size 0x4
static constexpr int32_t  StackallocIntBufferSizeLimit{static_cast<int32_t>(0x80)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{142};

/// @brief Field _stringLength, offset: 0x10, size: 0x4, def value: None
 int32_t  ____stringLength;

/// @brief Field _firstChar, offset: 0x14, size: 0x2, def value: None
 char16_t  ____firstChar;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::String, ____stringLength) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::String, ____firstChar) == 0x14, "Offset mismatch!");

static_assert(sizeof(::System::String) == 0x18, "Size mismatch!");

} // namespace end def System
