#pragma once
// IWYU pragma private; include "Unity/Mathematics/uint2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(uint2)
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
struct bool2;
}
namespace Unity::Mathematics {
struct double2;
}
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct int2;
}
namespace Unity::Mathematics {
class uint2_DebuggerProxy;
}
namespace Unity::Mathematics {
struct uint3;
}
namespace Unity::Mathematics {
struct uint4;
}
// Forward declare root types
namespace Unity::Mathematics {
class uint2_DebuggerProxy;
}
namespace Unity::Mathematics {
struct uint2;
}
// Write type traits
MARK_REF_T(::Unity::Mathematics::uint2_DebuggerProxy*);
MARK_VAL_T(::Unity::Mathematics::uint2);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::uint2_DebuggerProxy*, "Unity.Mathematics", "uint2/DebuggerProxy");
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::uint2, "Unity.Mathematics", "uint2");
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.uint2/DebuggerProxy
class CORDL_TYPE uint2_DebuggerProxy : public ::System::Object {
public:
// Declarations
/// @brief Field x, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_x, put=__cordl_internal_set_x)) uint32_t  x;

/// @brief Field y, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_y, put=__cordl_internal_set_y)) uint32_t  y;

static inline ::Unity::Mathematics::uint2_DebuggerProxy* New_ctor(::Unity::Mathematics::uint2  v) ;

constexpr uint32_t const& __cordl_internal_get_x() const;

constexpr uint32_t& __cordl_internal_get_x() ;

constexpr uint32_t const& __cordl_internal_get_y() const;

constexpr uint32_t& __cordl_internal_get_y() ;

constexpr void __cordl_internal_set_x(uint32_t  value) ;

constexpr void __cordl_internal_set_y(uint32_t  value) ;

/// @brief Method .ctor, addr 0x1804a0260, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint2  v) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr uint2_DebuggerProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "uint2_DebuggerProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
uint2_DebuggerProxy(uint2_DebuggerProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "uint2_DebuggerProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
uint2_DebuggerProxy(uint2_DebuggerProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12831};

/// @brief Field x, offset: 0x10, size: 0x4, def value: None
 uint32_t  ___x;

/// @brief Field y, offset: 0x14, size: 0x4, def value: None
 uint32_t  ___y;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::uint2_DebuggerProxy, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint2_DebuggerProxy, ___y) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::uint2_DebuggerProxy) == 0x18, "Size mismatch!");

} // namespace end def Unity::Mathematics
// Dependencies 
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.uint2
struct CORDL_TYPE uint2 {
public:
// Declarations
using DebuggerProxy = ::Unity::Mathematics::uint2_DebuggerProxy;

 __declspec(property(get=get_Item, put=set_Item)) uint32_t  Item[];

 __declspec(property(get=get_xx)) ::Unity::Mathematics::uint2  xx;

 __declspec(property(get=get_xxx)) ::Unity::Mathematics::uint3  xxx;

 __declspec(property(get=get_xxxx)) ::Unity::Mathematics::uint4  xxxx;

 __declspec(property(get=get_xxxy)) ::Unity::Mathematics::uint4  xxxy;

 __declspec(property(get=get_xxy)) ::Unity::Mathematics::uint3  xxy;

 __declspec(property(get=get_xxyx)) ::Unity::Mathematics::uint4  xxyx;

 __declspec(property(get=get_xxyy)) ::Unity::Mathematics::uint4  xxyy;

 __declspec(property(get=get_xy, put=set_xy)) ::Unity::Mathematics::uint2  xy;

 __declspec(property(get=get_xyx)) ::Unity::Mathematics::uint3  xyx;

 __declspec(property(get=get_xyxx)) ::Unity::Mathematics::uint4  xyxx;

 __declspec(property(get=get_xyxy)) ::Unity::Mathematics::uint4  xyxy;

 __declspec(property(get=get_xyy)) ::Unity::Mathematics::uint3  xyy;

 __declspec(property(get=get_xyyx)) ::Unity::Mathematics::uint4  xyyx;

 __declspec(property(get=get_xyyy)) ::Unity::Mathematics::uint4  xyyy;

 __declspec(property(get=get_yx, put=set_yx)) ::Unity::Mathematics::uint2  yx;

 __declspec(property(get=get_yxx)) ::Unity::Mathematics::uint3  yxx;

 __declspec(property(get=get_yxxx)) ::Unity::Mathematics::uint4  yxxx;

 __declspec(property(get=get_yxxy)) ::Unity::Mathematics::uint4  yxxy;

 __declspec(property(get=get_yxy)) ::Unity::Mathematics::uint3  yxy;

 __declspec(property(get=get_yxyx)) ::Unity::Mathematics::uint4  yxyx;

 __declspec(property(get=get_yxyy)) ::Unity::Mathematics::uint4  yxyy;

 __declspec(property(get=get_yy)) ::Unity::Mathematics::uint2  yy;

 __declspec(property(get=get_yyx)) ::Unity::Mathematics::uint3  yyx;

 __declspec(property(get=get_yyxx)) ::Unity::Mathematics::uint4  yyxx;

 __declspec(property(get=get_yyxy)) ::Unity::Mathematics::uint4  yyxy;

 __declspec(property(get=get_yyy)) ::Unity::Mathematics::uint3  yyy;

 __declspec(property(get=get_yyyx)) ::Unity::Mathematics::uint4  yyyx;

 __declspec(property(get=get_yyyy)) ::Unity::Mathematics::uint4  yyyy;

/// @brief Field zero, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Unity::Mathematics::uint2  zero;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::uint2>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::uint2>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x181fadf30, size 0xe0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x181f2ddb0, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::uint2  rhs) ;

/// @brief Method GetHashCode, addr 0x1814f6440, size 0x50, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x181fa72f0, size 0x60, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x181fa7280, size 0x70, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x181ed7ba0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool2  v) ;

/// @brief Method .ctor, addr 0x181eddc00, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::double2  v) ;

/// @brief Method .ctor, addr 0x181eddbc0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float2  v) ;

/// @brief Method .ctor, addr 0x181ed7bd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int2  v) ;

/// @brief Method .ctor, addr 0x181ed7b60, size 0x10, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method .ctor, addr 0x181eddb60, size 0x30, virtual false, abstract: false, final false
inline void _ctor(double_t  v) ;

/// @brief Method .ctor, addr 0x181eddb90, size 0x30, virtual false, abstract: false, final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor, addr 0x181ed7b40, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x181ed7b40, size 0x10, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

/// @brief Method .ctor, addr 0x1804a47e0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(uint32_t  x, uint32_t  y) ;

/// @brief Method .ctor, addr 0x181ed7bd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::uint2  xy) ;

static inline ::Unity::Mathematics::uint2 getStaticF_zero() ;

/// @brief Method get_Item, addr 0x1809079a0, size 0x1b0, virtual false, abstract: false, final false
inline uint32_t get_Item(int32_t  index) ;

/// @brief Method get_xx, addr 0x181f2e250, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint2 get_xx() ;

/// @brief Method get_xxx, addr 0x1814e1680, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint3 get_xxx() ;

/// @brief Method get_xxxx, addr 0x181f2e260, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_xxxx() ;

/// @brief Method get_xxxy, addr 0x181f2e280, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_xxxy() ;

/// @brief Method get_xxy, addr 0x181f2e2c0, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint3 get_xxy() ;

/// @brief Method get_xxyx, addr 0x181f2e2e0, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_xxyx() ;

/// @brief Method get_xxyy, addr 0x181f2e300, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_xxyy() ;

/// @brief Method get_xy, addr 0x181a4c6c0, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint2 get_xy() ;

/// @brief Method get_xyx, addr 0x181f2e3a0, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint3 get_xyx() ;

/// @brief Method get_xyxx, addr 0x181f2e3c0, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_xyxx() ;

/// @brief Method get_xyxy, addr 0x181f2e3e0, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_xyxy() ;

/// @brief Method get_xyy, addr 0x181f2e420, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint3 get_xyy() ;

/// @brief Method get_xyyx, addr 0x181f2e440, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_xyyx() ;

/// @brief Method get_xyyy, addr 0x181f2e460, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_xyyy() ;

/// @brief Method get_yx, addr 0x181f2e640, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint2 get_yx() ;

/// @brief Method get_yxx, addr 0x181f2e660, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint3 get_yxx() ;

/// @brief Method get_yxxx, addr 0x181f2e680, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_yxxx() ;

/// @brief Method get_yxxy, addr 0x181f2e6a0, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_yxxy() ;

/// @brief Method get_yxy, addr 0x181f2e6e0, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint3 get_yxy() ;

/// @brief Method get_yxyx, addr 0x181f2e700, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_yxyx() ;

/// @brief Method get_yxyy, addr 0x181f2e720, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_yxyy() ;

/// @brief Method get_yy, addr 0x181f2e7c0, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint2 get_yy() ;

/// @brief Method get_yyx, addr 0x181f2e7e0, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint3 get_yyx() ;

/// @brief Method get_yyxx, addr 0x181f2e800, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_yyxx() ;

/// @brief Method get_yyxy, addr 0x181f2e820, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_yyxy() ;

/// @brief Method get_yyy, addr 0x1814e1690, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint3 get_yyy() ;

/// @brief Method get_yyyx, addr 0x181f2e860, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_yyyx() ;

/// @brief Method get_yyyy, addr 0x181f2e880, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::uint4 get_yyyy() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::uint2>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::uint2>* i___System__IEquatable_1___Unity__Mathematics__uint2_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x181f9a050, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_Addition(::Unity::Mathematics::uint2  lhs, ::Unity::Mathematics::uint2  rhs) ;

/// @brief Method op_Addition, addr 0x181f9a070, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_Addition(::Unity::Mathematics::uint2  lhs, uint32_t  rhs) ;

/// @brief Method op_Addition, addr 0x181f9a030, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_Addition(uint32_t  lhs, ::Unity::Mathematics::uint2  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x181f558b0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_BitwiseAnd(::Unity::Mathematics::uint2  lhs, ::Unity::Mathematics::uint2  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x181f9a090, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_BitwiseAnd(::Unity::Mathematics::uint2  lhs, uint32_t  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x181f9a0b0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_BitwiseAnd(uint32_t  lhs, ::Unity::Mathematics::uint2  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x181f55910, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_BitwiseOr(::Unity::Mathematics::uint2  lhs, ::Unity::Mathematics::uint2  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x181f9a0f0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_BitwiseOr(::Unity::Mathematics::uint2  lhs, uint32_t  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x181f9a0d0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_BitwiseOr(uint32_t  lhs, ::Unity::Mathematics::uint2  rhs) ;

/// @brief Method op_Decrement, addr 0x181f9a110, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_Decrement(::Unity::Mathematics::uint2  val) ;

/// @brief Method op_Division, addr 0x181fae040, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_Division(::Unity::Mathematics::uint2  lhs, ::Unity::Mathematics::uint2  rhs) ;

/// @brief Method op_Division, addr 0x181fae070, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_Division(::Unity::Mathematics::uint2  lhs, uint32_t  rhs) ;

/// @brief Method op_Division, addr 0x181fae010, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_Division(uint32_t  lhs, ::Unity::Mathematics::uint2  rhs) ;

/// @brief Method op_Equality, addr 0x181f9a1e0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_Equality(::Unity::Mathematics::uint2  lhs, ::Unity::Mathematics::uint2  rhs) ;

/// @brief Method op_Equality, addr 0x181f9a200, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_Equality(::Unity::Mathematics::uint2  lhs, uint32_t  rhs) ;

/// @brief Method op_Equality, addr 0x181f9a1c0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_Equality(uint32_t  lhs, ::Unity::Mathematics::uint2  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x181f9a260, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_ExclusiveOr(::Unity::Mathematics::uint2  lhs, ::Unity::Mathematics::uint2  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x181f9a240, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_ExclusiveOr(::Unity::Mathematics::uint2  lhs, uint32_t  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x181f9a220, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_ExclusiveOr(uint32_t  lhs, ::Unity::Mathematics::uint2  rhs) ;

/// @brief Method op_Explicit, addr 0x181ef9ba0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_Explicit___Unity__Mathematics__uint2(::Unity::Mathematics::bool2  v) ;

/// @brief Method op_Explicit, addr 0x181f1a8c0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_Explicit___Unity__Mathematics__uint2(::Unity::Mathematics::double2  v) ;

/// @brief Method op_Explicit, addr 0x181f1a990, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_Explicit___Unity__Mathematics__uint2(::Unity::Mathematics::float2  v) ;

/// @brief Method op_Explicit, addr 0x181ecb860, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_Explicit___Unity__Mathematics__uint2(::Unity::Mathematics::int2  v) ;

/// @brief Method op_Explicit, addr 0x181ef9b60, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_Explicit___Unity__Mathematics__uint2(bool  v) ;

/// @brief Method op_Explicit, addr 0x181f1a910, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_Explicit___Unity__Mathematics__uint2(double_t  v) ;

/// @brief Method op_Explicit, addr 0x181f1a950, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_Explicit___Unity__Mathematics__uint2(float_t  v) ;

/// @brief Method op_Explicit, addr 0x181ef9bc0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_Explicit___Unity__Mathematics__uint2(int32_t  v) ;

/// @brief Method op_GreaterThan, addr 0x181fae120, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_GreaterThan(::Unity::Mathematics::uint2  lhs, ::Unity::Mathematics::uint2  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181fae140, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_GreaterThan(::Unity::Mathematics::uint2  lhs, uint32_t  rhs) ;

/// @brief Method op_GreaterThan, addr 0x181fae100, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_GreaterThan(uint32_t  lhs, ::Unity::Mathematics::uint2  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181fae0a0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_GreaterThanOrEqual(::Unity::Mathematics::uint2  lhs, ::Unity::Mathematics::uint2  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181fae0c0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_GreaterThanOrEqual(::Unity::Mathematics::uint2  lhs, uint32_t  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181fae0e0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_GreaterThanOrEqual(uint32_t  lhs, ::Unity::Mathematics::uint2  rhs) ;

/// @brief Method op_Implicit, addr 0x181ef9bc0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_Implicit___Unity__Mathematics__uint2(uint32_t  v) ;

/// @brief Method op_Increment, addr 0x181f9a340, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_Increment(::Unity::Mathematics::uint2  val) ;

/// @brief Method op_Inequality, addr 0x181f9a360, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_Inequality(::Unity::Mathematics::uint2  lhs, ::Unity::Mathematics::uint2  rhs) ;

/// @brief Method op_Inequality, addr 0x181f9a380, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_Inequality(::Unity::Mathematics::uint2  lhs, uint32_t  rhs) ;

/// @brief Method op_Inequality, addr 0x181f9a3a0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_Inequality(uint32_t  lhs, ::Unity::Mathematics::uint2  rhs) ;

/// @brief Method op_LeftShift, addr 0x181f9a3c0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_LeftShift(::Unity::Mathematics::uint2  x, int32_t  n) ;

/// @brief Method op_LessThan, addr 0x181fae1c0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_LessThan(::Unity::Mathematics::uint2  lhs, ::Unity::Mathematics::uint2  rhs) ;

/// @brief Method op_LessThan, addr 0x181fae200, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_LessThan(::Unity::Mathematics::uint2  lhs, uint32_t  rhs) ;

/// @brief Method op_LessThan, addr 0x181fae1e0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_LessThan(uint32_t  lhs, ::Unity::Mathematics::uint2  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181fae180, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_LessThanOrEqual(::Unity::Mathematics::uint2  lhs, ::Unity::Mathematics::uint2  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181fae1a0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_LessThanOrEqual(::Unity::Mathematics::uint2  lhs, uint32_t  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x181fae160, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 op_LessThanOrEqual(uint32_t  lhs, ::Unity::Mathematics::uint2  rhs) ;

/// @brief Method op_Modulus, addr 0x181fae280, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_Modulus(::Unity::Mathematics::uint2  lhs, ::Unity::Mathematics::uint2  rhs) ;

/// @brief Method op_Modulus, addr 0x181fae250, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_Modulus(::Unity::Mathematics::uint2  lhs, uint32_t  rhs) ;

/// @brief Method op_Modulus, addr 0x181fae220, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_Modulus(uint32_t  lhs, ::Unity::Mathematics::uint2  rhs) ;

/// @brief Method op_Multiply, addr 0x181f9a580, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_Multiply(::Unity::Mathematics::uint2  lhs, ::Unity::Mathematics::uint2  rhs) ;

/// @brief Method op_Multiply, addr 0x181f9a560, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_Multiply(::Unity::Mathematics::uint2  lhs, uint32_t  rhs) ;

/// @brief Method op_Multiply, addr 0x181f9a540, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_Multiply(uint32_t  lhs, ::Unity::Mathematics::uint2  rhs) ;

/// @brief Method op_OnesComplement, addr 0x181f9a5a0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_OnesComplement(::Unity::Mathematics::uint2  val) ;

/// @brief Method op_RightShift, addr 0x181fae2b0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_RightShift(::Unity::Mathematics::uint2  x, int32_t  n) ;

/// @brief Method op_Subtraction, addr 0x181f9a630, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_Subtraction(::Unity::Mathematics::uint2  lhs, ::Unity::Mathematics::uint2  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f9a610, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_Subtraction(::Unity::Mathematics::uint2  lhs, uint32_t  rhs) ;

/// @brief Method op_Subtraction, addr 0x181f9a5f0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_Subtraction(uint32_t  lhs, ::Unity::Mathematics::uint2  rhs) ;

/// @brief Method op_UnaryNegation, addr 0x181f9a650, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_UnaryNegation(::Unity::Mathematics::uint2  val) ;

/// @brief Method op_UnaryPlus, addr 0x181ecb860, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 op_UnaryPlus(::Unity::Mathematics::uint2  val) ;

static inline void setStaticF_zero(::Unity::Mathematics::uint2  value) ;

/// @brief Method set_Item, addr 0x1809091d0, size 0x1a0, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, uint32_t  value) ;

/// @brief Method set_xy, addr 0x181ed7bd0, size 0x10, virtual false, abstract: false, final false
inline void set_xy(::Unity::Mathematics::uint2  value) ;

/// @brief Method set_yx, addr 0x181f2ef30, size 0x10, virtual false, abstract: false, final false
inline void set_yx(::Unity::Mathematics::uint2  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr uint2() ;

// Ctor Parameters [CppParam { name: "x", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr uint2(uint32_t  x, uint32_t  y) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12832};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 uint32_t  x;

/// @brief Field y, offset: 0x4, size: 0x4, def value: None
 uint32_t  y;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::uint2, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint2, y) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::uint2) == 0x8, "Size mismatch!");

} // namespace end def Unity::Mathematics
