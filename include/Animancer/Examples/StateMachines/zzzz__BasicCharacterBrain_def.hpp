#pragma once
// IWYU pragma private; include "Animancer/Examples/StateMachines/BasicCharacterBrain.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BasicCharacterBrain)
namespace Animancer::Examples::StateMachines {
class CharacterState;
}
namespace Animancer::Examples::StateMachines {
class Character;
}
// Forward declare root types
namespace Animancer::Examples::StateMachines {
class BasicCharacterBrain;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::StateMachines::BasicCharacterBrain*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::StateMachines::BasicCharacterBrain*, "Animancer.Examples.StateMachines", "BasicCharacterBrain");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer::Examples::StateMachines {
// Is value type: false
// CS Name: Animancer.Examples.StateMachines.BasicCharacterBrain
class CORDL_TYPE BasicCharacterBrain : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _Action, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Action, put=__cordl_internal_set__Action)) ::UnityW<::Animancer::Examples::StateMachines::CharacterState>  _Action;

/// @brief Field _Character, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Character, put=__cordl_internal_set__Character)) ::UnityW<::Animancer::Examples::StateMachines::Character>  _Character;

/// @brief Field _Move, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Move, put=__cordl_internal_set__Move)) ::UnityW<::Animancer::Examples::StateMachines::CharacterState>  _Move;

static inline ::Animancer::Examples::StateMachines::BasicCharacterBrain* New_ctor() ;

/// @brief Method Update, addr 0x1802f70d0, size 0xb0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateAction, addr 0x1802f7010, size 0x50, virtual false, abstract: false, final false
inline void UpdateAction() ;

/// @brief Method UpdateMovement, addr 0x1802f7060, size 0x70, virtual false, abstract: false, final false
inline void UpdateMovement() ;

constexpr ::UnityW<::Animancer::Examples::StateMachines::CharacterState> const& __cordl_internal_get__Action() const;

constexpr ::UnityW<::Animancer::Examples::StateMachines::CharacterState>& __cordl_internal_get__Action() ;

constexpr ::UnityW<::Animancer::Examples::StateMachines::Character> const& __cordl_internal_get__Character() const;

constexpr ::UnityW<::Animancer::Examples::StateMachines::Character>& __cordl_internal_get__Character() ;

constexpr ::UnityW<::Animancer::Examples::StateMachines::CharacterState> const& __cordl_internal_get__Move() const;

constexpr ::UnityW<::Animancer::Examples::StateMachines::CharacterState>& __cordl_internal_get__Move() ;

constexpr void __cordl_internal_set__Action(::UnityW<::Animancer::Examples::StateMachines::CharacterState>  value) ;

constexpr void __cordl_internal_set__Character(::UnityW<::Animancer::Examples::StateMachines::Character>  value) ;

constexpr void __cordl_internal_set__Move(::UnityW<::Animancer::Examples::StateMachines::CharacterState>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BasicCharacterBrain() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BasicCharacterBrain", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BasicCharacterBrain(BasicCharacterBrain && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BasicCharacterBrain", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BasicCharacterBrain(BasicCharacterBrain const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19992};

/// @brief Field _Character, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::Examples::StateMachines::Character>  ____Character;

/// @brief Field _Move, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Animancer::Examples::StateMachines::CharacterState>  ____Move;

/// @brief Field _Action, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Animancer::Examples::StateMachines::CharacterState>  ____Action;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::StateMachines::BasicCharacterBrain, ____Character) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::StateMachines::BasicCharacterBrain, ____Move) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::StateMachines::BasicCharacterBrain, ____Action) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::StateMachines::BasicCharacterBrain) == 0x38, "Size mismatch!");

} // namespace end def Animancer::Examples::StateMachines
