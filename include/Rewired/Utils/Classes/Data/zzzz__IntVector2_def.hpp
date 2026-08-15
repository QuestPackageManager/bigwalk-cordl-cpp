#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/IntVector2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IntVector2)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Data {
class IntVector2;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Classes::Data::IntVector2*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Data::IntVector2*, "Rewired.Utils.Classes.Data", "IntVector2");
// Dependencies System.Object
namespace Rewired::Utils::Classes::Data {
// Is value type: false
// CS Name: Rewired.Utils.Classes.Data.IntVector2
class CORDL_TYPE IntVector2 : public ::System::Object {
public:
// Declarations
/// @brief Field x, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_x, put=__cordl_internal_set_x)) int32_t  x;

/// @brief Field y, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_y, put=__cordl_internal_set_y)) int32_t  y;

/// @brief Method Clone, addr 0x1819542c0, size 0x30, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::IntVector2* Clone() ;

/// @brief Method Clone, addr 0x1819542f0, size 0x50, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::IntVector2* Clone(::Rewired::Utils::Classes::Data::IntVector2*  intVector2) ;

static inline ::Rewired::Utils::Classes::Data::IntVector2* New_ctor() ;

static inline ::Rewired::Utils::Classes::Data::IntVector2* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

constexpr int32_t const& __cordl_internal_get_x() const;

constexpr int32_t& __cordl_internal_get_x() ;

constexpr int32_t const& __cordl_internal_get_y() const;

constexpr int32_t& __cordl_internal_get_y() ;

constexpr void __cordl_internal_set_x(int32_t  value) ;

constexpr void __cordl_internal_set_y(int32_t  value) ;

/// @brief Method .ctor, addr 0x1818f37c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1805f5cb0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method op_Addition, addr 0x1819543d0, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::IntVector2* op_Addition(::Rewired::Utils::Classes::Data::IntVector2*  value1, ::Rewired::Utils::Classes::Data::IntVector2*  value2) ;

/// @brief Method op_Addition, addr 0x181954340, size 0x50, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::IntVector2* op_Addition(::Rewired::Utils::Classes::Data::IntVector2*  value1, int32_t  value2) ;

/// @brief Method op_Addition, addr 0x181954390, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 op_Addition(::Rewired::Utils::Classes::Data::IntVector2*  value1, float_t  value2) ;

/// @brief Method op_Division, addr 0x1819544d0, size 0x70, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::IntVector2* op_Division(::Rewired::Utils::Classes::Data::IntVector2*  value1, ::Rewired::Utils::Classes::Data::IntVector2*  value2) ;

/// @brief Method op_Division, addr 0x181954470, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::IntVector2* op_Division(::Rewired::Utils::Classes::Data::IntVector2*  value1, int32_t  value2) ;

/// @brief Method op_Division, addr 0x181954430, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 op_Division(::Rewired::Utils::Classes::Data::IntVector2*  value1, float_t  value2) ;

/// @brief Method op_Multiply, addr 0x181954590, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::IntVector2* op_Multiply(::Rewired::Utils::Classes::Data::IntVector2*  value1, ::Rewired::Utils::Classes::Data::IntVector2*  value2) ;

/// @brief Method op_Multiply, addr 0x181954540, size 0x50, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::IntVector2* op_Multiply(::Rewired::Utils::Classes::Data::IntVector2*  value1, int32_t  value2) ;

/// @brief Method op_Multiply, addr 0x1819545f0, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 op_Multiply(::Rewired::Utils::Classes::Data::IntVector2*  value1, float_t  value2) ;

/// @brief Method op_Subtraction, addr 0x181954630, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::IntVector2* op_Subtraction(::Rewired::Utils::Classes::Data::IntVector2*  value1, ::Rewired::Utils::Classes::Data::IntVector2*  value2) ;

/// @brief Method op_Subtraction, addr 0x1819546d0, size 0x50, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::IntVector2* op_Subtraction(::Rewired::Utils::Classes::Data::IntVector2*  value1, int32_t  value2) ;

/// @brief Method op_Subtraction, addr 0x181954690, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 op_Subtraction(::Rewired::Utils::Classes::Data::IntVector2*  value1, float_t  value2) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IntVector2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IntVector2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IntVector2(IntVector2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IntVector2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IntVector2(IntVector2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3040};

/// @brief Field x, offset: 0x10, size: 0x4, def value: None
 int32_t  ___x;

/// @brief Field y, offset: 0x14, size: 0x4, def value: None
 int32_t  ___y;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Data::IntVector2, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::IntVector2, ___y) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Data::IntVector2) == 0x18, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Data
