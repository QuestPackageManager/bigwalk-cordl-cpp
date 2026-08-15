#pragma once
// IWYU pragma private; include "Unity/Mathematics/float3x2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(float3x2)
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
struct double3x2;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct int3x2;
}
namespace Unity::Mathematics {
struct uint3x2;
}
// Forward declare root types
namespace Unity::Mathematics {
struct float3x2;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::float3x2);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::float3x2, "Unity.Mathematics", "float3x2");
// Dependencies Unity.Mathematics.float3
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.float3x2
struct CORDL_TYPE float3x2 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::float3  Item[];

/// @brief Field zero, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::float3x2  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float3x2>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::float3x2>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x181f7f9b0, size 0x240, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x181f425b0, size 0x80, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::float3x2  rhs) ;

/// @brief Method GetHashCode, addr 0x181f78f10, size 0x80, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x181f790c0, size 0x150, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x181f78f90, size 0x130, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x180fa7a70, size 0xd210, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3  c0, ::Unity::Mathematics::float3  c1) ;

/// @brief Method .ctor, addr 0x181ed47d0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(float_t  m00, float_t  m01, float_t  m10, float_t  m11, float_t  m20, float_t  m21) ;

/// @brief Method .ctor, addr 0x181ed4920, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool3x2  v) ;

/// @brief Method .ctor, addr 0x181ed4770, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double3x2  v) ;

/// @brief Method .ctor, addr 0x181ed4a40, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int3x2  v) ;

/// @brief Method .ctor, addr 0x181ed49a0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint3x2  v) ;

/// @brief Method .ctor, addr 0x181ed4870, size 0x60, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x181ed48d0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x181ed4750, size 0x20, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x181ed4700, size 0x50, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x181ed4800, size 0x70, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

static inline ::Unity::Mathematics::float3x2 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x1808fb1d0, size 0x40, virtual false, abstract: false, final false
inline ::by_ref<::Unity::Mathematics::float3> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float3x2>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::float3x2>* i___System__IEquatable_1___Unity__Mathematics__float3x2_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x181f7fc70, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 op_Addition(::Unity::Mathematics::float3x2  lhs, ::Unity::Mathematics::float3x2  rhs) ;

/// @brief Method op_Addition, addr 0x181f7fd00, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 op_Addition(::Unity::Mathematics::float3x2  lhs, float_t  rhs) ;

/// @brief Method op_Addition, addr 0x181f7fbf0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 op_Addition(float_t  lhs, ::Unity::Mathematics::float3x2  rhs) ;

/// @brief Method op_Decrement, addr 0x181f7fd80, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 op_Decrement(::Unity::Mathematics::float3x2  val) ;

/// @brief Method op_Division, addr 0x181f7fe70, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 op_Division(::Unity::Mathematics::float3x2  lhs, ::Unity::Mathematics::float3x2  rhs) ;

/// @brief Method op_Division, addr 0x181f7fdf0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 op_Division(::Unity::Mathematics::float3x2  lhs, float_t  rhs) ;

/// @brief Method op_Division, addr 0x181f7ff00, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 op_Division(float_t  lhs, ::Unity::Mathematics::float3x2  rhs) ;

/// @brief Method op_Equality, addr 0x181f800f0, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_Equality(::Unity::Mathematics::float3x2  lhs, ::Unity::Mathematics::float3x2  rhs) ;

/// @brief Method op_Equality, addr 0x181f7ff80, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_Equality(::Unity::Mathematics::float3x2  lhs, float_t  rhs) ;

/// @brief Method op_Equality, addr 0x181f80040, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_Equality(float_t  lhs, ::Unity::Mathematics::float3x2  rhs) ;

/// @brief Method op_Explicit, addr 0x181eed6e0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 op_Explicit___Unity__Mathematics__float3x2(::Unity::Mathematics::bool3x2  v) ;

/// @brief Method op_Explicit, addr 0x181eed340, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 op_Explicit___Unity__Mathematics__float3x2(::Unity::Mathematics::double3x2  v) ;

/// @brief Method op_Explicit, addr 0x181eed460, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 op_Explicit___Unity__Mathematics__float3x2(bool  v) ;

/// @brief Method op_Explicit, addr 0x181eed510, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 op_Explicit___Unity__Mathematics__float3x2(double_t  v) ;

/// @brief Method op_GreaterThan, addr 0x181f80400, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_GreaterThan(::Unity::Mathematics::float3x2  lhs, ::Unity::Mathematics::float3x2  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181f80380, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_GreaterThan(::Unity::Mathematics::float3x2  lhs, float_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181f804a0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_GreaterThan(float_t  lhs, ::Unity::Mathematics::float3x2  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f802e0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_GreaterThanOrEqual(::Unity::Mathematics::float3x2  lhs, ::Unity::Mathematics::float3x2  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f801e0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_GreaterThanOrEqual(::Unity::Mathematics::float3x2  lhs, float_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f80260, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_GreaterThanOrEqual(float_t  lhs, ::Unity::Mathematics::float3x2  rhs) ;

/// @brief Method op_Implicit, addr 0x181eed560, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 op_Implicit___Unity__Mathematics__float3x2(::Unity::Mathematics::int3x2  v) ;

/// @brief Method op_Implicit, addr 0x181eed3a0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 op_Implicit___Unity__Mathematics__float3x2(::Unity::Mathematics::uint3x2  v) ;

/// @brief Method op_Implicit, addr 0x181eed770, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 op_Implicit___Unity__Mathematics__float3x2(float_t  v) ;

/// @brief Method op_Implicit, addr 0x181eed4c0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 op_Implicit___Unity__Mathematics__float3x2(int32_t  v) ;

/// @brief Method op_Implicit, addr 0x181eed660, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 op_Implicit___Unity__Mathematics__float3x2(uint32_t  v) ;

/// @brief Method op_Increment, addr 0x181f80520, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 op_Increment(::Unity::Mathematics::float3x2  val) ;

/// @brief Method op_Inequality, addr 0x181f80700, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_Inequality(::Unity::Mathematics::float3x2  lhs, ::Unity::Mathematics::float3x2  rhs) ;

/// @brief Method op_Inequality, addr 0x181f80590, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_Inequality(::Unity::Mathematics::float3x2  lhs, float_t  rhs) ;

/// @brief Method op_Inequality, addr 0x181f80650, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_Inequality(float_t  lhs, ::Unity::Mathematics::float3x2  rhs) ;

/// @brief Method op_LessThan, addr 0x181f80a00, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_LessThan(::Unity::Mathematics::float3x2  lhs, ::Unity::Mathematics::float3x2  rhs) ;

/// @brief Method op_LessThan, addr 0x181f80aa0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_LessThan(::Unity::Mathematics::float3x2  lhs, float_t  rhs) ;

/// @brief Method op_LessThan, addr 0x181f80980, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_LessThan(float_t  lhs, ::Unity::Mathematics::float3x2  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f808e0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_LessThanOrEqual(::Unity::Mathematics::float3x2  lhs, ::Unity::Mathematics::float3x2  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f80870, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_LessThanOrEqual(::Unity::Mathematics::float3x2  lhs, float_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f807f0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 op_LessThanOrEqual(float_t  lhs, ::Unity::Mathematics::float3x2  rhs) ;

/// @brief Method op_Modulus, addr 0x181f80b10, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 op_Modulus(::Unity::Mathematics::float3x2  lhs, ::Unity::Mathematics::float3x2  rhs) ;

/// @brief Method op_Modulus, addr 0x181f80d10, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 op_Modulus(::Unity::Mathematics::float3x2  lhs, float_t  rhs) ;

/// @brief Method op_Modulus, addr 0x181f80c20, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 op_Modulus(float_t  lhs, ::Unity::Mathematics::float3x2  rhs) ;

/// @brief Method op_Multiply, addr 0x181f80e00, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 op_Multiply(::Unity::Mathematics::float3x2  lhs, ::Unity::Mathematics::float3x2  rhs) ;

/// @brief Method op_Multiply, addr 0x181f80f10, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 op_Multiply(::Unity::Mathematics::float3x2  lhs, float_t  rhs) ;

/// @brief Method op_Multiply, addr 0x181f80e90, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 op_Multiply(float_t  lhs, ::Unity::Mathematics::float3x2  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f80f90, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 op_Subtraction(::Unity::Mathematics::float3x2  lhs, ::Unity::Mathematics::float3x2  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f81020, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 op_Subtraction(::Unity::Mathematics::float3x2  lhs, float_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f810a0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 op_Subtraction(float_t  lhs, ::Unity::Mathematics::float3x2  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x181f81120, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 op_UnaryNegation(::Unity::Mathematics::float3x2  val) ;

/// @brief Method op_UnaryPlus, addr 0x181f81190, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 op_UnaryPlus(::Unity::Mathematics::float3x2  val) ;

static inline void setStaticF_zero(::Unity::Mathematics::float3x2  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr float3x2() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }]
constexpr float3x2(::Unity::Mathematics::float3  c0, ::Unity::Mathematics::float3  c1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12797};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field c0, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  c0;

/// @brief Field c1, offset: 0xc, size: 0xc, def value: None
 ::Unity::Mathematics::float3  c1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::float3x2, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float3x2, c1) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::float3x2) == 0x18, "Size mismatch!");

} // namespace end def Unity::Mathematics
