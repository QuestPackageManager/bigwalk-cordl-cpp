#pragma once
// IWYU pragma private; include "Unity/Mathematics/double2x3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__double2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(double2x3)
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
struct bool2x3;
}
namespace Unity::Mathematics {
struct double2;
}
namespace Unity::Mathematics {
struct float2x3;
}
namespace Unity::Mathematics {
struct int2x3;
}
namespace Unity::Mathematics {
struct uint2x3;
}
// Forward declare root types
namespace Unity::Mathematics {
struct double2x3;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::double2x3);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::double2x3, "Unity.Mathematics", "double2x3");
// Dependencies Unity.Mathematics.double2
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.double2x3
struct CORDL_TYPE double2x3 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::double2  Item[];

/// @brief Field zero, offset 0xffffffff, size 0x30 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::double2x3  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::double2x3>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::double2x3>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x181f5aca0, size 0x230, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x181f56c30, size 0x60, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::double2x3  rhs) ;

/// @brief Method GetHashCode, addr 0x181f56c90, size 0x30, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x181f56df0, size 0x150, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x181f56cc0, size 0x130, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x180fd1df0, size 0x9550, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double2  c0, ::Unity::Mathematics::double2  c1, ::Unity::Mathematics::double2  c2) ;

/// @brief Method .ctor, addr 0x181ed0360, size 0x30, virtual false, abstract: false, final false
inline void _ctor(double_t  m00, double_t  m01, double_t  m02, double_t  m10, double_t  m11, double_t  m12) ;

/// @brief Method .ctor, addr 0x181ed02a0, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool2x3  v) ;

/// @brief Method .ctor, addr 0x181ed0390, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float2x3  v) ;

/// @brief Method .ctor, addr 0x181ed0170, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int2x3  v) ;

/// @brief Method .ctor, addr 0x181ed01e0, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint2x3  v) ;

/// @brief Method .ctor, addr 0x181ed0270, size 0x30, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x181ed0260, size 0x10, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x181ed0320, size 0x40, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x181ed0430, size 0x50, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x181ed03d0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

static inline ::Unity::Mathematics::double2x3 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x1808fb140, size 0x10, virtual false, abstract: false, final false
inline ::by_ref<::Unity::Mathematics::double2> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::double2x3>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::double2x3>* i___System__IEquatable_1___Unity__Mathematics__double2x3_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x181f5af40, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 op_Addition(::Unity::Mathematics::double2x3  lhs, ::Unity::Mathematics::double2x3  rhs) ;

/// @brief Method op_Addition, addr 0x181f5af10, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 op_Addition(::Unity::Mathematics::double2x3  lhs, double_t  rhs) ;

/// @brief Method op_Addition, addr 0x181f5aed0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 op_Addition(double_t  lhs, ::Unity::Mathematics::double2x3  rhs) ;

/// @brief Method op_Decrement, addr 0x181f5afb0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 op_Decrement(::Unity::Mathematics::double2x3  val) ;

/// @brief Method op_Division, addr 0x181f5b0b0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 op_Division(::Unity::Mathematics::double2x3  lhs, ::Unity::Mathematics::double2x3  rhs) ;

/// @brief Method op_Division, addr 0x181f5b020, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 op_Division(::Unity::Mathematics::double2x3  lhs, double_t  rhs) ;

/// @brief Method op_Division, addr 0x181f5b050, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 op_Division(double_t  lhs, ::Unity::Mathematics::double2x3  rhs) ;

/// @brief Method op_Equality, addr 0x181f5b270, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_Equality(::Unity::Mathematics::double2x3  lhs, ::Unity::Mathematics::double2x3  rhs) ;

/// @brief Method op_Equality, addr 0x181f5b120, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_Equality(::Unity::Mathematics::double2x3  lhs, double_t  rhs) ;

/// @brief Method op_Equality, addr 0x181f5b1d0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_Equality(double_t  lhs, ::Unity::Mathematics::double2x3  rhs) ;

/// @brief Method op_Explicit, addr 0x181ee6870, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 op_Explicit___Unity__Mathematics__double2x3(::Unity::Mathematics::bool2x3  v) ;

/// @brief Method op_Explicit, addr 0x181ee6740, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 op_Explicit___Unity__Mathematics__double2x3(bool  v) ;

/// @brief Method op_GreaterThan, addr 0x181f5b570, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_GreaterThan(::Unity::Mathematics::double2x3  lhs, ::Unity::Mathematics::double2x3  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181f5b4f0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_GreaterThan(::Unity::Mathematics::double2x3  lhs, double_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181f5b490, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_GreaterThan(double_t  lhs, ::Unity::Mathematics::double2x3  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f5b330, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_GreaterThanOrEqual(::Unity::Mathematics::double2x3  lhs, ::Unity::Mathematics::double2x3  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f5b410, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_GreaterThanOrEqual(::Unity::Mathematics::double2x3  lhs, double_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f5b3b0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_GreaterThanOrEqual(double_t  lhs, ::Unity::Mathematics::double2x3  rhs) ;

/// @brief Method op_Implicit, addr 0x181ee66c0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 op_Implicit___Unity__Mathematics__double2x3(::Unity::Mathematics::float2x3  v) ;

/// @brief Method op_Implicit, addr 0x181ee6920, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 op_Implicit___Unity__Mathematics__double2x3(::Unity::Mathematics::int2x3  v) ;

/// @brief Method op_Implicit, addr 0x181ee67d0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 op_Implicit___Unity__Mathematics__double2x3(::Unity::Mathematics::uint2x3  v) ;

/// @brief Method op_Implicit, addr 0x181ee66a0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 op_Implicit___Unity__Mathematics__double2x3(double_t  v) ;

/// @brief Method op_Implicit, addr 0x181ee6650, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 op_Implicit___Unity__Mathematics__double2x3(float_t  v) ;

/// @brief Method op_Implicit, addr 0x181ee6770, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 op_Implicit___Unity__Mathematics__double2x3(int32_t  v) ;

/// @brief Method op_Implicit, addr 0x181ee65f0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 op_Implicit___Unity__Mathematics__double2x3(uint32_t  v) ;

/// @brief Method op_Increment, addr 0x181f5b5f0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 op_Increment(::Unity::Mathematics::double2x3  val) ;

/// @brief Method op_Inequality, addr 0x181f5b710, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_Inequality(::Unity::Mathematics::double2x3  lhs, ::Unity::Mathematics::double2x3  rhs) ;

/// @brief Method op_Inequality, addr 0x181f5b660, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_Inequality(::Unity::Mathematics::double2x3  lhs, double_t  rhs) ;

/// @brief Method op_Inequality, addr 0x181f5b7d0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_Inequality(double_t  lhs, ::Unity::Mathematics::double2x3  rhs) ;

/// @brief Method op_LessThan, addr 0x181f5ba50, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_LessThan(::Unity::Mathematics::double2x3  lhs, ::Unity::Mathematics::double2x3  rhs) ;

/// @brief Method op_LessThan, addr 0x181f5bad0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_LessThan(::Unity::Mathematics::double2x3  lhs, double_t  rhs) ;

/// @brief Method op_LessThan, addr 0x181f5b9d0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_LessThan(double_t  lhs, ::Unity::Mathematics::double2x3  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f5b950, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_LessThanOrEqual(::Unity::Mathematics::double2x3  lhs, ::Unity::Mathematics::double2x3  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f5b870, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_LessThanOrEqual(::Unity::Mathematics::double2x3  lhs, double_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f5b8d0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 op_LessThanOrEqual(double_t  lhs, ::Unity::Mathematics::double2x3  rhs) ;

/// @brief Method op_Modulus, addr 0x181f5bbd0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 op_Modulus(::Unity::Mathematics::double2x3  lhs, ::Unity::Mathematics::double2x3  rhs) ;

/// @brief Method op_Modulus, addr 0x181f5bc80, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 op_Modulus(::Unity::Mathematics::double2x3  lhs, double_t  rhs) ;

/// @brief Method op_Modulus, addr 0x181f5bb30, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 op_Modulus(double_t  lhs, ::Unity::Mathematics::double2x3  rhs) ;

/// @brief Method op_Multiply, addr 0x181f5bd60, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 op_Multiply(::Unity::Mathematics::double2x3  lhs, ::Unity::Mathematics::double2x3  rhs) ;

/// @brief Method op_Multiply, addr 0x181f5bdd0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 op_Multiply(::Unity::Mathematics::double2x3  lhs, double_t  rhs) ;

/// @brief Method op_Multiply, addr 0x181f5bd20, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 op_Multiply(double_t  lhs, ::Unity::Mathematics::double2x3  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f5be90, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 op_Subtraction(::Unity::Mathematics::double2x3  lhs, ::Unity::Mathematics::double2x3  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f5be00, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 op_Subtraction(::Unity::Mathematics::double2x3  lhs, double_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f5be30, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 op_Subtraction(double_t  lhs, ::Unity::Mathematics::double2x3  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x181f5bf00, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 op_UnaryNegation(::Unity::Mathematics::double2x3  val) ;

/// @brief Method op_UnaryPlus, addr 0x181f5bf30, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 op_UnaryPlus(::Unity::Mathematics::double2x3  val) ;

static inline void setStaticF_zero(::Unity::Mathematics::double2x3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr double2x3() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::double2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::double2", modifiers: "", def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::double2", modifiers: "", def_value: None }]
constexpr double2x3(::Unity::Mathematics::double2  c0, ::Unity::Mathematics::double2  c1, ::Unity::Mathematics::double2  c2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12778};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field c0, offset: 0x0, size: 0x10, def value: None
 ::Unity::Mathematics::double2  c0;

/// @brief Field c1, offset: 0x10, size: 0x10, def value: None
 ::Unity::Mathematics::double2  c1;

/// @brief Field c2, offset: 0x20, size: 0x10, def value: None
 ::Unity::Mathematics::double2  c2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::double2x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double2x3, c1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double2x3, c2) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::double2x3) == 0x30, "Size mismatch!");

} // namespace end def Unity::Mathematics
