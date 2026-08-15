#pragma once
// IWYU pragma private; include "Mirror/Vector3Long.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector3Long)
namespace System {
class Object;
}
// Forward declare root types
namespace Mirror {
struct Vector3Long;
}
// Write type traits
MARK_VAL_T(::Mirror::Vector3Long);
DEFINE_IL2CPP_CLASS(::Mirror::Vector3Long, "Mirror", "Vector3Long");
// Dependencies 
namespace Mirror {
// Is value type: true
// CS Name: Mirror.Vector3Long
struct CORDL_TYPE Vector3Long {
public:
// Declarations
 __declspec(property(get=get_Item, put=set_Item)) int64_t  Item[];

/// @brief Field back, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_back, put=setStaticF_back)) ::Mirror::Vector3Long  back;

/// @brief Field down, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_down, put=setStaticF_down)) ::Mirror::Vector3Long  down;

/// @brief Field forward, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_forward, put=setStaticF_forward)) ::Mirror::Vector3Long  forward;

/// @brief Field left, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_left, put=setStaticF_left)) ::Mirror::Vector3Long  left;

/// @brief Field one, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_one, put=setStaticF_one)) ::Mirror::Vector3Long  one;

/// @brief Field right, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_right, put=setStaticF_right)) ::Mirror::Vector3Long  right;

/// @brief Field up, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_up, put=setStaticF_up)) ::Mirror::Vector3Long  up;

/// @brief Field zero, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::Mirror::Vector3Long  zero;

/// @brief Method Equals, addr 0x18158f960, size 0x30, virtual false, abstract: false, final false
inline bool Equals(::Mirror::Vector3Long  other) ;

/// @brief Method Equals, addr 0x18158f8d0, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode, addr 0x18158f990, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x18158f9b0, size 0x90, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x1815992b0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(int64_t  x, int64_t  y, int64_t  z) ;

static inline ::Mirror::Vector3Long getStaticF_back() ;

static inline ::Mirror::Vector3Long getStaticF_down() ;

static inline ::Mirror::Vector3Long getStaticF_forward() ;

static inline ::Mirror::Vector3Long getStaticF_left() ;

static inline ::Mirror::Vector3Long getStaticF_one() ;

static inline ::Mirror::Vector3Long getStaticF_right() ;

static inline ::Mirror::Vector3Long getStaticF_up() ;

static inline ::Mirror::Vector3Long getStaticF_zero() ;

/// @brief Method get_Item, addr 0x18158fa40, size 0x80, virtual false, abstract: false, final false
inline int64_t get_Item(int32_t  index) ;

/// @brief Method op_Addition, addr 0x1815992e0, size 0x30, virtual false, abstract: false, final false
static inline ::Mirror::Vector3Long op_Addition(::Mirror::Vector3Long  a, ::Mirror::Vector3Long  b) ;

/// @brief Method op_Equality, addr 0x18158f960, size 0x30, virtual false, abstract: false, final false
static inline bool op_Equality(::Mirror::Vector3Long  a, ::Mirror::Vector3Long  b) ;

/// @brief Method op_Inequality, addr 0x181599310, size 0x70, virtual false, abstract: false, final false
static inline bool op_Inequality(::Mirror::Vector3Long  a, ::Mirror::Vector3Long  b) ;

/// @brief Method op_Multiply, addr 0x1815993b0, size 0x30, virtual false, abstract: false, final false
static inline ::Mirror::Vector3Long op_Multiply(::Mirror::Vector3Long  a, int64_t  n) ;

/// @brief Method op_Multiply, addr 0x181599380, size 0x30, virtual false, abstract: false, final false
static inline ::Mirror::Vector3Long op_Multiply(int64_t  n, ::Mirror::Vector3Long  a) ;

/// @brief Method op_Subtraction, addr 0x1815993e0, size 0x30, virtual false, abstract: false, final false
static inline ::Mirror::Vector3Long op_Subtraction(::Mirror::Vector3Long  a, ::Mirror::Vector3Long  b) ;

/// @brief Method op_UnaryNegation, addr 0x181599410, size 0x80, virtual false, abstract: false, final false
static inline ::Mirror::Vector3Long op_UnaryNegation(::Mirror::Vector3Long  v) ;

static inline void setStaticF_back(::Mirror::Vector3Long  value) ;

static inline void setStaticF_down(::Mirror::Vector3Long  value) ;

static inline void setStaticF_forward(::Mirror::Vector3Long  value) ;

static inline void setStaticF_left(::Mirror::Vector3Long  value) ;

static inline void setStaticF_one(::Mirror::Vector3Long  value) ;

static inline void setStaticF_right(::Mirror::Vector3Long  value) ;

static inline void setStaticF_up(::Mirror::Vector3Long  value) ;

static inline void setStaticF_zero(::Mirror::Vector3Long  value) ;

/// @brief Method set_Item, addr 0x18158fac0, size 0x80, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, int64_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Vector3Long() ;

// Ctor Parameters [CppParam { name: "x", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "int64_t", modifiers: "", def_value: None }]
constexpr Vector3Long(int64_t  x, int64_t  y, int64_t  z) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18389};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field x, offset: 0x0, size: 0x8, def value: None
 int64_t  x;

/// @brief Field y, offset: 0x8, size: 0x8, def value: None
 int64_t  y;

/// @brief Field z, offset: 0x10, size: 0x8, def value: None
 int64_t  z;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Vector3Long, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::Vector3Long, y) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mirror::Vector3Long, z) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Mirror::Vector3Long) == 0x18, "Size mismatch!");

} // namespace end def Mirror
