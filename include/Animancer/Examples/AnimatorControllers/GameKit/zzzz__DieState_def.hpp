#pragma once
// IWYU pragma private; include "Animancer/Examples/AnimatorControllers/GameKit/DieState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/Examples/AnimatorControllers/GameKit/zzzz__CharacterState_def.hpp"
CORDL_MODULE_EXPORT(DieState)
namespace Animancer::Examples::AnimatorControllers::GameKit {
class CharacterState;
}
namespace Animancer {
class ClipTransition;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace Animancer::Examples::AnimatorControllers::GameKit {
class DieState;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::AnimatorControllers::GameKit::DieState*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::AnimatorControllers::GameKit::DieState*, "Animancer.Examples.AnimatorControllers.GameKit", "DieState");
// Dependencies Animancer.Examples.AnimatorControllers.GameKit.CharacterState
namespace Animancer::Examples::AnimatorControllers::GameKit {
// Is value type: false
// CS Name: Animancer.Examples.AnimatorControllers.GameKit.DieState
class CORDL_TYPE DieState : public ::Animancer::Examples::AnimatorControllers::GameKit::CharacterState {
public:
// Declarations
 __declspec(property(get=get_CanExitState)) bool  CanExitState;

 __declspec(property(get=get_FullMovementControl)) bool  FullMovementControl;

/// @brief Field _Animation, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animation, put=__cordl_internal_set__Animation)) ::Animancer::ClipTransition*  _Animation;

/// @brief Field _OnEnterState, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnEnterState, put=__cordl_internal_set__OnEnterState)) ::UnityEngine::Events::UnityEvent*  _OnEnterState;

/// @brief Field _OnExitState, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnExitState, put=__cordl_internal_set__OnExitState)) ::UnityEngine::Events::UnityEvent*  _OnExitState;

/// @brief Field _RespawnState, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__RespawnState, put=__cordl_internal_set__RespawnState)) ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>  _RespawnState;

/// @brief Method Awake, addr 0x1802f9cf0, size 0x80, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Animancer::Examples::AnimatorControllers::GameKit::DieState* New_ctor() ;

/// @brief Method OnDeath, addr 0x1802f9d70, size 0x30, virtual false, abstract: false, final false
inline void OnDeath() ;

/// @brief Method OnDisable, addr 0x1802f6990, size 0x20, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1802f9da0, size 0x60, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::Animancer::ClipTransition* const& __cordl_internal_get__Animation() const;

constexpr ::Animancer::ClipTransition*& __cordl_internal_get__Animation() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__OnEnterState() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__OnEnterState() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__OnExitState() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__OnExitState() ;

constexpr ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState> const& __cordl_internal_get__RespawnState() const;

constexpr ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>& __cordl_internal_get__RespawnState() ;

constexpr void __cordl_internal_set__Animation(::Animancer::ClipTransition*  value) ;

constexpr void __cordl_internal_set__OnEnterState(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__OnExitState(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__RespawnState(::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>  value) ;

/// @brief Method .ctor, addr 0x1802f6460, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CanExitState, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool get_CanExitState() ;

/// @brief Method get_FullMovementControl, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool get_FullMovementControl() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DieState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DieState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DieState(DieState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DieState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DieState(DieState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19975};

/// @brief Field _Animation, offset: 0x28, size: 0x8, def value: None
 ::Animancer::ClipTransition*  ____Animation;

/// @brief Field _RespawnState, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>  ____RespawnState;

/// @brief Field _OnEnterState, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____OnEnterState;

/// @brief Field _OnExitState, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____OnExitState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::DieState, ____Animation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::DieState, ____RespawnState) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::DieState, ____OnEnterState) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::DieState, ____OnExitState) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::AnimatorControllers::GameKit::DieState) == 0x48, "Size mismatch!");

} // namespace end def Animancer::Examples::AnimatorControllers::GameKit
