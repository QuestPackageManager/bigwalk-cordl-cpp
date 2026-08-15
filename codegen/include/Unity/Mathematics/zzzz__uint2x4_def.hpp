#pragma once
// IWYU pragma private; include "Unity/Mathematics/uint2x4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__uint2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(uint2x4)
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
struct int2x4;
}
namespace Unity::Mathematics {
struct uint2;
}
// Forward declare root types
namespace Unity::Mathematics {
struct uint2x4;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::uint2x4);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::uint2x4, "Unity.Mathematics", "uint2x4");
// Dependencies Unity.Mathematics.uint2
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.uint2x4
struct CORDL_TYPE uint2x4 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::uint2  Item[];

/// @brief Field zero, offset 0xffffffff, size 0x20 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::uint2x4  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::uint2x4>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::uint2x4>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x181f31f00, size 0x200, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x181f2ddd0, size 0x50, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::uint2x4  rhs) ;

/// @brief Method GetHashCode, addr 0x181f2de20, size 0x30, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x181f2de50, size 0x180, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x181f2dfd0, size 0x170, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x181ea06b0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint2  c0, ::Unity::Mathematics::uint2  c1, ::Unity::Mathematics::uint2  c2, ::Unity::Mathematics::uint2  c3) ;

/// @brief Method .ctor, addr 0x181ed82f0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(uint32_t  m00, uint32_t  m01, uint32_t  m02, uint32_t  m03, uint32_t  m10, uint32_t  m11, uint32_t  m12, uint32_t  m13) ;

/// @brief Method .ctor, addr 0x181ed8350, size 0x140, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method .ctor, addr 0x181ede110, size 0x110, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double2x4  v) ;

/// @brief Method .ctor, addr 0x181ede3a0, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float2x4  v) ;

/// @brief Method .ctor, addr 0x181ed8280, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int2x4  v) ;

/// @brief Method .ctor, addr 0x181ed85c0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x181ede220, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x181ede2e0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x181ed8500, size 0x50, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x181ed8500, size 0x50, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

static inline ::Unity::Mathematics::uint2x4 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x1808fb150, size 0x40, virtual false, abstract: false, final false
inline ::by_ref<::Unity::Mathematics::uint2> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::uint2x4>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::uint2x4>* i___System__IEquatable_1___Unity__Mathematics__uint2x4_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x181f32190, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_Addition(::Unity::Mathematics::uint2x4  lhs, ::Unity::Mathematics::uint2x4  rhs) ;

/// @brief Method op_Addition, addr 0x181f32100, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_Addition(::Unity::Mathematics::uint2x4  lhs, uint32_t  rhs) ;

/// @brief Method op_Addition, addr 0x181f32240, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_Addition(uint32_t  lhs, ::Unity::Mathematics::uint2x4  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x181f32400, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_BitwiseAnd(::Unity::Mathematics::uint2x4  lhs, ::Unity::Mathematics::uint2x4  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x181f322d0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_BitwiseAnd(::Unity::Mathematics::uint2x4  lhs, uint32_t  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x181f32370, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_BitwiseAnd(uint32_t  lhs, ::Unity::Mathematics::uint2x4  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x181f325f0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_BitwiseOr(::Unity::Mathematics::uint2x4  lhs, ::Unity::Mathematics::uint2x4  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x181f32550, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_BitwiseOr(::Unity::Mathematics::uint2x4  lhs, uint32_t  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x181f324c0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_BitwiseOr(uint32_t  lhs, ::Unity::Mathematics::uint2x4  rhs) ;

/// @brief Method op_Decrement, addr 0x181f326b0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_Decrement(::Unity::Mathematics::uint2x4  val) ;

/// @brief Method op_Division, addr 0x181f32740, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_Division(::Unity::Mathematics::uint2x4  lhs, ::Unity::Mathematics::uint2x4  rhs) ;

/// @brief Method op_Division, addr 0x181f328e0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_Division(::Unity::Mathematics::uint2x4  lhs, uint32_t  rhs) ;

/// @brief Method op_Division, addr 0x181f32820, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_Division(uint32_t  lhs, ::Unity::Mathematics::uint2x4  rhs) ;

/// @brief Method op_Equality, addr 0x181f32b60, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_Equality(::Unity::Mathematics::uint2x4  lhs, ::Unity::Mathematics::uint2x4  rhs) ;

/// @brief Method op_Equality, addr 0x181f32a80, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_Equality(::Unity::Mathematics::uint2x4  lhs, uint32_t  rhs) ;

/// @brief Method op_Equality, addr 0x181f329a0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_Equality(uint32_t  lhs, ::Unity::Mathematics::uint2x4  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x181f32cf0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_ExclusiveOr(::Unity::Mathematics::uint2x4  lhs, ::Unity::Mathematics::uint2x4  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x181f32db0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_ExclusiveOr(::Unity::Mathematics::uint2x4  lhs, uint32_t  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x181f32c60, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_ExclusiveOr(uint32_t  lhs, ::Unity::Mathematics::uint2x4  rhs) ;

/// @brief Method op_Explicit, addr 0x181efa2e0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_Explicit___Unity__Mathematics__uint2x4(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method op_Explicit, addr 0x181f32e50, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_Explicit___Unity__Mathematics__uint2x4(::Unity::Mathematics::double2x4  v) ;

/// @brief Method op_Explicit, addr 0x181f32f00, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_Explicit___Unity__Mathematics__uint2x4(::Unity::Mathematics::float2x4  v) ;

/// @brief Method op_Explicit, addr 0x181efa360, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_Explicit___Unity__Mathematics__uint2x4(::Unity::Mathematics::int2x4  v) ;

/// @brief Method op_Explicit, addr 0x181f32f40, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_Explicit___Unity__Mathematics__uint2x4(bool  v) ;

/// @brief Method op_Explicit, addr 0x181f32ed0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_Explicit___Unity__Mathematics__uint2x4(double_t  v) ;

/// @brief Method op_Explicit, addr 0x181f32ea0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_Explicit___Unity__Mathematics__uint2x4(float_t  v) ;

/// @brief Method op_Explicit, addr 0x181efa310, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_Explicit___Unity__Mathematics__uint2x4(int32_t  v) ;

/// @brief Method op_GreaterThan, addr 0x181f33230, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_GreaterThan(::Unity::Mathematics::uint2x4  lhs, ::Unity::Mathematics::uint2x4  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181f33330, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_GreaterThan(::Unity::Mathematics::uint2x4  lhs, uint32_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181f33410, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_GreaterThan(uint32_t  lhs, ::Unity::Mathematics::uint2x4  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f33050, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_GreaterThanOrEqual(::Unity::Mathematics::uint2x4  lhs, ::Unity::Mathematics::uint2x4  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f32f70, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_GreaterThanOrEqual(::Unity::Mathematics::uint2x4  lhs, uint32_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f33150, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_GreaterThanOrEqual(uint32_t  lhs, ::Unity::Mathematics::uint2x4  rhs) ;

/// @brief Method op_Implicit, addr 0x181efa310, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_Implicit___Unity__Mathematics__uint2x4(uint32_t  v) ;

/// @brief Method op_Increment, addr 0x181f334f0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_Increment(::Unity::Mathematics::uint2x4  val) ;

/// @brief Method op_Inequality, addr 0x181f33740, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_Inequality(::Unity::Mathematics::uint2x4  lhs, ::Unity::Mathematics::uint2x4  rhs) ;

/// @brief Method op_Inequality, addr 0x181f33660, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_Inequality(::Unity::Mathematics::uint2x4  lhs, uint32_t  rhs) ;

/// @brief Method op_Inequality, addr 0x181f33580, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_Inequality(uint32_t  lhs, ::Unity::Mathematics::uint2x4  rhs) ;

/// @brief Method op_LeftShift, addr 0x181f33840, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_LeftShift(::Unity::Mathematics::uint2x4  x, int32_t  n) ;

/// @brief Method op_LessThan, addr 0x181f33d60, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_LessThan(::Unity::Mathematics::uint2x4  lhs, ::Unity::Mathematics::uint2x4  rhs) ;

/// @brief Method op_LessThan, addr 0x181f33ba0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_LessThan(::Unity::Mathematics::uint2x4  lhs, uint32_t  rhs) ;

/// @brief Method op_LessThan, addr 0x181f33c80, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_LessThan(uint32_t  lhs, ::Unity::Mathematics::uint2x4  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f339c0, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_LessThanOrEqual(::Unity::Mathematics::uint2x4  lhs, ::Unity::Mathematics::uint2x4  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f338e0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_LessThanOrEqual(::Unity::Mathematics::uint2x4  lhs, uint32_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f33ac0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_LessThanOrEqual(uint32_t  lhs, ::Unity::Mathematics::uint2x4  rhs) ;

/// @brief Method op_Modulus, addr 0x181f33fe0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_Modulus(::Unity::Mathematics::uint2x4  lhs, ::Unity::Mathematics::uint2x4  rhs) ;

/// @brief Method op_Modulus, addr 0x181f33e60, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_Modulus(::Unity::Mathematics::uint2x4  lhs, uint32_t  rhs) ;

/// @brief Method op_Modulus, addr 0x181f33f20, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_Modulus(uint32_t  lhs, ::Unity::Mathematics::uint2x4  rhs) ;

/// @brief Method op_Multiply, addr 0x181f34160, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_Multiply(::Unity::Mathematics::uint2x4  lhs, ::Unity::Mathematics::uint2x4  rhs) ;

/// @brief Method op_Multiply, addr 0x181f34220, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_Multiply(::Unity::Mathematics::uint2x4  lhs, uint32_t  rhs) ;

/// @brief Method op_Multiply, addr 0x181f340c0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_Multiply(uint32_t  lhs, ::Unity::Mathematics::uint2x4  rhs) ;

/// @brief Method op_OnesComplement, addr 0x181f342c0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_OnesComplement(::Unity::Mathematics::uint2x4  val) ;

/// @brief Method op_RightShift, addr 0x181f34350, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_RightShift(::Unity::Mathematics::uint2x4  x, int32_t  n) ;

/// @brief Method op_Subtraction, addr 0x181f34530, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_Subtraction(::Unity::Mathematics::uint2x4  lhs, ::Unity::Mathematics::uint2x4  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f343f0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_Subtraction(::Unity::Mathematics::uint2x4  lhs, uint32_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f34490, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_Subtraction(uint32_t  lhs, ::Unity::Mathematics::uint2x4  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x181f345f0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_UnaryNegation(::Unity::Mathematics::uint2x4  val) ;

/// @brief Method op_UnaryPlus, addr 0x181f34680, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 op_UnaryPlus(::Unity::Mathematics::uint2x4  val) ;

static inline void setStaticF_zero(::Unity::Mathematics::uint2x4  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr uint2x4() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::uint2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::uint2", modifiers: "", def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::uint2", modifiers: "", def_value: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::uint2", modifiers: "", def_value: None }]
constexpr uint2x4(::Unity::Mathematics::uint2  c0, ::Unity::Mathematics::uint2  c1, ::Unity::Mathematics::uint2  c2, ::Unity::Mathematics::uint2  c3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12835};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field c0, offset: 0x0, size: 0x8, def value: None
 ::Unity::Mathematics::uint2  c0;

/// @brief Field c1, offset: 0x8, size: 0x8, def value: None
 ::Unity::Mathematics::uint2  c1;

/// @brief Field c2, offset: 0x10, size: 0x8, def value: None
 ::Unity::Mathematics::uint2  c2;

/// @brief Field c3, offset: 0x18, size: 0x8, def value: None
 ::Unity::Mathematics::uint2  c3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::uint2x4, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint2x4, c1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint2x4, c2) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint2x4, c3) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::uint2x4) == 0x20, "Size mismatch!");

} // namespace end def Unity::Mathematics
