#pragma once
// IWYU pragma private; include "Animancer/Examples/Basics/PlayTransitionOnClick.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PlayTransitionOnClick)
namespace Animancer {
class AnimancerComponent;
}
namespace Animancer {
class ClipTransition;
}
// Forward declare root types
namespace Animancer::Examples::Basics {
class PlayTransitionOnClick;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::Basics::PlayTransitionOnClick*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::Basics::PlayTransitionOnClick*, "Animancer.Examples.Basics", "PlayTransitionOnClick");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer::Examples::Basics {
// Is value type: false
// CS Name: Animancer.Examples.Basics.PlayTransitionOnClick
class CORDL_TYPE PlayTransitionOnClick : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _Action, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Action, put=__cordl_internal_set__Action)) ::Animancer::ClipTransition*  _Action;

/// @brief Field _Animancer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animancer, put=__cordl_internal_set__Animancer)) ::UnityW<::Animancer::AnimancerComponent>  _Animancer;

/// @brief Field _Idle, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Idle, put=__cordl_internal_set__Idle)) ::Animancer::ClipTransition*  _Idle;

static inline ::Animancer::Examples::Basics::PlayTransitionOnClick* New_ctor() ;

/// @brief Method OnActionEnd, addr 0x1802fba70, size 0x30, virtual false, abstract: false, final false
inline void OnActionEnd() ;

/// @brief Method OnEnable, addr 0x180300210, size 0x90, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x1803002a0, size 0x40, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::Animancer::ClipTransition* const& __cordl_internal_get__Action() const;

constexpr ::Animancer::ClipTransition*& __cordl_internal_get__Action() ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get__Animancer() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get__Animancer() ;

constexpr ::Animancer::ClipTransition* const& __cordl_internal_get__Idle() const;

constexpr ::Animancer::ClipTransition*& __cordl_internal_get__Idle() ;

constexpr void __cordl_internal_set__Action(::Animancer::ClipTransition*  value) ;

constexpr void __cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set__Idle(::Animancer::ClipTransition*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayTransitionOnClick() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayTransitionOnClick", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayTransitionOnClick(PlayTransitionOnClick && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayTransitionOnClick", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayTransitionOnClick(PlayTransitionOnClick const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20032};

/// @brief Field _Animancer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ____Animancer;

/// @brief Field _Idle, offset: 0x28, size: 0x8, def value: None
 ::Animancer::ClipTransition*  ____Idle;

/// @brief Field _Action, offset: 0x30, size: 0x8, def value: None
 ::Animancer::ClipTransition*  ____Action;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::Basics::PlayTransitionOnClick, ____Animancer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Basics::PlayTransitionOnClick, ____Idle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Basics::PlayTransitionOnClick, ____Action) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::Basics::PlayTransitionOnClick) == 0x38, "Size mismatch!");

} // namespace end def Animancer::Examples::Basics
