#pragma once
// IWYU pragma private; include "Animancer/Examples/AnimatorControllers/GameKit/RespawnState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/Examples/AnimatorControllers/GameKit/zzzz__CharacterState_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(RespawnState)
namespace Animancer {
class ClipTransition;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace Animancer::Examples::AnimatorControllers::GameKit {
class RespawnState;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::AnimatorControllers::GameKit::RespawnState*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::AnimatorControllers::GameKit::RespawnState*, "Animancer.Examples.AnimatorControllers.GameKit", "RespawnState");
// Dependencies Animancer.Examples.AnimatorControllers.GameKit.CharacterState, UnityEngine.Vector3
namespace Animancer::Examples::AnimatorControllers::GameKit {
// Is value type: false
// CS Name: Animancer.Examples.AnimatorControllers.GameKit.RespawnState
class CORDL_TYPE RespawnState : public ::Animancer::Examples::AnimatorControllers::GameKit::CharacterState {
public:
// Declarations
 __declspec(property(get=get_CanExitState)) bool  CanExitState;

/// @brief Field _Animation, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animation, put=__cordl_internal_set__Animation)) ::Animancer::ClipTransition*  _Animation;

/// @brief Field _OnEnterState, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnEnterState, put=__cordl_internal_set__OnEnterState)) ::UnityEngine::Events::UnityEvent*  _OnEnterState;

/// @brief Field _OnExitState, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnExitState, put=__cordl_internal_set__OnExitState)) ::UnityEngine::Events::UnityEvent*  _OnExitState;

/// @brief Field _StartingPosition, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get__StartingPosition, put=__cordl_internal_set__StartingPosition)) ::UnityEngine::Vector3  _StartingPosition;

/// @brief Method Awake, addr 0x180300b30, size 0x80, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Animancer::Examples::AnimatorControllers::GameKit::RespawnState* New_ctor() ;

/// @brief Method OnDisable, addr 0x180300bb0, size 0x20, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x180300bd0, size 0x80, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::Animancer::ClipTransition* const& __cordl_internal_get__Animation() const;

constexpr ::Animancer::ClipTransition*& __cordl_internal_get__Animation() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__OnEnterState() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__OnEnterState() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__OnExitState() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__OnExitState() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__StartingPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__StartingPosition() ;

constexpr void __cordl_internal_set__Animation(::Animancer::ClipTransition*  value) ;

constexpr void __cordl_internal_set__OnEnterState(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__OnExitState(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__StartingPosition(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x1802f6460, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CanExitState, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool get_CanExitState() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RespawnState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RespawnState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RespawnState(RespawnState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RespawnState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RespawnState(RespawnState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19980};

/// @brief Field _Animation, offset: 0x28, size: 0x8, def value: None
 ::Animancer::ClipTransition*  ____Animation;

/// @brief Field _OnEnterState, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____OnEnterState;

/// @brief Field _OnExitState, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____OnExitState;

/// @brief Field _StartingPosition, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____StartingPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::RespawnState, ____Animation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::RespawnState, ____OnEnterState) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::RespawnState, ____OnExitState) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::RespawnState, ____StartingPosition) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::AnimatorControllers::GameKit::RespawnState) == 0x50, "Size mismatch!");

} // namespace end def Animancer::Examples::AnimatorControllers::GameKit
