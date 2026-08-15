#pragma once
// IWYU pragma private; include "Animancer/Examples/Basics/PlayAnimationOnClick.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PlayAnimationOnClick)
namespace Animancer {
class AnimancerComponent;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace Animancer::Examples::Basics {
class PlayAnimationOnClick;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::Basics::PlayAnimationOnClick*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::Basics::PlayAnimationOnClick*, "Animancer.Examples.Basics", "PlayAnimationOnClick");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer::Examples::Basics {
// Is value type: false
// CS Name: Animancer.Examples.Basics.PlayAnimationOnClick
class CORDL_TYPE PlayAnimationOnClick : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _Action, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Action, put=__cordl_internal_set__Action)) ::UnityW<::UnityEngine::AnimationClip>  _Action;

/// @brief Field _Animancer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animancer, put=__cordl_internal_set__Animancer)) ::UnityW<::Animancer::AnimancerComponent>  _Animancer;

/// @brief Field _Idle, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Idle, put=__cordl_internal_set__Idle)) ::UnityW<::UnityEngine::AnimationClip>  _Idle;

static inline ::Animancer::Examples::Basics::PlayAnimationOnClick* New_ctor() ;

/// @brief Method OnEnable, addr 0x1802fc530, size 0x30, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x180300160, size 0xb0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__Action() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__Action() ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get__Animancer() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get__Animancer() ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__Idle() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__Idle() ;

constexpr void __cordl_internal_set__Action(::UnityW<::UnityEngine::AnimationClip>  value) ;

constexpr void __cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set__Idle(::UnityW<::UnityEngine::AnimationClip>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayAnimationOnClick() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayAnimationOnClick", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayAnimationOnClick(PlayAnimationOnClick && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayAnimationOnClick", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayAnimationOnClick(PlayAnimationOnClick const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20031};

/// @brief Field _Animancer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ____Animancer;

/// @brief Field _Idle, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ____Idle;

/// @brief Field _Action, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ____Action;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::Basics::PlayAnimationOnClick, ____Animancer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Basics::PlayAnimationOnClick, ____Idle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Basics::PlayAnimationOnClick, ____Action) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::Basics::PlayAnimationOnClick) == 0x38, "Size mismatch!");

} // namespace end def Animancer::Examples::Basics
