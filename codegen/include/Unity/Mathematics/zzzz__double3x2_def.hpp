#pragma once
// IWYU pragma private; include "Unity/Mathematics/double3x2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__double3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(double3x2)
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
struct bool3x2;
}
namespace Unity::Mathematics {
struct double3;
}
namespace Unity::Mathematics {
struct float3x2;
}
namespace Unity::Mathematics {
struct int3x2;
}
namespace Unity::Mathematics {
struct uint3x2;
}
// Forward declare root types
namespace Unity::Mathematics {
struct double3x2;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::double3x2);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::double3x2, "Unity.Mathematics", "double3x2");
// Dependencies Unity.Mathematics.double3
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.double3x2
struct CORDL_TYPE double3x2 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::double3  Item[];

/// @brief Field zero, offset 0xffffffff, size 0x30 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::double3x2  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::double3x2>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::double3x2>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x181f5fbc0, size 0x2b0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x181f58130, size 0x90, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::double3x2  rhs) ;

/// @brief Method GetHashCode, addr 0x181f581c0, size 0xd0, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x181f583c0, size 0x150, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x181f58290, size 0x130, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x181ed1120, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double3  c0, ::Unity::Mathematics::double3  c1) ;

/// @brief Method .ctor, addr 0x181ed0d80, size 0x40, virtual false, abstract: false, final false
inline void _ctor(double_t  m00, double_t  m01, double_t  m10, double_t  m11, double_t  m20, double_t  m21) ;

/// @brief Method .ctor, addr 0x181ed0f50, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool3x2  v) ;

/// @brief Method .ctor, addr 0x181ed0ee0, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3x2  v) ;

/// @brief Method .ctor, addr 0x181ed10a0, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int3x2  v) ;

/// @brief Method .ctor, addr 0x181ed0dc0, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint3x2  v) ;

/// @brief Method .ctor, addr 0x181ed1030, size 0x70, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x181ed0eb0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x181ed0d40, size 0x40, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x181ed0fe0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x181ed0e50, size 0x60, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

static inline ::Unity::Mathematics::double3x2 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x1808fb120, size 0x20, virtual false, abstract: false, final false
inline ::by_ref<::Unity::Mathematics::double3> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::double3x2>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::double3x2>* i___System__IEquatable_1___Unity__Mathematics__double3x2_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x181f5fe70, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 op_Addition(::Unity::Mathematics::double3x2  lhs, ::Unity::Mathematics::double3x2  rhs) ;

/// @brief Method op_Addition, addr 0x181f5ff70, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 op_Addition(::Unity::Mathematics::double3x2  lhs, double_t  rhs) ;

/// @brief Method op_Addition, addr 0x181f5ff00, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 op_Addition(double_t  lhs, ::Unity::Mathematics::double3x2  rhs) ;

/// @brief Method op_Decrement, addr 0x181f5ffe0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 op_Decrement(::Unity::Mathematics::double3x2  val) ;

/// @brief Method op_Division, addr 0x181f60060, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 op_Division(::Unity::Mathematics::double3x2  lhs, ::Unity::Mathematics::double3x2  rhs) ;

/// @brief Method op_Division, addr 0x181f60170, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 op_Division(::Unity::Mathematics::double3x2  lhs, double_t  rhs) ;

/// @brief Method op_Division, addr 0x181f600f0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 op_Division(double_t  lhs, ::Unity::Mathematics::double3x2  rhs) ;

/// @brief Method op_Equality, addr 0x181f60340, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_Equality(::Unity::Mathematics::double3x2  lhs, ::Unity::Mathematics::double3x2  rhs) ;

/// @brief Method op_Equality, addr 0x181f601e0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_Equality(::Unity::Mathematics::double3x2  lhs, double_t  rhs) ;

/// @brief Method op_Equality, addr 0x181f60290, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_Equality(double_t  lhs, ::Unity::Mathematics::double3x2  rhs) ;

/// @brief Method op_Explicit, addr 0x181ee76a0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 op_Explicit___Unity__Mathematics__double3x2(::Unity::Mathematics::bool3x2  v) ;

/// @brief Method op_Explicit, addr 0x181ee7620, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 op_Explicit___Unity__Mathematics__double3x2(bool  v) ;

/// @brief Method op_GreaterThan, addr 0x181f60620, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_GreaterThan(::Unity::Mathematics::double3x2  lhs, ::Unity::Mathematics::double3x2  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181f606b0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_GreaterThan(::Unity::Mathematics::double3x2  lhs, double_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181f605a0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_GreaterThan(double_t  lhs, ::Unity::Mathematics::double3x2  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f60490, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_GreaterThanOrEqual(::Unity::Mathematics::double3x2  lhs, ::Unity::Mathematics::double3x2  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f60410, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_GreaterThanOrEqual(::Unity::Mathematics::double3x2  lhs, double_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f60520, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_GreaterThanOrEqual(double_t  lhs, ::Unity::Mathematics::double3x2  rhs) ;

/// @brief Method op_Implicit, addr 0x181ee74d0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 op_Implicit___Unity__Mathematics__double3x2(::Unity::Mathematics::float3x2  v) ;

/// @brief Method op_Implicit, addr 0x181ee7730, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 op_Implicit___Unity__Mathematics__double3x2(::Unity::Mathematics::int3x2  v) ;

/// @brief Method op_Implicit, addr 0x181ee7580, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 op_Implicit___Unity__Mathematics__double3x2(::Unity::Mathematics::uint3x2  v) ;

/// @brief Method op_Implicit, addr 0x181ee7550, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 op_Implicit___Unity__Mathematics__double3x2(double_t  v) ;

/// @brief Method op_Implicit, addr 0x181ee7800, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 op_Implicit___Unity__Mathematics__double3x2(float_t  v) ;

/// @brief Method op_Implicit, addr 0x181ee7850, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 op_Implicit___Unity__Mathematics__double3x2(int32_t  v) ;

/// @brief Method op_Implicit, addr 0x181ee7460, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 op_Implicit___Unity__Mathematics__double3x2(uint32_t  v) ;

/// @brief Method op_Increment, addr 0x181f60730, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 op_Increment(::Unity::Mathematics::double3x2  val) ;

/// @brief Method op_Inequality, addr 0x181f60860, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_Inequality(::Unity::Mathematics::double3x2  lhs, ::Unity::Mathematics::double3x2  rhs) ;

/// @brief Method op_Inequality, addr 0x181f60930, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_Inequality(::Unity::Mathematics::double3x2  lhs, double_t  rhs) ;

/// @brief Method op_Inequality, addr 0x181f607b0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_Inequality(double_t  lhs, ::Unity::Mathematics::double3x2  rhs) ;

/// @brief Method op_LessThan, addr 0x181f60be0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_LessThan(::Unity::Mathematics::double3x2  lhs, ::Unity::Mathematics::double3x2  rhs) ;

/// @brief Method op_LessThan, addr 0x181f60c70, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_LessThan(::Unity::Mathematics::double3x2  lhs, double_t  rhs) ;

/// @brief Method op_LessThan, addr 0x181f60b60, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_LessThan(double_t  lhs, ::Unity::Mathematics::double3x2  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f60a50, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_LessThanOrEqual(::Unity::Mathematics::double3x2  lhs, ::Unity::Mathematics::double3x2  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f609e0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_LessThanOrEqual(::Unity::Mathematics::double3x2  lhs, double_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f60ae0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_LessThanOrEqual(double_t  lhs, ::Unity::Mathematics::double3x2  rhs) ;

/// @brief Method op_Modulus, addr 0x181f60ce0, size 0x130, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 op_Modulus(::Unity::Mathematics::double3x2  lhs, ::Unity::Mathematics::double3x2  rhs) ;

/// @brief Method op_Modulus, addr 0x181f60e10, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 op_Modulus(::Unity::Mathematics::double3x2  lhs, double_t  rhs) ;

/// @brief Method op_Modulus, addr 0x181f60f10, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 op_Modulus(double_t  lhs, ::Unity::Mathematics::double3x2  rhs) ;

/// @brief Method op_Multiply, addr 0x181f61100, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 op_Multiply(::Unity::Mathematics::double3x2  lhs, ::Unity::Mathematics::double3x2  rhs) ;

/// @brief Method op_Multiply, addr 0x181f61020, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 op_Multiply(::Unity::Mathematics::double3x2  lhs, double_t  rhs) ;

/// @brief Method op_Multiply, addr 0x181f61090, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 op_Multiply(double_t  lhs, ::Unity::Mathematics::double3x2  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f61280, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 op_Subtraction(::Unity::Mathematics::double3x2  lhs, ::Unity::Mathematics::double3x2  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f61190, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 op_Subtraction(::Unity::Mathematics::double3x2  lhs, double_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f61200, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 op_Subtraction(double_t  lhs, ::Unity::Mathematics::double3x2  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x181f61310, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 op_UnaryNegation(::Unity::Mathematics::double3x2  val) ;

/// @brief Method op_UnaryPlus, addr 0x181f61380, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 op_UnaryPlus(::Unity::Mathematics::double3x2  val) ;

static inline void setStaticF_zero(::Unity::Mathematics::double3x2  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr double3x2() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::double3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::double3", modifiers: "", def_value: None }]
constexpr double3x2(::Unity::Mathematics::double3  c0, ::Unity::Mathematics::double3  c1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12782};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field c0, offset: 0x0, size: 0x18, def value: None
 ::Unity::Mathematics::double3  c0;

/// @brief Field c1, offset: 0x18, size: 0x18, def value: None
 ::Unity::Mathematics::double3  c1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::double3x2, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double3x2, c1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::double3x2) == 0x30, "Size mismatch!");

} // namespace end def Unity::Mathematics
