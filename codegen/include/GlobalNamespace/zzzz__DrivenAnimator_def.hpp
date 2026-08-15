#pragma once
// IWYU pragma private; include "GlobalNamespace/DrivenAnimator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DrivenAnimator)
namespace Animancer {
class AnimancerComponent;
}
namespace Animancer {
class AnimancerState;
}
namespace GlobalNamespace {
class MovementDriver;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace GlobalNamespace {
class DrivenAnimator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DrivenAnimator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DrivenAnimator*, "", "DrivenAnimator");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DrivenAnimator
class CORDL_TYPE DrivenAnimator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _animancerState, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__animancerState, put=__cordl_internal_set__animancerState)) ::Animancer::AnimancerState*  _animancerState;

/// @brief Field animancerComponent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_animancerComponent, put=__cordl_internal_set_animancerComponent)) ::UnityW<::Animancer::AnimancerComponent>  animancerComponent;

/// @brief Field clip, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_clip, put=__cordl_internal_set_clip)) ::UnityW<::UnityEngine::AnimationClip>  clip;

/// @brief Field movementDriver, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_movementDriver, put=__cordl_internal_set_movementDriver)) ::UnityW<::GlobalNamespace::MovementDriver>  movementDriver;

/// @brief Method Awake, addr 0x1803fbf70, size 0xe0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::DrivenAnimator* New_ctor() ;

/// @brief Method OnPositionUpdate, addr 0x1803fc050, size 0x80, virtual false, abstract: false, final false
inline void OnPositionUpdate(double_t  position) ;

constexpr ::Animancer::AnimancerState* const& __cordl_internal_get__animancerState() const;

constexpr ::Animancer::AnimancerState*& __cordl_internal_get__animancerState() ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get_animancerComponent() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get_animancerComponent() ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get_clip() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get_clip() ;

constexpr ::UnityW<::GlobalNamespace::MovementDriver> const& __cordl_internal_get_movementDriver() const;

constexpr ::UnityW<::GlobalNamespace::MovementDriver>& __cordl_internal_get_movementDriver() ;

constexpr void __cordl_internal_set__animancerState(::Animancer::AnimancerState*  value) ;

constexpr void __cordl_internal_set_animancerComponent(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set_clip(::UnityW<::UnityEngine::AnimationClip>  value) ;

constexpr void __cordl_internal_set_movementDriver(::UnityW<::GlobalNamespace::MovementDriver>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrivenAnimator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrivenAnimator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DrivenAnimator(DrivenAnimator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrivenAnimator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrivenAnimator(DrivenAnimator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5045};

/// @brief Field movementDriver, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MovementDriver>  ___movementDriver;

/// @brief Field animancerComponent, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ___animancerComponent;

/// @brief Field clip, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ___clip;

/// @brief Field _animancerState, offset: 0x38, size: 0x8, def value: None
 ::Animancer::AnimancerState*  ____animancerState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DrivenAnimator, ___movementDriver) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrivenAnimator, ___animancerComponent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrivenAnimator, ___clip) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrivenAnimator, ____animancerState) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DrivenAnimator) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
