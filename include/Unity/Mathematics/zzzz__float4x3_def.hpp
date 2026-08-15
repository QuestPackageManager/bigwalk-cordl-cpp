#pragma once
// IWYU pragma private; include "Unity/Mathematics/float4x3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(float4x3)
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
struct float4;
}
namespace Unity::Mathematics {
struct int4x3;
}
namespace Unity::Mathematics {
struct uint4x3;
}
// Forward declare root types
namespace Unity::Mathematics {
struct float4x3;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::float4x3);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::float4x3, "Unity.Mathematics", "float4x3");
// Dependencies Unity.Mathematics.float4
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.float4x3
struct CORDL_TYPE float4x3 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::float4  Item[];

/// @brief Field zero, offset 0xffffffff, size 0x30 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::float4x3  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float4x3>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::float4x3>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x181f8e2d0, size 0x2b0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x181f88a20, size 0x100, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::float4x3  rhs) ;

/// @brief Method GetHashCode, addr 0x181f88b20, size 0x30, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x181f88d40, size 0x240, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x181f88b50, size 0x1f0, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x180fd1df0, size 0x9550, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float4  c0, ::Unity::Mathematics::float4  c1, ::Unity::Mathematics::float4  c2) ;

/// @brief Method .ctor, addr 0x181ed63e0, size 0x80, virtual false, abstract: false, final false
inline void _ctor(float_t  m00, float_t  m01, float_t  m02, float_t  m10, float_t  m11, float_t  m12, float_t  m20, float_t  m21, float_t  m22, float_t  m30, float_t  m31, float_t  m32) ;

/// @brief Method .ctor, addr 0x181ed5fa0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool4x3  v) ;

/// @brief Method .ctor, addr 0x181ed61e0, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double4x3  v) ;

/// @brief Method .ctor, addr 0x181ed6040, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int4x3  v) ;

/// @brief Method .ctor, addr 0x181ed60a0, size 0x140, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint4x3  v) ;

/// @brief Method .ctor, addr 0x181ed6000, size 0x40, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x181ed5eb0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x181ed5f70, size 0x30, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x181ed6070, size 0x30, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x181ed62d0, size 0x110, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

static inline ::Unity::Mathematics::float4x3 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x1808fb140, size 0x10, virtual false, abstract: false, final false
inline ::by_ref<::Unity::Mathematics::float4> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float4x3>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::float4x3>* i___System__IEquatable_1___Unity__Mathematics__float4x3_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x181f8e5c0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 op_Addition(::Unity::Mathematics::float4x3  lhs, ::Unity::Mathematics::float4x3  rhs) ;

/// @brief Method op_Addition, addr 0x181f8e600, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 op_Addition(::Unity::Mathematics::float4x3  lhs, float_t  rhs) ;

/// @brief Method op_Addition, addr 0x181f8e580, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 op_Addition(float_t  lhs, ::Unity::Mathematics::float4x3  rhs) ;

/// @brief Method op_Decrement, addr 0x181f8e640, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 op_Decrement(::Unity::Mathematics::float4x3  val) ;

/// @brief Method op_Division, addr 0x181f8e680, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 op_Division(::Unity::Mathematics::float4x3  lhs, ::Unity::Mathematics::float4x3  rhs) ;

/// @brief Method op_Division, addr 0x181f8e6c0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 op_Division(::Unity::Mathematics::float4x3  lhs, float_t  rhs) ;

/// @brief Method op_Division, addr 0x181f8e700, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 op_Division(float_t  lhs, ::Unity::Mathematics::float4x3  rhs) ;

/// @brief Method op_Equality, addr 0x181f8e7c0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_Equality(::Unity::Mathematics::float4x3  lhs, ::Unity::Mathematics::float4x3  rhs) ;

/// @brief Method op_Equality, addr 0x181f8e830, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_Equality(::Unity::Mathematics::float4x3  lhs, float_t  rhs) ;

/// @brief Method op_Equality, addr 0x181f8e740, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_Equality(float_t  lhs, ::Unity::Mathematics::float4x3  rhs) ;

/// @brief Method op_Explicit, addr 0x181eef3a0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 op_Explicit___Unity__Mathematics__float4x3(::Unity::Mathematics::bool4x3  v) ;

/// @brief Method op_Explicit, addr 0x181eef0b0, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 op_Explicit___Unity__Mathematics__float4x3(::Unity::Mathematics::double4x3  v) ;

/// @brief Method op_Explicit, addr 0x181eef640, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 op_Explicit___Unity__Mathematics__float4x3(bool  v) ;

/// @brief Method op_Explicit, addr 0x181f8e8a0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 op_Explicit___Unity__Mathematics__float4x3(double_t  v) ;

/// @brief Method op_GreaterThan, addr 0x181f8eaa0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_GreaterThan(::Unity::Mathematics::float4x3  lhs, ::Unity::Mathematics::float4x3  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181f8ea30, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_GreaterThan(::Unity::Mathematics::float4x3  lhs, float_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181f8eb10, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_GreaterThan(float_t  lhs, ::Unity::Mathematics::float4x3  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f8e8d0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_GreaterThanOrEqual(::Unity::Mathematics::float4x3  lhs, ::Unity::Mathematics::float4x3  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f8e9c0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_GreaterThanOrEqual(::Unity::Mathematics::float4x3  lhs, float_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f8e940, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_GreaterThanOrEqual(float_t  lhs, ::Unity::Mathematics::float4x3  rhs) ;

/// @brief Method op_Implicit, addr 0x181eef6b0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 op_Implicit___Unity__Mathematics__float4x3(::Unity::Mathematics::int4x3  v) ;

/// @brief Method op_Implicit, addr 0x181f8ebc0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 op_Implicit___Unity__Mathematics__float4x3(::Unity::Mathematics::uint4x3  v) ;

/// @brief Method op_Implicit, addr 0x181eef610, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 op_Implicit___Unity__Mathematics__float4x3(float_t  v) ;

/// @brief Method op_Implicit, addr 0x181eef680, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 op_Implicit___Unity__Mathematics__float4x3(int32_t  v) ;

/// @brief Method op_Implicit, addr 0x181f8eb90, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 op_Implicit___Unity__Mathematics__float4x3(uint32_t  v) ;

/// @brief Method op_Increment, addr 0x181f8ec10, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 op_Increment(::Unity::Mathematics::float4x3  val) ;

/// @brief Method op_Inequality, addr 0x181f8ecc0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_Inequality(::Unity::Mathematics::float4x3  lhs, ::Unity::Mathematics::float4x3  rhs) ;

/// @brief Method op_Inequality, addr 0x181f8ec50, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_Inequality(::Unity::Mathematics::float4x3  lhs, float_t  rhs) ;

/// @brief Method op_Inequality, addr 0x181f8ed30, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_Inequality(float_t  lhs, ::Unity::Mathematics::float4x3  rhs) ;

/// @brief Method op_LessThan, addr 0x181f8ef20, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_LessThan(::Unity::Mathematics::float4x3  lhs, ::Unity::Mathematics::float4x3  rhs) ;

/// @brief Method op_LessThan, addr 0x181f8f010, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_LessThan(::Unity::Mathematics::float4x3  lhs, float_t  rhs) ;

/// @brief Method op_LessThan, addr 0x181f8ef90, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_LessThan(float_t  lhs, ::Unity::Mathematics::float4x3  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f8edb0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_LessThanOrEqual(::Unity::Mathematics::float4x3  lhs, ::Unity::Mathematics::float4x3  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f8ee20, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_LessThanOrEqual(::Unity::Mathematics::float4x3  lhs, float_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f8eea0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 op_LessThanOrEqual(float_t  lhs, ::Unity::Mathematics::float4x3  rhs) ;

/// @brief Method op_Modulus, addr 0x181f8f3d0, size 0x1e0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 op_Modulus(::Unity::Mathematics::float4x3  lhs, ::Unity::Mathematics::float4x3  rhs) ;

/// @brief Method op_Modulus, addr 0x181f8f230, size 0x1a0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 op_Modulus(::Unity::Mathematics::float4x3  lhs, float_t  rhs) ;

/// @brief Method op_Modulus, addr 0x181f8f090, size 0x1a0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 op_Modulus(float_t  lhs, ::Unity::Mathematics::float4x3  rhs) ;

/// @brief Method op_Multiply, addr 0x181f8f5f0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 op_Multiply(::Unity::Mathematics::float4x3  lhs, ::Unity::Mathematics::float4x3  rhs) ;

/// @brief Method op_Multiply, addr 0x181f8f630, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 op_Multiply(::Unity::Mathematics::float4x3  lhs, float_t  rhs) ;

/// @brief Method op_Multiply, addr 0x181f8f5b0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 op_Multiply(float_t  lhs, ::Unity::Mathematics::float4x3  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f8f670, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 op_Subtraction(::Unity::Mathematics::float4x3  lhs, ::Unity::Mathematics::float4x3  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f8f6b0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 op_Subtraction(::Unity::Mathematics::float4x3  lhs, float_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f8f6f0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 op_Subtraction(float_t  lhs, ::Unity::Mathematics::float4x3  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x181f8f730, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 op_UnaryNegation(::Unity::Mathematics::float4x3  val) ;

/// @brief Method op_UnaryPlus, addr 0x181f8f760, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 op_UnaryPlus(::Unity::Mathematics::float4x3  val) ;

static inline void setStaticF_zero(::Unity::Mathematics::float4x3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr float4x3() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }]
constexpr float4x3(::Unity::Mathematics::float4  c0, ::Unity::Mathematics::float4  c1, ::Unity::Mathematics::float4  c2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12803};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field c0, offset: 0x0, size: 0x10, def value: None
 ::Unity::Mathematics::float4  c0;

/// @brief Field c1, offset: 0x10, size: 0x10, def value: None
 ::Unity::Mathematics::float4  c1;

/// @brief Field c2, offset: 0x20, size: 0x10, def value: None
 ::Unity::Mathematics::float4  c2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::float4x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float4x3, c1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float4x3, c2) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::float4x3) == 0x30, "Size mismatch!");

} // namespace end def Unity::Mathematics
