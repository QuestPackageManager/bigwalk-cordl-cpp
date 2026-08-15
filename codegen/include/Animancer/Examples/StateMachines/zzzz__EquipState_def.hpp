#pragma once
// IWYU pragma private; include "Animancer/Examples/StateMachines/EquipState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/Examples/StateMachines/zzzz__CharacterState_def.hpp"
CORDL_MODULE_EXPORT(EquipState)
namespace Animancer::Examples::StateMachines {
struct CharacterStatePriority;
}
namespace Animancer::Examples::StateMachines {
class Weapon;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Animancer::Examples::StateMachines {
class EquipState;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::StateMachines::EquipState*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::StateMachines::EquipState*, "Animancer.Examples.StateMachines", "EquipState");
// Dependencies Animancer.Examples.StateMachines.CharacterState
namespace Animancer::Examples::StateMachines {
// Is value type: false
// CS Name: Animancer.Examples.StateMachines.EquipState
class CORDL_TYPE EquipState : public ::Animancer::Examples::StateMachines::CharacterState {
public:
// Declarations
 __declspec(property(get=get_CanEnterState)) bool  CanEnterState;

 __declspec(property(get=get_CurrentWeapon)) ::UnityW<::Animancer::Examples::StateMachines::Weapon>  CurrentWeapon;

 __declspec(property(get=get_NextWeapon, put=set_NextWeapon)) ::UnityW<::Animancer::Examples::StateMachines::Weapon>  NextWeapon;

 __declspec(property(get=get_Priority)) ::Animancer::Examples::StateMachines::CharacterStatePriority  Priority;

/// @brief Field <NextWeapon>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__NextWeapon_k__BackingField, put=__cordl_internal_set__NextWeapon_k__BackingField)) ::UnityW<::Animancer::Examples::StateMachines::Weapon>  _NextWeapon_k__BackingField;

/// @brief Field _OnUnequipEnd, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnUnequipEnd, put=__cordl_internal_set__OnUnequipEnd)) ::System::Action*  _OnUnequipEnd;

/// @brief Method Awake, addr 0x1802fac00, size 0x80, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Animancer::Examples::StateMachines::EquipState* New_ctor() ;

/// @brief Method OnEnable, addr 0x1802fac80, size 0xc0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnUnequipEnd, addr 0x1802fad40, size 0x1d0, virtual false, abstract: false, final false
inline void OnUnequipEnd() ;

constexpr ::UnityW<::Animancer::Examples::StateMachines::Weapon> const& __cordl_internal_get__NextWeapon_k__BackingField() const;

constexpr ::UnityW<::Animancer::Examples::StateMachines::Weapon>& __cordl_internal_get__NextWeapon_k__BackingField() ;

constexpr ::System::Action* const& __cordl_internal_get__OnUnequipEnd() const;

constexpr ::System::Action*& __cordl_internal_get__OnUnequipEnd() ;

constexpr void __cordl_internal_set__NextWeapon_k__BackingField(::UnityW<::Animancer::Examples::StateMachines::Weapon>  value) ;

constexpr void __cordl_internal_set__OnUnequipEnd(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x1802f6460, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CanEnterState, addr 0x1802faf10, size 0x50, virtual true, abstract: false, final false
inline bool get_CanEnterState() ;

/// @brief Method get_CurrentWeapon, addr 0x1802f6d80, size 0x30, virtual false, abstract: false, final false
inline ::UnityW<::Animancer::Examples::StateMachines::Weapon> get_CurrentWeapon() ;

/// @brief Method get_NextWeapon, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::Animancer::Examples::StateMachines::Weapon> get_NextWeapon() ;

/// @brief Method get_Priority, addr 0x1802edd00, size 0x10, virtual true, abstract: false, final false
inline ::Animancer::Examples::StateMachines::CharacterStatePriority get_Priority() ;

/// @brief Method set_NextWeapon, addr 0x1802d9830, size 0x10, virtual false, abstract: false, final false
inline void set_NextWeapon(::Animancer::Examples::StateMachines::Weapon*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EquipState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EquipState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EquipState(EquipState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EquipState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EquipState(EquipState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20005};

/// @brief Field _OnUnequipEnd, offset: 0x28, size: 0x8, def value: None
 ::System::Action*  ____OnUnequipEnd;

/// @brief Field <NextWeapon>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Animancer::Examples::StateMachines::Weapon>  ____NextWeapon_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::StateMachines::EquipState, ____OnUnequipEnd) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::StateMachines::EquipState, ____NextWeapon_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::StateMachines::EquipState) == 0x38, "Size mismatch!");

} // namespace end def Animancer::Examples::StateMachines
