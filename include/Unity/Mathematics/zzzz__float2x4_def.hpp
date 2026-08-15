#pragma once
// IWYU pragma private; include "Unity/Mathematics/float2x4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(float2x4)
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
struct bool2x4;
}
namespace Unity::Mathematics {
struct double2x4;
}
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct int2x4;
}
namespace Unity::Mathematics {
struct uint2x4;
}
// Forward declare root types
namespace Unity::Mathematics {
struct float2x4;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::float2x4);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::float2x4, "Unity.Mathematics", "float2x4");
// Dependencies Unity.Mathematics.float2
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.float2x4
struct CORDL_TYPE float2x4 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::float2  Item[];

/// @brief Field zero, offset 0xffffffff, size 0x20 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::float2x4  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float2x4>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::float2x4>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x181f7c8d0, size 0x290, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x181f78290, size 0x70, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method GetHashCode, addr 0x181f78300, size 0x30, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x181f784a0, size 0x1a0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x181f78330, size 0x170, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x181ed4020, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float2  c0, ::Unity::Mathematics::float2  c1, ::Unity::Mathematics::float2  c2, ::Unity::Mathematics::float2  c3) ;

/// @brief Method .ctor, addr 0x181ed3f60, size 0x50, virtual false, abstract: false, final false
inline void _ctor(float_t  m00, float_t  m01, float_t  m02, float_t  m03, float_t  m10, float_t  m11, float_t  m12, float_t  m13) ;

/// @brief Method .ctor, addr 0x181ed4350, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method .ctor, addr 0x181ed3fb0, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double2x4  v) ;

/// @brief Method .ctor, addr 0x181ed4050, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int2x4  v) ;

/// @brief Method .ctor, addr 0x181ed40d0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint2x4  v) ;

/// @brief Method .ctor, addr 0x181ed4200, size 0x50, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x181ed4190, size 0x70, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x181ed4040, size 0x10, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x181ed42f0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x181ed4250, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

static inline ::Unity::Mathematics::float2x4 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x1808fb150, size 0x40, virtual false, abstract: false, final false
inline ::by_ref<::Unity::Mathematics::float2> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float2x4>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::float2x4>* i___System__IEquatable_1___Unity__Mathematics__float2x4_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x181f7cb60, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Addition(::Unity::Mathematics::float2x4  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_Addition, addr 0x181f7cbf0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Addition(::Unity::Mathematics::float2x4  lhs, float_t  rhs) ;

/// @brief Method op_Addition, addr 0x181f7cc10, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Addition(float_t  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_Decrement, addr 0x181f7cc60, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Decrement(::Unity::Mathematics::float2x4  val) ;

/// @brief Method op_Division, addr 0x181f7cda0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Division(::Unity::Mathematics::float2x4  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_Division, addr 0x181f7ce30, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Division(::Unity::Mathematics::float2x4  lhs, float_t  rhs) ;

/// @brief Method op_Division, addr 0x181f7cd30, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Division(float_t  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_Equality, addr 0x181f7ce50, size 0x130, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_Equality(::Unity::Mathematics::float2x4  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_Equality, addr 0x181f7cf80, size 0x130, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_Equality(::Unity::Mathematics::float2x4  lhs, float_t  rhs) ;

/// @brief Method op_Equality, addr 0x181f7d0b0, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_Equality(float_t  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_Explicit, addr 0x181f7d1b0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Explicit___Unity__Mathematics__float2x4(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method op_Explicit, addr 0x181eeca90, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Explicit___Unity__Mathematics__float2x4(::Unity::Mathematics::double2x4  v) ;

/// @brief Method op_Explicit, addr 0x181eeca40, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Explicit___Unity__Mathematics__float2x4(bool  v) ;

/// @brief Method op_Explicit, addr 0x181eecd50, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Explicit___Unity__Mathematics__float2x4(double_t  v) ;

/// @brief Method op_GreaterThan, addr 0x181f7d480, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_GreaterThan(::Unity::Mathematics::float2x4  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181f7d630, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_GreaterThan(::Unity::Mathematics::float2x4  lhs, float_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181f7d570, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_GreaterThan(float_t  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f7d390, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_GreaterThanOrEqual(::Unity::Mathematics::float2x4  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f7d1e0, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_GreaterThanOrEqual(::Unity::Mathematics::float2x4  lhs, float_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f7d2d0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_GreaterThanOrEqual(float_t  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_Implicit, addr 0x181eecea0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Implicit___Unity__Mathematics__float2x4(::Unity::Mathematics::int2x4  v) ;

/// @brief Method op_Implicit, addr 0x181eecdc0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Implicit___Unity__Mathematics__float2x4(::Unity::Mathematics::uint2x4  v) ;

/// @brief Method op_Implicit, addr 0x181eecd40, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Implicit___Unity__Mathematics__float2x4(float_t  v) ;

/// @brief Method op_Implicit, addr 0x181eeccd0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Implicit___Unity__Mathematics__float2x4(int32_t  v) ;

/// @brief Method op_Implicit, addr 0x181eecbe0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Implicit___Unity__Mathematics__float2x4(uint32_t  v) ;

/// @brief Method op_Increment, addr 0x181f7d720, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Increment(::Unity::Mathematics::float2x4  val) ;

/// @brief Method op_Inequality, addr 0x181f7d920, size 0x130, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_Inequality(::Unity::Mathematics::float2x4  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_Inequality, addr 0x181f7d7f0, size 0x130, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_Inequality(::Unity::Mathematics::float2x4  lhs, float_t  rhs) ;

/// @brief Method op_Inequality, addr 0x181f7da50, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_Inequality(float_t  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_LessThan, addr 0x181f7dfa0, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_LessThan(::Unity::Mathematics::float2x4  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_LessThan, addr 0x181f7ded0, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_LessThan(::Unity::Mathematics::float2x4  lhs, float_t  rhs) ;

/// @brief Method op_LessThan, addr 0x181f7ddf0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_LessThan(float_t  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f7dd00, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_LessThanOrEqual(::Unity::Mathematics::float2x4  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f7db50, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_LessThanOrEqual(::Unity::Mathematics::float2x4  lhs, float_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f7dc20, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 op_LessThanOrEqual(float_t  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_Modulus, addr 0x181f7e150, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Modulus(::Unity::Mathematics::float2x4  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_Modulus, addr 0x181f7e220, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Modulus(::Unity::Mathematics::float2x4  lhs, float_t  rhs) ;

/// @brief Method op_Modulus, addr 0x181f7e090, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Modulus(float_t  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_Multiply, addr 0x181f7e330, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Multiply(::Unity::Mathematics::float2x4  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_Multiply, addr 0x181f7e3c0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Multiply(::Unity::Mathematics::float2x4  lhs, float_t  rhs) ;

/// @brief Method op_Multiply, addr 0x181f7e2e0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Multiply(float_t  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f7e400, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Subtraction(::Unity::Mathematics::float2x4  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f7e3e0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Subtraction(::Unity::Mathematics::float2x4  lhs, float_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f7e490, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_Subtraction(float_t  lhs, ::Unity::Mathematics::float2x4  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x181f7e500, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_UnaryNegation(::Unity::Mathematics::float2x4  val) ;

/// @brief Method op_UnaryPlus, addr 0x181f7e520, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 op_UnaryPlus(::Unity::Mathematics::float2x4  val) ;

static inline void setStaticF_zero(::Unity::Mathematics::float2x4  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr float2x4() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None }]
constexpr float2x4(::Unity::Mathematics::float2  c0, ::Unity::Mathematics::float2  c1, ::Unity::Mathematics::float2  c2, ::Unity::Mathematics::float2  c3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12794};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field c0, offset: 0x0, size: 0x8, def value: None
 ::Unity::Mathematics::float2  c0;

/// @brief Field c1, offset: 0x8, size: 0x8, def value: None
 ::Unity::Mathematics::float2  c1;

/// @brief Field c2, offset: 0x10, size: 0x8, def value: None
 ::Unity::Mathematics::float2  c2;

/// @brief Field c3, offset: 0x18, size: 0x8, def value: None
 ::Unity::Mathematics::float2  c3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::float2x4, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float2x4, c1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float2x4, c2) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float2x4, c3) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::float2x4) == 0x20, "Size mismatch!");

} // namespace end def Unity::Mathematics
