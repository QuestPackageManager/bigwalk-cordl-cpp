#pragma once
// IWYU pragma private; include "Animancer/Examples/StateMachines/Weapon.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__ClipTransition_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(Weapon)
namespace Animancer {
class ClipTransition;
}
// Forward declare root types
namespace Animancer::Examples::StateMachines {
class Weapon;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::StateMachines::Weapon*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::StateMachines::Weapon*, "Animancer.Examples.StateMachines", "Weapon");
// Dependencies Animancer.ClipTransition, UnityEngine.MonoBehaviour
namespace Animancer::Examples::StateMachines {
// Is value type: false
// CS Name: Animancer.Examples.StateMachines.Weapon
class CORDL_TYPE Weapon : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_AttackAnimations)) ::ArrayW<::Animancer::ClipTransition*>  AttackAnimations;

 __declspec(property(get=get_EquipAnimation)) ::Animancer::ClipTransition*  EquipAnimation;

 __declspec(property(get=get_UnequipAnimation)) ::Animancer::ClipTransition*  UnequipAnimation;

/// @brief Field _AttackAnimations, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__AttackAnimations, put=__cordl_internal_set__AttackAnimations)) ::ArrayW<::Animancer::ClipTransition*>  _AttackAnimations;

/// @brief Field _EquipAnimation, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__EquipAnimation, put=__cordl_internal_set__EquipAnimation)) ::Animancer::ClipTransition*  _EquipAnimation;

/// @brief Field _UnequipAnimation, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__UnequipAnimation, put=__cordl_internal_set__UnequipAnimation)) ::Animancer::ClipTransition*  _UnequipAnimation;

static inline ::Animancer::Examples::StateMachines::Weapon* New_ctor() ;

constexpr ::ArrayW<::Animancer::ClipTransition*> const& __cordl_internal_get__AttackAnimations() const;

constexpr ::ArrayW<::Animancer::ClipTransition*>& __cordl_internal_get__AttackAnimations() ;

constexpr ::Animancer::ClipTransition* const& __cordl_internal_get__EquipAnimation() const;

constexpr ::Animancer::ClipTransition*& __cordl_internal_get__EquipAnimation() ;

constexpr ::Animancer::ClipTransition* const& __cordl_internal_get__UnequipAnimation() const;

constexpr ::Animancer::ClipTransition*& __cordl_internal_get__UnequipAnimation() ;

constexpr void __cordl_internal_set__AttackAnimations(::ArrayW<::Animancer::ClipTransition*>  value) ;

constexpr void __cordl_internal_set__EquipAnimation(::Animancer::ClipTransition*  value) ;

constexpr void __cordl_internal_set__UnequipAnimation(::Animancer::ClipTransition*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AttackAnimations, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Animancer::ClipTransition*> get_AttackAnimations() ;

/// @brief Method get_EquipAnimation, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::Animancer::ClipTransition* get_EquipAnimation() ;

/// @brief Method get_UnequipAnimation, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::Animancer::ClipTransition* get_UnequipAnimation() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Weapon() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Weapon", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Weapon(Weapon && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Weapon", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Weapon(Weapon const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20007};

/// @brief Field _AttackAnimations, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::Animancer::ClipTransition*>  ____AttackAnimations;

/// @brief Field _EquipAnimation, offset: 0x28, size: 0x8, def value: None
 ::Animancer::ClipTransition*  ____EquipAnimation;

/// @brief Field _UnequipAnimation, offset: 0x30, size: 0x8, def value: None
 ::Animancer::ClipTransition*  ____UnequipAnimation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::StateMachines::Weapon, ____AttackAnimations) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::StateMachines::Weapon, ____EquipAnimation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::StateMachines::Weapon, ____UnequipAnimation) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::StateMachines::Weapon) == 0x38, "Size mismatch!");

} // namespace end def Animancer::Examples::StateMachines
