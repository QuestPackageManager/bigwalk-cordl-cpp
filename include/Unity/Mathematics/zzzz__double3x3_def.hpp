#pragma once
// IWYU pragma private; include "Unity/Mathematics/double3x3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__double3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(double3x3)
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
struct double3;
}
namespace Unity::Mathematics {
struct float3x3;
}
namespace Unity::Mathematics {
struct int3x3;
}
namespace Unity::Mathematics {
struct uint3x3;
}
// Forward declare root types
namespace Unity::Mathematics {
struct double3x3;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::double3x3);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::double3x3, "Unity.Mathematics", "double3x3");
// Dependencies Unity.Mathematics.double3
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.double3x3
struct CORDL_TYPE double3x3 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::double3  Item[];

/// @brief Field identity, offset 0xffffffff, size 0x48 
 __declspec(property(get=getStaticF_identity, put=setStaticF_identity)) ::Unity::Mathematics::double3x3  identity;

/// @brief Field zero, offset 0xffffffff, size 0x48 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::double3x3  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::double3x3>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::double3x3>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x181f613d0, size 0x110, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x181f58510, size 0xe0, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method GetHashCode, addr 0x181f585f0, size 0x50, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x181f58640, size 0x1d0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x181f58810, size 0x190, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x181ed11b0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double3  c0, ::Unity::Mathematics::double3  c1, ::Unity::Mathematics::double3  c2) ;

/// @brief Method .ctor, addr 0x181ed16a0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(double_t  m00, double_t  m01, double_t  m02, double_t  m10, double_t  m11, double_t  m12, double_t  m20, double_t  m21, double_t  m22) ;

/// @brief Method .ctor, addr 0x181ed1360, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method .ctor, addr 0x181ed12c0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3x3  v) ;

/// @brief Method .ctor, addr 0x181ed1560, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int3x3  v) ;

/// @brief Method .ctor, addr 0x181ed1430, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method .ctor, addr 0x181ed1620, size 0x80, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x181ed11f0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x181ed1150, size 0x60, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x181ed14f0, size 0x70, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x181ed1230, size 0x90, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

static inline ::Unity::Mathematics::double3x3 getStaticF_identity() ;

static inline ::Unity::Mathematics::double3x3 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x1808fb120, size 0x20, virtual false, abstract: false, final false
inline ::by_ref<::Unity::Mathematics::double3> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::double3x3>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::double3x3>* i___System__IEquatable_1___Unity__Mathematics__double3x3_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x181f61710, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Addition(::Unity::Mathematics::double3x3  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_Addition, addr 0x181f618c0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Addition(::Unity::Mathematics::double3x3  lhs, double_t  rhs) ;

/// @brief Method op_Addition, addr 0x181f61800, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Addition(double_t  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_Decrement, addr 0x181f61980, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Decrement(::Unity::Mathematics::double3x3  val) ;

/// @brief Method op_Division, addr 0x181f61a50, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Division(::Unity::Mathematics::double3x3  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_Division, addr 0x181f61b40, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Division(::Unity::Mathematics::double3x3  lhs, double_t  rhs) ;

/// @brief Method op_Division, addr 0x181f61c00, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Division(double_t  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_Equality, addr 0x181f61df0, size 0x130, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Equality(::Unity::Mathematics::double3x3  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_Equality, addr 0x181f61ce0, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Equality(::Unity::Mathematics::double3x3  lhs, double_t  rhs) ;

/// @brief Method op_Equality, addr 0x181f61f20, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Equality(double_t  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_Explicit, addr 0x181f62020, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Explicit___Unity__Mathematics__double3x3(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method op_Explicit, addr 0x181ee7ce0, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Explicit___Unity__Mathematics__double3x3(bool  v) ;

/// @brief Method op_GreaterThan, addr 0x181f62400, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(::Unity::Mathematics::double3x3  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181f622a0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(::Unity::Mathematics::double3x3  lhs, double_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181f62350, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(double_t  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f62120, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(::Unity::Mathematics::double3x3  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f621f0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(::Unity::Mathematics::double3x3  lhs, double_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181f62070, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(double_t  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_Implicit, addr 0x181ee7a00, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Implicit___Unity__Mathematics__double3x3(::Unity::Mathematics::float3x3  v) ;

/// @brief Method op_Implicit, addr 0x181ee7ba0, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Implicit___Unity__Mathematics__double3x3(::Unity::Mathematics::int3x3  v) ;

/// @brief Method op_Implicit, addr 0x181ee7db0, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Implicit___Unity__Mathematics__double3x3(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method op_Implicit, addr 0x181ee7ea0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Implicit___Unity__Mathematics__double3x3(double_t  v) ;

/// @brief Method op_Implicit, addr 0x181ee78d0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Implicit___Unity__Mathematics__double3x3(float_t  v) ;

/// @brief Method op_Implicit, addr 0x181ee7c70, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Implicit___Unity__Mathematics__double3x3(int32_t  v) ;

/// @brief Method op_Implicit, addr 0x181ee7b10, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Implicit___Unity__Mathematics__double3x3(uint32_t  v) ;

/// @brief Method op_Increment, addr 0x181f624d0, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Increment(::Unity::Mathematics::double3x3  val) ;

/// @brief Method op_Inequality, addr 0x181f625a0, size 0x130, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Inequality(::Unity::Mathematics::double3x3  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_Inequality, addr 0x181f626d0, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Inequality(::Unity::Mathematics::double3x3  lhs, double_t  rhs) ;

/// @brief Method op_Inequality, addr 0x181f627e0, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_Inequality(double_t  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_LessThan, addr 0x181f62bd0, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThan(::Unity::Mathematics::double3x3  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_LessThan, addr 0x181f62b20, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThan(::Unity::Mathematics::double3x3  lhs, double_t  rhs) ;

/// @brief Method op_LessThan, addr 0x181f62ca0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThan(double_t  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f629a0, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(::Unity::Mathematics::double3x3  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f62a70, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(::Unity::Mathematics::double3x3  lhs, double_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181f628e0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(double_t  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_Modulus, addr 0x181f62ed0, size 0x1a0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Modulus(::Unity::Mathematics::double3x3  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_Modulus, addr 0x181f62d60, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Modulus(::Unity::Mathematics::double3x3  lhs, double_t  rhs) ;

/// @brief Method op_Modulus, addr 0x181f63070, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Modulus(double_t  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_Multiply, addr 0x181f632a0, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Multiply(::Unity::Mathematics::double3x3  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_Multiply, addr 0x181f63390, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Multiply(::Unity::Mathematics::double3x3  lhs, double_t  rhs) ;

/// @brief Method op_Multiply, addr 0x181f631e0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Multiply(double_t  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f63530, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Subtraction(::Unity::Mathematics::double3x3  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f63620, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Subtraction(::Unity::Mathematics::double3x3  lhs, double_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f63450, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_Subtraction(double_t  lhs, ::Unity::Mathematics::double3x3  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x181f636e0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_UnaryNegation(::Unity::Mathematics::double3x3  val) ;

/// @brief Method op_UnaryPlus, addr 0x181f637a0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 op_UnaryPlus(::Unity::Mathematics::double3x3  val) ;

static inline void setStaticF_identity(::Unity::Mathematics::double3x3  value) ;

static inline void setStaticF_zero(::Unity::Mathematics::double3x3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr double3x3() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::double3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::double3", modifiers: "", def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::double3", modifiers: "", def_value: None }]
constexpr double3x3(::Unity::Mathematics::double3  c0, ::Unity::Mathematics::double3  c1, ::Unity::Mathematics::double3  c2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12783};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field c0, offset: 0x0, size: 0x18, def value: None
 ::Unity::Mathematics::double3  c0;

/// @brief Field c1, offset: 0x18, size: 0x18, def value: None
 ::Unity::Mathematics::double3  c1;

/// @brief Field c2, offset: 0x30, size: 0x18, def value: None
 ::Unity::Mathematics::double3  c2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::double3x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double3x3, c1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double3x3, c2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::double3x3) == 0x48, "Size mismatch!");

} // namespace end def Unity::Mathematics
