#pragma once
// IWYU pragma private; include "Unity/Mathematics/int2x4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__int2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(int2x4)
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
struct bool2x4;
}
namespace Unity::Mathematics {
struct double2x4;
}
namespace Unity::Mathematics {
struct float2x4;
}
namespace Unity::Mathematics {
struct int2;
}
namespace Unity::Mathematics {
struct uint2x4;
}
// Forward declare root types
namespace Unity::Mathematics {
struct int2x4;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::int2x4);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::int2x4, "Unity.Mathematics", "int2x4");
// Dependencies Unity.Mathematics.int2
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.int2x4
struct CORDL_TYPE int2x4 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::int2  Item[];

/// @brief Field zero, offset 0xffffffff, size 0x20 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::int2x4  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::int2x4>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::int2x4>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x181f9e670, size 0x170, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x181f2ddd0, size 0x50, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::int2x4  rhs) ;

/// @brief Method GetHashCode, addr 0x181f9d570, size 0x30, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x181f9d710, size 0x180, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x181f9d5a0, size 0x170, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x181ea06b0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int2  c0, ::Unity::Mathematics::int2  c1, ::Unity::Mathematics::int2  c2, ::Unity::Mathematics::int2  c3) ;

/// @brief Method .ctor, addr 0x181ed82f0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  m00, int32_t  m01, int32_t  m02, int32_t  m03, int32_t  m10, int32_t  m11, int32_t  m12, int32_t  m13) ;

/// @brief Method .ctor, addr 0x181ed8350, size 0x140, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method .ctor, addr 0x181ed8490, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double2x4  v) ;

/// @brief Method .ctor, addr 0x181ed8210, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float2x4  v) ;

/// @brief Method .ctor, addr 0x181ed8280, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint2x4  v) ;

/// @brief Method .ctor, addr 0x181ed85c0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x181ed8660, size 0x70, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x181ed8550, size 0x70, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x181ed8500, size 0x50, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x181ed8500, size 0x50, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

static inline ::Unity::Mathematics::int2x4 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x1808fb150, size 0x40, virtual false, abstract: false, final false
inline ::by_ref<::Unity::Mathematics::int2> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int2x4>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::int2x4>* i___System__IEquatable_1___Unity__Mathematics__int2x4_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x181f32190, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_Addition(::Unity::Mathematics::int2x4  lhs, ::Unity::Mathematics::int2x4  rhs) ;

/// @brief Method op_Addition, addr 0x181f32100, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_Addition(::Unity::Mathematics::int2x4  lhs, int32_t  rhs) ;

/// @brief Method op_Addition, addr 0x181f32240, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_Addition(int32_t  lhs, ::Unity::Mathematics::int2x4  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x181f32400, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_BitwiseAnd(::Unity::Mathematics::int2x4  lhs, ::Unity::Mathematics::int2x4  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x181f322d0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_BitwiseAnd(::Unity::Mathematics::int2x4  lhs, int32_t  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x181f32370, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_BitwiseAnd(int32_t  lhs, ::Unity::Mathematics::int2x4  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x181f325f0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_BitwiseOr(::Unity::Mathematics::int2x4  lhs, ::Unity::Mathematics::int2x4  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x181f32550, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_BitwiseOr(::Unity::Mathematics::int2x4  lhs, int32_t  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x181f324c0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_BitwiseOr(int32_t  lhs, ::Unity::Mathematics::int2x4  rhs) ;

/// @brief Method op_Decrement, addr 0x181f326b0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_Decrement(::Unity::Mathematics::int2x4  val) ;

/// @brief Method op_Division, addr 0x181f9e940, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_Division(::Unity::Mathematics::int2x4  lhs, ::Unity::Mathematics::int2x4  rhs) ;

/// @brief Method op_Division, addr 0x181f9e7e0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_Division(::Unity::Mathematics::int2x4  lhs, int32_t  rhs) ;

/// @brief Method op_Division, addr 0x181f9e890, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_Division(int32_t  lhs, ::Unity::Mathematics::int2x4  rhs) ;

/// @brief Method op_Equality, addr 0x181f32b60, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_Equality(::Unity::Mathematics::int2x4  lhs, ::Unity::Mathematics::int2x4  rhs) ;

/// @brief Method op_Equality, addr 0x181f32a80, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_Equality(::Unity::Mathematics::int2x4  lhs, int32_t  rhs) ;

/// @brief Method op_Equality, addr 0x181f329a0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_Equality(int32_t  lhs, ::Unity::Mathematics::int2x4  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x181f32cf0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_ExclusiveOr(::Unity::Mathematics::int2x4  lhs, ::Unity::Mathematics::int2x4  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x181f32db0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_ExclusiveOr(::Unity::Mathematics::int2x4  lhs, int32_t  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x181f32c60, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_ExclusiveOr(int32_t  lhs, ::Unity::Mathematics::int2x4  rhs) ;

/// @brief Method op_Explicit, addr 0x181efa2e0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_Explicit___Unity__Mathematics__int2x4(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method op_Explicit, addr 0x181efa670, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_Explicit___Unity__Mathematics__int2x4(::Unity::Mathematics::double2x4  v) ;

/// @brief Method op_Explicit, addr 0x181efa560, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_Explicit___Unity__Mathematics__int2x4(::Unity::Mathematics::float2x4  v) ;

/// @brief Method op_Explicit, addr 0x181efa360, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_Explicit___Unity__Mathematics__int2x4(::Unity::Mathematics::uint2x4  v) ;

/// @brief Method op_Explicit, addr 0x181f32f40, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_Explicit___Unity__Mathematics__int2x4(bool  v) ;

/// @brief Method op_Explicit, addr 0x181efa4f0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_Explicit___Unity__Mathematics__int2x4(double_t  v) ;

/// @brief Method op_Explicit, addr 0x181efa600, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_Explicit___Unity__Mathematics__int2x4(float_t  v) ;

/// @brief Method op_Explicit, addr 0x181efa310, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_Explicit___Unity__Mathematics__int2x4(uint32_t  v) ;

/// @brief Method op_GreaterThan, addr 0x181f9ece0, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_GreaterThan(::Unity::Mathematics::int2x4  lhs, ::Unity::Mathematics::int2x4  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181f9ede0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_GreaterThan(::Unity::Mathematics::int2x4  lhs, int32_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181f9eec0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_GreaterThan(int32_t  lhs, ::Unity::Mathematics::int2x4  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f9ea20, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_GreaterThanOrEqual(::Unity::Mathematics::int2x4  lhs, ::Unity::Mathematics::int2x4  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f9eb20, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_GreaterThanOrEqual(::Unity::Mathematics::int2x4  lhs, int32_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f9ec00, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_GreaterThanOrEqual(int32_t  lhs, ::Unity::Mathematics::int2x4  rhs) ;

/// @brief Method op_Implicit, addr 0x181efa310, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_Implicit___Unity__Mathematics__int2x4(int32_t  v) ;

/// @brief Method op_Increment, addr 0x181f334f0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_Increment(::Unity::Mathematics::int2x4  val) ;

/// @brief Method op_Inequality, addr 0x181f33740, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_Inequality(::Unity::Mathematics::int2x4  lhs, ::Unity::Mathematics::int2x4  rhs) ;

/// @brief Method op_Inequality, addr 0x181f33660, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_Inequality(::Unity::Mathematics::int2x4  lhs, int32_t  rhs) ;

/// @brief Method op_Inequality, addr 0x181f33580, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_Inequality(int32_t  lhs, ::Unity::Mathematics::int2x4  rhs) ;

/// @brief Method op_LeftShift, addr 0x181f33840, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_LeftShift(::Unity::Mathematics::int2x4  x, int32_t  n) ;

/// @brief Method op_LessThan, addr 0x181f9f340, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_LessThan(::Unity::Mathematics::int2x4  lhs, ::Unity::Mathematics::int2x4  rhs) ;

/// @brief Method op_LessThan, addr 0x181f9f260, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_LessThan(::Unity::Mathematics::int2x4  lhs, int32_t  rhs) ;

/// @brief Method op_LessThan, addr 0x181f9f440, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_LessThan(int32_t  lhs, ::Unity::Mathematics::int2x4  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f9f160, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_LessThanOrEqual(::Unity::Mathematics::int2x4  lhs, ::Unity::Mathematics::int2x4  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f9efa0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_LessThanOrEqual(::Unity::Mathematics::int2x4  lhs, int32_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f9f080, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_LessThanOrEqual(int32_t  lhs, ::Unity::Mathematics::int2x4  rhs) ;

/// @brief Method op_Modulus, addr 0x181f9f5d0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_Modulus(::Unity::Mathematics::int2x4  lhs, ::Unity::Mathematics::int2x4  rhs) ;

/// @brief Method op_Modulus, addr 0x181f9f6b0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_Modulus(::Unity::Mathematics::int2x4  lhs, int32_t  rhs) ;

/// @brief Method op_Modulus, addr 0x181f9f520, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_Modulus(int32_t  lhs, ::Unity::Mathematics::int2x4  rhs) ;

/// @brief Method op_Multiply, addr 0x181f34160, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_Multiply(::Unity::Mathematics::int2x4  lhs, ::Unity::Mathematics::int2x4  rhs) ;

/// @brief Method op_Multiply, addr 0x181f34220, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_Multiply(::Unity::Mathematics::int2x4  lhs, int32_t  rhs) ;

/// @brief Method op_Multiply, addr 0x181f340c0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_Multiply(int32_t  lhs, ::Unity::Mathematics::int2x4  rhs) ;

/// @brief Method op_OnesComplement, addr 0x181f342c0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_OnesComplement(::Unity::Mathematics::int2x4  val) ;

/// @brief Method op_RightShift, addr 0x181f9f760, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_RightShift(::Unity::Mathematics::int2x4  x, int32_t  n) ;

/// @brief Method op_Subtraction, addr 0x181f34530, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_Subtraction(::Unity::Mathematics::int2x4  lhs, ::Unity::Mathematics::int2x4  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f343f0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_Subtraction(::Unity::Mathematics::int2x4  lhs, int32_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f34490, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_Subtraction(int32_t  lhs, ::Unity::Mathematics::int2x4  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x181f345f0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_UnaryNegation(::Unity::Mathematics::int2x4  val) ;

/// @brief Method op_UnaryPlus, addr 0x181f34680, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 op_UnaryPlus(::Unity::Mathematics::int2x4  val) ;

static inline void setStaticF_zero(::Unity::Mathematics::int2x4  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr int2x4() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::int2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::int2", modifiers: "", def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::int2", modifiers: "", def_value: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::int2", modifiers: "", def_value: None }]
constexpr int2x4(::Unity::Mathematics::int2  c0, ::Unity::Mathematics::int2  c1, ::Unity::Mathematics::int2  c2, ::Unity::Mathematics::int2  c3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12816};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field c0, offset: 0x0, size: 0x8, def value: None
 ::Unity::Mathematics::int2  c0;

/// @brief Field c1, offset: 0x8, size: 0x8, def value: None
 ::Unity::Mathematics::int2  c1;

/// @brief Field c2, offset: 0x10, size: 0x8, def value: None
 ::Unity::Mathematics::int2  c2;

/// @brief Field c3, offset: 0x18, size: 0x8, def value: None
 ::Unity::Mathematics::int2  c3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::int2x4, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int2x4, c1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int2x4, c2) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int2x4, c3) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::int2x4) == 0x20, "Size mismatch!");

} // namespace end def Unity::Mathematics
