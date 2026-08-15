#pragma once
// IWYU pragma private; include "System/Double.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Double)
namespace System::Globalization {
class NumberFormatInfo;
}
namespace System::Globalization {
struct NumberStyles;
}
namespace System {
struct DateTime;
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
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
struct Double;
}
// Write type traits
MARK_VAL_T(::System::Double);
DEFINE_IL2CPP_CLASS(::System::Double, "System", "Double");
// Dependencies 
namespace System {
// Is value type: true
// CS Name: System.Double
struct CORDL_TYPE Double {
public:
// Declarations
/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IComparable_1<double_t>"
constexpr operator  ::System::IComparable_1<double_t>*() ;

/// @brief Convert operator to "::System::IConvertible"
constexpr operator  ::System::IConvertible*() ;

/// @brief Convert operator to "::System::IEquatable_1<double_t>"
constexpr operator  ::System::IEquatable_1<double_t>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Convert operator to "::System::ISpanFormattable"
constexpr operator  ::System::ISpanFormattable*() ;

/// @brief Method CompareTo, addr 0x181707af0, size 0xd0, virtual true, abstract: false, final true
inline int32_t CompareTo(::System::Object*  value) ;

/// @brief Method CompareTo, addr 0x181707bc0, size 0x60, virtual true, abstract: false, final true
inline int32_t CompareTo(double_t  value) ;

/// @brief Method Equals, addr 0x181707c20, size 0xa0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x181707cc0, size 0x60, virtual true, abstract: false, final true
inline bool Equals(double_t  obj) ;

/// @brief Method GetHashCode, addr 0x180baaac0, size 0x4500, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetTypeCode, addr 0x180901ad0, size 0xa0, virtual true, abstract: false, final true
inline ::System::TypeCode GetTypeCode() ;

/// @brief Method IsFinite, addr 0x181707d20, size 0x30, virtual false, abstract: false, final false
static inline bool IsFinite(double_t  d) ;

/// @brief Method IsInfinity, addr 0x181707d50, size 0x30, virtual false, abstract: false, final false
static inline bool IsInfinity(double_t  d) ;

/// @brief Method IsNaN, addr 0x181707d80, size 0x30, virtual false, abstract: false, final false
static inline bool IsNaN(double_t  d) ;

/// @brief Method IsNegative, addr 0x181707dd0, size 0x10, virtual false, abstract: false, final false
static inline bool IsNegative(double_t  d) ;

/// @brief Method IsNegativeInfinity, addr 0x181707db0, size 0x20, virtual false, abstract: false, final false
static inline bool IsNegativeInfinity(double_t  d) ;

/// @brief Method IsPositiveInfinity, addr 0x181707de0, size 0x20, virtual false, abstract: false, final false
static inline bool IsPositiveInfinity(double_t  d) ;

/// @brief Method Parse, addr 0x181707f20, size 0x70, virtual false, abstract: false, final false
static inline double_t Parse(::StringW  s) ;

/// @brief Method Parse, addr 0x181707e00, size 0x80, virtual false, abstract: false, final false
static inline double_t Parse(::StringW  s, ::System::IFormatProvider*  provider) ;

/// @brief Method Parse, addr 0x181707e80, size 0xa0, virtual false, abstract: false, final false
static inline double_t Parse(::StringW  s, ::System::Globalization::NumberStyles  style, ::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToBoolean, addr 0x181707f90, size 0x20, virtual true, abstract: false, final true
inline bool System_IConvertible_ToBoolean(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToByte, addr 0x181707fb0, size 0x20, virtual true, abstract: false, final true
inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToChar, addr 0x181707fd0, size 0x90, virtual true, abstract: false, final true
inline char16_t System_IConvertible_ToChar(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDateTime, addr 0x181708060, size 0x90, virtual true, abstract: false, final true
inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDecimal, addr 0x1817080f0, size 0x60, virtual true, abstract: false, final true
inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDouble, addr 0x180862f00, size 0x16430, virtual true, abstract: false, final true
inline double_t System_IConvertible_ToDouble(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt16, addr 0x181708150, size 0x20, virtual true, abstract: false, final true
inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt32, addr 0x181708170, size 0x20, virtual true, abstract: false, final true
inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt64, addr 0x181708190, size 0x20, virtual true, abstract: false, final true
inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToSByte, addr 0x1817081b0, size 0x20, virtual true, abstract: false, final true
inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToSingle, addr 0x1817081d0, size 0x20, virtual true, abstract: false, final true
inline float_t System_IConvertible_ToSingle(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToType, addr 0x1817081f0, size 0x60, virtual true, abstract: false, final true
inline ::System::Object* System_IConvertible_ToType(::System::Type*  type, ::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt16, addr 0x181708250, size 0x20, virtual true, abstract: false, final true
inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt32, addr 0x181708270, size 0x20, virtual true, abstract: false, final true
inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt64, addr 0x181708290, size 0x20, virtual true, abstract: false, final true
inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0x181708330, size 0x40, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x1817082f0, size 0x40, virtual false, abstract: false, final false
inline ::StringW ToString(::StringW  format) ;

/// @brief Method ToString, addr 0x181708370, size 0x50, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0x1817082b0, size 0x40, virtual true, abstract: false, final true
inline ::StringW ToString(::System::IFormatProvider*  provider) ;

/// @brief Method TryFormat, addr 0x1817083c0, size 0xc0, virtual true, abstract: false, final true
inline bool TryFormat(::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  provider) ;

/// @brief Method TryParse, addr 0x181708520, size 0x80, virtual false, abstract: false, final false
static inline bool TryParse(::StringW  s, ::by_ref<double_t>  result) ;

/// @brief Method TryParse, addr 0x181708480, size 0xa0, virtual false, abstract: false, final false
static inline bool TryParse(::StringW  s, ::System::Globalization::NumberStyles  style, ::System::IFormatProvider*  provider, ::by_ref<double_t>  result) ;

/// @brief Method TryParse, addr 0x1817085a0, size 0x190, virtual false, abstract: false, final false
static inline bool TryParse(::System::ReadOnlySpan_1<char16_t>  s, ::System::Globalization::NumberStyles  style, ::System::Globalization::NumberFormatInfo*  info, ::by_ref<double_t>  result) ;

/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* i___System__IComparable() ;

/// @brief Convert to "::System::IComparable_1<double_t>"
constexpr ::System::IComparable_1<double_t>* i___System__IComparable_1_double_t_() ;

/// @brief Convert to "::System::IConvertible"
constexpr ::System::IConvertible* i___System__IConvertible() ;

/// @brief Convert to "::System::IEquatable_1<double_t>"
constexpr ::System::IEquatable_1<double_t>* i___System__IEquatable_1_double_t_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Convert to "::System::ISpanFormattable"
constexpr ::System::ISpanFormattable* i___System__ISpanFormattable() ;

// Ctor Parameters []
// @brief default ctor
constexpr Double() ;

// Ctor Parameters [CppParam { name: "m_value", ty: "double_t", modifiers: "", def_value: None }]
constexpr Double(double_t  m_value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{205};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_value, offset: 0x0, size: 0x8, def value: None
 double_t  m_value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Double, m_value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Double) == 0x8, "Size mismatch!");

} // namespace end def System
