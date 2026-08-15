#pragma once
// IWYU pragma private; include "Animancer/Examples/StateMachines/WeaponsCharacterBrain.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/Examples/StateMachines/zzzz__Weapon_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(WeaponsCharacterBrain)
namespace Animancer::Examples::StateMachines {
class CharacterState;
}
namespace Animancer::Examples::StateMachines {
class Character;
}
namespace Animancer::Examples::StateMachines {
class EquipState;
}
namespace Animancer::FSM {
template<typename TState>
class StateMachine_1_InputBuffer;
}
// Forward declare root types
namespace Animancer::Examples::StateMachines {
class WeaponsCharacterBrain;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::StateMachines::WeaponsCharacterBrain*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::StateMachines::WeaponsCharacterBrain*, "Animancer.Examples.StateMachines", "WeaponsCharacterBrain");
// Dependencies Animancer.Examples.StateMachines.Weapon, UnityEngine.MonoBehaviour
namespace Animancer::Examples::StateMachines {
// Is value type: false
// CS Name: Animancer.Examples.StateMachines.WeaponsCharacterBrain
class CORDL_TYPE WeaponsCharacterBrain : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _Attack, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Attack, put=__cordl_internal_set__Attack)) ::UnityW<::Animancer::Examples::StateMachines::CharacterState>  _Attack;

/// @brief Field _Character, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Character, put=__cordl_internal_set__Character)) ::UnityW<::Animancer::Examples::StateMachines::Character>  _Character;

/// @brief Field _Equip, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__Equip, put=__cordl_internal_set__Equip)) ::UnityW<::Animancer::Examples::StateMachines::EquipState>  _Equip;

/// @brief Field _InputBuffer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__InputBuffer, put=__cordl_internal_set__InputBuffer)) ::Animancer::FSM::StateMachine_1_InputBuffer<::UnityW<::Animancer::Examples::StateMachines::CharacterState>>*  _InputBuffer;

/// @brief Field _InputTimeOut, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__InputTimeOut, put=__cordl_internal_set__InputTimeOut)) float_t  _InputTimeOut;

/// @brief Field _Move, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Move, put=__cordl_internal_set__Move)) ::UnityW<::Animancer::Examples::StateMachines::CharacterState>  _Move;

/// @brief Field _Weapons, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__Weapons, put=__cordl_internal_set__Weapons)) ::ArrayW<::UnityW<::Animancer::Examples::StateMachines::Weapon>>  _Weapons;

/// @brief Method Awake, addr 0x180303630, size 0x70, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Animancer::Examples::StateMachines::WeaponsCharacterBrain* New_ctor() ;

/// @brief Method Update, addr 0x180303790, size 0xe0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateAction, addr 0x1803036a0, size 0x50, virtual false, abstract: false, final false
inline void UpdateAction() ;

/// @brief Method UpdateEquip, addr 0x1803036f0, size 0xa0, virtual false, abstract: false, final false
inline void UpdateEquip() ;

/// @brief Method UpdateMovement, addr 0x1802ff2c0, size 0x2b0, virtual false, abstract: false, final false
inline void UpdateMovement() ;

constexpr ::UnityW<::Animancer::Examples::StateMachines::CharacterState> const& __cordl_internal_get__Attack() const;

constexpr ::UnityW<::Animancer::Examples::StateMachines::CharacterState>& __cordl_internal_get__Attack() ;

constexpr ::UnityW<::Animancer::Examples::StateMachines::Character> const& __cordl_internal_get__Character() const;

constexpr ::UnityW<::Animancer::Examples::StateMachines::Character>& __cordl_internal_get__Character() ;

constexpr ::UnityW<::Animancer::Examples::StateMachines::EquipState> const& __cordl_internal_get__Equip() const;

constexpr ::UnityW<::Animancer::Examples::StateMachines::EquipState>& __cordl_internal_get__Equip() ;

constexpr ::Animancer::FSM::StateMachine_1_InputBuffer<::UnityW<::Animancer::Examples::StateMachines::CharacterState>>* const& __cordl_internal_get__InputBuffer() const;

constexpr ::Animancer::FSM::StateMachine_1_InputBuffer<::UnityW<::Animancer::Examples::StateMachines::CharacterState>>*& __cordl_internal_get__InputBuffer() ;

constexpr float_t const& __cordl_internal_get__InputTimeOut() const;

constexpr float_t& __cordl_internal_get__InputTimeOut() ;

constexpr ::UnityW<::Animancer::Examples::StateMachines::CharacterState> const& __cordl_internal_get__Move() const;

constexpr ::UnityW<::Animancer::Examples::StateMachines::CharacterState>& __cordl_internal_get__Move() ;

constexpr ::ArrayW<::UnityW<::Animancer::Examples::StateMachines::Weapon>> const& __cordl_internal_get__Weapons() const;

constexpr ::ArrayW<::UnityW<::Animancer::Examples::StateMachines::Weapon>>& __cordl_internal_get__Weapons() ;

constexpr void __cordl_internal_set__Attack(::UnityW<::Animancer::Examples::StateMachines::CharacterState>  value) ;

constexpr void __cordl_internal_set__Character(::UnityW<::Animancer::Examples::StateMachines::Character>  value) ;

constexpr void __cordl_internal_set__Equip(::UnityW<::Animancer::Examples::StateMachines::EquipState>  value) ;

constexpr void __cordl_internal_set__InputBuffer(::Animancer::FSM::StateMachine_1_InputBuffer<::UnityW<::Animancer::Examples::StateMachines::CharacterState>>*  value) ;

constexpr void __cordl_internal_set__InputTimeOut(float_t  value) ;

constexpr void __cordl_internal_set__Move(::UnityW<::Animancer::Examples::StateMachines::CharacterState>  value) ;

constexpr void __cordl_internal_set__Weapons(::ArrayW<::UnityW<::Animancer::Examples::StateMachines::Weapon>>  value) ;

/// @brief Method .ctor, addr 0x1802fbfc0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WeaponsCharacterBrain() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WeaponsCharacterBrain", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WeaponsCharacterBrain(WeaponsCharacterBrain && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WeaponsCharacterBrain", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WeaponsCharacterBrain(WeaponsCharacterBrain const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20008};

/// @brief Field _Character, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::Examples::StateMachines::Character>  ____Character;

/// @brief Field _Move, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Animancer::Examples::StateMachines::CharacterState>  ____Move;

/// @brief Field _Attack, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Animancer::Examples::StateMachines::CharacterState>  ____Attack;

/// @brief Field _InputTimeOut, offset: 0x38, size: 0x4, def value: None
 float_t  ____InputTimeOut;

/// @brief Field _Equip, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Animancer::Examples::StateMachines::EquipState>  ____Equip;

/// @brief Field _Weapons, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::Animancer::Examples::StateMachines::Weapon>>  ____Weapons;

/// @brief Field _InputBuffer, offset: 0x50, size: 0x8, def value: None
 ::Animancer::FSM::StateMachine_1_InputBuffer<::UnityW<::Animancer::Examples::StateMachines::CharacterState>>*  ____InputBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::StateMachines::WeaponsCharacterBrain, ____Character) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::StateMachines::WeaponsCharacterBrain, ____Move) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::StateMachines::WeaponsCharacterBrain, ____Attack) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::StateMachines::WeaponsCharacterBrain, ____InputTimeOut) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::StateMachines::WeaponsCharacterBrain, ____Equip) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::StateMachines::WeaponsCharacterBrain, ____Weapons) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::StateMachines::WeaponsCharacterBrain, ____InputBuffer) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::StateMachines::WeaponsCharacterBrain) == 0x58, "Size mismatch!");

} // namespace end def Animancer::Examples::StateMachines
