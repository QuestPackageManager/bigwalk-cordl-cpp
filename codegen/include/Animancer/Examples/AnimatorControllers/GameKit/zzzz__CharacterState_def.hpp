#pragma once
// IWYU pragma private; include "Animancer/Examples/AnimatorControllers/GameKit/CharacterState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/FSM/zzzz__StateBehaviour_def.hpp"
#include "Animancer/FSM/zzzz__StateMachine`1_WithDefault_def.hpp"
CORDL_MODULE_EXPORT(CharacterState)
namespace Animancer::Examples::AnimatorControllers::GameKit {
class CharacterState_StateMachine;
}
namespace Animancer::Examples::AnimatorControllers::GameKit {
class Character;
}
namespace Animancer::FSM {
template<typename TState>
class IOwnedState_1;
}
namespace Animancer::FSM {
class IState;
}
namespace Animancer::FSM {
template<typename TState>
class StateMachine_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Animancer::Examples::AnimatorControllers::GameKit {
class CharacterState;
}
namespace Animancer::Examples::AnimatorControllers::GameKit {
class CharacterState_StateMachine;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::AnimatorControllers::GameKit::CharacterState*);
MARK_REF_T(::Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::AnimatorControllers::GameKit::CharacterState*, "Animancer.Examples.AnimatorControllers.GameKit", "CharacterState");
DEFINE_IL2CPP_CLASS(::Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine*, "Animancer.Examples.AnimatorControllers.GameKit", "CharacterState/StateMachine");
// Dependencies Animancer.FSM.StateMachine`1::WithDefault<TState>
namespace Animancer::Examples::AnimatorControllers::GameKit {
// Is value type: false
// CS Name: Animancer.Examples.AnimatorControllers.GameKit.CharacterState/StateMachine
class CORDL_TYPE CharacterState_StateMachine : public ::GlobalNamespace::StateMachine_1_WithDefault<::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>> {
public:
// Declarations
 __declspec(property(get=get_Airborne)) ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>  Airborne;

 __declspec(property(get=get_Locomotion)) ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>  Locomotion;

/// @brief Field _Airborne, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Airborne, put=__cordl_internal_set__Airborne)) ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>  _Airborne;

/// @brief Field _Locomotion, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Locomotion, put=__cordl_internal_set__Locomotion)) ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>  _Locomotion;

static inline ::Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine* New_ctor() ;

constexpr ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState> const& __cordl_internal_get__Airborne() const;

constexpr ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>& __cordl_internal_get__Airborne() ;

constexpr ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState> const& __cordl_internal_get__Locomotion() const;

constexpr ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>& __cordl_internal_get__Locomotion() ;

constexpr void __cordl_internal_set__Airborne(::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>  value) ;

constexpr void __cordl_internal_set__Locomotion(::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>  value) ;

/// @brief Method .ctor, addr 0x1803024c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Airborne, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState> get_Airborne() ;

/// @brief Method get_Locomotion, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState> get_Locomotion() ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19973};

/// @brief Field _Locomotion, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>  ____Locomotion;

/// @brief Field _Airborne, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>  ____Airborne;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine, ____Locomotion) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine, ____Airborne) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine) == 0x38, "Size mismatch!");

} // namespace end def Animancer::Examples::AnimatorControllers::GameKit
// Dependencies Animancer.FSM.StateBehaviour
namespace Animancer::Examples::AnimatorControllers::GameKit {
// Is value type: false
// CS Name: Animancer.Examples.AnimatorControllers.GameKit.CharacterState
class CORDL_TYPE CharacterState : public ::Animancer::FSM::StateBehaviour {
public:
// Declarations
using StateMachine = ::Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine;

 __declspec(property(get=get_Character)) ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::Character>  Character;

 __declspec(property(get=get_FullMovementControl)) bool  FullMovementControl;

 __declspec(property(get=get_OwnerStateMachine)) ::Animancer::FSM::StateMachine_1<::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>>*  OwnerStateMachine;

 __declspec(property(get=get_RootMotion)) ::UnityEngine::Vector3  RootMotion;

 __declspec(property(get=get_StickToGround)) bool  StickToGround;

/// @brief Field _Character, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Character, put=__cordl_internal_set__Character)) ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::Character>  _Character;

/// @brief Convert operator to "::Animancer::FSM::IOwnedState_1<::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>>"
constexpr operator  ::Animancer::FSM::IOwnedState_1<::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>>*() noexcept;

/// @brief Convert operator to "::Animancer::FSM::IState"
constexpr operator  ::Animancer::FSM::IState*() noexcept;

static inline ::Animancer::Examples::AnimatorControllers::GameKit::CharacterState* New_ctor() ;

constexpr ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::Character> const& __cordl_internal_get__Character() const;

constexpr ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::Character>& __cordl_internal_get__Character() ;

constexpr void __cordl_internal_set__Character(::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::Character>  value) ;

/// @brief Method .ctor, addr 0x1802f6460, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Character, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::Character> get_Character() ;

/// @brief Method get_FullMovementControl, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_FullMovementControl() ;

/// @brief Method get_OwnerStateMachine, addr 0x1802f84a0, size 0x20, virtual true, abstract: false, final true
inline ::Animancer::FSM::StateMachine_1<::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>>* get_OwnerStateMachine() ;

/// @brief Method get_RootMotion, addr 0x1802f84c0, size 0x40, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 get_RootMotion() ;

/// @brief Method get_StickToGround, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_StickToGround() ;

/// @brief Convert to "::Animancer::FSM::IOwnedState_1<::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>>"
constexpr ::Animancer::FSM::IOwnedState_1<::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>>* i___Animancer__FSM__IOwnedState_1___UnityW___Animancer__Examples__AnimatorControllers__GameKit__CharacterState__() noexcept;

/// @brief Convert to "::Animancer::FSM::IState"
constexpr ::Animancer::FSM::IState* i___Animancer__FSM__IState() noexcept;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19974};

/// @brief Field _Character, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::Character>  ____Character;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::CharacterState, ____Character) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::AnimatorControllers::GameKit::CharacterState) == 0x28, "Size mismatch!");

} // namespace end def Animancer::Examples::AnimatorControllers::GameKit
