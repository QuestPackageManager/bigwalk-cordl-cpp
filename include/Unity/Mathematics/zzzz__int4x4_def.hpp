#pragma once
// IWYU pragma private; include "Unity/Mathematics/int4x4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__int4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(int4x4)
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
struct bool4x4;
}
namespace Unity::Mathematics {
struct double4x4;
}
namespace Unity::Mathematics {
struct float4x4;
}
namespace Unity::Mathematics {
struct int4;
}
namespace Unity::Mathematics {
struct uint4x4;
}
// Forward declare root types
namespace Unity::Mathematics {
struct int4x4;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::int4x4);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::int4x4, "Unity.Mathematics", "int4x4");
// Dependencies Unity.Mathematics.int4
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.int4x4
struct CORDL_TYPE int4x4 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::int4  Item[];

/// @brief Field identity, offset 0xffffffff, size 0x40 
 __declspec(property(get=getStaticF_identity, put=setStaticF_identity)) ::Unity::Mathematics::int4x4  identity;

/// @brief Field zero, offset 0xffffffff, size 0x40 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::int4x4  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::int4x4>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::int4x4>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x181faa910, size 0xc0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x181f43570, size 0xe0, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method GetHashCode, addr 0x181fa6520, size 0x40, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x181fa67f0, size 0x2c0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x181fa6560, size 0x290, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x181465ee0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int4  c0, ::Unity::Mathematics::int4  c1, ::Unity::Mathematics::int4  c2, ::Unity::Mathematics::int4  c3) ;

/// @brief Method .ctor, addr 0x181eda090, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(int32_t  m00, int32_t  m01, int32_t  m02, int32_t  m03, int32_t  m10, int32_t  m11, int32_t  m12, int32_t  m13, int32_t  m20, int32_t  m21, int32_t  m22, int32_t  m23, int32_t  m30, int32_t  m31, int32_t  m32, int32_t  m33) ;

/// @brief Method .ctor, addr 0x181eda140, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method .ctor, addr 0x181eda1b0, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double4x4  v) ;

/// @brief Method .ctor, addr 0x181eda2a0, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float4x4  v) ;

/// @brief Method .ctor, addr 0x181ed9f40, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint4x4  v) ;

/// @brief Method .ctor, addr 0x181ed9f00, size 0x40, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x181ed9e50, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x181eda050, size 0x40, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x181ed9ff0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x181ed9ff0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

static inline ::Unity::Mathematics::int4x4 getStaticF_identity() ;

static inline ::Unity::Mathematics::int4x4 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x1808fb140, size 0x10, virtual false, abstract: false, final false
inline ::by_ref<::Unity::Mathematics::int4> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int4x4>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::int4x4>* i___System__IEquatable_1___Unity__Mathematics__int4x4_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x181f484e0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Addition(::Unity::Mathematics::int4x4  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_Addition, addr 0x181f48480, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Addition(::Unity::Mathematics::int4x4  lhs, int32_t  rhs) ;

/// @brief Method op_Addition, addr 0x181f48420, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Addition(int32_t  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x181f48530, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_BitwiseAnd(::Unity::Mathematics::int4x4  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x181f485e0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_BitwiseAnd(::Unity::Mathematics::int4x4  lhs, int32_t  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x181f48580, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_BitwiseAnd(int32_t  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x181f48640, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_BitwiseOr(::Unity::Mathematics::int4x4  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x181f48690, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_BitwiseOr(::Unity::Mathematics::int4x4  lhs, int32_t  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x181f486f0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_BitwiseOr(int32_t  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_Decrement, addr 0x181f48750, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Decrement(::Unity::Mathematics::int4x4  val) ;

/// @brief Method op_Division, addr 0x181faad50, size 0x160, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Division(::Unity::Mathematics::int4x4  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_Division, addr 0x181faac30, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Division(::Unity::Mathematics::int4x4  lhs, int32_t  rhs) ;

/// @brief Method op_Division, addr 0x181faab10, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Division(int32_t  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_Equality, addr 0x181f48b70, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_Equality(::Unity::Mathematics::int4x4  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_Equality, addr 0x181f48cb0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_Equality(::Unity::Mathematics::int4x4  lhs, int32_t  rhs) ;

/// @brief Method op_Equality, addr 0x181f48c00, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_Equality(int32_t  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x181f48e20, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_ExclusiveOr(::Unity::Mathematics::int4x4  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x181f48d60, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_ExclusiveOr(::Unity::Mathematics::int4x4  lhs, int32_t  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x181f48dc0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_ExclusiveOr(int32_t  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_Explicit, addr 0x181efc270, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Explicit___Unity__Mathematics__int4x4(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method op_Explicit, addr 0x181efc3b0, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Explicit___Unity__Mathematics__int4x4(::Unity::Mathematics::double4x4  v) ;

/// @brief Method op_Explicit, addr 0x181faaeb0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Explicit___Unity__Mathematics__int4x4(::Unity::Mathematics::float4x4  v) ;

/// @brief Method op_Explicit, addr 0x181efc300, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Explicit___Unity__Mathematics__int4x4(::Unity::Mathematics::uint4x4  v) ;

/// @brief Method op_Explicit, addr 0x181efc070, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Explicit___Unity__Mathematics__int4x4(bool  v) ;

/// @brief Method op_Explicit, addr 0x181efc4b0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Explicit___Unity__Mathematics__int4x4(double_t  v) ;

/// @brief Method op_Explicit, addr 0x181efc220, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Explicit___Unity__Mathematics__int4x4(float_t  v) ;

/// @brief Method op_Explicit, addr 0x181efc1c0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Explicit___Unity__Mathematics__int4x4(uint32_t  v) ;

/// @brief Method op_GreaterThan, addr 0x181fab230, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_GreaterThan(::Unity::Mathematics::int4x4  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181fab2c0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_GreaterThan(::Unity::Mathematics::int4x4  lhs, int32_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181fab370, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_GreaterThan(int32_t  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181fab020, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_GreaterThanOrEqual(::Unity::Mathematics::int4x4  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181faaf10, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_GreaterThanOrEqual(::Unity::Mathematics::int4x4  lhs, int32_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181fab120, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_GreaterThanOrEqual(int32_t  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_Implicit, addr 0x181efc1c0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Implicit___Unity__Mathematics__int4x4(int32_t  v) ;

/// @brief Method op_Increment, addr 0x181f49480, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Increment(::Unity::Mathematics::int4x4  val) ;

/// @brief Method op_Inequality, addr 0x181f49660, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_Inequality(::Unity::Mathematics::int4x4  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_Inequality, addr 0x181f495a0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_Inequality(::Unity::Mathematics::int4x4  lhs, int32_t  rhs) ;

/// @brief Method op_Inequality, addr 0x181f494e0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_Inequality(int32_t  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_LeftShift, addr 0x181f49710, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_LeftShift(::Unity::Mathematics::int4x4  x, int32_t  n) ;

/// @brief Method op_LessThan, addr 0x181fab8a0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_LessThan(::Unity::Mathematics::int4x4  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_LessThan, addr 0x181fab7f0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_LessThan(::Unity::Mathematics::int4x4  lhs, int32_t  rhs) ;

/// @brief Method op_LessThan, addr 0x181fab740, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_LessThan(int32_t  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181fab530, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_LessThanOrEqual(::Unity::Mathematics::int4x4  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181fab420, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_LessThanOrEqual(::Unity::Mathematics::int4x4  lhs, int32_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181fab630, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 op_LessThanOrEqual(int32_t  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_Modulus, addr 0x181faba50, size 0x160, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Modulus(::Unity::Mathematics::int4x4  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_Modulus, addr 0x181fab930, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Modulus(::Unity::Mathematics::int4x4  lhs, int32_t  rhs) ;

/// @brief Method op_Modulus, addr 0x181fabbb0, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Modulus(int32_t  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_Multiply, addr 0x181f4a200, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Multiply(::Unity::Mathematics::int4x4  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_Multiply, addr 0x181f4a110, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Multiply(::Unity::Mathematics::int4x4  lhs, int32_t  rhs) ;

/// @brief Method op_Multiply, addr 0x181f4a2e0, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Multiply(int32_t  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_OnesComplement, addr 0x181f4a3d0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_OnesComplement(::Unity::Mathematics::int4x4  val) ;

/// @brief Method op_RightShift, addr 0x181fabcd0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_RightShift(::Unity::Mathematics::int4x4  x, int32_t  n) ;

/// @brief Method op_Subtraction, addr 0x181f4a4d0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Subtraction(::Unity::Mathematics::int4x4  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f4a470, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Subtraction(::Unity::Mathematics::int4x4  lhs, int32_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f4a520, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_Subtraction(int32_t  lhs, ::Unity::Mathematics::int4x4  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x181f4a580, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_UnaryNegation(::Unity::Mathematics::int4x4  val) ;

/// @brief Method op_UnaryPlus, addr 0x181f4a670, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 op_UnaryPlus(::Unity::Mathematics::int4x4  val) ;

static inline void setStaticF_identity(::Unity::Mathematics::int4x4  value) ;

static inline void setStaticF_zero(::Unity::Mathematics::int4x4  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr int4x4() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None }]
constexpr int4x4(::Unity::Mathematics::int4  c0, ::Unity::Mathematics::int4  c1, ::Unity::Mathematics::int4  c2, ::Unity::Mathematics::int4  c3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12826};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field c0, offset: 0x0, size: 0x10, def value: None
 ::Unity::Mathematics::int4  c0;

/// @brief Field c1, offset: 0x10, size: 0x10, def value: None
 ::Unity::Mathematics::int4  c1;

/// @brief Field c2, offset: 0x20, size: 0x10, def value: None
 ::Unity::Mathematics::int4  c2;

/// @brief Field c3, offset: 0x30, size: 0x10, def value: None
 ::Unity::Mathematics::int4  c3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::int4x4, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int4x4, c1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int4x4, c2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int4x4, c3) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::int4x4) == 0x40, "Size mismatch!");

} // namespace end def Unity::Mathematics
