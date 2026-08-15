#pragma once
// IWYU pragma private; include "System/Numerics/BigInteger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BigInteger)
namespace System::Globalization {
struct NumberStyles;
}
namespace System::Numerics {
struct BigInteger_GetBytesMode;
}
namespace System {
struct Decimal;
}
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
namespace System::Numerics {
struct BigInteger_GetBytesMode;
}
namespace System::Numerics {
struct BigInteger;
}
// Write type traits
MARK_VAL_T(::System::Numerics::BigInteger_GetBytesMode);
MARK_VAL_T(::System::Numerics::BigInteger);
DEFINE_IL2CPP_CLASS(::System::Numerics::BigInteger_GetBytesMode, "System.Numerics", "BigInteger/GetBytesMode");
DEFINE_IL2CPP_CLASS(::System::Numerics::BigInteger, "System.Numerics", "BigInteger");
// Dependencies 
namespace System::Numerics {
// Is value type: true
// CS Name: System.Numerics.BigInteger/GetBytesMode
struct CORDL_TYPE BigInteger_GetBytesMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BigInteger_GetBytesMode_Unwrapped
enum struct __BigInteger_GetBytesMode_Unwrapped : int32_t {
__E_AllocateArray = static_cast<int32_t>(0x0),
__E_Count = static_cast<int32_t>(0x1),
__E_Span = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BigInteger_GetBytesMode_Unwrapped () const noexcept {
return static_cast<__BigInteger_GetBytesMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BigInteger_GetBytesMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BigInteger_GetBytesMode(int32_t  value__) noexcept;

/// @brief Field AllocateArray value: I32(0)
static ::System::Numerics::BigInteger_GetBytesMode const AllocateArray;

/// @brief Field Count value: I32(1)
static ::System::Numerics::BigInteger_GetBytesMode const Count;

/// @brief Field Span value: I32(2)
static ::System::Numerics::BigInteger_GetBytesMode const Span;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20703};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Numerics::BigInteger_GetBytesMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::System::Numerics::BigInteger_GetBytesMode) == 0x4, "Size mismatch!");

} // namespace end def System::Numerics
// Dependencies 
namespace System::Numerics {
// Is value type: true
// CS Name: System.Numerics.BigInteger
struct CORDL_TYPE BigInteger {
public:
// Declarations
using GetBytesMode = ::System::Numerics::BigInteger_GetBytesMode;

 __declspec(property(get=get_IsZero)) bool  IsZero;

/// @brief Field s_bnMinInt, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_bnMinInt, put=setStaticF_s_bnMinInt)) ::System::Numerics::BigInteger  s_bnMinInt;

/// @brief Field s_bnMinusOneInt, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_bnMinusOneInt, put=setStaticF_s_bnMinusOneInt)) ::System::Numerics::BigInteger  s_bnMinusOneInt;

/// @brief Field s_bnOneInt, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_bnOneInt, put=setStaticF_s_bnOneInt)) ::System::Numerics::BigInteger  s_bnOneInt;

/// @brief Field s_bnZeroInt, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_bnZeroInt, put=setStaticF_s_bnZeroInt)) ::System::Numerics::BigInteger  s_bnZeroInt;

/// @brief Field s_success, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_success, put=setStaticF_s_success)) ::ArrayW<uint8_t>  s_success;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IComparable_1<::System::Numerics::BigInteger>"
constexpr operator  ::System::IComparable_1<::System::Numerics::BigInteger>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::System::Numerics::BigInteger>"
constexpr operator  ::System::IEquatable_1<::System::Numerics::BigInteger>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Add, addr 0x181c14240, size 0xd0, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger Add(::ArrayW<uint32_t>  leftBits, int32_t  leftSign, ::ArrayW<uint32_t>  rightBits, int32_t  rightSign) ;

/// @brief Method CompareTo, addr 0x181c144a0, size 0x90, virtual true, abstract: false, final true
inline int32_t CompareTo(::System::Object*  obj) ;

/// @brief Method CompareTo, addr 0x181c14310, size 0xe0, virtual true, abstract: false, final true
inline int32_t CompareTo(::System::Numerics::BigInteger  other) ;

/// @brief Method CompareTo, addr 0x181c143f0, size 0xb0, virtual false, abstract: false, final false
inline int32_t CompareTo(int64_t  other) ;

/// @brief Method Equals, addr 0x181c14630, size 0xe0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x181c14530, size 0x90, virtual true, abstract: false, final true
inline bool Equals(::System::Numerics::BigInteger  other) ;

/// @brief Method Equals, addr 0x181c145c0, size 0x70, virtual false, abstract: false, final false
inline bool Equals(int64_t  other) ;

/// @brief Method GetDiffLength, addr 0x181c14710, size 0x30, virtual false, abstract: false, final false
static inline int32_t GetDiffLength(::ArrayW<uint32_t>  rgu1, ::ArrayW<uint32_t>  rgu2, int32_t  cu) ;

/// @brief Method GetHashCode, addr 0x181c14740, size 0x50, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetPartsForBitManipulation, addr 0x181c14790, size 0xa0, virtual false, abstract: false, final false
static inline bool GetPartsForBitManipulation(::by_ref<::System::Numerics::BigInteger>  x, ::by_ref<::ArrayW<uint32_t>>  xd, ::by_ref<int32_t>  xl) ;

/// @brief Method Parse, addr 0x181c14830, size 0x130, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger Parse(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method Parse, addr 0x181c14960, size 0x150, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger Parse(::StringW  value, ::System::Globalization::NumberStyles  style, ::System::IFormatProvider*  provider) ;

/// @brief Method Subtract, addr 0x181c14ab0, size 0x130, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger Subtract(::ArrayW<uint32_t>  leftBits, int32_t  leftSign, ::ArrayW<uint32_t>  rightBits, int32_t  rightSign) ;

/// @brief Method ToByteArray, addr 0x181c14c30, size 0x50, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ToByteArray() ;

/// @brief Method ToByteArray, addr 0x181c14be0, size 0x50, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ToByteArray(bool  isUnsigned, bool  isBigEndian) ;

/// @brief Method ToString, addr 0x181c14c80, size 0xa0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x181c14dc0, size 0xe0, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0x181c14d20, size 0xa0, virtual false, abstract: false, final false
inline ::StringW ToString(::System::IFormatProvider*  provider) ;

/// @brief Method TryGetBytes, addr 0x181c14ea0, size 0x490, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> TryGetBytes(::System::Numerics::BigInteger_GetBytesMode  mode, ::System::Span_1<uint8_t>  destination, bool  isUnsigned, bool  isBigEndian, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method TryWriteBytes, addr 0x181c15330, size 0x90, virtual false, abstract: false, final false
inline bool TryWriteBytes(::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, bool  isUnsigned, bool  isBigEndian) ;

/// @brief Method TryWriteOrCountBytes, addr 0x181c153c0, size 0x80, virtual false, abstract: false, final false
inline bool TryWriteOrCountBytes(::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, bool  isUnsigned, bool  isBigEndian) ;

/// @brief Method .ctor, addr 0x180a17070, size 0x500, virtual false, abstract: false, final false
inline void _ctor(int32_t  n, ::ArrayW<uint32_t>  rgu) ;

/// @brief Method .ctor, addr 0x181c155f0, size 0x180, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint32_t>  value, bool  negative) ;

/// @brief Method .ctor, addr 0x181c15770, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0x181c15b90, size 0x170, virtual false, abstract: false, final false
inline void _ctor(::System::Decimal  value) ;

/// @brief Method .ctor, addr 0x181c15ef0, size 0x510, virtual false, abstract: false, final false
inline void _ctor(::System::ReadOnlySpan_1<uint8_t>  value, bool  isUnsigned, bool  isBigEndian) ;

/// @brief Method .ctor, addr 0x181c158c0, size 0x2d0, virtual false, abstract: false, final false
inline void _ctor(double_t  value) ;

/// @brief Method .ctor, addr 0x181c15d00, size 0x20, virtual false, abstract: false, final false
inline void _ctor(float_t  value) ;

/// @brief Method .ctor, addr 0x181c16400, size 0x80, virtual false, abstract: false, final false
inline void _ctor(int32_t  value) ;

/// @brief Method .ctor, addr 0x181c15d20, size 0x140, virtual false, abstract: false, final false
inline void _ctor(int64_t  value) ;

/// @brief Method .ctor, addr 0x181c15e60, size 0x90, virtual false, abstract: false, final false
inline void _ctor(uint32_t  value) ;

/// @brief Method .ctor, addr 0x181c157e0, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(uint64_t  value) ;

static inline ::System::Numerics::BigInteger getStaticF_s_bnMinInt() ;

static inline ::System::Numerics::BigInteger getStaticF_s_bnMinusOneInt() ;

static inline ::System::Numerics::BigInteger getStaticF_s_bnOneInt() ;

static inline ::System::Numerics::BigInteger getStaticF_s_bnZeroInt() ;

static inline ::ArrayW<uint8_t> getStaticF_s_success() ;

/// @brief Method get_IsZero, addr 0x181c16480, size 0x20, virtual false, abstract: false, final false
inline bool get_IsZero() ;

/// @brief Method get_MinusOne, addr 0x181c164a0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger get_MinusOne() ;

/// @brief Method get_Zero, addr 0x181c164e0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger get_Zero() ;

/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* i___System__IComparable() ;

/// @brief Convert to "::System::IComparable_1<::System::Numerics::BigInteger>"
constexpr ::System::IComparable_1<::System::Numerics::BigInteger>* i___System__IComparable_1___System__Numerics__BigInteger_() ;

/// @brief Convert to "::System::IEquatable_1<::System::Numerics::BigInteger>"
constexpr ::System::IEquatable_1<::System::Numerics::BigInteger>* i___System__IEquatable_1___System__Numerics__BigInteger_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x181c16520, size 0x1f0, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger op_Addition(::System::Numerics::BigInteger  left, ::System::Numerics::BigInteger  right) ;

/// @brief Method op_Division, addr 0x181c16710, size 0x2b0, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger op_Division(::System::Numerics::BigInteger  dividend, ::System::Numerics::BigInteger  divisor) ;

/// @brief Method op_Equality, addr 0x181c145c0, size 0x70, virtual false, abstract: false, final false
static inline bool op_Equality(::System::Numerics::BigInteger  left, int64_t  right) ;

/// @brief Method op_Explicit, addr 0x181c16a00, size 0xd0, virtual false, abstract: false, final false
static inline ::System::Decimal op_Explicit___System__Decimal(::System::Numerics::BigInteger  value) ;

/// @brief Method op_Explicit, addr 0x181c16d80, size 0xf0, virtual false, abstract: false, final false
static inline double_t op_Explicit_double_t(::System::Numerics::BigInteger  value) ;

/// @brief Method op_Explicit, addr 0x181c16bf0, size 0x120, virtual false, abstract: false, final false
static inline float_t op_Explicit_float_t(::System::Numerics::BigInteger  value) ;

/// @brief Method op_Explicit, addr 0x181c169c0, size 0x40, virtual false, abstract: false, final false
static inline int16_t op_Explicit_int16_t(::System::Numerics::BigInteger  value) ;

/// @brief Method op_Explicit, addr 0x181c16ad0, size 0xe0, virtual false, abstract: false, final false
static inline int32_t op_Explicit_int32_t(::System::Numerics::BigInteger  value) ;

/// @brief Method op_Explicit, addr 0x181c16f80, size 0xf0, virtual false, abstract: false, final false
static inline int64_t op_Explicit_int64_t(::System::Numerics::BigInteger  value) ;

/// @brief Method op_Explicit, addr 0x181c16bb0, size 0x40, virtual false, abstract: false, final false
static inline int8_t op_Explicit_int8_t(::System::Numerics::BigInteger  value) ;

/// @brief Method op_Explicit, addr 0x181c16f00, size 0x40, virtual false, abstract: false, final false
static inline uint16_t op_Explicit_uint16_t(::System::Numerics::BigInteger  value) ;

/// @brief Method op_Explicit, addr 0x181c16d10, size 0x70, virtual false, abstract: false, final false
static inline uint32_t op_Explicit_uint32_t(::System::Numerics::BigInteger  value) ;

/// @brief Method op_Explicit, addr 0x181c16e70, size 0x90, virtual false, abstract: false, final false
static inline uint64_t op_Explicit_uint64_t(::System::Numerics::BigInteger  value) ;

/// @brief Method op_Explicit, addr 0x181c16f40, size 0x40, virtual false, abstract: false, final false
static inline uint8_t op_Explicit_uint8_t(::System::Numerics::BigInteger  value) ;

/// @brief Method op_Implicit, addr 0x181c17140, size 0x30, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger op_Implicit___System__Numerics__BigInteger(int16_t  value) ;

/// @brief Method op_Implicit, addr 0x181c17070, size 0x60, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger op_Implicit___System__Numerics__BigInteger(int32_t  value) ;

/// @brief Method op_Implicit, addr 0x181c171a0, size 0x20, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger op_Implicit___System__Numerics__BigInteger(int64_t  value) ;

/// @brief Method op_Implicit, addr 0x181c170d0, size 0x30, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger op_Implicit___System__Numerics__BigInteger(int8_t  value) ;

/// @brief Method op_Implicit, addr 0x181c171c0, size 0x30, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger op_Implicit___System__Numerics__BigInteger(uint16_t  value) ;

/// @brief Method op_Implicit, addr 0x181c17120, size 0x20, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger op_Implicit___System__Numerics__BigInteger(uint32_t  value) ;

/// @brief Method op_Implicit, addr 0x181c17100, size 0x20, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger op_Implicit___System__Numerics__BigInteger(uint64_t  value) ;

/// @brief Method op_Implicit, addr 0x181c17170, size 0x30, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger op_Implicit___System__Numerics__BigInteger(uint8_t  value) ;

/// @brief Method op_Inequality, addr 0x181c17250, size 0x80, virtual false, abstract: false, final false
static inline bool op_Inequality(::System::Numerics::BigInteger  left, ::System::Numerics::BigInteger  right) ;

/// @brief Method op_Inequality, addr 0x181c171f0, size 0x60, virtual false, abstract: false, final false
static inline bool op_Inequality(::System::Numerics::BigInteger  left, int64_t  right) ;

/// @brief Method op_LeftShift, addr 0x181c172d0, size 0x210, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger op_LeftShift(::System::Numerics::BigInteger  value, int32_t  shift) ;

/// @brief Method op_LessThan, addr 0x181c17570, size 0x20, virtual false, abstract: false, final false
static inline bool op_LessThan(::System::Numerics::BigInteger  left, int64_t  right) ;

/// @brief Method op_LessThan, addr 0x181c17550, size 0x20, virtual false, abstract: false, final false
static inline bool op_LessThan(int64_t  left, ::System::Numerics::BigInteger  right) ;

/// @brief Method op_LessThanOrEqual, addr 0x181c174e0, size 0x30, virtual false, abstract: false, final false
static inline bool op_LessThanOrEqual(::System::Numerics::BigInteger  left, ::System::Numerics::BigInteger  right) ;

/// @brief Method op_LessThanOrEqual, addr 0x181c17510, size 0x20, virtual false, abstract: false, final false
static inline bool op_LessThanOrEqual(::System::Numerics::BigInteger  left, int64_t  right) ;

/// @brief Method op_LessThanOrEqual, addr 0x181c17530, size 0x20, virtual false, abstract: false, final false
static inline bool op_LessThanOrEqual(int64_t  left, ::System::Numerics::BigInteger  right) ;

/// @brief Method op_Modulus, addr 0x181c17590, size 0x1f0, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger op_Modulus(::System::Numerics::BigInteger  dividend, ::System::Numerics::BigInteger  divisor) ;

/// @brief Method op_Multiply, addr 0x181c17780, size 0x200, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger op_Multiply(::System::Numerics::BigInteger  left, ::System::Numerics::BigInteger  right) ;

/// @brief Method op_RightShift, addr 0x181c17980, size 0x3b0, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger op_RightShift(::System::Numerics::BigInteger  value, int32_t  shift) ;

/// @brief Method op_Subtraction, addr 0x181c17d30, size 0x220, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger op_Subtraction(::System::Numerics::BigInteger  left, ::System::Numerics::BigInteger  right) ;

/// @brief Method op_UnaryNegation, addr 0x181c17f50, size 0xd0, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger op_UnaryNegation(::System::Numerics::BigInteger  value) ;

static inline void setStaticF_s_bnMinInt(::System::Numerics::BigInteger  value) ;

static inline void setStaticF_s_bnMinusOneInt(::System::Numerics::BigInteger  value) ;

static inline void setStaticF_s_bnOneInt(::System::Numerics::BigInteger  value) ;

static inline void setStaticF_s_bnZeroInt(::System::Numerics::BigInteger  value) ;

static inline void setStaticF_s_success(::ArrayW<uint8_t>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr BigInteger() ;

// Ctor Parameters [CppParam { name: "_sign", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_bits", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: None }]
constexpr BigInteger(int32_t  _sign, ::ArrayW<uint32_t>  _bits) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20704};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _sign, offset: 0x0, size: 0x4, def value: None
 int32_t  _sign;

/// @brief Field _bits, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<uint32_t>  _bits;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Numerics::BigInteger, _sign) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Numerics::BigInteger, _bits) == 0x8, "Offset mismatch!");

static_assert(sizeof(::System::Numerics::BigInteger) == 0x10, "Size mismatch!");

} // namespace end def System::Numerics
