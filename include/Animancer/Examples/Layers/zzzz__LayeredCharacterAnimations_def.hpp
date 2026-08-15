#pragma once
// IWYU pragma private; include "Animancer/Examples/Layers/LayeredCharacterAnimations.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LayeredCharacterAnimations)
namespace Animancer {
class AnimancerComponent;
}
namespace Animancer {
class AnimancerLayer;
}
namespace Animancer {
class ClipTransition;
}
namespace UnityEngine {
class AvatarMask;
}
// Forward declare root types
namespace Animancer::Examples::Layers {
class LayeredCharacterAnimations;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::Layers::LayeredCharacterAnimations*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::Layers::LayeredCharacterAnimations*, "Animancer.Examples.Layers", "LayeredCharacterAnimations");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer::Examples::Layers {
// Is value type: false
// CS Name: Animancer.Examples.Layers.LayeredCharacterAnimations
class CORDL_TYPE LayeredCharacterAnimations : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _Action, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Action, put=__cordl_internal_set__Action)) ::Animancer::ClipTransition*  _Action;

/// @brief Field _ActionFadeOutDuration, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__ActionFadeOutDuration, put=__cordl_internal_set__ActionFadeOutDuration)) float_t  _ActionFadeOutDuration;

/// @brief Field _ActionLayer, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__ActionLayer, put=__cordl_internal_set__ActionLayer)) ::Animancer::AnimancerLayer*  _ActionLayer;

/// @brief Field _ActionMask, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__ActionMask, put=__cordl_internal_set__ActionMask)) ::UnityW<::UnityEngine::AvatarMask>  _ActionMask;

/// @brief Field _Animancer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animancer, put=__cordl_internal_set__Animancer)) ::UnityW<::Animancer::AnimancerComponent>  _Animancer;

/// @brief Field _BaseLayer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__BaseLayer, put=__cordl_internal_set__BaseLayer)) ::Animancer::AnimancerLayer*  _BaseLayer;

/// @brief Field _Idle, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Idle, put=__cordl_internal_set__Idle)) ::Animancer::ClipTransition*  _Idle;

/// @brief Field _Move, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Move, put=__cordl_internal_set__Move)) ::Animancer::ClipTransition*  _Move;

/// @brief Method Awake, addr 0x1802fdff0, size 0x100, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Animancer::Examples::Layers::LayeredCharacterAnimations* New_ctor() ;

/// @brief Method OnActionEnd, addr 0x1802fe0f0, size 0x30, virtual false, abstract: false, final false
inline void OnActionEnd() ;

/// @brief Method Update, addr 0x1802fe1d0, size 0x80, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateAction, addr 0x1802fe120, size 0x40, virtual false, abstract: false, final false
inline void UpdateAction() ;

/// @brief Method UpdateMovement, addr 0x1802fe160, size 0x70, virtual false, abstract: false, final false
inline void UpdateMovement() ;

constexpr ::Animancer::ClipTransition* const& __cordl_internal_get__Action() const;

constexpr ::Animancer::ClipTransition*& __cordl_internal_get__Action() ;

constexpr float_t const& __cordl_internal_get__ActionFadeOutDuration() const;

constexpr float_t& __cordl_internal_get__ActionFadeOutDuration() ;

constexpr ::Animancer::AnimancerLayer* const& __cordl_internal_get__ActionLayer() const;

constexpr ::Animancer::AnimancerLayer*& __cordl_internal_get__ActionLayer() ;

constexpr ::UnityW<::UnityEngine::AvatarMask> const& __cordl_internal_get__ActionMask() const;

constexpr ::UnityW<::UnityEngine::AvatarMask>& __cordl_internal_get__ActionMask() ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get__Animancer() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get__Animancer() ;

constexpr ::Animancer::AnimancerLayer* const& __cordl_internal_get__BaseLayer() const;

constexpr ::Animancer::AnimancerLayer*& __cordl_internal_get__BaseLayer() ;

constexpr ::Animancer::ClipTransition* const& __cordl_internal_get__Idle() const;

constexpr ::Animancer::ClipTransition*& __cordl_internal_get__Idle() ;

constexpr ::Animancer::ClipTransition* const& __cordl_internal_get__Move() const;

constexpr ::Animancer::ClipTransition*& __cordl_internal_get__Move() ;

constexpr void __cordl_internal_set__Action(::Animancer::ClipTransition*  value) ;

constexpr void __cordl_internal_set__ActionFadeOutDuration(float_t  value) ;

constexpr void __cordl_internal_set__ActionLayer(::Animancer::AnimancerLayer*  value) ;

constexpr void __cordl_internal_set__ActionMask(::UnityW<::UnityEngine::AvatarMask>  value) ;

constexpr void __cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set__BaseLayer(::Animancer::AnimancerLayer*  value) ;

constexpr void __cordl_internal_set__Idle(::Animancer::ClipTransition*  value) ;

constexpr void __cordl_internal_set__Move(::Animancer::ClipTransition*  value) ;

/// @brief Method .ctor, addr 0x1802fe250, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LayeredCharacterAnimations() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LayeredCharacterAnimations", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LayeredCharacterAnimations(LayeredCharacterAnimations && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LayeredCharacterAnimations", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LayeredCharacterAnimations(LayeredCharacterAnimations const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19988};

/// @brief Field _Animancer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ____Animancer;

/// @brief Field _Idle, offset: 0x28, size: 0x8, def value: None
 ::Animancer::ClipTransition*  ____Idle;

/// @brief Field _Move, offset: 0x30, size: 0x8, def value: None
 ::Animancer::ClipTransition*  ____Move;

/// @brief Field _Action, offset: 0x38, size: 0x8, def value: None
 ::Animancer::ClipTransition*  ____Action;

/// @brief Field _ActionMask, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AvatarMask>  ____ActionMask;

/// @brief Field _ActionFadeOutDuration, offset: 0x48, size: 0x4, def value: None
 float_t  ____ActionFadeOutDuration;

/// @brief Field _BaseLayer, offset: 0x50, size: 0x8, def value: None
 ::Animancer::AnimancerLayer*  ____BaseLayer;

/// @brief Field _ActionLayer, offset: 0x58, size: 0x8, def value: None
 ::Animancer::AnimancerLayer*  ____ActionLayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::Layers::LayeredCharacterAnimations, ____Animancer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Layers::LayeredCharacterAnimations, ____Idle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Layers::LayeredCharacterAnimations, ____Move) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Layers::LayeredCharacterAnimations, ____Action) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Layers::LayeredCharacterAnimations, ____ActionMask) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Layers::LayeredCharacterAnimations, ____ActionFadeOutDuration) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Layers::LayeredCharacterAnimations, ____BaseLayer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Layers::LayeredCharacterAnimations, ____ActionLayer) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::Layers::LayeredCharacterAnimations) == 0x60, "Size mismatch!");

} // namespace end def Animancer::Examples::Layers
