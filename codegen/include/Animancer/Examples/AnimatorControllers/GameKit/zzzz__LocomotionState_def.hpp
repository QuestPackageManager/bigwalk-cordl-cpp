#pragma once
// IWYU pragma private; include "Animancer/Examples/AnimatorControllers/GameKit/LocomotionState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/Examples/AnimatorControllers/GameKit/zzzz__CharacterState_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LocomotionState)
namespace Animancer {
class AnimatedFloat;
}
namespace Animancer {
class ClipTransition;
}
namespace Animancer {
class LinearMixerTransition;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace Animancer::Examples::AnimatorControllers::GameKit {
class LocomotionState;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::AnimatorControllers::GameKit::LocomotionState*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::AnimatorControllers::GameKit::LocomotionState*, "Animancer.Examples.AnimatorControllers.GameKit", "LocomotionState");
// Dependencies Animancer.Examples.AnimatorControllers.GameKit.CharacterState
namespace Animancer::Examples::AnimatorControllers::GameKit {
// Is value type: false
// CS Name: Animancer.Examples.AnimatorControllers.GameKit.LocomotionState
class CORDL_TYPE LocomotionState : public ::Animancer::Examples::AnimatorControllers::GameKit::CharacterState {
public:
// Declarations
 __declspec(property(get=get_CanEnterState)) bool  CanEnterState;

/// @brief Field _CanPlayAudio, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__CanPlayAudio, put=__cordl_internal_set__CanPlayAudio)) bool  _CanPlayAudio;

/// @brief Field _FootFall, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__FootFall, put=__cordl_internal_set__FootFall)) ::Animancer::AnimatedFloat*  _FootFall;

/// @brief Field _IsPlayingAudio, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsPlayingAudio, put=__cordl_internal_set__IsPlayingAudio)) bool  _IsPlayingAudio;

/// @brief Field _LocomotionMixer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__LocomotionMixer, put=__cordl_internal_set__LocomotionMixer)) ::Animancer::LinearMixerTransition*  _LocomotionMixer;

/// @brief Field _PlayFootstepAudio, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__PlayFootstepAudio, put=__cordl_internal_set__PlayFootstepAudio)) ::UnityEngine::Events::UnityEvent*  _PlayFootstepAudio;

/// @brief Field _QuickTurnAngle, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__QuickTurnAngle, put=__cordl_internal_set__QuickTurnAngle)) float_t  _QuickTurnAngle;

/// @brief Field _QuickTurnLeft, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__QuickTurnLeft, put=__cordl_internal_set__QuickTurnLeft)) ::Animancer::ClipTransition*  _QuickTurnLeft;

/// @brief Field _QuickTurnMoveSpeed, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__QuickTurnMoveSpeed, put=__cordl_internal_set__QuickTurnMoveSpeed)) float_t  _QuickTurnMoveSpeed;

/// @brief Field _QuickTurnRight, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__QuickTurnRight, put=__cordl_internal_set__QuickTurnRight)) ::Animancer::ClipTransition*  _QuickTurnRight;

/// @brief Method Awake, addr 0x1802fe3c0, size 0xf0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FixedUpdate, addr 0x1802fe4b0, size 0x120, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::Animancer::Examples::AnimatorControllers::GameKit::LocomotionState* New_ctor() ;

/// @brief Method OnEnable, addr 0x1802f6430, size 0x30, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method UpdateAudio, addr 0x1802fe5d0, size 0x80, virtual false, abstract: false, final false
inline void UpdateAudio() ;

/// @brief Method UpdateRotation, addr 0x1802fe650, size 0x290, virtual false, abstract: false, final false
inline void UpdateRotation() ;

/// @brief Method <Awake>b__6_0, addr 0x1802f6430, size 0x30, virtual false, abstract: false, final false
inline void _Awake_b__6_0() ;

constexpr bool const& __cordl_internal_get__CanPlayAudio() const;

constexpr bool& __cordl_internal_get__CanPlayAudio() ;

constexpr ::Animancer::AnimatedFloat* const& __cordl_internal_get__FootFall() const;

constexpr ::Animancer::AnimatedFloat*& __cordl_internal_get__FootFall() ;

constexpr bool const& __cordl_internal_get__IsPlayingAudio() const;

constexpr bool& __cordl_internal_get__IsPlayingAudio() ;

constexpr ::Animancer::LinearMixerTransition* const& __cordl_internal_get__LocomotionMixer() const;

constexpr ::Animancer::LinearMixerTransition*& __cordl_internal_get__LocomotionMixer() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__PlayFootstepAudio() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__PlayFootstepAudio() ;

constexpr float_t const& __cordl_internal_get__QuickTurnAngle() const;

constexpr float_t& __cordl_internal_get__QuickTurnAngle() ;

constexpr ::Animancer::ClipTransition* const& __cordl_internal_get__QuickTurnLeft() const;

constexpr ::Animancer::ClipTransition*& __cordl_internal_get__QuickTurnLeft() ;

constexpr float_t const& __cordl_internal_get__QuickTurnMoveSpeed() const;

constexpr float_t& __cordl_internal_get__QuickTurnMoveSpeed() ;

constexpr ::Animancer::ClipTransition* const& __cordl_internal_get__QuickTurnRight() const;

constexpr ::Animancer::ClipTransition*& __cordl_internal_get__QuickTurnRight() ;

constexpr void __cordl_internal_set__CanPlayAudio(bool  value) ;

constexpr void __cordl_internal_set__FootFall(::Animancer::AnimatedFloat*  value) ;

constexpr void __cordl_internal_set__IsPlayingAudio(bool  value) ;

constexpr void __cordl_internal_set__LocomotionMixer(::Animancer::LinearMixerTransition*  value) ;

constexpr void __cordl_internal_set__PlayFootstepAudio(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__QuickTurnAngle(float_t  value) ;

constexpr void __cordl_internal_set__QuickTurnLeft(::Animancer::ClipTransition*  value) ;

constexpr void __cordl_internal_set__QuickTurnMoveSpeed(float_t  value) ;

constexpr void __cordl_internal_set__QuickTurnRight(::Animancer::ClipTransition*  value) ;

/// @brief Method .ctor, addr 0x1802fe8e0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CanEnterState, addr 0x1802f6cd0, size 0x30, virtual true, abstract: false, final false
inline bool get_CanEnterState() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocomotionState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocomotionState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocomotionState(LocomotionState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocomotionState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocomotionState(LocomotionState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19979};

/// @brief Field _LocomotionMixer, offset: 0x28, size: 0x8, def value: None
 ::Animancer::LinearMixerTransition*  ____LocomotionMixer;

/// @brief Field _QuickTurnLeft, offset: 0x30, size: 0x8, def value: None
 ::Animancer::ClipTransition*  ____QuickTurnLeft;

/// @brief Field _QuickTurnRight, offset: 0x38, size: 0x8, def value: None
 ::Animancer::ClipTransition*  ____QuickTurnRight;

/// @brief Field _QuickTurnMoveSpeed, offset: 0x40, size: 0x4, def value: None
 float_t  ____QuickTurnMoveSpeed;

/// @brief Field _QuickTurnAngle, offset: 0x44, size: 0x4, def value: None
 float_t  ____QuickTurnAngle;

/// @brief Field _FootFall, offset: 0x48, size: 0x8, def value: None
 ::Animancer::AnimatedFloat*  ____FootFall;

/// @brief Field _PlayFootstepAudio, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____PlayFootstepAudio;

/// @brief Field _CanPlayAudio, offset: 0x58, size: 0x1, def value: None
 bool  ____CanPlayAudio;

/// @brief Field _IsPlayingAudio, offset: 0x59, size: 0x1, def value: None
 bool  ____IsPlayingAudio;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::LocomotionState, ____LocomotionMixer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::LocomotionState, ____QuickTurnLeft) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::LocomotionState, ____QuickTurnRight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::LocomotionState, ____QuickTurnMoveSpeed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::LocomotionState, ____QuickTurnAngle) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::LocomotionState, ____FootFall) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::LocomotionState, ____PlayFootstepAudio) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::LocomotionState, ____CanPlayAudio) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::LocomotionState, ____IsPlayingAudio) == 0x59, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::AnimatorControllers::GameKit::LocomotionState) == 0x60, "Size mismatch!");

} // namespace end def Animancer::Examples::AnimatorControllers::GameKit
