#pragma once
// IWYU pragma private; include "Animancer/Examples/AnimatorControllers/GameKit/FlinchState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/Examples/AnimatorControllers/GameKit/zzzz__CharacterState_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FlinchState)
namespace Animancer {
class MixerTransition2D;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Animancer::Examples::AnimatorControllers::GameKit {
class FlinchState;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::AnimatorControllers::GameKit::FlinchState*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::AnimatorControllers::GameKit::FlinchState*, "Animancer.Examples.AnimatorControllers.GameKit", "FlinchState");
// Dependencies Animancer.Examples.AnimatorControllers.GameKit.CharacterState, UnityEngine.LayerMask
namespace Animancer::Examples::AnimatorControllers::GameKit {
// Is value type: false
// CS Name: Animancer.Examples.AnimatorControllers.GameKit.FlinchState
class CORDL_TYPE FlinchState : public ::Animancer::Examples::AnimatorControllers::GameKit::CharacterState {
public:
// Declarations
 __declspec(property(get=get_CanExitState)) bool  CanExitState;

 __declspec(property(get=get_FullMovementControl)) bool  FullMovementControl;

/// @brief Field _Animation, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animation, put=__cordl_internal_set__Animation)) ::Animancer::MixerTransition2D*  _Animation;

/// @brief Field _EnemyCheckRadius, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__EnemyCheckRadius, put=__cordl_internal_set__EnemyCheckRadius)) float_t  _EnemyCheckRadius;

/// @brief Field _EnemyLayers, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__EnemyLayers, put=__cordl_internal_set__EnemyLayers)) ::UnityEngine::LayerMask  _EnemyLayers;

/// @brief Method Awake, addr 0x1802fb590, size 0x50, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DetermineHitDirection, addr 0x1802fb5e0, size 0x230, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 DetermineHitDirection() ;

static inline ::Animancer::Examples::AnimatorControllers::GameKit::FlinchState* New_ctor() ;

/// @brief Method OnDamageReceived, addr 0x1802f9d70, size 0x30, virtual false, abstract: false, final false
inline void OnDamageReceived() ;

/// @brief Method OnEnable, addr 0x1802fb810, size 0x1b0, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::Animancer::MixerTransition2D* const& __cordl_internal_get__Animation() const;

constexpr ::Animancer::MixerTransition2D*& __cordl_internal_get__Animation() ;

constexpr float_t const& __cordl_internal_get__EnemyCheckRadius() const;

constexpr float_t& __cordl_internal_get__EnemyCheckRadius() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__EnemyLayers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get__EnemyLayers() ;

constexpr void __cordl_internal_set__Animation(::Animancer::MixerTransition2D*  value) ;

constexpr void __cordl_internal_set__EnemyCheckRadius(float_t  value) ;

constexpr void __cordl_internal_set__EnemyLayers(::UnityEngine::LayerMask  value) ;

/// @brief Method .ctor, addr 0x1802fb9f0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CanExitState, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool get_CanExitState() ;

/// @brief Method get_FullMovementControl, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool get_FullMovementControl() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FlinchState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FlinchState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FlinchState(FlinchState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlinchState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlinchState(FlinchState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19976};

/// @brief Field _Animation, offset: 0x28, size: 0x8, def value: None
 ::Animancer::MixerTransition2D*  ____Animation;

/// @brief Field _EnemyLayers, offset: 0x30, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ____EnemyLayers;

/// @brief Field _EnemyCheckRadius, offset: 0x34, size: 0x4, def value: None
 float_t  ____EnemyCheckRadius;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::FlinchState, ____Animation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::FlinchState, ____EnemyLayers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::FlinchState, ____EnemyCheckRadius) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::AnimatorControllers::GameKit::FlinchState) == 0x38, "Size mismatch!");

} // namespace end def Animancer::Examples::AnimatorControllers::GameKit
