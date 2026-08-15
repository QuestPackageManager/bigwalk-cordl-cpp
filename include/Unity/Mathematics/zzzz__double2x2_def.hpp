#pragma once
// IWYU pragma private; include "Unity/Mathematics/double2x2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__double2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(double2x2)
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
struct double2;
}
namespace Unity::Mathematics {
struct float2x2;
}
namespace Unity::Mathematics {
struct int2x2;
}
namespace Unity::Mathematics {
struct uint2x2;
}
// Forward declare root types
namespace Unity::Mathematics {
struct double2x2;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::double2x2);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::double2x2, "Unity.Mathematics", "double2x2");
// Dependencies Unity.Mathematics.double2
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.double2x2
struct CORDL_TYPE double2x2 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::double2  Item[];

/// @brief Field identity, offset 0xffffffff, size 0x20 
 __declspec(property(get=getStaticF_identity, put=setStaticF_identity)) ::Unity::Mathematics::double2x2  identity;

/// @brief Field zero, offset 0xffffffff, size 0x20 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::double2x2  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::double2x2>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::double2x2>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x181f59cc0, size 0xd0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x181f569f0, size 0x40, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method GetHashCode, addr 0x181f56a30, size 0x30, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x181f56a60, size 0xf0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x181f56b50, size 0xe0, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x180fa79b0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double2  c0, ::Unity::Mathematics::double2  c1) ;

/// @brief Method .ctor, addr 0x181ed0010, size 0x20, virtual false, abstract: false, final false
inline void _ctor(double_t  m00, double_t  m01, double_t  m10, double_t  m11) ;

/// @brief Method .ctor, addr 0x181ecff40, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method .ctor, addr 0x181ed0070, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float2x2  v) ;

/// @brief Method .ctor, addr 0x181ed0120, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int2x2  v) ;

/// @brief Method .ctor, addr 0x181ed00a0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint2x2  v) ;

/// @brief Method .ctor, addr 0x181ecffd0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x181ed0000, size 0x10, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x181ed00f0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x181ecffa0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x181ed0030, size 0x40, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

static inline ::Unity::Mathematics::double2x2 getStaticF_identity() ;

static inline ::Unity::Mathematics::double2x2 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x1808fb140, size 0x10, virtual false, abstract: false, final false
inline ::by_ref<::Unity::Mathematics::double2> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::double2x2>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::double2x2>* i___System__IEquatable_1___Unity__Mathematics__double2x2_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x181f59e90, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Addition(::Unity::Mathematics::double2x2  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_Addition, addr 0x181f59ee0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Addition(::Unity::Mathematics::double2x2  lhs, double_t  rhs) ;

/// @brief Method op_Addition, addr 0x181f59f00, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Addition(double_t  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_Decrement, addr 0x181f59f20, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Decrement(::Unity::Mathematics::double2x2  val) ;

/// @brief Method op_Division, addr 0x181f59f80, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Division(::Unity::Mathematics::double2x2  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_Division, addr 0x181f59f60, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Division(::Unity::Mathematics::double2x2  lhs, double_t  rhs) ;

/// @brief Method op_Division, addr 0x181f59fd0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Division(double_t  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_Equality, addr 0x181f5a010, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Equality(::Unity::Mathematics::double2x2  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_Equality, addr 0x181f5a0b0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Equality(::Unity::Mathematics::double2x2  lhs, double_t  rhs) ;

/// @brief Method op_Equality, addr 0x181f5a150, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Equality(double_t  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_Explicit, addr 0x181ee63b0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Explicit___Unity__Mathematics__double2x2(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method op_Explicit, addr 0x181ee65c0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Explicit___Unity__Mathematics__double2x2(bool  v) ;

/// @brief Method op_GreaterThan, addr 0x181f5a340, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(::Unity::Mathematics::double2x2  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181f5a3c0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(::Unity::Mathematics::double2x2  lhs, double_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181f5a440, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(double_t  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f5a240, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(::Unity::Mathematics::double2x2  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f5a2c0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(::Unity::Mathematics::double2x2  lhs, double_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f5a1e0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(double_t  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_Implicit, addr 0x181ee6470, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Implicit___Unity__Mathematics__double2x2(::Unity::Mathematics::float2x2  v) ;

/// @brief Method op_Implicit, addr 0x181ee6500, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Implicit___Unity__Mathematics__double2x2(::Unity::Mathematics::int2x2  v) ;

/// @brief Method op_Implicit, addr 0x181ee6560, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Implicit___Unity__Mathematics__double2x2(::Unity::Mathematics::uint2x2  v) ;

/// @brief Method op_Implicit, addr 0x181ee63a0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Implicit___Unity__Mathematics__double2x2(double_t  v) ;

/// @brief Method op_Implicit, addr 0x181ee6340, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Implicit___Unity__Mathematics__double2x2(float_t  v) ;

/// @brief Method op_Implicit, addr 0x181ee64c0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Implicit___Unity__Mathematics__double2x2(int32_t  v) ;

/// @brief Method op_Implicit, addr 0x181ee6410, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Implicit___Unity__Mathematics__double2x2(uint32_t  v) ;

/// @brief Method op_Increment, addr 0x181f5a4a0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Increment(::Unity::Mathematics::double2x2  val) ;

/// @brief Method op_Inequality, addr 0x181f5a4e0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Inequality(::Unity::Mathematics::double2x2  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_Inequality, addr 0x181f5a610, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Inequality(::Unity::Mathematics::double2x2  lhs, double_t  rhs) ;

/// @brief Method op_Inequality, addr 0x181f5a580, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_Inequality(double_t  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_LessThan, addr 0x181f5a8f0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_LessThan(::Unity::Mathematics::double2x2  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_LessThan, addr 0x181f5a890, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_LessThan(::Unity::Mathematics::double2x2  lhs, double_t  rhs) ;

/// @brief Method op_LessThan, addr 0x181f5a810, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_LessThan(double_t  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f5a710, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(::Unity::Mathematics::double2x2  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f5a6b0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(::Unity::Mathematics::double2x2  lhs, double_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f5a790, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(double_t  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_Modulus, addr 0x181f5a970, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Modulus(::Unity::Mathematics::double2x2  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_Modulus, addr 0x181f5aa70, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Modulus(::Unity::Mathematics::double2x2  lhs, double_t  rhs) ;

/// @brief Method op_Modulus, addr 0x181f5a9f0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Modulus(double_t  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_Multiply, addr 0x181f5ab30, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Multiply(::Unity::Mathematics::double2x2  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_Multiply, addr 0x181f5aaf0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Multiply(::Unity::Mathematics::double2x2  lhs, double_t  rhs) ;

/// @brief Method op_Multiply, addr 0x181f5ab10, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Multiply(double_t  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f5abe0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Subtraction(::Unity::Mathematics::double2x2  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f5abc0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Subtraction(::Unity::Mathematics::double2x2  lhs, double_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f5ab80, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_Subtraction(double_t  lhs, ::Unity::Mathematics::double2x2  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x181f5ac30, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_UnaryNegation(::Unity::Mathematics::double2x2  val) ;

/// @brief Method op_UnaryPlus, addr 0x181f5ac50, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 op_UnaryPlus(::Unity::Mathematics::double2x2  val) ;

static inline void setStaticF_identity(::Unity::Mathematics::double2x2  value) ;

static inline void setStaticF_zero(::Unity::Mathematics::double2x2  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr double2x2() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::double2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::double2", modifiers: "", def_value: None }]
constexpr double2x2(::Unity::Mathematics::double2  c0, ::Unity::Mathematics::double2  c1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12777};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field c0, offset: 0x0, size: 0x10, def value: None
 ::Unity::Mathematics::double2  c0;

/// @brief Field c1, offset: 0x10, size: 0x10, def value: None
 ::Unity::Mathematics::double2  c1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::double2x2, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double2x2, c1) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::double2x2) == 0x20, "Size mismatch!");

} // namespace end def Unity::Mathematics
