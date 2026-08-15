#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/Data/CustomControllerElementTargetSetForFloat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/ComponentControls/Data/zzzz__CustomControllerElementTargetSet_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomControllerElementTargetSetForFloat)
namespace Rewired::ComponentControls::Data {
class CustomControllerElementTarget;
}
// Forward declare root types
namespace Rewired::ComponentControls::Data {
class CustomControllerElementTargetSetForFloat;
}
// Write type traits
MARK_REF_T(::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*);
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*, "Rewired.ComponentControls.Data", "CustomControllerElementTargetSetForFloat");
// Dependencies Rewired.ComponentControls.Data.CustomControllerElementTargetSet
namespace Rewired::ComponentControls::Data {
// Is value type: false
// CS Name: Rewired.ComponentControls.Data.CustomControllerElementTargetSetForFloat
class CORDL_TYPE CustomControllerElementTargetSetForFloat : public ::Rewired::ComponentControls::Data::CustomControllerElementTargetSet {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Rewired::ComponentControls::Data::CustomControllerElementTarget*  Item[];

/// @brief Field _negativeTarget, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__negativeTarget, put=__cordl_internal_set__negativeTarget)) ::Rewired::ComponentControls::Data::CustomControllerElementTarget*  _negativeTarget;

/// @brief Field _positiveTarget, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__positiveTarget, put=__cordl_internal_set__positiveTarget)) ::Rewired::ComponentControls::Data::CustomControllerElementTarget*  _positiveTarget;

/// @brief Field _splitValue, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__splitValue, put=__cordl_internal_set__splitValue)) bool  _splitValue;

/// @brief Field _target, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::Rewired::ComponentControls::Data::CustomControllerElementTarget*  _target;

 __declspec(property(get=get_negativeTarget)) ::Rewired::ComponentControls::Data::CustomControllerElementTarget*  negativeTarget;

 __declspec(property(get=get_positiveTarget)) ::Rewired::ComponentControls::Data::CustomControllerElementTarget*  positiveTarget;

 __declspec(property(get=get_splitValue, put=set_splitValue)) bool  splitValue;

 __declspec(property(get=get_target)) ::Rewired::ComponentControls::Data::CustomControllerElementTarget*  target;

 __declspec(property(get=get_targetCount)) int32_t  targetCount;

/// @brief Method ClearElementCaches, addr 0x1818f01b0, size 0x20, virtual true, abstract: false, final false
inline void ClearElementCaches() ;

static inline ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* New_ctor() ;

static inline ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* New_ctor(::Rewired::ComponentControls::Data::CustomControllerElementTarget*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* New_ctor(::Rewired::ComponentControls::Data::CustomControllerElementTarget*  _cordl_fixed_empty_name_whitespace, ::Rewired::ComponentControls::Data::CustomControllerElementTarget*  _cordl_fixed_empty_name_whitespace_param_1) ;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTarget* const& __cordl_internal_get__negativeTarget() const;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTarget*& __cordl_internal_get__negativeTarget() ;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTarget* const& __cordl_internal_get__positiveTarget() const;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTarget*& __cordl_internal_get__positiveTarget() ;

constexpr bool const& __cordl_internal_get__splitValue() const;

constexpr bool& __cordl_internal_get__splitValue() ;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTarget* const& __cordl_internal_get__target() const;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTarget*& __cordl_internal_get__target() ;

constexpr void __cordl_internal_set__negativeTarget(::Rewired::ComponentControls::Data::CustomControllerElementTarget*  value) ;

constexpr void __cordl_internal_set__positiveTarget(::Rewired::ComponentControls::Data::CustomControllerElementTarget*  value) ;

constexpr void __cordl_internal_set__splitValue(bool  value) ;

constexpr void __cordl_internal_set__target(::Rewired::ComponentControls::Data::CustomControllerElementTarget*  value) ;

/// @brief Method .ctor, addr 0x1818f01d0, size 0x210, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1818f0630, size 0x240, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ComponentControls::Data::CustomControllerElementTarget*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x1818f03e0, size 0x250, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ComponentControls::Data::CustomControllerElementTarget*  _cordl_fixed_empty_name_whitespace, ::Rewired::ComponentControls::Data::CustomControllerElementTarget*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method get_Item, addr 0x1818f0870, size 0x50, virtual true, abstract: false, final false
inline ::Rewired::ComponentControls::Data::CustomControllerElementTarget* get_Item(int32_t  index) ;

/// @brief Method get_negativeTarget, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::Data::CustomControllerElementTarget* get_negativeTarget() ;

/// @brief Method get_positiveTarget, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::Data::CustomControllerElementTarget* get_positiveTarget() ;

/// @brief Method get_splitValue, addr 0x180392490, size 0x10, virtual false, abstract: false, final false
inline bool get_splitValue() ;

/// @brief Method get_target, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::Data::CustomControllerElementTarget* get_target() ;

/// @brief Method get_targetCount, addr 0x1818f08c0, size 0x10, virtual true, abstract: false, final false
inline int32_t get_targetCount() ;

/// @brief Method set_splitValue, addr 0x1803924a0, size 0x10, virtual false, abstract: false, final false
inline void set_splitValue(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomControllerElementTargetSetForFloat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomControllerElementTargetSetForFloat", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomControllerElementTargetSetForFloat(CustomControllerElementTargetSetForFloat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomControllerElementTargetSetForFloat", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomControllerElementTargetSetForFloat(CustomControllerElementTargetSetForFloat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2810};

/// @brief Field _splitValue, offset: 0x10, size: 0x1, def value: None
 bool  ____splitValue;

/// @brief Field _target, offset: 0x18, size: 0x8, def value: None
 ::Rewired::ComponentControls::Data::CustomControllerElementTarget*  ____target;

/// @brief Field _positiveTarget, offset: 0x20, size: 0x8, def value: None
 ::Rewired::ComponentControls::Data::CustomControllerElementTarget*  ____positiveTarget;

/// @brief Field _negativeTarget, offset: 0x28, size: 0x8, def value: None
 ::Rewired::ComponentControls::Data::CustomControllerElementTarget*  ____negativeTarget;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat, ____splitValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat, ____target) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat, ____positiveTarget) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat, ____negativeTarget) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat) == 0x30, "Size mismatch!");

} // namespace end def Rewired::ComponentControls::Data
