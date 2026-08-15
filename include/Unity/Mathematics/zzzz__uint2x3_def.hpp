#pragma once
// IWYU pragma private; include "Unity/Mathematics/uint2x3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__uint2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(uint2x3)
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
namespace Unity::Mathematics {
struct bool2x3;
}
namespace Unity::Mathematics {
struct double2x3;
}
namespace Unity::Mathematics {
struct float2x3;
}
namespace Unity::Mathematics {
struct int2x3;
}
namespace Unity::Mathematics {
struct uint2;
}
// Forward declare root types
namespace Unity::Mathematics {
struct uint2x3;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::uint2x3);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::uint2x3, "Unity.Mathematics", "uint2x3");
// Dependencies Unity.Mathematics.uint2
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.uint2x3
struct CORDL_TYPE uint2x3 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::uint2  Item[];

/// @brief Field zero, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::uint2x3  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::uint2x3>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::uint2x3>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x181faecc0, size 0x170, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x181f97260, size 0x40, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::uint2x3  rhs) ;

/// @brief Method GetHashCode, addr 0x181fa75e0, size 0x30, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x181fa7610, size 0x130, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x181fa7740, size 0x130, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x1815992b0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint2  c0, ::Unity::Mathematics::uint2  c1, ::Unity::Mathematics::uint2  c2) ;

/// @brief Method .ctor, addr 0x181ed81c0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(uint32_t  m00, uint32_t  m01, uint32_t  m02, uint32_t  m10, uint32_t  m11, uint32_t  m12) ;

/// @brief Method .ctor, addr 0x181ed7f20, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool2x3  v) ;

/// @brief Method .ctor, addr 0x181ede040, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double2x3  v) ;

/// @brief Method .ctor, addr 0x181edde40, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float2x3  v) ;

/// @brief Method .ctor, addr 0x181ed80f0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int2x3  v) ;

/// @brief Method .ctor, addr 0x181ed8140, size 0x80, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x181eddf00, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x181eddfa0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x181ed80b0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x181ed80b0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

static inline ::Unity::Mathematics::uint2x3 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x1808fb150, size 0x40, virtual false, abstract: false, final false
inline ::by_ref<::Unity::Mathematics::uint2> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::uint2x3>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::uint2x3>* i___System__IEquatable_1___Unity__Mathematics__uint2x3_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x181f9bde0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_Addition(::Unity::Mathematics::uint2x3  lhs, ::Unity::Mathematics::uint2x3  rhs) ;

/// @brief Method op_Addition, addr 0x181f9be70, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_Addition(::Unity::Mathematics::uint2x3  lhs, uint32_t  rhs) ;

/// @brief Method op_Addition, addr 0x181f9bd70, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_Addition(uint32_t  lhs, ::Unity::Mathematics::uint2x3  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x181f9bee0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_BitwiseAnd(::Unity::Mathematics::uint2x3  lhs, ::Unity::Mathematics::uint2x3  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x181f9bf70, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_BitwiseAnd(::Unity::Mathematics::uint2x3  lhs, uint32_t  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x181f9bff0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_BitwiseAnd(uint32_t  lhs, ::Unity::Mathematics::uint2x3  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x181f9c0d0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_BitwiseOr(::Unity::Mathematics::uint2x3  lhs, ::Unity::Mathematics::uint2x3  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x181f9c160, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_BitwiseOr(::Unity::Mathematics::uint2x3  lhs, uint32_t  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x181f9c060, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_BitwiseOr(uint32_t  lhs, ::Unity::Mathematics::uint2x3  rhs) ;

/// @brief Method op_Decrement, addr 0x181f9c1e0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_Decrement(::Unity::Mathematics::uint2x3  val) ;

/// @brief Method op_Division, addr 0x181faee30, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_Division(::Unity::Mathematics::uint2x3  lhs, ::Unity::Mathematics::uint2x3  rhs) ;

/// @brief Method op_Division, addr 0x181faef70, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_Division(::Unity::Mathematics::uint2x3  lhs, uint32_t  rhs) ;

/// @brief Method op_Division, addr 0x181faeee0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_Division(uint32_t  lhs, ::Unity::Mathematics::uint2x3  rhs) ;

/// @brief Method op_Equality, addr 0x181f9c410, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_Equality(::Unity::Mathematics::uint2x3  lhs, ::Unity::Mathematics::uint2x3  rhs) ;

/// @brief Method op_Equality, addr 0x181f9c490, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_Equality(::Unity::Mathematics::uint2x3  lhs, uint32_t  rhs) ;

/// @brief Method op_Equality, addr 0x181f9c500, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_Equality(uint32_t  lhs, ::Unity::Mathematics::uint2x3  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x181f9c650, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_ExclusiveOr(::Unity::Mathematics::uint2x3  lhs, ::Unity::Mathematics::uint2x3  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x181f9c5d0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_ExclusiveOr(::Unity::Mathematics::uint2x3  lhs, uint32_t  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x181f9c560, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_ExclusiveOr(uint32_t  lhs, ::Unity::Mathematics::uint2x3  rhs) ;

/// @brief Method op_Explicit, addr 0x181f9c710, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_Explicit___Unity__Mathematics__uint2x3(::Unity::Mathematics::bool2x3  v) ;

/// @brief Method op_Explicit, addr 0x181faf060, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_Explicit___Unity__Mathematics__uint2x3(::Unity::Mathematics::double2x3  v) ;

/// @brief Method op_Explicit, addr 0x181faf0b0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_Explicit___Unity__Mathematics__uint2x3(::Unity::Mathematics::float2x3  v) ;

/// @brief Method op_Explicit, addr 0x181ef9f60, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_Explicit___Unity__Mathematics__uint2x3(::Unity::Mathematics::int2x3  v) ;

/// @brief Method op_Explicit, addr 0x181f9c6e0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_Explicit___Unity__Mathematics__uint2x3(bool  v) ;

/// @brief Method op_Explicit, addr 0x181faf030, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_Explicit___Unity__Mathematics__uint2x3(double_t  v) ;

/// @brief Method op_Explicit, addr 0x181faf000, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_Explicit___Unity__Mathematics__uint2x3(float_t  v) ;

/// @brief Method op_Explicit, addr 0x181ef9fe0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_Explicit___Unity__Mathematics__uint2x3(int32_t  v) ;

/// @brief Method op_GreaterThan, addr 0x181faf240, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_GreaterThan(::Unity::Mathematics::uint2x3  lhs, ::Unity::Mathematics::uint2x3  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181faf2c0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_GreaterThan(::Unity::Mathematics::uint2x3  lhs, uint32_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181faf330, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_GreaterThan(uint32_t  lhs, ::Unity::Mathematics::uint2x3  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181faf1c0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_GreaterThanOrEqual(::Unity::Mathematics::uint2x3  lhs, ::Unity::Mathematics::uint2x3  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181faf150, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_GreaterThanOrEqual(::Unity::Mathematics::uint2x3  lhs, uint32_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181faf0f0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_GreaterThanOrEqual(uint32_t  lhs, ::Unity::Mathematics::uint2x3  rhs) ;

/// @brief Method op_Implicit, addr 0x181ef9fe0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_Implicit___Unity__Mathematics__uint2x3(uint32_t  v) ;

/// @brief Method op_Increment, addr 0x181f9c9f0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_Increment(::Unity::Mathematics::uint2x3  val) ;

/// @brief Method op_Inequality, addr 0x181f9ca60, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_Inequality(::Unity::Mathematics::uint2x3  lhs, ::Unity::Mathematics::uint2x3  rhs) ;

/// @brief Method op_Inequality, addr 0x181f9cae0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_Inequality(::Unity::Mathematics::uint2x3  lhs, uint32_t  rhs) ;

/// @brief Method op_Inequality, addr 0x181f9cb50, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_Inequality(uint32_t  lhs, ::Unity::Mathematics::uint2x3  rhs) ;

/// @brief Method op_LeftShift, addr 0x181f9cbb0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_LeftShift(::Unity::Mathematics::uint2x3  x, int32_t  n) ;

/// @brief Method op_LessThan, addr 0x181faf5b0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_LessThan(::Unity::Mathematics::uint2x3  lhs, ::Unity::Mathematics::uint2x3  rhs) ;

/// @brief Method op_LessThan, addr 0x181faf4e0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_LessThan(::Unity::Mathematics::uint2x3  lhs, uint32_t  rhs) ;

/// @brief Method op_LessThan, addr 0x181faf550, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_LessThan(uint32_t  lhs, ::Unity::Mathematics::uint2x3  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181faf390, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_LessThanOrEqual(::Unity::Mathematics::uint2x3  lhs, ::Unity::Mathematics::uint2x3  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181faf410, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_LessThanOrEqual(::Unity::Mathematics::uint2x3  lhs, uint32_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181faf480, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_LessThanOrEqual(uint32_t  lhs, ::Unity::Mathematics::uint2x3  rhs) ;

/// @brief Method op_Modulus, addr 0x181faf6c0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_Modulus(::Unity::Mathematics::uint2x3  lhs, ::Unity::Mathematics::uint2x3  rhs) ;

/// @brief Method op_Modulus, addr 0x181faf630, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_Modulus(::Unity::Mathematics::uint2x3  lhs, uint32_t  rhs) ;

/// @brief Method op_Modulus, addr 0x181faf770, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_Modulus(uint32_t  lhs, ::Unity::Mathematics::uint2x3  rhs) ;

/// @brief Method op_Multiply, addr 0x181f9d190, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_Multiply(::Unity::Mathematics::uint2x3  lhs, ::Unity::Mathematics::uint2x3  rhs) ;

/// @brief Method op_Multiply, addr 0x181f9d090, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_Multiply(::Unity::Mathematics::uint2x3  lhs, uint32_t  rhs) ;

/// @brief Method op_Multiply, addr 0x181f9d110, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_Multiply(uint32_t  lhs, ::Unity::Mathematics::uint2x3  rhs) ;

/// @brief Method op_OnesComplement, addr 0x181f9d230, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_OnesComplement(::Unity::Mathematics::uint2x3  val) ;

/// @brief Method op_RightShift, addr 0x181faf800, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_RightShift(::Unity::Mathematics::uint2x3  x, int32_t  n) ;

/// @brief Method op_Subtraction, addr 0x181f9d3a0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_Subtraction(::Unity::Mathematics::uint2x3  lhs, ::Unity::Mathematics::uint2x3  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f9d430, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_Subtraction(::Unity::Mathematics::uint2x3  lhs, uint32_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f9d320, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_Subtraction(uint32_t  lhs, ::Unity::Mathematics::uint2x3  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x181f9d4b0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_UnaryNegation(::Unity::Mathematics::uint2x3  val) ;

/// @brief Method op_UnaryPlus, addr 0x181f9d520, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 op_UnaryPlus(::Unity::Mathematics::uint2x3  val) ;

static inline void setStaticF_zero(::Unity::Mathematics::uint2x3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr uint2x3() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::uint2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::uint2", modifiers: "", def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::uint2", modifiers: "", def_value: None }]
constexpr uint2x3(::Unity::Mathematics::uint2  c0, ::Unity::Mathematics::uint2  c1, ::Unity::Mathematics::uint2  c2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12834};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field c0, offset: 0x0, size: 0x8, def value: None
 ::Unity::Mathematics::uint2  c0;

/// @brief Field c1, offset: 0x8, size: 0x8, def value: None
 ::Unity::Mathematics::uint2  c1;

/// @brief Field c2, offset: 0x10, size: 0x8, def value: None
 ::Unity::Mathematics::uint2  c2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::uint2x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint2x3, c1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint2x3, c2) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::uint2x3) == 0x18, "Size mismatch!");

} // namespace end def Unity::Mathematics
