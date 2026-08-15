#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/IntPadding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IntPadding)
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Data {
class IntPadding;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Classes::Data::IntPadding*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Data::IntPadding*, "Rewired.Utils.Classes.Data", "IntPadding");
// Dependencies System.Object
namespace Rewired::Utils::Classes::Data {
// Is value type: false
// CS Name: Rewired.Utils.Classes.Data.IntPadding
class CORDL_TYPE IntPadding : public ::System::Object {
public:
// Declarations
/// @brief Field bottom, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_bottom, put=__cordl_internal_set_bottom)) int32_t  bottom;

/// @brief Field left, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_left, put=__cordl_internal_set_left)) int32_t  left;

/// @brief Field right, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_right, put=__cordl_internal_set_right)) int32_t  right;

/// @brief Field top, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_top, put=__cordl_internal_set_top)) int32_t  top;

/// @brief Method Clone, addr 0x181953b50, size 0x50, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::IntPadding* Clone() ;

static inline ::Rewired::Utils::Classes::Data::IntPadding* New_ctor() ;

static inline ::Rewired::Utils::Classes::Data::IntPadding* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3) ;

constexpr int32_t const& __cordl_internal_get_bottom() const;

constexpr int32_t& __cordl_internal_get_bottom() ;

constexpr int32_t const& __cordl_internal_get_left() const;

constexpr int32_t& __cordl_internal_get_left() ;

constexpr int32_t const& __cordl_internal_get_right() const;

constexpr int32_t& __cordl_internal_get_right() ;

constexpr int32_t const& __cordl_internal_get_top() const;

constexpr int32_t& __cordl_internal_get_top() ;

constexpr void __cordl_internal_set_bottom(int32_t  value) ;

constexpr void __cordl_internal_set_left(int32_t  value) ;

constexpr void __cordl_internal_set_right(int32_t  value) ;

constexpr void __cordl_internal_set_top(int32_t  value) ;

/// @brief Method .ctor, addr 0x181953ba0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1816627c0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method op_Addition, addr 0x181953c60, size 0xb0, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::IntPadding* op_Addition(::Rewired::Utils::Classes::Data::IntPadding*  value1, ::Rewired::Utils::Classes::Data::IntPadding*  value2) ;

/// @brief Method op_Addition, addr 0x181953bb0, size 0x50, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::IntPadding* op_Addition(::Rewired::Utils::Classes::Data::IntPadding*  value1, int32_t  value2) ;

/// @brief Method op_Addition, addr 0x181953c00, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 op_Addition(::Rewired::Utils::Classes::Data::IntPadding*  value1, float_t  value2) ;

/// @brief Method op_Division, addr 0x181953da0, size 0xc0, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::IntPadding* op_Division(::Rewired::Utils::Classes::Data::IntPadding*  value1, ::Rewired::Utils::Classes::Data::IntPadding*  value2) ;

/// @brief Method op_Division, addr 0x181953d10, size 0x90, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::IntPadding* op_Division(::Rewired::Utils::Classes::Data::IntPadding*  value1, int32_t  value2) ;

/// @brief Method op_Division, addr 0x181953e60, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 op_Division(::Rewired::Utils::Classes::Data::IntPadding*  value1, float_t  value2) ;

/// @brief Method op_Multiply, addr 0x181953ec0, size 0xb0, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::IntPadding* op_Multiply(::Rewired::Utils::Classes::Data::IntPadding*  value1, ::Rewired::Utils::Classes::Data::IntPadding*  value2) ;

/// @brief Method op_Multiply, addr 0x181953f70, size 0x80, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::IntPadding* op_Multiply(::Rewired::Utils::Classes::Data::IntPadding*  value1, int32_t  value2) ;

/// @brief Method op_Multiply, addr 0x181953ff0, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 op_Multiply(::Rewired::Utils::Classes::Data::IntPadding*  value1, float_t  value2) ;

/// @brief Method op_Subtraction, addr 0x1819540b0, size 0xb0, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::IntPadding* op_Subtraction(::Rewired::Utils::Classes::Data::IntPadding*  value1, ::Rewired::Utils::Classes::Data::IntPadding*  value2) ;

/// @brief Method op_Subtraction, addr 0x181954160, size 0x50, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::IntPadding* op_Subtraction(::Rewired::Utils::Classes::Data::IntPadding*  value1, int32_t  value2) ;

/// @brief Method op_Subtraction, addr 0x181954050, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 op_Subtraction(::Rewired::Utils::Classes::Data::IntPadding*  value1, float_t  value2) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IntPadding() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IntPadding", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IntPadding(IntPadding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IntPadding", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IntPadding(IntPadding const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3044};

/// @brief Field top, offset: 0x10, size: 0x4, def value: None
 int32_t  ___top;

/// @brief Field right, offset: 0x14, size: 0x4, def value: None
 int32_t  ___right;

/// @brief Field bottom, offset: 0x18, size: 0x4, def value: None
 int32_t  ___bottom;

/// @brief Field left, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___left;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Data::IntPadding, ___top) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::IntPadding, ___right) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::IntPadding, ___bottom) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::IntPadding, ___left) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Data::IntPadding) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Data
