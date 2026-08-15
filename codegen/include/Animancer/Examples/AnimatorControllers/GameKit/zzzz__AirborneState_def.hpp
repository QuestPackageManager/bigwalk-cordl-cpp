#pragma once
// IWYU pragma private; include "Animancer/Examples/AnimatorControllers/GameKit/AirborneState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/Examples/AnimatorControllers/GameKit/zzzz__CharacterState_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AirborneState)
namespace Animancer::Examples::AnimatorControllers::GameKit {
class LandingState;
}
namespace Animancer {
class LinearMixerTransition;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Animancer::Examples::AnimatorControllers::GameKit {
class AirborneState;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::AnimatorControllers::GameKit::AirborneState*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::AnimatorControllers::GameKit::AirborneState*, "Animancer.Examples.AnimatorControllers.GameKit", "AirborneState");
// Dependencies Animancer.Examples.AnimatorControllers.GameKit.CharacterState
namespace Animancer::Examples::AnimatorControllers::GameKit {
// Is value type: false
// CS Name: Animancer.Examples.AnimatorControllers.GameKit.AirborneState
class CORDL_TYPE AirborneState : public ::Animancer::Examples::AnimatorControllers::GameKit::CharacterState {
public:
// Declarations
 __declspec(property(get=get_RootMotion)) ::UnityEngine::Vector3  RootMotion;

 __declspec(property(get=get_StickToGround)) bool  StickToGround;

/// @brief Field _Animations, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animations, put=__cordl_internal_set__Animations)) ::Animancer::LinearMixerTransition*  _Animations;

/// @brief Field _IsJumping, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsJumping, put=__cordl_internal_set__IsJumping)) bool  _IsJumping;

/// @brief Field _JumpAbortSpeed, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__JumpAbortSpeed, put=__cordl_internal_set__JumpAbortSpeed)) float_t  _JumpAbortSpeed;

/// @brief Field _JumpSpeed, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__JumpSpeed, put=__cordl_internal_set__JumpSpeed)) float_t  _JumpSpeed;

/// @brief Field _LandingState, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__LandingState, put=__cordl_internal_set__LandingState)) ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::LandingState>  _LandingState;

/// @brief Field _PlayAudio, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__PlayAudio, put=__cordl_internal_set__PlayAudio)) ::UnityEngine::Events::UnityEvent*  _PlayAudio;

/// @brief Field _TurnSpeedProportion, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__TurnSpeedProportion, put=__cordl_internal_set__TurnSpeedProportion)) float_t  _TurnSpeedProportion;

/// @brief Method CancelJump, addr 0x1802f6480, size 0x10, virtual false, abstract: false, final false
inline void CancelJump() ;

/// @brief Method FixedUpdate, addr 0x1802f6490, size 0x250, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::Animancer::Examples::AnimatorControllers::GameKit::AirborneState* New_ctor() ;

/// @brief Method OnEnable, addr 0x1802f66e0, size 0x40, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method TryJump, addr 0x1802f6720, size 0x90, virtual false, abstract: false, final false
inline bool TryJump() ;

constexpr ::Animancer::LinearMixerTransition* const& __cordl_internal_get__Animations() const;

constexpr ::Animancer::LinearMixerTransition*& __cordl_internal_get__Animations() ;

constexpr bool const& __cordl_internal_get__IsJumping() const;

constexpr bool& __cordl_internal_get__IsJumping() ;

constexpr float_t const& __cordl_internal_get__JumpAbortSpeed() const;

constexpr float_t& __cordl_internal_get__JumpAbortSpeed() ;

constexpr float_t const& __cordl_internal_get__JumpSpeed() const;

constexpr float_t& __cordl_internal_get__JumpSpeed() ;

constexpr ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::LandingState> const& __cordl_internal_get__LandingState() const;

constexpr ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::LandingState>& __cordl_internal_get__LandingState() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__PlayAudio() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__PlayAudio() ;

constexpr float_t const& __cordl_internal_get__TurnSpeedProportion() const;

constexpr float_t& __cordl_internal_get__TurnSpeedProportion() ;

constexpr void __cordl_internal_set__Animations(::Animancer::LinearMixerTransition*  value) ;

constexpr void __cordl_internal_set__IsJumping(bool  value) ;

constexpr void __cordl_internal_set__JumpAbortSpeed(float_t  value) ;

constexpr void __cordl_internal_set__JumpSpeed(float_t  value) ;

constexpr void __cordl_internal_set__LandingState(::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::LandingState>  value) ;

constexpr void __cordl_internal_set__PlayAudio(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__TurnSpeedProportion(float_t  value) ;

/// @brief Method .ctor, addr 0x1802f67b0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_RootMotion, addr 0x1802f67d0, size 0xe0, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 get_RootMotion() ;

/// @brief Method get_StickToGround, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool get_StickToGround() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AirborneState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AirborneState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AirborneState(AirborneState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AirborneState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AirborneState(AirborneState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19971};

/// @brief Field _Animations, offset: 0x28, size: 0x8, def value: None
 ::Animancer::LinearMixerTransition*  ____Animations;

/// @brief Field _JumpSpeed, offset: 0x30, size: 0x4, def value: None
 float_t  ____JumpSpeed;

/// @brief Field _JumpAbortSpeed, offset: 0x34, size: 0x4, def value: None
 float_t  ____JumpAbortSpeed;

/// @brief Field _TurnSpeedProportion, offset: 0x38, size: 0x4, def value: None
 float_t  ____TurnSpeedProportion;

/// @brief Field _LandingState, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::LandingState>  ____LandingState;

/// @brief Field _PlayAudio, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____PlayAudio;

/// @brief Field _IsJumping, offset: 0x50, size: 0x1, def value: None
 bool  ____IsJumping;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::AirborneState, ____Animations) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::AirborneState, ____JumpSpeed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::AirborneState, ____JumpAbortSpeed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::AirborneState, ____TurnSpeedProportion) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::AirborneState, ____LandingState) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::AirborneState, ____PlayAudio) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::AirborneState, ____IsJumping) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::AnimatorControllers::GameKit::AirborneState) == 0x58, "Size mismatch!");

} // namespace end def Animancer::Examples::AnimatorControllers::GameKit
