#pragma once
// IWYU pragma private; include "Unity/Mathematics/uint2x2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__uint2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(uint2x2)
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
struct bool2x2;
}
namespace Unity::Mathematics {
struct double2x2;
}
namespace Unity::Mathematics {
struct float2x2;
}
namespace Unity::Mathematics {
struct int2x2;
}
namespace Unity::Mathematics {
struct uint2;
}
// Forward declare root types
namespace Unity::Mathematics {
struct uint2x2;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::uint2x2);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::uint2x2, "Unity.Mathematics", "uint2x2");
// Dependencies Unity.Mathematics.uint2
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.uint2x2
struct CORDL_TYPE uint2x2 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::uint2  Item[];

/// @brief Field identity, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_identity, put=setStaticF_identity)) ::Unity::Mathematics::uint2x2  identity;

/// @brief Field zero, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::uint2x2  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::uint2x2>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::uint2x2>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x181fae2e0, size 0xc0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x181f96fa0, size 0x30, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::uint2x2  rhs) ;

/// @brief Method GetHashCode, addr 0x181fa7350, size 0xd0, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x181fa7500, size 0xe0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x181fa7420, size 0xe0, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x1805dd0c0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint2  c0, ::Unity::Mathematics::uint2  c1) ;

/// @brief Method .ctor, addr 0x181ed7e10, size 0x30, virtual false, abstract: false, final false
inline void _ctor(uint32_t  m00, uint32_t  m01, uint32_t  m10, uint32_t  m11) ;

/// @brief Method .ctor, addr 0x181ed7c90, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method .ctor, addr 0x181eddcd0, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double2x2  v) ;

/// @brief Method .ctor, addr 0x181eddc40, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float2x2  v) ;

/// @brief Method .ctor, addr 0x181ed7e40, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int2x2  v) ;

/// @brief Method .ctor, addr 0x181ed7db0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x181edddd0, size 0x70, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x181eddd60, size 0x70, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x181ed7c60, size 0x30, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x181ed7c60, size 0x30, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

static inline ::Unity::Mathematics::uint2x2 getStaticF_identity() ;

static inline ::Unity::Mathematics::uint2x2 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x1808fb150, size 0x40, virtual false, abstract: false, final false
inline ::by_ref<::Unity::Mathematics::uint2> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::uint2x2>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::uint2x2>* i___System__IEquatable_1___Unity__Mathematics__uint2x2_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x181f9a8c0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_Addition(::Unity::Mathematics::uint2x2  lhs, ::Unity::Mathematics::uint2x2  rhs) ;

/// @brief Method op_Addition, addr 0x181f9a920, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_Addition(::Unity::Mathematics::uint2x2  lhs, uint32_t  rhs) ;

/// @brief Method op_Addition, addr 0x181f9a870, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_Addition(uint32_t  lhs, ::Unity::Mathematics::uint2x2  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x181f9aa10, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_BitwiseAnd(::Unity::Mathematics::uint2x2  lhs, ::Unity::Mathematics::uint2x2  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x181f9a9c0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_BitwiseAnd(::Unity::Mathematics::uint2x2  lhs, uint32_t  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x181f9a970, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_BitwiseAnd(uint32_t  lhs, ::Unity::Mathematics::uint2x2  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x181f9aa70, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_BitwiseOr(::Unity::Mathematics::uint2x2  lhs, ::Unity::Mathematics::uint2x2  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x181f9ab20, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_BitwiseOr(::Unity::Mathematics::uint2x2  lhs, uint32_t  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x181f9aad0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_BitwiseOr(uint32_t  lhs, ::Unity::Mathematics::uint2x2  rhs) ;

/// @brief Method op_Decrement, addr 0x181f9ab70, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_Decrement(::Unity::Mathematics::uint2x2  val) ;

/// @brief Method op_Division, addr 0x181fae460, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_Division(::Unity::Mathematics::uint2x2  lhs, ::Unity::Mathematics::uint2x2  rhs) ;

/// @brief Method op_Division, addr 0x181fae4e0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_Division(::Unity::Mathematics::uint2x2  lhs, uint32_t  rhs) ;

/// @brief Method op_Division, addr 0x181fae540, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_Division(uint32_t  lhs, ::Unity::Mathematics::uint2x2  rhs) ;

/// @brief Method op_Equality, addr 0x181f9ad60, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Equality(::Unity::Mathematics::uint2x2  lhs, ::Unity::Mathematics::uint2x2  rhs) ;

/// @brief Method op_Equality, addr 0x181f9ade0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Equality(::Unity::Mathematics::uint2x2  lhs, uint32_t  rhs) ;

/// @brief Method op_Equality, addr 0x181f9acf0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Equality(uint32_t  lhs, ::Unity::Mathematics::uint2x2  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x181f9aea0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_ExclusiveOr(::Unity::Mathematics::uint2x2  lhs, ::Unity::Mathematics::uint2x2  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x181f9ae50, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_ExclusiveOr(::Unity::Mathematics::uint2x2  lhs, uint32_t  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x181f9af00, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_ExclusiveOr(uint32_t  lhs, ::Unity::Mathematics::uint2x2  rhs) ;

/// @brief Method op_Explicit, addr 0x181f9af50, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_Explicit___Unity__Mathematics__uint2x2(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method op_Explicit, addr 0x181f1aac0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_Explicit___Unity__Mathematics__uint2x2(::Unity::Mathematics::double2x2  v) ;

/// @brief Method op_Explicit, addr 0x181f1ab50, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_Explicit___Unity__Mathematics__uint2x2(::Unity::Mathematics::float2x2  v) ;

/// @brief Method op_Explicit, addr 0x181ef9dd0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_Explicit___Unity__Mathematics__uint2x2(::Unity::Mathematics::int2x2  v) ;

/// @brief Method op_Explicit, addr 0x181ef9e60, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_Explicit___Unity__Mathematics__uint2x2(bool  v) ;

/// @brief Method op_Explicit, addr 0x181f1aa50, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_Explicit___Unity__Mathematics__uint2x2(double_t  v) ;

/// @brief Method op_Explicit, addr 0x181f1a9e0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_Explicit___Unity__Mathematics__uint2x2(float_t  v) ;

/// @brief Method op_Explicit, addr 0x181ef9ce0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_Explicit___Unity__Mathematics__uint2x2(int32_t  v) ;

/// @brief Method op_GreaterThan, addr 0x181fae7e0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(::Unity::Mathematics::uint2x2  lhs, ::Unity::Mathematics::uint2x2  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181fae770, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(::Unity::Mathematics::uint2x2  lhs, uint32_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181fae700, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(uint32_t  lhs, ::Unity::Mathematics::uint2x2  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181fae5a0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(::Unity::Mathematics::uint2x2  lhs, ::Unity::Mathematics::uint2x2  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181fae620, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(::Unity::Mathematics::uint2x2  lhs, uint32_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181fae690, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(uint32_t  lhs, ::Unity::Mathematics::uint2x2  rhs) ;

/// @brief Method op_Implicit, addr 0x181ef9ce0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_Implicit___Unity__Mathematics__uint2x2(uint32_t  v) ;

/// @brief Method op_Increment, addr 0x181f9b230, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_Increment(::Unity::Mathematics::uint2x2  val) ;

/// @brief Method op_Inequality, addr 0x181f9b280, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Inequality(::Unity::Mathematics::uint2x2  lhs, ::Unity::Mathematics::uint2x2  rhs) ;

/// @brief Method op_Inequality, addr 0x181f9b370, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Inequality(::Unity::Mathematics::uint2x2  lhs, uint32_t  rhs) ;

/// @brief Method op_Inequality, addr 0x181f9b300, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Inequality(uint32_t  lhs, ::Unity::Mathematics::uint2x2  rhs) ;

/// @brief Method op_LeftShift, addr 0x181f9b3e0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_LeftShift(::Unity::Mathematics::uint2x2  x, int32_t  n) ;

/// @brief Method op_LessThan, addr 0x181faea30, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_LessThan(::Unity::Mathematics::uint2x2  lhs, ::Unity::Mathematics::uint2x2  rhs) ;

/// @brief Method op_LessThan, addr 0x181faeab0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_LessThan(::Unity::Mathematics::uint2x2  lhs, uint32_t  rhs) ;

/// @brief Method op_LessThan, addr 0x181fae9c0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_LessThan(uint32_t  lhs, ::Unity::Mathematics::uint2x2  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181fae940, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(::Unity::Mathematics::uint2x2  lhs, ::Unity::Mathematics::uint2x2  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181fae8d0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(::Unity::Mathematics::uint2x2  lhs, uint32_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181fae860, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(uint32_t  lhs, ::Unity::Mathematics::uint2x2  rhs) ;

/// @brief Method op_Modulus, addr 0x181faeb80, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_Modulus(::Unity::Mathematics::uint2x2  lhs, ::Unity::Mathematics::uint2x2  rhs) ;

/// @brief Method op_Modulus, addr 0x181faeb20, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_Modulus(::Unity::Mathematics::uint2x2  lhs, uint32_t  rhs) ;

/// @brief Method op_Modulus, addr 0x181faec00, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_Modulus(uint32_t  lhs, ::Unity::Mathematics::uint2x2  rhs) ;

/// @brief Method op_Multiply, addr 0x181f9b820, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_Multiply(::Unity::Mathematics::uint2x2  lhs, ::Unity::Mathematics::uint2x2  rhs) ;

/// @brief Method op_Multiply, addr 0x181f9b8d0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_Multiply(::Unity::Mathematics::uint2x2  lhs, uint32_t  rhs) ;

/// @brief Method op_Multiply, addr 0x181f9b880, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_Multiply(uint32_t  lhs, ::Unity::Mathematics::uint2x2  rhs) ;

/// @brief Method op_OnesComplement, addr 0x181f9b920, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_OnesComplement(::Unity::Mathematics::uint2x2  val) ;

/// @brief Method op_RightShift, addr 0x181faec60, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_RightShift(::Unity::Mathematics::uint2x2  x, int32_t  n) ;

/// @brief Method op_Subtraction, addr 0x181f9ba10, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_Subtraction(::Unity::Mathematics::uint2x2  lhs, ::Unity::Mathematics::uint2x2  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f9ba70, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_Subtraction(::Unity::Mathematics::uint2x2  lhs, uint32_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f9b9c0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_Subtraction(uint32_t  lhs, ::Unity::Mathematics::uint2x2  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x181f9bac0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_UnaryNegation(::Unity::Mathematics::uint2x2  val) ;

/// @brief Method op_UnaryPlus, addr 0x181f9bb10, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 op_UnaryPlus(::Unity::Mathematics::uint2x2  val) ;

static inline void setStaticF_identity(::Unity::Mathematics::uint2x2  value) ;

static inline void setStaticF_zero(::Unity::Mathematics::uint2x2  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr uint2x2() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::uint2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::uint2", modifiers: "", def_value: None }]
constexpr uint2x2(::Unity::Mathematics::uint2  c0, ::Unity::Mathematics::uint2  c1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12833};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field c0, offset: 0x0, size: 0x8, def value: None
 ::Unity::Mathematics::uint2  c0;

/// @brief Field c1, offset: 0x8, size: 0x8, def value: None
 ::Unity::Mathematics::uint2  c1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::uint2x2, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint2x2, c1) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::uint2x2) == 0x10, "Size mismatch!");

} // namespace end def Unity::Mathematics
