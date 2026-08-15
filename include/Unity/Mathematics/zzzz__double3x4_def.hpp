#pragma once
// IWYU pragma private; include "Unity/Mathematics/double3x4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__double3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(double3x4)
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
struct double3;
}
namespace Unity::Mathematics {
struct float3x4;
}
namespace Unity::Mathematics {
struct int3x4;
}
namespace Unity::Mathematics {
struct uint3x4;
}
// Forward declare root types
namespace Unity::Mathematics {
struct double3x4;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::double3x4);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::double3x4, "Unity.Mathematics", "double3x4");
// Dependencies Unity.Mathematics.double3
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.double3x4
struct CORDL_TYPE double3x4 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::double3  Item[];

/// @brief Field zero, offset 0xffffffff, size 0x60 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::double3x4  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::double3x4>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::double3x4>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x181f63880, size 0x310, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x181f589a0, size 0x130, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::double3x4  rhs) ;

/// @brief Method GetHashCode, addr 0x181f58ad0, size 0x50, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x181f58d10, size 0x240, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x181f58b20, size 0x1f0, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x181ed1810, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double3  c0, ::Unity::Mathematics::double3  c1, ::Unity::Mathematics::double3  c2, ::Unity::Mathematics::double3  c3) ;

/// @brief Method .ctor, addr 0x181ed1860, size 0x80, virtual false, abstract: false, final false
inline void _ctor(double_t  m00, double_t  m01, double_t  m02, double_t  m03, double_t  m10, double_t  m11, double_t  m12, double_t  m13, double_t  m20, double_t  m21, double_t  m22, double_t  m23) ;

/// @brief Method .ctor, addr 0x181ed1700, size 0x110, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method .ctor, addr 0x181ed1d00, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3x4  v) ;

/// @brief Method .ctor, addr 0x181ed1b70, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int3x4  v) ;

/// @brief Method .ctor, addr 0x181ed1a20, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint3x4  v) ;

/// @brief Method .ctor, addr 0x181ed1c60, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x181ed1b20, size 0x50, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x181ed1dd0, size 0x80, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x181ed18e0, size 0x80, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x181ed1960, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

static inline ::Unity::Mathematics::double3x4 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x1808fb120, size 0x20, virtual false, abstract: false, final false
inline ::by_ref<::Unity::Mathematics::double3> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::double3x4>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::double3x4>* i___System__IEquatable_1___Unity__Mathematics__double3x4_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x181f63dd0, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 op_Addition(::Unity::Mathematics::double3x4  lhs, ::Unity::Mathematics::double3x4  rhs) ;

/// @brief Method op_Addition, addr 0x181f63b90, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 op_Addition(::Unity::Mathematics::double3x4  lhs, double_t  rhs) ;

/// @brief Method op_Addition, addr 0x181f63cb0, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 op_Addition(double_t  lhs, ::Unity::Mathematics::double3x4  rhs) ;

/// @brief Method op_Decrement, addr 0x181f63f20, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 op_Decrement(::Unity::Mathematics::double3x4  val) ;

/// @brief Method op_Division, addr 0x181f64290, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 op_Division(::Unity::Mathematics::double3x4  lhs, ::Unity::Mathematics::double3x4  rhs) ;

/// @brief Method op_Division, addr 0x181f64040, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 op_Division(::Unity::Mathematics::double3x4  lhs, double_t  rhs) ;

/// @brief Method op_Division, addr 0x181f64160, size 0x130, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 op_Division(double_t  lhs, ::Unity::Mathematics::double3x4  rhs) ;

/// @brief Method op_Equality, addr 0x181f643e0, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Equality(::Unity::Mathematics::double3x4  lhs, ::Unity::Mathematics::double3x4  rhs) ;

/// @brief Method op_Equality, addr 0x181f646c0, size 0x160, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Equality(::Unity::Mathematics::double3x4  lhs, double_t  rhs) ;

/// @brief Method op_Equality, addr 0x181f64570, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Equality(double_t  lhs, ::Unity::Mathematics::double3x4  rhs) ;

/// @brief Method op_Explicit, addr 0x181f64820, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 op_Explicit___Unity__Mathematics__double3x4(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method op_Explicit, addr 0x181ee84f0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 op_Explicit___Unity__Mathematics__double3x4(bool  v) ;

/// @brief Method op_GreaterThan, addr 0x181f64d00, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(::Unity::Mathematics::double3x4  lhs, ::Unity::Mathematics::double3x4  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181f64c20, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(::Unity::Mathematics::double3x4  lhs, double_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181f64b40, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(double_t  lhs, ::Unity::Mathematics::double3x4  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f64950, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(::Unity::Mathematics::double3x4  lhs, ::Unity::Mathematics::double3x4  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f64870, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(::Unity::Mathematics::double3x4  lhs, double_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f64a60, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(double_t  lhs, ::Unity::Mathematics::double3x4  rhs) ;

/// @brief Method op_Implicit, addr 0x181ee8050, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 op_Implicit___Unity__Mathematics__double3x4(::Unity::Mathematics::float3x4  v) ;

/// @brief Method op_Implicit, addr 0x181ee8140, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 op_Implicit___Unity__Mathematics__double3x4(::Unity::Mathematics::int3x4  v) ;

/// @brief Method op_Implicit, addr 0x181f64e50, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 op_Implicit___Unity__Mathematics__double3x4(::Unity::Mathematics::uint3x4  v) ;

/// @brief Method op_Implicit, addr 0x181ee7ee0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 op_Implicit___Unity__Mathematics__double3x4(double_t  v) ;

/// @brief Method op_Implicit, addr 0x181ee8290, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 op_Implicit___Unity__Mathematics__double3x4(float_t  v) ;

/// @brief Method op_Implicit, addr 0x181ee7fc0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 op_Implicit___Unity__Mathematics__double3x4(int32_t  v) ;

/// @brief Method op_Implicit, addr 0x181f64e10, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 op_Implicit___Unity__Mathematics__double3x4(uint32_t  v) ;

/// @brief Method op_Increment, addr 0x181f64eb0, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 op_Increment(::Unity::Mathematics::double3x4  val) ;

/// @brief Method op_Inequality, addr 0x181f65280, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Inequality(::Unity::Mathematics::double3x4  lhs, ::Unity::Mathematics::double3x4  rhs) ;

/// @brief Method op_Inequality, addr 0x181f64fd0, size 0x160, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Inequality(::Unity::Mathematics::double3x4  lhs, double_t  rhs) ;

/// @brief Method op_Inequality, addr 0x181f65130, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Inequality(double_t  lhs, ::Unity::Mathematics::double3x4  rhs) ;

/// @brief Method op_LessThan, addr 0x181f658a0, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_LessThan(::Unity::Mathematics::double3x4  lhs, ::Unity::Mathematics::double3x4  rhs) ;

/// @brief Method op_LessThan, addr 0x181f657d0, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_LessThan(::Unity::Mathematics::double3x4  lhs, double_t  rhs) ;

/// @brief Method op_LessThan, addr 0x181f656e0, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_LessThan(double_t  lhs, ::Unity::Mathematics::double3x4  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f65410, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(::Unity::Mathematics::double3x4  lhs, ::Unity::Mathematics::double3x4  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f65520, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(::Unity::Mathematics::double3x4  lhs, double_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f655f0, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(double_t  lhs, ::Unity::Mathematics::double3x4  rhs) ;

/// @brief Method op_Modulus, addr 0x181f65d80, size 0x210, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 op_Modulus(::Unity::Mathematics::double3x4  lhs, ::Unity::Mathematics::double3x4  rhs) ;

/// @brief Method op_Modulus, addr 0x181f659b0, size 0x1e0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 op_Modulus(::Unity::Mathematics::double3x4  lhs, double_t  rhs) ;

/// @brief Method op_Modulus, addr 0x181f65b90, size 0x1f0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 op_Modulus(double_t  lhs, ::Unity::Mathematics::double3x4  rhs) ;

/// @brief Method op_Multiply, addr 0x181f661d0, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 op_Multiply(::Unity::Mathematics::double3x4  lhs, ::Unity::Mathematics::double3x4  rhs) ;

/// @brief Method op_Multiply, addr 0x181f660b0, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 op_Multiply(::Unity::Mathematics::double3x4  lhs, double_t  rhs) ;

/// @brief Method op_Multiply, addr 0x181f65f90, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 op_Multiply(double_t  lhs, ::Unity::Mathematics::double3x4  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f66320, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 op_Subtraction(::Unity::Mathematics::double3x4  lhs, ::Unity::Mathematics::double3x4  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f665a0, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 op_Subtraction(::Unity::Mathematics::double3x4  lhs, double_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f66470, size 0x130, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 op_Subtraction(double_t  lhs, ::Unity::Mathematics::double3x4  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x181f666c0, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 op_UnaryNegation(::Unity::Mathematics::double3x4  val) ;

/// @brief Method op_UnaryPlus, addr 0x181f667d0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 op_UnaryPlus(::Unity::Mathematics::double3x4  val) ;

static inline void setStaticF_zero(::Unity::Mathematics::double3x4  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr double3x4() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::double3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::double3", modifiers: "", def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::double3", modifiers: "", def_value: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::double3", modifiers: "", def_value: None }]
constexpr double3x4(::Unity::Mathematics::double3  c0, ::Unity::Mathematics::double3  c1, ::Unity::Mathematics::double3  c2, ::Unity::Mathematics::double3  c3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12784};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field c0, offset: 0x0, size: 0x18, def value: None
 ::Unity::Mathematics::double3  c0;

/// @brief Field c1, offset: 0x18, size: 0x18, def value: None
 ::Unity::Mathematics::double3  c1;

/// @brief Field c2, offset: 0x30, size: 0x18, def value: None
 ::Unity::Mathematics::double3  c2;

/// @brief Field c3, offset: 0x48, size: 0x18, def value: None
 ::Unity::Mathematics::double3  c3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::double3x4, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double3x4, c1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double3x4, c2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double3x4, c3) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::double3x4) == 0x60, "Size mismatch!");

} // namespace end def Unity::Mathematics
