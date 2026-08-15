#pragma once
// IWYU pragma private; include "Unity/Mathematics/int4x3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__int4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(int4x3)
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
struct bool4x3;
}
namespace Unity::Mathematics {
struct double4x3;
}
namespace Unity::Mathematics {
struct float4x3;
}
namespace Unity::Mathematics {
struct int4;
}
namespace Unity::Mathematics {
struct uint4x3;
}
// Forward declare root types
namespace Unity::Mathematics {
struct int4x3;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::int4x3);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::int4x3, "Unity.Mathematics", "int4x3");
// Dependencies Unity.Mathematics.int4
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.int4x3
struct CORDL_TYPE int4x3 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::int4  Item[];

/// @brief Field zero, offset 0xffffffff, size 0x30 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::int4x3  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::int4x3>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::int4x3>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x181fa9a00, size 0x1f0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x181f430a0, size 0xa0, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::int4x3  rhs) ;

/// @brief Method GetHashCode, addr 0x181fa60f0, size 0x30, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x181fa6310, size 0x210, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x181fa6120, size 0x1f0, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x180fd1df0, size 0x9550, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int4  c0, ::Unity::Mathematics::int4  c1, ::Unity::Mathematics::int4  c2) ;

/// @brief Method .ctor, addr 0x181ed9be0, size 0x80, virtual false, abstract: false, final false
inline void _ctor(int32_t  m00, int32_t  m01, int32_t  m02, int32_t  m10, int32_t  m11, int32_t  m12, int32_t  m20, int32_t  m21, int32_t  m22, int32_t  m30, int32_t  m31, int32_t  m32) ;

/// @brief Method .ctor, addr 0x181ed9a40, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool4x3  v) ;

/// @brief Method .ctor, addr 0x181ed9da0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double4x3  v) ;

/// @brief Method .ctor, addr 0x181ed9ce0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float4x3  v) ;

/// @brief Method .ctor, addr 0x181ed9ae0, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint4x3  v) ;

/// @brief Method .ctor, addr 0x181ed9aa0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x181ed9b60, size 0x80, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x181ed9cb0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x181ed9c60, size 0x50, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x181ed9c60, size 0x50, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

static inline ::Unity::Mathematics::int4x3 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x1808fb140, size 0x10, virtual false, abstract: false, final false
inline ::by_ref<::Unity::Mathematics::int4> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int4x3>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::int4x3>* i___System__IEquatable_1___Unity__Mathematics__int4x3_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x181f46590, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_Addition(::Unity::Mathematics::int4x3  lhs, ::Unity::Mathematics::int4x3  rhs) ;

/// @brief Method op_Addition, addr 0x181f464f0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_Addition(::Unity::Mathematics::int4x3  lhs, int32_t  rhs) ;

/// @brief Method op_Addition, addr 0x181f46540, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_Addition(int32_t  lhs, ::Unity::Mathematics::int4x3  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x181f46620, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_BitwiseAnd(::Unity::Mathematics::int4x3  lhs, ::Unity::Mathematics::int4x3  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x181f465d0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_BitwiseAnd(::Unity::Mathematics::int4x3  lhs, int32_t  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x181f46660, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_BitwiseAnd(int32_t  lhs, ::Unity::Mathematics::int4x3  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x181f46700, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_BitwiseOr(::Unity::Mathematics::int4x3  lhs, ::Unity::Mathematics::int4x3  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x181f466b0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_BitwiseOr(::Unity::Mathematics::int4x3  lhs, int32_t  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x181f46740, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_BitwiseOr(int32_t  lhs, ::Unity::Mathematics::int4x3  rhs) ;

/// @brief Method op_Decrement, addr 0x181f46790, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_Decrement(::Unity::Mathematics::int4x3  val) ;

/// @brief Method op_Division, addr 0x181fa9db0, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_Division(::Unity::Mathematics::int4x3  lhs, ::Unity::Mathematics::int4x3  rhs) ;

/// @brief Method op_Division, addr 0x181fa9bf0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_Division(::Unity::Mathematics::int4x3  lhs, int32_t  rhs) ;

/// @brief Method op_Division, addr 0x181fa9cd0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_Division(int32_t  lhs, ::Unity::Mathematics::int4x3  rhs) ;

/// @brief Method op_Equality, addr 0x181f46b50, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_Equality(::Unity::Mathematics::int4x3  lhs, ::Unity::Mathematics::int4x3  rhs) ;

/// @brief Method op_Equality, addr 0x181f46bc0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_Equality(::Unity::Mathematics::int4x3  lhs, int32_t  rhs) ;

/// @brief Method op_Equality, addr 0x181f46ad0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_Equality(int32_t  lhs, ::Unity::Mathematics::int4x3  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x181f46c90, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_ExclusiveOr(::Unity::Mathematics::int4x3  lhs, ::Unity::Mathematics::int4x3  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x181f46c40, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_ExclusiveOr(::Unity::Mathematics::int4x3  lhs, int32_t  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x181f46cd0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_ExclusiveOr(int32_t  lhs, ::Unity::Mathematics::int4x3  rhs) ;

/// @brief Method op_Explicit, addr 0x181efbde0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_Explicit___Unity__Mathematics__int4x3(::Unity::Mathematics::bool4x3  v) ;

/// @brief Method op_Explicit, addr 0x181efbd00, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_Explicit___Unity__Mathematics__int4x3(::Unity::Mathematics::double4x3  v) ;

/// @brief Method op_Explicit, addr 0x181efbfa0, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_Explicit___Unity__Mathematics__int4x3(::Unity::Mathematics::float4x3  v) ;

/// @brief Method op_Explicit, addr 0x181efbee0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_Explicit___Unity__Mathematics__int4x3(::Unity::Mathematics::uint4x3  v) ;

/// @brief Method op_Explicit, addr 0x181efbf60, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_Explicit___Unity__Mathematics__int4x3(bool  v) ;

/// @brief Method op_Explicit, addr 0x181efbc30, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_Explicit___Unity__Mathematics__int4x3(double_t  v) ;

/// @brief Method op_Explicit, addr 0x181efbdb0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_Explicit___Unity__Mathematics__int4x3(float_t  v) ;

/// @brief Method op_Explicit, addr 0x181efbcb0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_Explicit___Unity__Mathematics__int4x3(uint32_t  v) ;

/// @brief Method op_GreaterThan, addr 0x181faa1f0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_GreaterThan(::Unity::Mathematics::int4x3  lhs, ::Unity::Mathematics::int4x3  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181faa170, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_GreaterThan(::Unity::Mathematics::int4x3  lhs, int32_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181faa0f0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_GreaterThan(int32_t  lhs, ::Unity::Mathematics::int4x3  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181fa9ec0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_GreaterThanOrEqual(::Unity::Mathematics::int4x3  lhs, ::Unity::Mathematics::int4x3  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181faa030, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_GreaterThanOrEqual(::Unity::Mathematics::int4x3  lhs, int32_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181fa9f70, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_GreaterThanOrEqual(int32_t  lhs, ::Unity::Mathematics::int4x3  rhs) ;

/// @brief Method op_Implicit, addr 0x181efbcb0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_Implicit___Unity__Mathematics__int4x3(int32_t  v) ;

/// @brief Method op_Increment, addr 0x181f47210, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_Increment(::Unity::Mathematics::int4x3  val) ;

/// @brief Method op_Inequality, addr 0x181f472e0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_Inequality(::Unity::Mathematics::int4x3  lhs, ::Unity::Mathematics::int4x3  rhs) ;

/// @brief Method op_Inequality, addr 0x181f47250, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_Inequality(::Unity::Mathematics::int4x3  lhs, int32_t  rhs) ;

/// @brief Method op_Inequality, addr 0x181f47360, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_Inequality(int32_t  lhs, ::Unity::Mathematics::int4x3  rhs) ;

/// @brief Method op_LeftShift, addr 0x181f473f0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_LeftShift(::Unity::Mathematics::int4x3  x, int32_t  n) ;

/// @brief Method op_LessThan, addr 0x181faa510, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_LessThan(::Unity::Mathematics::int4x3  lhs, ::Unity::Mathematics::int4x3  rhs) ;

/// @brief Method op_LessThan, addr 0x181faa490, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_LessThan(::Unity::Mathematics::int4x3  lhs, int32_t  rhs) ;

/// @brief Method op_LessThan, addr 0x181faa580, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_LessThan(int32_t  lhs, ::Unity::Mathematics::int4x3  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181faa260, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_LessThanOrEqual(::Unity::Mathematics::int4x3  lhs, ::Unity::Mathematics::int4x3  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181faa3d0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_LessThanOrEqual(::Unity::Mathematics::int4x3  lhs, int32_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181faa310, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_LessThanOrEqual(int32_t  lhs, ::Unity::Mathematics::int4x3  rhs) ;

/// @brief Method op_Modulus, addr 0x181faa6e0, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_Modulus(::Unity::Mathematics::int4x3  lhs, ::Unity::Mathematics::int4x3  rhs) ;

/// @brief Method op_Modulus, addr 0x181faa7f0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_Modulus(::Unity::Mathematics::int4x3  lhs, int32_t  rhs) ;

/// @brief Method op_Modulus, addr 0x181faa600, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_Modulus(int32_t  lhs, ::Unity::Mathematics::int4x3  rhs) ;

/// @brief Method op_Multiply, addr 0x181f47cf0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_Multiply(::Unity::Mathematics::int4x3  lhs, ::Unity::Mathematics::int4x3  rhs) ;

/// @brief Method op_Multiply, addr 0x181f47b90, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_Multiply(::Unity::Mathematics::int4x3  lhs, int32_t  rhs) ;

/// @brief Method op_Multiply, addr 0x181f47c40, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_Multiply(int32_t  lhs, ::Unity::Mathematics::int4x3  rhs) ;

/// @brief Method op_OnesComplement, addr 0x181f47d90, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_OnesComplement(::Unity::Mathematics::int4x3  val) ;

/// @brief Method op_RightShift, addr 0x181faa8d0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_RightShift(::Unity::Mathematics::int4x3  x, int32_t  n) ;

/// @brief Method op_Subtraction, addr 0x181f47e60, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_Subtraction(::Unity::Mathematics::int4x3  lhs, ::Unity::Mathematics::int4x3  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f47ea0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_Subtraction(::Unity::Mathematics::int4x3  lhs, int32_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f47e10, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_Subtraction(int32_t  lhs, ::Unity::Mathematics::int4x3  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x181f47ef0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_UnaryNegation(::Unity::Mathematics::int4x3  val) ;

/// @brief Method op_UnaryPlus, addr 0x181f47fa0, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 op_UnaryPlus(::Unity::Mathematics::int4x3  val) ;

static inline void setStaticF_zero(::Unity::Mathematics::int4x3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr int4x3() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None }]
constexpr int4x3(::Unity::Mathematics::int4  c0, ::Unity::Mathematics::int4  c1, ::Unity::Mathematics::int4  c2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12825};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field c0, offset: 0x0, size: 0x10, def value: None
 ::Unity::Mathematics::int4  c0;

/// @brief Field c1, offset: 0x10, size: 0x10, def value: None
 ::Unity::Mathematics::int4  c1;

/// @brief Field c2, offset: 0x20, size: 0x10, def value: None
 ::Unity::Mathematics::int4  c2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::int4x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int4x3, c1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int4x3, c2) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::int4x3) == 0x30, "Size mismatch!");

} // namespace end def Unity::Mathematics
