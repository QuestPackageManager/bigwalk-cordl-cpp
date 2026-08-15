#pragma once
// IWYU pragma private; include "Unity/Mathematics/double4x2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__double4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(double4x2)
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
struct bool4x2;
}
namespace Unity::Mathematics {
struct double4;
}
namespace Unity::Mathematics {
struct float4x2;
}
namespace Unity::Mathematics {
struct int4x2;
}
namespace Unity::Mathematics {
struct uint4x2;
}
// Forward declare root types
namespace Unity::Mathematics {
struct double4x2;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::double4x2);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::double4x2, "Unity.Mathematics", "double4x2");
// Dependencies Unity.Mathematics.double4
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.double4x2
struct CORDL_TYPE double4x2 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::double4  Item[];

/// @brief Field zero, offset 0xffffffff, size 0x40 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::double4x2  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::double4x2>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::double4x2>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x181f6e460, size 0x2c0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x181f69080, size 0x90, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::double4x2  rhs) ;

/// @brief Method GetHashCode, addr 0x181f69110, size 0x40, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x181f692c0, size 0x1a0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x181f69150, size 0x170, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x181ed2730, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double4  c0, ::Unity::Mathematics::double4  c1) ;

/// @brief Method .ctor, addr 0x181ed25e0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(double_t  m00, double_t  m01, double_t  m10, double_t  m11, double_t  m20, double_t  m21, double_t  m30, double_t  m31) ;

/// @brief Method .ctor, addr 0x181ed24f0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool4x2  v) ;

/// @brief Method .ctor, addr 0x181ed2750, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float4x2  v) ;

/// @brief Method .ctor, addr 0x181ed2470, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int4x2  v) ;

/// @brief Method .ctor, addr 0x181ed2630, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint4x2  v) ;

/// @brief Method .ctor, addr 0x181ed25a0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x181ed26c0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x181ed26f0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x181ed27d0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x181ed2400, size 0x70, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

static inline ::Unity::Mathematics::double4x2 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x1808fb110, size 0x10, virtual false, abstract: false, final false
inline ::by_ref<::Unity::Mathematics::double4> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::double4x2>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::double4x2>* i___System__IEquatable_1___Unity__Mathematics__double4x2_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x181f6e860, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 op_Addition(::Unity::Mathematics::double4x2  lhs, ::Unity::Mathematics::double4x2  rhs) ;

/// @brief Method op_Addition, addr 0x181f6e720, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 op_Addition(::Unity::Mathematics::double4x2  lhs, double_t  rhs) ;

/// @brief Method op_Addition, addr 0x181f6e7c0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 op_Addition(double_t  lhs, ::Unity::Mathematics::double4x2  rhs) ;

/// @brief Method op_Decrement, addr 0x181f6e930, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 op_Decrement(::Unity::Mathematics::double4x2  val) ;

/// @brief Method op_Division, addr 0x181f6ea60, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 op_Division(::Unity::Mathematics::double4x2  lhs, ::Unity::Mathematics::double4x2  rhs) ;

/// @brief Method op_Division, addr 0x181f6e9c0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 op_Division(::Unity::Mathematics::double4x2  lhs, double_t  rhs) ;

/// @brief Method op_Division, addr 0x181f6eb30, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 op_Division(double_t  lhs, ::Unity::Mathematics::double4x2  rhs) ;

/// @brief Method op_Equality, addr 0x181f6ed10, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x2 op_Equality(::Unity::Mathematics::double4x2  lhs, ::Unity::Mathematics::double4x2  rhs) ;

/// @brief Method op_Equality, addr 0x181f6ebf0, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x2 op_Equality(::Unity::Mathematics::double4x2  lhs, double_t  rhs) ;

/// @brief Method op_Equality, addr 0x181f6ee60, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x2 op_Equality(double_t  lhs, ::Unity::Mathematics::double4x2  rhs) ;

/// @brief Method op_Explicit, addr 0x181f6ef80, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 op_Explicit___Unity__Mathematics__double4x2(::Unity::Mathematics::bool4x2  v) ;

/// @brief Method op_Explicit, addr 0x181ee8d30, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 op_Explicit___Unity__Mathematics__double4x2(bool  v) ;

/// @brief Method op_GreaterThan, addr 0x181f6f390, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x2 op_GreaterThan(::Unity::Mathematics::double4x2  lhs, ::Unity::Mathematics::double4x2  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181f6f210, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x2 op_GreaterThan(::Unity::Mathematics::double4x2  lhs, double_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181f6f2d0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x2 op_GreaterThan(double_t  lhs, ::Unity::Mathematics::double4x2  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f6f130, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x2 op_GreaterThanOrEqual(::Unity::Mathematics::double4x2  lhs, ::Unity::Mathematics::double4x2  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f6efb0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x2 op_GreaterThanOrEqual(::Unity::Mathematics::double4x2  lhs, double_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f6f070, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x2 op_GreaterThanOrEqual(double_t  lhs, ::Unity::Mathematics::double4x2  rhs) ;

/// @brief Method op_Implicit, addr 0x181ee8e00, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 op_Implicit___Unity__Mathematics__double4x2(::Unity::Mathematics::float4x2  v) ;

/// @brief Method op_Implicit, addr 0x181ee8c20, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 op_Implicit___Unity__Mathematics__double4x2(::Unity::Mathematics::int4x2  v) ;

/// @brief Method op_Implicit, addr 0x181ee8fa0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 op_Implicit___Unity__Mathematics__double4x2(::Unity::Mathematics::uint4x2  v) ;

/// @brief Method op_Implicit, addr 0x181ee8cb0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 op_Implicit___Unity__Mathematics__double4x2(double_t  v) ;

/// @brief Method op_Implicit, addr 0x181ee8bb0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 op_Implicit___Unity__Mathematics__double4x2(float_t  v) ;

/// @brief Method op_Implicit, addr 0x181ee8ce0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 op_Implicit___Unity__Mathematics__double4x2(int32_t  v) ;

/// @brief Method op_Implicit, addr 0x181ee8d80, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 op_Implicit___Unity__Mathematics__double4x2(uint32_t  v) ;

/// @brief Method op_Increment, addr 0x181f6f470, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 op_Increment(::Unity::Mathematics::double4x2  val) ;

/// @brief Method op_Inequality, addr 0x181f6f620, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x2 op_Inequality(::Unity::Mathematics::double4x2  lhs, ::Unity::Mathematics::double4x2  rhs) ;

/// @brief Method op_Inequality, addr 0x181f6f500, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x2 op_Inequality(::Unity::Mathematics::double4x2  lhs, double_t  rhs) ;

/// @brief Method op_Inequality, addr 0x181f6f770, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x2 op_Inequality(double_t  lhs, ::Unity::Mathematics::double4x2  rhs) ;

/// @brief Method op_LessThan, addr 0x181f6faf0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x2 op_LessThan(::Unity::Mathematics::double4x2  lhs, ::Unity::Mathematics::double4x2  rhs) ;

/// @brief Method op_LessThan, addr 0x181f6fbd0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x2 op_LessThan(::Unity::Mathematics::double4x2  lhs, double_t  rhs) ;

/// @brief Method op_LessThan, addr 0x181f6fc90, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x2 op_LessThan(double_t  lhs, ::Unity::Mathematics::double4x2  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f6fa10, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x2 op_LessThanOrEqual(::Unity::Mathematics::double4x2  lhs, ::Unity::Mathematics::double4x2  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f6f890, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x2 op_LessThanOrEqual(::Unity::Mathematics::double4x2  lhs, double_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f6f950, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x2 op_LessThanOrEqual(double_t  lhs, ::Unity::Mathematics::double4x2  rhs) ;

/// @brief Method op_Modulus, addr 0x181f6fff0, size 0x180, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 op_Modulus(::Unity::Mathematics::double4x2  lhs, ::Unity::Mathematics::double4x2  rhs) ;

/// @brief Method op_Modulus, addr 0x181f6fea0, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 op_Modulus(::Unity::Mathematics::double4x2  lhs, double_t  rhs) ;

/// @brief Method op_Modulus, addr 0x181f6fd50, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 op_Modulus(double_t  lhs, ::Unity::Mathematics::double4x2  rhs) ;

/// @brief Method op_Multiply, addr 0x181f70210, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 op_Multiply(::Unity::Mathematics::double4x2  lhs, ::Unity::Mathematics::double4x2  rhs) ;

/// @brief Method op_Multiply, addr 0x181f702e0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 op_Multiply(::Unity::Mathematics::double4x2  lhs, double_t  rhs) ;

/// @brief Method op_Multiply, addr 0x181f70170, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 op_Multiply(double_t  lhs, ::Unity::Mathematics::double4x2  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f704e0, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 op_Subtraction(::Unity::Mathematics::double4x2  lhs, ::Unity::Mathematics::double4x2  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f70380, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 op_Subtraction(::Unity::Mathematics::double4x2  lhs, double_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f70420, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 op_Subtraction(double_t  lhs, ::Unity::Mathematics::double4x2  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x181f705b0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 op_UnaryNegation(::Unity::Mathematics::double4x2  val) ;

/// @brief Method op_UnaryPlus, addr 0x181f70650, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 op_UnaryPlus(::Unity::Mathematics::double4x2  val) ;

static inline void setStaticF_zero(::Unity::Mathematics::double4x2  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr double4x2() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::double4", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::double4", modifiers: "", def_value: None }]
constexpr double4x2(::Unity::Mathematics::double4  c0, ::Unity::Mathematics::double4  c1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12787};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field c0, offset: 0x0, size: 0x20, def value: None
 ::Unity::Mathematics::double4  c0;

/// @brief Field c1, offset: 0x20, size: 0x20, def value: None
 ::Unity::Mathematics::double4  c1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::double4x2, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double4x2, c1) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::double4x2) == 0x40, "Size mismatch!");

} // namespace end def Unity::Mathematics
