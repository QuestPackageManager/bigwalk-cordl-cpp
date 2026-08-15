#pragma once
// IWYU pragma private; include "Animancer/Examples/StateMachines/MoveState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/Examples/StateMachines/zzzz__CharacterState_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MoveState)
namespace Animancer {
class LinearMixerTransition;
}
// Forward declare root types
namespace Animancer::Examples::StateMachines {
class MoveState;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::StateMachines::MoveState*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::StateMachines::MoveState*, "Animancer.Examples.StateMachines", "MoveState");
// Dependencies Animancer.Examples.StateMachines.CharacterState
namespace Animancer::Examples::StateMachines {
// Is value type: false
// CS Name: Animancer.Examples.StateMachines.MoveState
class CORDL_TYPE MoveState : public ::Animancer::Examples::StateMachines::CharacterState {
public:
// Declarations
/// @brief Field _Animation, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animation, put=__cordl_internal_set__Animation)) ::Animancer::LinearMixerTransition*  _Animation;

/// @brief Field _ParameterFadeSpeed, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__ParameterFadeSpeed, put=__cordl_internal_set__ParameterFadeSpeed)) float_t  _ParameterFadeSpeed;

/// @brief Field _TurnSpeed, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__TurnSpeed, put=__cordl_internal_set__TurnSpeed)) float_t  _TurnSpeed;

static inline ::Animancer::Examples::StateMachines::MoveState* New_ctor() ;

/// @brief Method OnEnable, addr 0x1802feed0, size 0x80, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x1802ff070, size 0x250, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateSpeed, addr 0x1802fef50, size 0x120, virtual false, abstract: false, final false
inline void UpdateSpeed() ;

/// @brief Method UpdateTurning, addr 0x1802fca70, size 0x170, virtual false, abstract: false, final false
inline void UpdateTurning() ;

constexpr ::Animancer::LinearMixerTransition* const& __cordl_internal_get__Animation() const;

constexpr ::Animancer::LinearMixerTransition*& __cordl_internal_get__Animation() ;

constexpr float_t const& __cordl_internal_get__ParameterFadeSpeed() const;

constexpr float_t& __cordl_internal_get__ParameterFadeSpeed() ;

constexpr float_t const& __cordl_internal_get__TurnSpeed() const;

constexpr float_t& __cordl_internal_get__TurnSpeed() ;

constexpr void __cordl_internal_set__Animation(::Animancer::LinearMixerTransition*  value) ;

constexpr void __cordl_internal_set__ParameterFadeSpeed(float_t  value) ;

constexpr void __cordl_internal_set__TurnSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0x1802fce70, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MoveState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MoveState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MoveState(MoveState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MoveState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MoveState(MoveState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20001};

/// @brief Field _TurnSpeed, offset: 0x28, size: 0x4, def value: None
 float_t  ____TurnSpeed;

/// @brief Field _ParameterFadeSpeed, offset: 0x2c, size: 0x4, def value: None
 float_t  ____ParameterFadeSpeed;

/// @brief Field _Animation, offset: 0x30, size: 0x8, def value: None
 ::Animancer::LinearMixerTransition*  ____Animation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::StateMachines::MoveState, ____TurnSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::StateMachines::MoveState, ____ParameterFadeSpeed) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::StateMachines::MoveState, ____Animation) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::StateMachines::MoveState) == 0x38, "Size mismatch!");

} // namespace end def Animancer::Examples::StateMachines
