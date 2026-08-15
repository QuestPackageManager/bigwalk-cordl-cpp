#pragma once
// IWYU pragma private; include "Unity/Mathematics/float3x4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(float3x4)
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
struct bool3x4;
}
namespace Unity::Mathematics {
struct double3x4;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct int3x4;
}
namespace Unity::Mathematics {
struct uint3x4;
}
// Forward declare root types
namespace Unity::Mathematics {
struct float3x4;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::float3x4);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::float3x4, "Unity.Mathematics", "float3x4");
// Dependencies Unity.Mathematics.float3
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.float3x4
struct CORDL_TYPE float3x4 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::float3  Item[];

/// @brief Field zero, offset 0xffffffff, size 0x30 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::float3x4  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float3x4>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::float3x4>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x181f84550, size 0x2b0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x181f79fd0, size 0x100, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::float3x4  rhs) ;

/// @brief Method GetHashCode, addr 0x1814f6290, size 0xf0, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x181f7a2c0, size 0x240, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x181f7a0d0, size 0x1f0, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x181ed5030, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3  c0, ::Unity::Mathematics::float3  c1, ::Unity::Mathematics::float3  c2, ::Unity::Mathematics::float3  c3) ;

/// @brief Method .ctor, addr 0x181ed56f0, size 0x80, virtual false, abstract: false, final false
inline void _ctor(float_t  m00, float_t  m01, float_t  m02, float_t  m03, float_t  m10, float_t  m11, float_t  m12, float_t  m13, float_t  m20, float_t  m21, float_t  m22, float_t  m23) ;

/// @brief Method .ctor, addr 0x181ed5560, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method .ctor, addr 0x181ed5330, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double3x4  v) ;

/// @brief Method .ctor, addr 0x181ed5080, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int3x4  v) ;

/// @brief Method .ctor, addr 0x181ed5200, size 0x130, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint3x4  v) ;

/// @brief Method .ctor, addr 0x181ed5160, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x181ed53f0, size 0x90, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x181ed4ff0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x181ed5660, size 0x90, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x181ed5480, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

static inline ::Unity::Mathematics::float3x4 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x1808fb1d0, size 0x40, virtual false, abstract: false, final false
inline ::by_ref<::Unity::Mathematics::float3> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float3x4>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::float3x4>* i___System__IEquatable_1___Unity__Mathematics__float3x4_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x181f84800, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 op_Addition(::Unity::Mathematics::float3x4  lhs, ::Unity::Mathematics::float3x4  rhs) ;

/// @brief Method op_Addition, addr 0x181f84950, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 op_Addition(::Unity::Mathematics::float3x4  lhs, float_t  rhs) ;

/// @brief Method op_Addition, addr 0x181f84a70, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 op_Addition(float_t  lhs, ::Unity::Mathematics::float3x4  rhs) ;

/// @brief Method op_Decrement, addr 0x181f84b90, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 op_Decrement(::Unity::Mathematics::float3x4  val) ;

/// @brief Method op_Division, addr 0x181f84dd0, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 op_Division(::Unity::Mathematics::float3x4  lhs, ::Unity::Mathematics::float3x4  rhs) ;

/// @brief Method op_Division, addr 0x181f84f20, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 op_Division(::Unity::Mathematics::float3x4  lhs, float_t  rhs) ;

/// @brief Method op_Division, addr 0x181f84c90, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 op_Division(float_t  lhs, ::Unity::Mathematics::float3x4  rhs) ;

/// @brief Method op_Equality, addr 0x181f85040, size 0x1b0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Equality(::Unity::Mathematics::float3x4  lhs, ::Unity::Mathematics::float3x4  rhs) ;

/// @brief Method op_Equality, addr 0x181f85340, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Equality(::Unity::Mathematics::float3x4  lhs, float_t  rhs) ;

/// @brief Method op_Equality, addr 0x181f851f0, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Equality(float_t  lhs, ::Unity::Mathematics::float3x4  rhs) ;

/// @brief Method op_Explicit, addr 0x181f854b0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 op_Explicit___Unity__Mathematics__float3x4(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method op_Explicit, addr 0x181eee2f0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 op_Explicit___Unity__Mathematics__float3x4(::Unity::Mathematics::double3x4  v) ;

/// @brief Method op_Explicit, addr 0x181f854f0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 op_Explicit___Unity__Mathematics__float3x4(bool  v) ;

/// @brief Method op_Explicit, addr 0x181eede90, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 op_Explicit___Unity__Mathematics__float3x4(double_t  v) ;

/// @brief Method op_GreaterThan, addr 0x181f85810, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(::Unity::Mathematics::float3x4  lhs, ::Unity::Mathematics::float3x4  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181f85930, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(::Unity::Mathematics::float3x4  lhs, float_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181f85a20, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(float_t  lhs, ::Unity::Mathematics::float3x4  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f856f0, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(::Unity::Mathematics::float3x4  lhs, ::Unity::Mathematics::float3x4  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f85520, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(::Unity::Mathematics::float3x4  lhs, float_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f85610, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(float_t  lhs, ::Unity::Mathematics::float3x4  rhs) ;

/// @brief Method op_Implicit, addr 0x181eee1b0, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 op_Implicit___Unity__Mathematics__float3x4(::Unity::Mathematics::int3x4  v) ;

/// @brief Method op_Implicit, addr 0x181f85b00, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 op_Implicit___Unity__Mathematics__float3x4(::Unity::Mathematics::uint3x4  v) ;

/// @brief Method op_Implicit, addr 0x181eee2a0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 op_Implicit___Unity__Mathematics__float3x4(float_t  v) ;

/// @brief Method op_Implicit, addr 0x181eee120, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 op_Implicit___Unity__Mathematics__float3x4(int32_t  v) ;

/// @brief Method op_Implicit, addr 0x181f85b50, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 op_Implicit___Unity__Mathematics__float3x4(uint32_t  v) ;

/// @brief Method op_Increment, addr 0x181f85b80, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 op_Increment(::Unity::Mathematics::float3x4  val) ;

/// @brief Method op_Inequality, addr 0x181f85f40, size 0x1b0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Inequality(::Unity::Mathematics::float3x4  lhs, ::Unity::Mathematics::float3x4  rhs) ;

/// @brief Method op_Inequality, addr 0x181f85c80, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Inequality(::Unity::Mathematics::float3x4  lhs, float_t  rhs) ;

/// @brief Method op_Inequality, addr 0x181f85df0, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Inequality(float_t  lhs, ::Unity::Mathematics::float3x4  rhs) ;

/// @brief Method op_LessThan, addr 0x181f865b0, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_LessThan(::Unity::Mathematics::float3x4  lhs, ::Unity::Mathematics::float3x4  rhs) ;

/// @brief Method op_LessThan, addr 0x181f863e0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_LessThan(::Unity::Mathematics::float3x4  lhs, float_t  rhs) ;

/// @brief Method op_LessThan, addr 0x181f864c0, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_LessThan(float_t  lhs, ::Unity::Mathematics::float3x4  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f861d0, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(::Unity::Mathematics::float3x4  lhs, ::Unity::Mathematics::float3x4  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f860f0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(::Unity::Mathematics::float3x4  lhs, float_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f862f0, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(float_t  lhs, ::Unity::Mathematics::float3x4  rhs) ;

/// @brief Method op_Modulus, addr 0x181f866d0, size 0x1e0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 op_Modulus(::Unity::Mathematics::float3x4  lhs, ::Unity::Mathematics::float3x4  rhs) ;

/// @brief Method op_Modulus, addr 0x181f868b0, size 0x1c0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 op_Modulus(::Unity::Mathematics::float3x4  lhs, float_t  rhs) ;

/// @brief Method op_Modulus, addr 0x181f86a70, size 0x1c0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 op_Modulus(float_t  lhs, ::Unity::Mathematics::float3x4  rhs) ;

/// @brief Method op_Multiply, addr 0x181f86d50, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 op_Multiply(::Unity::Mathematics::float3x4  lhs, ::Unity::Mathematics::float3x4  rhs) ;

/// @brief Method op_Multiply, addr 0x181f86c30, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 op_Multiply(::Unity::Mathematics::float3x4  lhs, float_t  rhs) ;

/// @brief Method op_Multiply, addr 0x181f86ea0, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 op_Multiply(float_t  lhs, ::Unity::Mathematics::float3x4  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f87220, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 op_Subtraction(::Unity::Mathematics::float3x4  lhs, ::Unity::Mathematics::float3x4  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f87100, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 op_Subtraction(::Unity::Mathematics::float3x4  lhs, float_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f86fc0, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 op_Subtraction(float_t  lhs, ::Unity::Mathematics::float3x4  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x181f87370, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 op_UnaryNegation(::Unity::Mathematics::float3x4  val) ;

/// @brief Method op_UnaryPlus, addr 0x181f87490, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 op_UnaryPlus(::Unity::Mathematics::float3x4  val) ;

static inline void setStaticF_zero(::Unity::Mathematics::float3x4  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr float3x4() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }]
constexpr float3x4(::Unity::Mathematics::float3  c0, ::Unity::Mathematics::float3  c1, ::Unity::Mathematics::float3  c2, ::Unity::Mathematics::float3  c3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12799};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field c0, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  c0;

/// @brief Field c1, offset: 0xc, size: 0xc, def value: None
 ::Unity::Mathematics::float3  c1;

/// @brief Field c2, offset: 0x18, size: 0xc, def value: None
 ::Unity::Mathematics::float3  c2;

/// @brief Field c3, offset: 0x24, size: 0xc, def value: None
 ::Unity::Mathematics::float3  c3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::float3x4, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float3x4, c1) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float3x4, c2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float3x4, c3) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::float3x4) == 0x30, "Size mismatch!");

} // namespace end def Unity::Mathematics
