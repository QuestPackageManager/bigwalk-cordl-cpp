#pragma once
// IWYU pragma private; include "Animancer/Examples/StateMachines/CharacterState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/FSM/zzzz__StateBehaviour_def.hpp"
#include "Animancer/FSM/zzzz__StateMachine`1_WithDefault_def.hpp"
CORDL_MODULE_EXPORT(CharacterState)
namespace Animancer::Examples::StateMachines {
struct CharacterStatePriority;
}
namespace Animancer::Examples::StateMachines {
class CharacterState_StateMachine;
}
namespace Animancer::Examples::StateMachines {
class Character;
}
// Forward declare root types
namespace Animancer::Examples::StateMachines {
class CharacterState;
}
namespace Animancer::Examples::StateMachines {
class CharacterState_StateMachine;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::StateMachines::CharacterState*);
MARK_REF_T(::Animancer::Examples::StateMachines::CharacterState_StateMachine*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::StateMachines::CharacterState*, "Animancer.Examples.StateMachines", "CharacterState");
DEFINE_IL2CPP_CLASS(::Animancer::Examples::StateMachines::CharacterState_StateMachine*, "Animancer.Examples.StateMachines", "CharacterState/StateMachine");
// Dependencies Animancer.FSM.StateMachine`1::WithDefault<TState>
namespace Animancer::Examples::StateMachines {
// Is value type: false
// CS Name: Animancer.Examples.StateMachines.CharacterState/StateMachine
class CORDL_TYPE CharacterState_StateMachine : public ::GlobalNamespace::StateMachine_1_WithDefault<::UnityW<::Animancer::Examples::StateMachines::CharacterState>> {
public:
// Declarations
static inline ::Animancer::Examples::StateMachines::CharacterState_StateMachine* New_ctor() ;

/// @brief Method .ctor, addr 0x1803024d0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CharacterState_StateMachine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CharacterState_StateMachine", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CharacterState_StateMachine(CharacterState_StateMachine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CharacterState_StateMachine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CharacterState_StateMachine(CharacterState_StateMachine const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19994};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::Examples::StateMachines::CharacterState_StateMachine) == 0x28, "Size mismatch!");

} // namespace end def Animancer::Examples::StateMachines
// Dependencies Animancer.FSM.StateBehaviour
namespace Animancer::Examples::StateMachines {
// Is value type: false
// CS Name: Animancer.Examples.StateMachines.CharacterState
class CORDL_TYPE CharacterState : public ::Animancer::FSM::StateBehaviour {
public:
// Declarations
using StateMachine = ::Animancer::Examples::StateMachines::CharacterState_StateMachine;

 __declspec(property(get=get_CanExitState)) bool  CanExitState;

 __declspec(property(get=get_CanInterruptSelf)) bool  CanInterruptSelf;

 __declspec(property(get=get_Character)) ::UnityW<::Animancer::Examples::StateMachines::Character>  Character;

 __declspec(property(get=get_Priority)) ::Animancer::Examples::StateMachines::CharacterStatePriority  Priority;

/// @brief Field _Character, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Character, put=__cordl_internal_set__Character)) ::UnityW<::Animancer::Examples::StateMachines::Character>  _Character;

static inline ::Animancer::Examples::StateMachines::CharacterState* New_ctor() ;

constexpr ::UnityW<::Animancer::Examples::StateMachines::Character> const& __cordl_internal_get__Character() const;

constexpr ::UnityW<::Animancer::Examples::StateMachines::Character>& __cordl_internal_get__Character() ;

constexpr void __cordl_internal_set__Character(::UnityW<::Animancer::Examples::StateMachines::Character>  value) ;

/// @brief Method .ctor, addr 0x1802f6460, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CanExitState, addr 0x1802f83c0, size 0xe0, virtual true, abstract: false, final false
inline bool get_CanExitState() ;

/// @brief Method get_CanInterruptSelf, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool get_CanInterruptSelf() ;

/// @brief Method get_Character, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::Animancer::Examples::StateMachines::Character> get_Character() ;

/// @brief Method get_Priority, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final false
inline ::Animancer::Examples::StateMachines::CharacterStatePriority get_Priority() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CharacterState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CharacterState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CharacterState(CharacterState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CharacterState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CharacterState(CharacterState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19995};

/// @brief Field _Character, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::Examples::StateMachines::Character>  ____Character;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::StateMachines::CharacterState, ____Character) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::StateMachines::CharacterState) == 0x28, "Size mismatch!");

} // namespace end def Animancer::Examples::StateMachines
