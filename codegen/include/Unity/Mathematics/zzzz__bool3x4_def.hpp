#pragma once
// IWYU pragma private; include "Unity/Mathematics/bool3x4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__bool3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(bool3x4)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct bool3;
}
// Forward declare root types
namespace Unity::Mathematics {
struct bool3x4;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::bool3x4);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::bool3x4, "Unity.Mathematics", "bool3x4");
// Dependencies Unity.Mathematics.bool3
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.bool3x4
struct CORDL_TYPE bool3x4 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Unity::Mathematics::bool3  Item[];

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::bool3x4>"
constexpr operator  ::System::IEquatable_1<::Unity::Mathematics::bool3x4>*() ;

/// @brief Method Equals, addr 0x181f530b0, size 0x1a0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x181f4be60, size 0x90, virtual true, abstract: false, final true
inline bool Equals(::Unity::Mathematics::bool3x4  rhs) ;

/// @brief Method GetHashCode, addr 0x181f4bef0, size 0x30, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x181f4bf20, size 0x210, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x181ecf8d0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::bool3  c0, ::Unity::Mathematics::bool3  c1, ::Unity::Mathematics::bool3  c2, ::Unity::Mathematics::bool3  c3) ;

/// @brief Method .ctor, addr 0x181ecf840, size 0x90, virtual false, abstract: false, final false
inline void _ctor(bool  m00, bool  m01, bool  m02, bool  m03, bool  m10, bool  m11, bool  m12, bool  m13, bool  m20, bool  m21, bool  m22, bool  m23) ;

/// @brief Method .ctor, addr 0x181ecf7f0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(bool  v) ;

/// @brief Method get_Item, addr 0x181f51ac0, size 0x20, virtual false, abstract: false, final false
inline ::by_ref<::Unity::Mathematics::bool3> get_Item(int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::bool3x4>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::bool3x4>* i___System__IEquatable_1___Unity__Mathematics__bool3x4_() ;

/// @brief Method op_BitwiseAnd, addr 0x181f53330, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_BitwiseAnd(::Unity::Mathematics::bool3x4  lhs, ::Unity::Mathematics::bool3x4  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x181f53430, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_BitwiseAnd(::Unity::Mathematics::bool3x4  lhs, bool  rhs) ;

/// @brief Method op_BitwiseAnd, addr 0x181f53250, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_BitwiseAnd(bool  lhs, ::Unity::Mathematics::bool3x4  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x181f536f0, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_BitwiseOr(::Unity::Mathematics::bool3x4  lhs, ::Unity::Mathematics::bool3x4  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x181f53600, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_BitwiseOr(::Unity::Mathematics::bool3x4  lhs, bool  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x181f53510, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_BitwiseOr(bool  lhs, ::Unity::Mathematics::bool3x4  rhs) ;

/// @brief Method op_Equality, addr 0x181f538d0, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Equality(::Unity::Mathematics::bool3x4  lhs, ::Unity::Mathematics::bool3x4  rhs) ;

/// @brief Method op_Equality, addr 0x181f539e0, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Equality(::Unity::Mathematics::bool3x4  lhs, bool  rhs) ;

/// @brief Method op_Equality, addr 0x181f53800, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Equality(bool  lhs, ::Unity::Mathematics::bool3x4  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x181f53ab0, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_ExclusiveOr(::Unity::Mathematics::bool3x4  lhs, ::Unity::Mathematics::bool3x4  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x181f53bc0, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_ExclusiveOr(::Unity::Mathematics::bool3x4  lhs, bool  rhs) ;

/// @brief Method op_ExclusiveOr, addr 0x181f53cb0, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_ExclusiveOr(bool  lhs, ::Unity::Mathematics::bool3x4  rhs) ;

/// @brief Method op_Implicit, addr 0x181ee25d0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Implicit___Unity__Mathematics__bool3x4(bool  v) ;

/// @brief Method op_Inequality, addr 0x181f53e70, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Inequality(::Unity::Mathematics::bool3x4  lhs, ::Unity::Mathematics::bool3x4  rhs) ;

/// @brief Method op_Inequality, addr 0x181f53da0, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Inequality(::Unity::Mathematics::bool3x4  lhs, bool  rhs) ;

/// @brief Method op_Inequality, addr 0x181f53f80, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_Inequality(bool  lhs, ::Unity::Mathematics::bool3x4  rhs) ;

/// @brief Method op_LogicalNot, addr 0x181f54050, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 op_LogicalNot(::Unity::Mathematics::bool3x4  val) ;

// Ctor Parameters []
// @brief default ctor
constexpr bool3x4() ;

// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::bool3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::bool3", modifiers: "", def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::bool3", modifiers: "", def_value: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::bool3", modifiers: "", def_value: None }]
constexpr bool3x4(::Unity::Mathematics::bool3  c0, ::Unity::Mathematics::bool3  c1, ::Unity::Mathematics::bool3  c2, ::Unity::Mathematics::bool3  c3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12769};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field c0, offset: 0x0, size: 0x3, def value: None
 ::Unity::Mathematics::bool3  c0;

/// @brief Field c1, offset: 0x3, size: 0x3, def value: None
 ::Unity::Mathematics::bool3  c1;

/// @brief Field c2, offset: 0x6, size: 0x3, def value: None
 ::Unity::Mathematics::bool3  c2;

/// @brief Field c3, offset: 0x9, size: 0x3, def value: None
 ::Unity::Mathematics::bool3  c3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::bool3x4, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool3x4, c1) == 0x3, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool3x4, c2) == 0x6, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool3x4, c3) == 0x9, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::bool3x4) == 0xc, "Size mismatch!");

} // namespace end def Unity::Mathematics
