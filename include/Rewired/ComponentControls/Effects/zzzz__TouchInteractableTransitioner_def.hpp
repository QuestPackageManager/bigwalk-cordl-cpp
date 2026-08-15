#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/Effects/TouchInteractableTransitioner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/ComponentControls/zzzz__TouchInteractable_def.hpp"
#include "UnityEngine/UI/zzzz__ColorBlock_def.hpp"
#include "UnityEngine/UI/zzzz__SpriteState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TouchInteractableTransitioner)
namespace Rewired::ComponentControls {
class TouchInteractable_IInteractionStateTransitionHandler;
}
namespace Rewired::ComponentControls {
class TouchInteractable_InteractionStateTransitionArgs;
}
namespace Rewired::ComponentControls {
struct TouchInteractable_InteractionState;
}
namespace Rewired::ComponentControls {
struct TouchInteractable_TransitionTypeFlags;
}
namespace Rewired::UI {
class IVisibilityChangedHandler;
}
namespace UnityEngine::UI {
class AnimationTriggers;
}
namespace UnityEngine::UI {
struct ColorBlock;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
struct SpriteState;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace Rewired::ComponentControls::Effects {
class TouchInteractableTransitioner;
}
// Write type traits
MARK_REF_T(::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*);
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*, "Rewired.ComponentControls.Effects", "TouchInteractableTransitioner");
// Dependencies Rewired.ComponentControls.TouchInteractable::InteractionState, Rewired.ComponentControls.TouchInteractable::TransitionTypeFlags, UnityEngine.MonoBehaviour, UnityEngine.UI.ColorBlock, UnityEngine.UI.SpriteState
namespace Rewired::ComponentControls::Effects {
// Is value type: false
// CS Name: Rewired.ComponentControls.Effects.TouchInteractableTransitioner
class CORDL_TYPE TouchInteractableTransitioner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field MsZVgjQoLfqoVWalvGRSXWayURFO, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_MsZVgjQoLfqoVWalvGRSXWayURFO, put=__cordl_internal_set_MsZVgjQoLfqoVWalvGRSXWayURFO)) ::Rewired::ComponentControls::TouchInteractable_InteractionState  MsZVgjQoLfqoVWalvGRSXWayURFO;

/// @brief Field _syncColorTintWithTransitionEvent, offset 0xb1, size 0x1 
 __declspec(property(get=__cordl_internal_get__syncColorTintWithTransitionEvent, put=__cordl_internal_set__syncColorTintWithTransitionEvent)) bool  _syncColorTintWithTransitionEvent;

/// @brief Field _syncFadeDurationWithTransitionEvent, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get__syncFadeDurationWithTransitionEvent, put=__cordl_internal_set__syncFadeDurationWithTransitionEvent)) bool  _syncFadeDurationWithTransitionEvent;

/// @brief Field _targetGraphic, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetGraphic, put=__cordl_internal_set__targetGraphic)) ::UnityW<::UnityEngine::UI::Graphic>  _targetGraphic;

/// @brief Field _transitionAnimationTriggers, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__transitionAnimationTriggers, put=__cordl_internal_set__transitionAnimationTriggers)) ::UnityEngine::UI::AnimationTriggers*  _transitionAnimationTriggers;

/// @brief Field _transitionColorTint, offset 0x28, size 0x58 
 __declspec(property(get=__cordl_internal_get__transitionColorTint, put=__cordl_internal_set__transitionColorTint)) ::UnityEngine::UI::ColorBlock  _transitionColorTint;

/// @brief Field _transitionSpriteState, offset 0x80, size 0x20 
 __declspec(property(get=__cordl_internal_get__transitionSpriteState, put=__cordl_internal_set__transitionSpriteState)) ::UnityEngine::UI::SpriteState  _transitionSpriteState;

/// @brief Field _transitionType, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__transitionType, put=__cordl_internal_set__transitionType)) ::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags  _transitionType;

/// @brief Field _visible, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__visible, put=__cordl_internal_set__visible)) bool  _visible;

 __declspec(property(get=get_animator)) ::UnityW<::UnityEngine::Animator>  animator;

 __declspec(property(get=get_image, put=set_image)) ::UnityW<::UnityEngine::UI::Image>  image;

 __declspec(property(get=get_syncColorTintWithTransitionEvent, put=set_syncColorTintWithTransitionEvent)) bool  syncColorTintWithTransitionEvent;

 __declspec(property(get=get_syncFadeDurationWithTransitionEvent, put=set_syncFadeDurationWithTransitionEvent)) bool  syncFadeDurationWithTransitionEvent;

 __declspec(property(get=get_targetGraphic, put=set_targetGraphic)) ::UnityW<::UnityEngine::UI::Graphic>  targetGraphic;

 __declspec(property(get=get_transitionAnimationTriggers, put=set_transitionAnimationTriggers)) ::UnityEngine::UI::AnimationTriggers*  transitionAnimationTriggers;

 __declspec(property(get=get_transitionColorTint, put=set_transitionColorTint)) ::UnityEngine::UI::ColorBlock  transitionColorTint;

 __declspec(property(get=get_transitionSpriteState, put=set_transitionSpriteState)) ::UnityEngine::UI::SpriteState  transitionSpriteState;

 __declspec(property(get=get_transitionType, put=set_transitionType)) ::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags  transitionType;

 __declspec(property(get=get_visible, put=set_visible)) bool  visible;

/// @brief Convert operator to "::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler"
constexpr operator  ::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*() noexcept;

/// @brief Convert operator to "::Rewired::UI::IVisibilityChangedHandler"
constexpr operator  ::Rewired::UI::IVisibilityChangedHandler*() noexcept;

/// @brief Method Awake, addr 0x1818f5e80, size 0x70, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GRICQbELqPxRwOoVadptGefhMjEhb, addr 0x1818f5ef0, size 0xc0, virtual false, abstract: false, final false
inline void GRICQbELqPxRwOoVadptGefhMjEhb(::UnityEngine::Sprite*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method GWMpvJkMaHaUFAlhAQYswKtscUCh, addr 0x1818f5fb0, size 0x20, virtual false, abstract: false, final false
inline void GWMpvJkMaHaUFAlhAQYswKtscUCh(bool  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method HfupDvoDugoCkOMttGsSfvYuqDAmA, addr 0x1818f5fd0, size 0x2e0, virtual false, abstract: false, final false
inline void HfupDvoDugoCkOMttGsSfvYuqDAmA(::Rewired::ComponentControls::TouchInteractable_InteractionState  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner* New_ctor() ;

/// @brief Method OnAnimationPropertiesWereApplied, addr 0x1818f62b0, size 0x30, virtual false, abstract: false, final false
inline void OnAnimationPropertiesWereApplied() ;

/// @brief Method OnCanvasGroupWasChanged, addr 0x1818f62b0, size 0x30, virtual false, abstract: false, final false
inline void OnCanvasGroupWasChanged() ;

/// @brief Method OnDisable, addr 0x1818f62e0, size 0xc0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1818f63a0, size 0x30, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnInteractionStateTransition, addr 0x1818f63d0, size 0x1f0, virtual true, abstract: false, final true
inline void OnInteractionStateTransition(::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*  args) ;

/// @brief Method OnValidate, addr 0x1818f65c0, size 0x120, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method OnVisibilityChanged, addr 0x1818f66e0, size 0x50, virtual true, abstract: false, final true
inline void OnVisibilityChanged(bool  state) ;

/// @brief Method Reset, addr 0x1818f6730, size 0x50, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method XjFsyxyGudEWhLDzGAtBhvkoOIVqA, addr 0x1818f62b0, size 0x30, virtual false, abstract: false, final false
inline void XjFsyxyGudEWhLDzGAtBhvkoOIVqA() ;

constexpr ::Rewired::ComponentControls::TouchInteractable_InteractionState const& __cordl_internal_get_MsZVgjQoLfqoVWalvGRSXWayURFO() const;

constexpr ::Rewired::ComponentControls::TouchInteractable_InteractionState& __cordl_internal_get_MsZVgjQoLfqoVWalvGRSXWayURFO() ;

constexpr bool const& __cordl_internal_get__syncColorTintWithTransitionEvent() const;

constexpr bool& __cordl_internal_get__syncColorTintWithTransitionEvent() ;

constexpr bool const& __cordl_internal_get__syncFadeDurationWithTransitionEvent() const;

constexpr bool& __cordl_internal_get__syncFadeDurationWithTransitionEvent() ;

constexpr ::UnityW<::UnityEngine::UI::Graphic> const& __cordl_internal_get__targetGraphic() const;

constexpr ::UnityW<::UnityEngine::UI::Graphic>& __cordl_internal_get__targetGraphic() ;

constexpr ::UnityEngine::UI::AnimationTriggers* const& __cordl_internal_get__transitionAnimationTriggers() const;

constexpr ::UnityEngine::UI::AnimationTriggers*& __cordl_internal_get__transitionAnimationTriggers() ;

constexpr ::UnityEngine::UI::ColorBlock const& __cordl_internal_get__transitionColorTint() const;

constexpr ::UnityEngine::UI::ColorBlock& __cordl_internal_get__transitionColorTint() ;

constexpr ::UnityEngine::UI::SpriteState const& __cordl_internal_get__transitionSpriteState() const;

constexpr ::UnityEngine::UI::SpriteState& __cordl_internal_get__transitionSpriteState() ;

constexpr ::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags const& __cordl_internal_get__transitionType() const;

constexpr ::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags& __cordl_internal_get__transitionType() ;

constexpr bool const& __cordl_internal_get__visible() const;

constexpr bool& __cordl_internal_get__visible() ;

constexpr void __cordl_internal_set_MsZVgjQoLfqoVWalvGRSXWayURFO(::Rewired::ComponentControls::TouchInteractable_InteractionState  value) ;

constexpr void __cordl_internal_set__syncColorTintWithTransitionEvent(bool  value) ;

constexpr void __cordl_internal_set__syncFadeDurationWithTransitionEvent(bool  value) ;

constexpr void __cordl_internal_set__targetGraphic(::UnityW<::UnityEngine::UI::Graphic>  value) ;

constexpr void __cordl_internal_set__transitionAnimationTriggers(::UnityEngine::UI::AnimationTriggers*  value) ;

constexpr void __cordl_internal_set__transitionColorTint(::UnityEngine::UI::ColorBlock  value) ;

constexpr void __cordl_internal_set__transitionSpriteState(::UnityEngine::UI::SpriteState  value) ;

constexpr void __cordl_internal_set__transitionType(::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags  value) ;

constexpr void __cordl_internal_set__visible(bool  value) ;

/// @brief Method .ctor, addr 0x1818f6780, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method dtdigwhhqYASDAfUomXZYUeMELgab, addr 0x1818f62b0, size 0x30, virtual false, abstract: false, final false
inline void dtdigwhhqYASDAfUomXZYUeMELgab() ;

/// @brief Method get_animator, addr 0x1818e79c0, size 0x30, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Animator> get_animator() ;

/// @brief Method get_image, addr 0x1818f6840, size 0x50, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::UI::Image> get_image() ;

/// @brief Method get_syncColorTintWithTransitionEvent, addr 0x1817f13b0, size 0x10, virtual false, abstract: false, final false
inline bool get_syncColorTintWithTransitionEvent() ;

/// @brief Method get_syncFadeDurationWithTransitionEvent, addr 0x18030d8a0, size 0x10, virtual false, abstract: false, final false
inline bool get_syncFadeDurationWithTransitionEvent() ;

/// @brief Method get_targetGraphic, addr 0x180322750, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::UI::Graphic> get_targetGraphic() ;

/// @brief Method get_transitionAnimationTriggers, addr 0x1802ec4d0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::UI::AnimationTriggers* get_transitionAnimationTriggers() ;

/// @brief Method get_transitionColorTint, addr 0x1818f6890, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::UI::ColorBlock get_transitionColorTint() ;

/// @brief Method get_transitionSpriteState, addr 0x1818f68d0, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::UI::SpriteState get_transitionSpriteState() ;

/// @brief Method get_transitionType, addr 0x180396ef0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags get_transitionType() ;

/// @brief Method get_visible, addr 0x1803a7410, size 0x10, virtual false, abstract: false, final false
inline bool get_visible() ;

/// @brief Method hZSofWtmwzcyAGfxpMUPahHnaFxj, addr 0x1818f68f0, size 0xb0, virtual false, abstract: false, final false
inline void hZSofWtmwzcyAGfxpMUPahHnaFxj(::UnityEngine::Color  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method iXGxIDaqwivLSrENRauddWpOlXofA, addr 0x1818f62e0, size 0xc0, virtual false, abstract: false, final false
inline void iXGxIDaqwivLSrENRauddWpOlXofA() ;

/// @brief Convert to "::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler"
constexpr ::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler* i___Rewired__ComponentControls__TouchInteractable_IInteractionStateTransitionHandler() noexcept;

/// @brief Convert to "::Rewired::UI::IVisibilityChangedHandler"
constexpr ::Rewired::UI::IVisibilityChangedHandler* i___Rewired__UI__IVisibilityChangedHandler() noexcept;

/// @brief Method pisPnzOSMNfdwEokCLOIEYOXvPqm, addr 0x1818d6620, size 0x10, virtual false, abstract: false, final false
inline bool pisPnzOSMNfdwEokCLOIEYOXvPqm() ;

/// @brief Method set_image, addr 0x1818f69a0, size 0x80, virtual false, abstract: false, final false
inline void set_image(::UnityEngine::UI::Image*  value) ;

/// @brief Method set_syncColorTintWithTransitionEvent, addr 0x1818f6a20, size 0x50, virtual false, abstract: false, final false
inline void set_syncColorTintWithTransitionEvent(bool  value) ;

/// @brief Method set_syncFadeDurationWithTransitionEvent, addr 0x1818f6a70, size 0x50, virtual false, abstract: false, final false
inline void set_syncFadeDurationWithTransitionEvent(bool  value) ;

/// @brief Method set_targetGraphic, addr 0x1818f69a0, size 0x80, virtual false, abstract: false, final false
inline void set_targetGraphic(::UnityEngine::UI::Graphic*  value) ;

/// @brief Method set_transitionAnimationTriggers, addr 0x1818f6ac0, size 0x60, virtual false, abstract: false, final false
inline void set_transitionAnimationTriggers(::UnityEngine::UI::AnimationTriggers*  value) ;

/// @brief Method set_transitionColorTint, addr 0x1818f6b20, size 0x60, virtual false, abstract: false, final false
inline void set_transitionColorTint(::UnityEngine::UI::ColorBlock  value) ;

/// @brief Method set_transitionSpriteState, addr 0x1818f6b80, size 0xa0, virtual false, abstract: false, final false
inline void set_transitionSpriteState(::UnityEngine::UI::SpriteState  value) ;

/// @brief Method set_transitionType, addr 0x1818f6c20, size 0x50, virtual false, abstract: false, final false
inline void set_transitionType(::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags  value) ;

/// @brief Method set_visible, addr 0x1818f66e0, size 0x50, virtual false, abstract: false, final false
inline void set_visible(bool  value) ;

/// @brief Method vcECuudbwWpnRyESCaCanwfcfsBR, addr 0x1818f6c70, size 0x240, virtual false, abstract: false, final false
inline void vcECuudbwWpnRyESCaCanwfcfsBR(::StringW  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method zLqjFnJQnulVDFAjFFywiNmwCePOA, addr 0x1818f6eb0, size 0x10, virtual false, abstract: false, final false
inline void zLqjFnJQnulVDFAjFFywiNmwCePOA(bool  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchInteractableTransitioner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchInteractableTransitioner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchInteractableTransitioner(TouchInteractableTransitioner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchInteractableTransitioner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchInteractableTransitioner(TouchInteractableTransitioner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2803};

/// @brief Field _visible, offset: 0x20, size: 0x1, def value: None
 bool  ____visible;

/// @brief Field _transitionType, offset: 0x24, size: 0x4, def value: None
 ::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags  ____transitionType;

/// @brief Field _transitionColorTint, offset: 0x28, size: 0x58, def value: None
 ::UnityEngine::UI::ColorBlock  ____transitionColorTint;

/// @brief Field _transitionSpriteState, offset: 0x80, size: 0x20, def value: None
 ::UnityEngine::UI::SpriteState  ____transitionSpriteState;

/// @brief Field _transitionAnimationTriggers, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::UI::AnimationTriggers*  ____transitionAnimationTriggers;

/// @brief Field _targetGraphic, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Graphic>  ____targetGraphic;

/// @brief Field _syncFadeDurationWithTransitionEvent, offset: 0xb0, size: 0x1, def value: None
 bool  ____syncFadeDurationWithTransitionEvent;

/// @brief Field _syncColorTintWithTransitionEvent, offset: 0xb1, size: 0x1, def value: None
 bool  ____syncColorTintWithTransitionEvent;

/// @brief Field MsZVgjQoLfqoVWalvGRSXWayURFO, offset: 0xb4, size: 0x4, def value: None
 ::Rewired::ComponentControls::TouchInteractable_InteractionState  ___MsZVgjQoLfqoVWalvGRSXWayURFO;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::Effects::TouchInteractableTransitioner, ____visible) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Effects::TouchInteractableTransitioner, ____transitionType) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Effects::TouchInteractableTransitioner, ____transitionColorTint) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Effects::TouchInteractableTransitioner, ____transitionSpriteState) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Effects::TouchInteractableTransitioner, ____transitionAnimationTriggers) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Effects::TouchInteractableTransitioner, ____targetGraphic) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Effects::TouchInteractableTransitioner, ____syncFadeDurationWithTransitionEvent) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Effects::TouchInteractableTransitioner, ____syncColorTintWithTransitionEvent) == 0xb1, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Effects::TouchInteractableTransitioner, ___MsZVgjQoLfqoVWalvGRSXWayURFO) == 0xb4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::Effects::TouchInteractableTransitioner) == 0xb8, "Size mismatch!");

} // namespace end def Rewired::ComponentControls::Effects
