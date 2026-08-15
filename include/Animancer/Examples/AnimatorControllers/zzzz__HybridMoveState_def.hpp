#pragma once
// IWYU pragma private; include "Animancer/Examples/AnimatorControllers/HybridMoveState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/Examples/StateMachines/zzzz__CharacterState_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HybridMoveState)
namespace Animancer {
class HybridAnimancerComponent;
}
// Forward declare root types
namespace Animancer::Examples::AnimatorControllers {
class HybridMoveState;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::AnimatorControllers::HybridMoveState*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::AnimatorControllers::HybridMoveState*, "Animancer.Examples.AnimatorControllers", "HybridMoveState");
// Dependencies Animancer.Examples.StateMachines.CharacterState
namespace Animancer::Examples::AnimatorControllers {
// Is value type: false
// CS Name: Animancer.Examples.AnimatorControllers.HybridMoveState
class CORDL_TYPE HybridMoveState : public ::Animancer::Examples::StateMachines::CharacterState {
public:
// Declarations
 __declspec(property(get=get_HybridAnimancer)) ::UnityW<::Animancer::HybridAnimancerComponent>  HybridAnimancer;

/// @brief Field _MoveBlend, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__MoveBlend, put=__cordl_internal_set__MoveBlend)) float_t  _MoveBlend;

/// @brief Field _ParameterFadeSpeed, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__ParameterFadeSpeed, put=__cordl_internal_set__ParameterFadeSpeed)) float_t  _ParameterFadeSpeed;

/// @brief Field _TurnSpeed, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__TurnSpeed, put=__cordl_internal_set__TurnSpeed)) float_t  _TurnSpeed;

static inline ::Animancer::Examples::AnimatorControllers::HybridMoveState* New_ctor() ;

/// @brief Method OnEnable, addr 0x1802fc7d0, size 0x140, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x1802fcbe0, size 0x290, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateAnimation, addr 0x1802fc910, size 0x160, virtual false, abstract: false, final false
inline void UpdateAnimation() ;

/// @brief Method UpdateTurning, addr 0x1802fca70, size 0x170, virtual false, abstract: false, final false
inline void UpdateTurning() ;

constexpr float_t const& __cordl_internal_get__MoveBlend() const;

constexpr float_t& __cordl_internal_get__MoveBlend() ;

constexpr float_t const& __cordl_internal_get__ParameterFadeSpeed() const;

constexpr float_t& __cordl_internal_get__ParameterFadeSpeed() ;

constexpr float_t const& __cordl_internal_get__TurnSpeed() const;

constexpr float_t& __cordl_internal_get__TurnSpeed() ;

constexpr void __cordl_internal_set__MoveBlend(float_t  value) ;

constexpr void __cordl_internal_set__ParameterFadeSpeed(float_t  value) ;

constexpr void __cordl_internal_set__TurnSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0x1802fce70, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HybridAnimancer, addr 0x1802fc770, size 0x60, virtual false, abstract: false, final false
inline ::UnityW<::Animancer::HybridAnimancerComponent> get_HybridAnimancer() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HybridMoveState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HybridMoveState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HybridMoveState(HybridMoveState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HybridMoveState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HybridMoveState(HybridMoveState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19965};

/// @brief Field _TurnSpeed, offset: 0x28, size: 0x4, def value: None
 float_t  ____TurnSpeed;

/// @brief Field _ParameterFadeSpeed, offset: 0x2c, size: 0x4, def value: None
 float_t  ____ParameterFadeSpeed;

/// @brief Field _MoveBlend, offset: 0x30, size: 0x4, def value: None
 float_t  ____MoveBlend;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::AnimatorControllers::HybridMoveState, ____TurnSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::HybridMoveState, ____ParameterFadeSpeed) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::HybridMoveState, ____MoveBlend) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::AnimatorControllers::HybridMoveState) == 0x38, "Size mismatch!");

} // namespace end def Animancer::Examples::AnimatorControllers
