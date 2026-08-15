#pragma once
// IWYU pragma private; include "Unity/Mathematics/float3x3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(float3x3)
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
struct bool3x3;
}
namespace Unity::Mathematics {
struct double3x3;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float4x4;
}
namespace Unity::Mathematics {
struct int3x3;
}
namespace Unity::Mathematics {
struct math_RotationOrder;
}
namespace Unity::Mathematics {
struct quaternion;
}
namespace Unity::Mathematics {
struct uint3x3;
}
// Forward declare root types
namespace Unity::Mathematics {
struct float3x3;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::float3x3);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::float3x3, "Unity.Mathematics", "float3x3");
// Dependencies Unity.Mathematics.float3
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.float3x3
struct CORDL_TYPE float3x3 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::float3  Item[];

/// @brief Field identity, offset 0xffffffff, size 0x24 
 __declspec(property(get=getStaticF_identity, put=setStaticF_identity)) ::Unity::Mathematics::float3x3  identity;

/// @brief Field zero, offset 0xffffffff, size 0x24 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::float3x3  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float3x3>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::float3x3>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method AxisAngle, addr 0x181f811e0, size 0x270, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 AxisAngle(::Unity::Mathematics::float3  axis, float_t  angle) ;

/// @brief Method Equals, addr 0x181f81450, size 0xc0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x181f1df20, size 0xb0, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method Euler, addr 0x181f81630, size 0x210, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 Euler(float_t  x, float_t  y, float_t  z, ::Unity::Mathematics::math_RotationOrder  order) ;

/// @brief Method Euler, addr 0x181f81840, size 0x160, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 Euler(::Unity::Mathematics::float3  xyz, ::Unity::Mathematics::math_RotationOrder  order) ;

/// @brief Method EulerXYZ, addr 0x181f81510, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerXYZ(float_t  x, float_t  y, float_t  z) ;

/// @brief Method EulerXYZ, addr 0x181f79210, size 0x1a0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerXYZ(::Unity::Mathematics::float3  xyz) ;

/// @brief Method EulerXZY, addr 0x181f81540, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerXZY(float_t  x, float_t  y, float_t  z) ;

/// @brief Method EulerXZY, addr 0x181f793b0, size 0x1a0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerXZY(::Unity::Mathematics::float3  xyz) ;

/// @brief Method EulerYXZ, addr 0x181f81570, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerYXZ(float_t  x, float_t  y, float_t  z) ;

/// @brief Method EulerYXZ, addr 0x181f79550, size 0x1a0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerYXZ(::Unity::Mathematics::float3  xyz) ;

/// @brief Method EulerYZX, addr 0x181f815a0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerYZX(float_t  x, float_t  y, float_t  z) ;

/// @brief Method EulerYZX, addr 0x181f796f0, size 0x1a0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerYZX(::Unity::Mathematics::float3  xyz) ;

/// @brief Method EulerZXY, addr 0x181f815d0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerZXY(float_t  x, float_t  y, float_t  z) ;

/// @brief Method EulerZXY, addr 0x181f79890, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerZXY(::Unity::Mathematics::float3  xyz) ;

/// @brief Method EulerZYX, addr 0x181f81600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerZYX(float_t  x, float_t  y, float_t  z) ;

/// @brief Method EulerZYX, addr 0x181f79a20, size 0x1a0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 EulerZYX(::Unity::Mathematics::float3  xyz) ;

/// @brief Method GetHashCode, addr 0x181f79bc0, size 0xb0, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method LookRotation, addr 0x181f819a0, size 0x1b0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 LookRotation(::Unity::Mathematics::float3  forward, ::Unity::Mathematics::float3  up) ;

/// @brief Method LookRotationSafe, addr 0x1814e16b0, size 0x460, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 LookRotationSafe(::Unity::Mathematics::float3  forward, ::Unity::Mathematics::float3  up) ;

/// @brief Method RotateX, addr 0x181f81b50, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 RotateX(float_t  angle) ;

/// @brief Method RotateY, addr 0x181f81be0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 RotateY(float_t  angle) ;

/// @brief Method RotateZ, addr 0x181f81c80, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 RotateZ(float_t  angle) ;

/// @brief Method Scale, addr 0x181f81da0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 Scale(float_t  s) ;

/// @brief Method Scale, addr 0x181f81d50, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 Scale(::Unity::Mathematics::float3  v) ;

/// @brief Method Scale, addr 0x181f81d10, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 Scale(float_t  x, float_t  y, float_t  z) ;

/// @brief Method ToString, addr 0x181f79c70, size 0x1d0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x181f79e40, size 0x190, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x1814056e0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3  c0, ::Unity::Mathematics::float3  c1, ::Unity::Mathematics::float3  c2) ;

/// @brief Method .ctor, addr 0x181f81f30, size 0x120, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float4x4  f4x4) ;

/// @brief Method .ctor, addr 0x1814f6230, size 0x60, virtual false, abstract: false, final false
inline void _ctor(float_t  m00, float_t  m01, float_t  m02, float_t  m10, float_t  m11, float_t  m12, float_t  m20, float_t  m21, float_t  m22) ;

/// @brief Method .ctor, addr 0x181f82050, size 0x2d0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::quaternion  q) ;

/// @brief Method .ctor, addr 0x181ed4ec0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method .ctor, addr 0x181ed4be0, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double3x3  v) ;

/// @brief Method .ctor, addr 0x181ed4ac0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int3x3  v) ;

/// @brief Method .ctor, addr 0x181ed4dd0, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method .ctor, addr 0x181ed4d20, size 0x80, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x181ed4f80, size 0x70, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x181ed4da0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x181ed4b70, size 0x70, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x181ed4c70, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

static inline ::Unity::Mathematics::float3x3 getStaticF_identity() ;

static inline ::Unity::Mathematics::float3x3 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x1808fb1d0, size 0x40, virtual false, abstract: false, final false
inline ::by_ref<::Unity::Mathematics::float3> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float3x3>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::float3x3>* i___System__IEquatable_1___Unity__Mathematics__float3x3_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x181f823f0, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Addition(::Unity::Mathematics::float3x3  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Addition, addr 0x181f82320, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Addition(::Unity::Mathematics::float3x3  lhs, float_t  rhs) ;

/// @brief Method op_Addition, addr 0x181f824e0, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Addition(float_t  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Decrement, addr 0x181f825b0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Decrement(::Unity::Mathematics::float3x3  val) ;

/// @brief Method op_Division, addr 0x181f82660, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Division(::Unity::Mathematics::float3x3  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Division, addr 0x181f82840, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Division(::Unity::Mathematics::float3x3  lhs, float_t  rhs) ;

/// @brief Method op_Division, addr 0x181f82750, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Division(float_t  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Equality, addr 0x181f82b30, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Equality(::Unity::Mathematics::float3x3  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Equality, addr 0x181f82a10, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Equality(::Unity::Mathematics::float3x3  lhs, float_t  rhs) ;

/// @brief Method op_Equality, addr 0x181f82910, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Equality(float_t  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Explicit, addr 0x181f82c70, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Explicit___Unity__Mathematics__float3x3(::Unity::Mathematics::float4x4  f4x4) ;

/// @brief Method op_Explicit, addr 0x181f82ce0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Explicit___Unity__Mathematics__float3x3(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method op_Explicit, addr 0x181eed860, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Explicit___Unity__Mathematics__float3x3(::Unity::Mathematics::double3x3  v) ;

/// @brief Method op_Explicit, addr 0x181f82d20, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Explicit___Unity__Mathematics__float3x3(bool  v) ;

/// @brief Method op_Explicit, addr 0x181eedd50, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Explicit___Unity__Mathematics__float3x3(double_t  v) ;

/// @brief Method op_GreaterThan, addr 0x181f83040, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(::Unity::Mathematics::float3x3  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181f82f90, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(::Unity::Mathematics::float3x3  lhs, float_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181f83120, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(float_t  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f82e00, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(::Unity::Mathematics::float3x3  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f82d50, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(::Unity::Mathematics::float3x3  lhs, float_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f82ee0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(float_t  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Implicit, addr 0x181eed900, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Implicit___Unity__Mathematics__float3x3(::Unity::Mathematics::int3x3  v) ;

/// @brief Method op_Implicit, addr 0x181eedb40, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Implicit___Unity__Mathematics__float3x3(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method op_Implicit, addr 0x181eed820, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Implicit___Unity__Mathematics__float3x3(float_t  v) ;

/// @brief Method op_Implicit, addr 0x181eeda90, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Implicit___Unity__Mathematics__float3x3(int32_t  v) ;

/// @brief Method op_Implicit, addr 0x181eedc60, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Implicit___Unity__Mathematics__float3x3(uint32_t  v) ;

/// @brief Method op_Increment, addr 0x181f831d0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Increment(::Unity::Mathematics::float3x3  val) ;

/// @brief Method op_Inequality, addr 0x181f834a0, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Inequality(::Unity::Mathematics::float3x3  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Inequality, addr 0x181f83380, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Inequality(::Unity::Mathematics::float3x3  lhs, float_t  rhs) ;

/// @brief Method op_Inequality, addr 0x181f83280, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Inequality(float_t  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_LessThan, addr 0x181f839a0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThan(::Unity::Mathematics::float3x3  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_LessThan, addr 0x181f83830, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThan(::Unity::Mathematics::float3x3  lhs, float_t  rhs) ;

/// @brief Method op_LessThan, addr 0x181f838e0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThan(float_t  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f836a0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(::Unity::Mathematics::float3x3  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f83780, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(::Unity::Mathematics::float3x3  lhs, float_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f835e0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(float_t  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Modulus, addr 0x181f83be0, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Modulus(::Unity::Mathematics::float3x3  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Modulus, addr 0x181f83d50, size 0x160, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Modulus(::Unity::Mathematics::float3x3  lhs, float_t  rhs) ;

/// @brief Method op_Modulus, addr 0x181f83a80, size 0x160, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Modulus(float_t  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Multiply, addr 0x181f83eb0, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Multiply(::Unity::Mathematics::float3x3  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Multiply, addr 0x181f84070, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Multiply(::Unity::Mathematics::float3x3  lhs, float_t  rhs) ;

/// @brief Method op_Multiply, addr 0x181f83fa0, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Multiply(float_t  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f84140, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Subtraction(::Unity::Mathematics::float3x3  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f84230, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Subtraction(::Unity::Mathematics::float3x3  lhs, float_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f84300, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_Subtraction(float_t  lhs, ::Unity::Mathematics::float3x3  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x181f843f0, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_UnaryNegation(::Unity::Mathematics::float3x3  val) ;

/// @brief Method op_UnaryPlus, addr 0x181f844c0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 op_UnaryPlus(::Unity::Mathematics::float3x3  val) ;

static inline void setStaticF_identity(::Unity::Mathematics::float3x3  value) ;

static inline void setStaticF_zero(::Unity::Mathematics::float3x3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr float3x3() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }]
constexpr float3x3(::Unity::Mathematics::float3  c0, ::Unity::Mathematics::float3  c1, ::Unity::Mathematics::float3  c2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12798};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field c0, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  c0;

/// @brief Field c1, offset: 0xc, size: 0xc, def value: None
 ::Unity::Mathematics::float3  c1;

/// @brief Field c2, offset: 0x18, size: 0xc, def value: None
 ::Unity::Mathematics::float3  c2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::float3x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float3x3, c1) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float3x3, c2) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::float3x3) == 0x24, "Size mismatch!");

} // namespace end def Unity::Mathematics
