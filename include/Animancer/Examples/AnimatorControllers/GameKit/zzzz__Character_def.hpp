#pragma once
// IWYU pragma private; include "Animancer/Examples/AnimatorControllers/GameKit/Character.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(Character)
namespace Animancer::Examples::AnimatorControllers::GameKit {
class CharacterMovement;
}
namespace Animancer::Examples::AnimatorControllers::GameKit {
class CharacterParameters;
}
namespace Animancer::Examples::AnimatorControllers::GameKit {
class CharacterState_StateMachine;
}
namespace Animancer {
class AnimancerComponent;
}
// Forward declare root types
namespace Animancer::Examples::AnimatorControllers::GameKit {
class Character;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::AnimatorControllers::GameKit::Character*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::AnimatorControllers::GameKit::Character*, "Animancer.Examples.AnimatorControllers.GameKit", "Character");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer::Examples::AnimatorControllers::GameKit {
// Is value type: false
// CS Name: Animancer.Examples.AnimatorControllers.GameKit.Character
class CORDL_TYPE Character : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Animancer)) ::UnityW<::Animancer::AnimancerComponent>  Animancer;

 __declspec(property(get=get_Movement)) ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterMovement>  Movement;

 __declspec(property(get=get_Parameters)) ::Animancer::Examples::AnimatorControllers::GameKit::CharacterParameters*  Parameters;

 __declspec(property(get=get_StateMachine)) ::Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine*  StateMachine;

/// @brief Field _Animancer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animancer, put=__cordl_internal_set__Animancer)) ::UnityW<::Animancer::AnimancerComponent>  _Animancer;

/// @brief Field _Movement, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Movement, put=__cordl_internal_set__Movement)) ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterMovement>  _Movement;

/// @brief Field _Parameters, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Parameters, put=__cordl_internal_set__Parameters)) ::Animancer::Examples::AnimatorControllers::GameKit::CharacterParameters*  _Parameters;

/// @brief Field _StateMachine, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__StateMachine, put=__cordl_internal_set__StateMachine)) ::Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine*  _StateMachine;

/// @brief Method Awake, addr 0x1802f8530, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckMotionState, addr 0x1802f8560, size 0xf0, virtual false, abstract: false, final false
inline bool CheckMotionState() ;

static inline ::Animancer::Examples::AnimatorControllers::GameKit::Character* New_ctor() ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get__Animancer() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get__Animancer() ;

constexpr ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterMovement> const& __cordl_internal_get__Movement() const;

constexpr ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterMovement>& __cordl_internal_get__Movement() ;

constexpr ::Animancer::Examples::AnimatorControllers::GameKit::CharacterParameters* const& __cordl_internal_get__Parameters() const;

constexpr ::Animancer::Examples::AnimatorControllers::GameKit::CharacterParameters*& __cordl_internal_get__Parameters() ;

constexpr ::Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine* const& __cordl_internal_get__StateMachine() const;

constexpr ::Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine*& __cordl_internal_get__StateMachine() ;

constexpr void __cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set__Movement(::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterMovement>  value) ;

constexpr void __cordl_internal_set__Parameters(::Animancer::Examples::AnimatorControllers::GameKit::CharacterParameters*  value) ;

constexpr void __cordl_internal_set__StateMachine(::Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Animancer, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::Animancer::AnimancerComponent> get_Animancer() ;

/// @brief Method get_Movement, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterMovement> get_Movement() ;

/// @brief Method get_Parameters, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::Animancer::Examples::AnimatorControllers::GameKit::CharacterParameters* get_Parameters() ;

/// @brief Method get_StateMachine, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine* get_StateMachine() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Character() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Character", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Character(Character && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Character", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Character(Character const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19966};

/// @brief Field _Animancer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ____Animancer;

/// @brief Field _Movement, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterMovement>  ____Movement;

/// @brief Field _Parameters, offset: 0x30, size: 0x8, def value: None
 ::Animancer::Examples::AnimatorControllers::GameKit::CharacterParameters*  ____Parameters;

/// @brief Field _StateMachine, offset: 0x38, size: 0x8, def value: None
 ::Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine*  ____StateMachine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::Character, ____Animancer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::Character, ____Movement) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::Character, ____Parameters) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::Character, ____StateMachine) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::AnimatorControllers::GameKit::Character) == 0x40, "Size mismatch!");

} // namespace end def Animancer::Examples::AnimatorControllers::GameKit
