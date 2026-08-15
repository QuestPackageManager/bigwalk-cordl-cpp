#pragma once
// IWYU pragma private; include "Animancer/Examples/AnimatorControllers/GameKit/AttackState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/Examples/AnimatorControllers/GameKit/zzzz__CharacterState_def.hpp"
#include "Animancer/zzzz__ClipTransition_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AttackState)
namespace Animancer {
class ClipTransition;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace Animancer::Examples::AnimatorControllers::GameKit {
class AttackState;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::AnimatorControllers::GameKit::AttackState*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::AnimatorControllers::GameKit::AttackState*, "Animancer.Examples.AnimatorControllers.GameKit", "AttackState");
// Dependencies Animancer.ClipTransition, Animancer.Examples.AnimatorControllers.GameKit.CharacterState
namespace Animancer::Examples::AnimatorControllers::GameKit {
// Is value type: false
// CS Name: Animancer.Examples.AnimatorControllers.GameKit.AttackState
class CORDL_TYPE AttackState : public ::Animancer::Examples::AnimatorControllers::GameKit::CharacterState {
public:
// Declarations
 __declspec(property(get=get_CanEnterState)) bool  CanEnterState;

 __declspec(property(get=get_CanExitState)) bool  CanExitState;

 __declspec(property(get=get_FullMovementControl)) bool  FullMovementControl;

/// @brief Field _Animations, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animations, put=__cordl_internal_set__Animations)) ::ArrayW<::Animancer::ClipTransition*>  _Animations;

/// @brief Field _CurrentAnimation, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__CurrentAnimation, put=__cordl_internal_set__CurrentAnimation)) ::Animancer::ClipTransition*  _CurrentAnimation;

/// @brief Field _CurrentAnimationIndex, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentAnimationIndex, put=__cordl_internal_set__CurrentAnimationIndex)) int32_t  _CurrentAnimationIndex;

/// @brief Field _OnEnd, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnEnd, put=__cordl_internal_set__OnEnd)) ::UnityEngine::Events::UnityEvent*  _OnEnd;

/// @brief Field _OnStart, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnStart, put=__cordl_internal_set__OnStart)) ::UnityEngine::Events::UnityEvent*  _OnStart;

/// @brief Field _SetWeaponOwner, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__SetWeaponOwner, put=__cordl_internal_set__SetWeaponOwner)) ::UnityEngine::Events::UnityEvent*  _SetWeaponOwner;

/// @brief Field _TurnSpeed, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__TurnSpeed, put=__cordl_internal_set__TurnSpeed)) float_t  _TurnSpeed;

/// @brief Method Awake, addr 0x1802f6900, size 0x20, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FixedUpdate, addr 0x1802f6920, size 0x70, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::Animancer::Examples::AnimatorControllers::GameKit::AttackState* New_ctor() ;

/// @brief Method OnDisable, addr 0x1802f6990, size 0x20, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1802f69b0, size 0xe0, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::ArrayW<::Animancer::ClipTransition*> const& __cordl_internal_get__Animations() const;

constexpr ::ArrayW<::Animancer::ClipTransition*>& __cordl_internal_get__Animations() ;

constexpr ::Animancer::ClipTransition* const& __cordl_internal_get__CurrentAnimation() const;

constexpr ::Animancer::ClipTransition*& __cordl_internal_get__CurrentAnimation() ;

constexpr int32_t const& __cordl_internal_get__CurrentAnimationIndex() const;

constexpr int32_t& __cordl_internal_get__CurrentAnimationIndex() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__OnEnd() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__OnEnd() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__OnStart() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__OnStart() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__SetWeaponOwner() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__SetWeaponOwner() ;

constexpr float_t const& __cordl_internal_get__TurnSpeed() const;

constexpr float_t& __cordl_internal_get__TurnSpeed() ;

constexpr void __cordl_internal_set__Animations(::ArrayW<::Animancer::ClipTransition*>  value) ;

constexpr void __cordl_internal_set__CurrentAnimation(::Animancer::ClipTransition*  value) ;

constexpr void __cordl_internal_set__CurrentAnimationIndex(int32_t  value) ;

constexpr void __cordl_internal_set__OnEnd(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__OnStart(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__SetWeaponOwner(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__TurnSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0x1802f6c40, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CanEnterState, addr 0x1802f6cd0, size 0x30, virtual true, abstract: false, final false
inline bool get_CanEnterState() ;

/// @brief Method get_CanExitState, addr 0x1802f6d00, size 0x80, virtual true, abstract: false, final false
inline bool get_CanExitState() ;

/// @brief Method get_FullMovementControl, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool get_FullMovementControl() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AttackState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AttackState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AttackState(AttackState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AttackState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AttackState(AttackState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19972};

/// @brief Field _TurnSpeed, offset: 0x28, size: 0x4, def value: None
 float_t  ____TurnSpeed;

/// @brief Field _SetWeaponOwner, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____SetWeaponOwner;

/// @brief Field _OnStart, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____OnStart;

/// @brief Field _OnEnd, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____OnEnd;

/// @brief Field _Animations, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::Animancer::ClipTransition*>  ____Animations;

/// @brief Field _CurrentAnimationIndex, offset: 0x50, size: 0x4, def value: None
 int32_t  ____CurrentAnimationIndex;

/// @brief Field _CurrentAnimation, offset: 0x58, size: 0x8, def value: None
 ::Animancer::ClipTransition*  ____CurrentAnimation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::AttackState, ____TurnSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::AttackState, ____SetWeaponOwner) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::AttackState, ____OnStart) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::AttackState, ____OnEnd) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::AttackState, ____Animations) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::AttackState, ____CurrentAnimationIndex) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::AttackState, ____CurrentAnimation) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::AnimatorControllers::GameKit::AttackState) == 0x60, "Size mismatch!");

} // namespace end def Animancer::Examples::AnimatorControllers::GameKit
