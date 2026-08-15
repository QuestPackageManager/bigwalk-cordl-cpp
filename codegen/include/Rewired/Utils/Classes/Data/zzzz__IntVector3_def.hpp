#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/IntVector3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IntVector3)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Data {
class IntVector3;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Classes::Data::IntVector3*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Data::IntVector3*, "Rewired.Utils.Classes.Data", "IntVector3");
// Dependencies System.Object
namespace Rewired::Utils::Classes::Data {
// Is value type: false
// CS Name: Rewired.Utils.Classes.Data.IntVector3
class CORDL_TYPE IntVector3 : public ::System::Object {
public:
// Declarations
/// @brief Field x, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_x, put=__cordl_internal_set_x)) int32_t  x;

/// @brief Field y, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_y, put=__cordl_internal_set_y)) int32_t  y;

/// @brief Field z, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_z, put=__cordl_internal_set_z)) int32_t  z;

/// @brief Method Clone, addr 0x181954720, size 0x40, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::IntVector3* Clone() ;

static inline ::Rewired::Utils::Classes::Data::IntVector3* New_ctor() ;

static inline ::Rewired::Utils::Classes::Data::IntVector3* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2) ;

constexpr int32_t const& __cordl_internal_get_x() const;

constexpr int32_t& __cordl_internal_get_x() ;

constexpr int32_t const& __cordl_internal_get_y() const;

constexpr int32_t& __cordl_internal_get_y() ;

constexpr int32_t const& __cordl_internal_get_z() const;

constexpr int32_t& __cordl_internal_get_z() ;

constexpr void __cordl_internal_set_x(int32_t  value) ;

constexpr void __cordl_internal_set_y(int32_t  value) ;

constexpr void __cordl_internal_set_z(int32_t  value) ;

/// @brief Method .ctor, addr 0x181954760, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x181609290, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method op_Addition, addr 0x181954770, size 0x90, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::IntVector3* op_Addition(::Rewired::Utils::Classes::Data::IntVector3*  value1, ::Rewired::Utils::Classes::Data::IntVector3*  value2) ;

/// @brief Method op_Addition, addr 0x181954850, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::IntVector3* op_Addition(::Rewired::Utils::Classes::Data::IntVector3*  value1, int32_t  value2) ;

/// @brief Method op_Addition, addr 0x181954800, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 op_Addition(::Rewired::Utils::Classes::Data::IntVector3*  value1, float_t  value2) ;

/// @brief Method op_Division, addr 0x1819548b0, size 0x90, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::IntVector3* op_Division(::Rewired::Utils::Classes::Data::IntVector3*  value1, ::Rewired::Utils::Classes::Data::IntVector3*  value2) ;

/// @brief Method op_Division, addr 0x181954990, size 0x70, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::IntVector3* op_Division(::Rewired::Utils::Classes::Data::IntVector3*  value1, int32_t  value2) ;

/// @brief Method op_Division, addr 0x181954940, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 op_Division(::Rewired::Utils::Classes::Data::IntVector3*  value1, float_t  value2) ;

/// @brief Method op_Multiply, addr 0x181954a50, size 0x90, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::IntVector3* op_Multiply(::Rewired::Utils::Classes::Data::IntVector3*  value1, ::Rewired::Utils::Classes::Data::IntVector3*  value2) ;

/// @brief Method op_Multiply, addr 0x181954ae0, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::IntVector3* op_Multiply(::Rewired::Utils::Classes::Data::IntVector3*  value1, int32_t  value2) ;

/// @brief Method op_Multiply, addr 0x181954a00, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 op_Multiply(::Rewired::Utils::Classes::Data::IntVector3*  value1, float_t  value2) ;

/// @brief Method op_Subtraction, addr 0x181954b40, size 0x90, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::IntVector3* op_Subtraction(::Rewired::Utils::Classes::Data::IntVector3*  value1, ::Rewired::Utils::Classes::Data::IntVector3*  value2) ;

/// @brief Method op_Subtraction, addr 0x181954c20, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::IntVector3* op_Subtraction(::Rewired::Utils::Classes::Data::IntVector3*  value1, int32_t  value2) ;

/// @brief Method op_Subtraction, addr 0x181954bd0, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 op_Subtraction(::Rewired::Utils::Classes::Data::IntVector3*  value1, float_t  value2) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IntVector3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IntVector3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IntVector3(IntVector3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IntVector3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IntVector3(IntVector3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3041};

/// @brief Field x, offset: 0x10, size: 0x4, def value: None
 int32_t  ___x;

/// @brief Field y, offset: 0x14, size: 0x4, def value: None
 int32_t  ___y;

/// @brief Field z, offset: 0x18, size: 0x4, def value: None
 int32_t  ___z;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Data::IntVector3, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::IntVector3, ___y) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::IntVector3, ___z) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Data::IntVector3) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Data
