#pragma once
// IWYU pragma private; include "Animancer/Examples/AnimatorControllers/GameKit/LandingState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/Examples/AnimatorControllers/GameKit/zzzz__CharacterState_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LandingState)
namespace Animancer {
class ClipTransition;
}
namespace Animancer {
class MixerTransition2D;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace Animancer::Examples::AnimatorControllers::GameKit {
class LandingState;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::AnimatorControllers::GameKit::LandingState*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::AnimatorControllers::GameKit::LandingState*, "Animancer.Examples.AnimatorControllers.GameKit", "LandingState");
// Dependencies Animancer.Examples.AnimatorControllers.GameKit.CharacterState
namespace Animancer::Examples::AnimatorControllers::GameKit {
// Is value type: false
// CS Name: Animancer.Examples.AnimatorControllers.GameKit.LandingState
class CORDL_TYPE LandingState : public ::Animancer::Examples::AnimatorControllers::GameKit::CharacterState {
public:
// Declarations
 __declspec(property(get=get_CanEnterState)) bool  CanEnterState;

 __declspec(property(get=get_FullMovementControl)) bool  FullMovementControl;

/// @brief Field _HardLanding, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__HardLanding, put=__cordl_internal_set__HardLanding)) ::Animancer::ClipTransition*  _HardLanding;

/// @brief Field _HardLandingForwardSpeed, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__HardLandingForwardSpeed, put=__cordl_internal_set__HardLandingForwardSpeed)) float_t  _HardLandingForwardSpeed;

/// @brief Field _HardLandingVerticalSpeed, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__HardLandingVerticalSpeed, put=__cordl_internal_set__HardLandingVerticalSpeed)) float_t  _HardLandingVerticalSpeed;

/// @brief Field _IsSoftLanding, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSoftLanding, put=__cordl_internal_set__IsSoftLanding)) bool  _IsSoftLanding;

/// @brief Field _PlayAudio, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__PlayAudio, put=__cordl_internal_set__PlayAudio)) ::UnityEngine::Events::UnityEvent*  _PlayAudio;

/// @brief Field _SoftLanding, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__SoftLanding, put=__cordl_internal_set__SoftLanding)) ::Animancer::MixerTransition2D*  _SoftLanding;

/// @brief Method Awake, addr 0x1802fd9f0, size 0xb0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FixedUpdate, addr 0x1802fdaa0, size 0x110, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::Animancer::Examples::AnimatorControllers::GameKit::LandingState* New_ctor() ;

/// @brief Method OnEnable, addr 0x1802fdbb0, size 0x120, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method <Awake>b__6_0, addr 0x1802fdcd0, size 0x20, virtual false, abstract: false, final false
inline void _Awake_b__6_0() ;

constexpr ::Animancer::ClipTransition* const& __cordl_internal_get__HardLanding() const;

constexpr ::Animancer::ClipTransition*& __cordl_internal_get__HardLanding() ;

constexpr float_t const& __cordl_internal_get__HardLandingForwardSpeed() const;

constexpr float_t& __cordl_internal_get__HardLandingForwardSpeed() ;

constexpr float_t const& __cordl_internal_get__HardLandingVerticalSpeed() const;

constexpr float_t& __cordl_internal_get__HardLandingVerticalSpeed() ;

constexpr bool const& __cordl_internal_get__IsSoftLanding() const;

constexpr bool& __cordl_internal_get__IsSoftLanding() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__PlayAudio() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__PlayAudio() ;

constexpr ::Animancer::MixerTransition2D* const& __cordl_internal_get__SoftLanding() const;

constexpr ::Animancer::MixerTransition2D*& __cordl_internal_get__SoftLanding() ;

constexpr void __cordl_internal_set__HardLanding(::Animancer::ClipTransition*  value) ;

constexpr void __cordl_internal_set__HardLandingForwardSpeed(float_t  value) ;

constexpr void __cordl_internal_set__HardLandingVerticalSpeed(float_t  value) ;

constexpr void __cordl_internal_set__IsSoftLanding(bool  value) ;

constexpr void __cordl_internal_set__PlayAudio(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__SoftLanding(::Animancer::MixerTransition2D*  value) ;

/// @brief Method .ctor, addr 0x1802fdcf0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CanEnterState, addr 0x1802f6cd0, size 0x30, virtual true, abstract: false, final false
inline bool get_CanEnterState() ;

/// @brief Method get_FullMovementControl, addr 0x1802fdd10, size 0x10, virtual true, abstract: false, final false
inline bool get_FullMovementControl() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LandingState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LandingState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LandingState(LandingState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LandingState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LandingState(LandingState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19978};

/// @brief Field _SoftLanding, offset: 0x28, size: 0x8, def value: None
 ::Animancer::MixerTransition2D*  ____SoftLanding;

/// @brief Field _HardLanding, offset: 0x30, size: 0x8, def value: None
 ::Animancer::ClipTransition*  ____HardLanding;

/// @brief Field _HardLandingForwardSpeed, offset: 0x38, size: 0x4, def value: None
 float_t  ____HardLandingForwardSpeed;

/// @brief Field _HardLandingVerticalSpeed, offset: 0x3c, size: 0x4, def value: None
 float_t  ____HardLandingVerticalSpeed;

/// @brief Field _PlayAudio, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____PlayAudio;

/// @brief Field _IsSoftLanding, offset: 0x48, size: 0x1, def value: None
 bool  ____IsSoftLanding;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::LandingState, ____SoftLanding) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::LandingState, ____HardLanding) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::LandingState, ____HardLandingForwardSpeed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::LandingState, ____HardLandingVerticalSpeed) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::LandingState, ____PlayAudio) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::LandingState, ____IsSoftLanding) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::AnimatorControllers::GameKit::LandingState) == 0x50, "Size mismatch!");

} // namespace end def Animancer::Examples::AnimatorControllers::GameKit
