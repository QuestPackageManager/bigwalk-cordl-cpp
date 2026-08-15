#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/Effects/TouchInteractableTransitioner.hpp"
#include "Rewired/ComponentControls/zzzz__TouchInteractable_impl.hpp"
#include "UnityEngine/UI/zzzz__ColorBlock_impl.hpp"
#include "UnityEngine/UI/zzzz__SpriteState_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Rewired/ComponentControls/Effects/zzzz__TouchInteractableTransitioner_def.hpp"
#include "Rewired/ComponentControls/zzzz__TouchInteractable_def.hpp"
#include "Rewired/UI/zzzz__IVisibilityChangedHandler_def.hpp"
#include "UnityEngine/UI/zzzz__AnimationTriggers_def.hpp"
#include "UnityEngine/UI/zzzz__ColorBlock_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/UI/zzzz__SpriteState_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.get_visible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)()>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::get_visible)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"get_visible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.set_visible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)(bool)>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::set_visible)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818f66e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"set_visible", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.get_transitionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)()>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::get_transitionType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"get_transitionType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.set_transitionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)(::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags)>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::set_transitionType)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818f6c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"set_transitionType", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.get_transitionColorTint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::ColorBlock (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)()>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::get_transitionColorTint)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818f6890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"get_transitionColorTint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.set_transitionColorTint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)(::UnityEngine::UI::ColorBlock)>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::set_transitionColorTint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818f6b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"set_transitionColorTint", {}, {::i2c::type_of<::UnityEngine::UI::ColorBlock>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.get_transitionSpriteState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::SpriteState (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)()>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::get_transitionSpriteState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818f68d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"get_transitionSpriteState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.set_transitionSpriteState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)(::UnityEngine::UI::SpriteState)>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::set_transitionSpriteState)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1818f6b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"set_transitionSpriteState", {}, {::i2c::type_of<::UnityEngine::UI::SpriteState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.get_transitionAnimationTriggers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::AnimationTriggers* (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)()>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::get_transitionAnimationTriggers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"get_transitionAnimationTriggers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.set_transitionAnimationTriggers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)(::UnityEngine::UI::AnimationTriggers*)>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::set_transitionAnimationTriggers)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818f6ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"set_transitionAnimationTriggers", {}, {::i2c::type_of<::UnityEngine::UI::AnimationTriggers*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.get_targetGraphic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Graphic> (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)()>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::get_targetGraphic)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180322750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"get_targetGraphic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.set_targetGraphic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)(::UnityEngine::UI::Graphic*)>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::set_targetGraphic)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f69a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"set_targetGraphic", {}, {::i2c::type_of<::UnityEngine::UI::Graphic*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.get_syncFadeDurationWithTransitionEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)()>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::get_syncFadeDurationWithTransitionEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18030d8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"get_syncFadeDurationWithTransitionEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.set_syncFadeDurationWithTransitionEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)(bool)>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::set_syncFadeDurationWithTransitionEvent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818f6a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"set_syncFadeDurationWithTransitionEvent", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.get_syncColorTintWithTransitionEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)()>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::get_syncColorTintWithTransitionEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1817f13b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"get_syncColorTintWithTransitionEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.set_syncColorTintWithTransitionEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)(bool)>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::set_syncColorTintWithTransitionEvent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818f6a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"set_syncColorTintWithTransitionEvent", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.get_image
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Image> (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)()>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::get_image)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818f6840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"get_image", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.set_image
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)(::UnityEngine::UI::Image*)>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::set_image)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f69a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"set_image", {}, {::i2c::type_of<::UnityEngine::UI::Image*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.get_animator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Animator> (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)()>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::get_animator)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e79c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"get_animator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)()>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818f6780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)()>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::Awake)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818f5e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)()>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::OnEnable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818f63a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)()>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::OnDisable)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818f62e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)()>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::OnValidate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1818f65c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)()>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::Reset)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818f6730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.OnCanvasGroupWasChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)()>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::OnCanvasGroupWasChanged)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818f62b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"OnCanvasGroupWasChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.OnAnimationPropertiesWereApplied
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)()>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::OnAnimationPropertiesWereApplied)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818f62b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"OnAnimationPropertiesWereApplied", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.dtdigwhhqYASDAfUomXZYUeMELgab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)()>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::dtdigwhhqYASDAfUomXZYUeMELgab)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818f62b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"dtdigwhhqYASDAfUomXZYUeMELgab", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.XjFsyxyGudEWhLDzGAtBhvkoOIVqA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)()>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::XjFsyxyGudEWhLDzGAtBhvkoOIVqA)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818f62b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"XjFsyxyGudEWhLDzGAtBhvkoOIVqA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.GWMpvJkMaHaUFAlhAQYswKtscUCh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)(bool)>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::GWMpvJkMaHaUFAlhAQYswKtscUCh)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818f5fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"GWMpvJkMaHaUFAlhAQYswKtscUCh", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.zLqjFnJQnulVDFAjFFywiNmwCePOA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)(bool, bool)>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::zLqjFnJQnulVDFAjFFywiNmwCePOA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818f6eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"zLqjFnJQnulVDFAjFFywiNmwCePOA", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.pisPnzOSMNfdwEokCLOIEYOXvPqm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)()>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::pisPnzOSMNfdwEokCLOIEYOXvPqm)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818d6620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"pisPnzOSMNfdwEokCLOIEYOXvPqm", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.iXGxIDaqwivLSrENRauddWpOlXofA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)()>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::iXGxIDaqwivLSrENRauddWpOlXofA)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818f62e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"iXGxIDaqwivLSrENRauddWpOlXofA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.HfupDvoDugoCkOMttGsSfvYuqDAmA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)(::Rewired::ComponentControls::TouchInteractable_InteractionState, bool)>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::HfupDvoDugoCkOMttGsSfvYuqDAmA)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x1818f5fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"HfupDvoDugoCkOMttGsSfvYuqDAmA", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchInteractable_InteractionState>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.hZSofWtmwzcyAGfxpMUPahHnaFxj
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)(::UnityEngine::Color, bool)>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::hZSofWtmwzcyAGfxpMUPahHnaFxj)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1818f68f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"hZSofWtmwzcyAGfxpMUPahHnaFxj", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.GRICQbELqPxRwOoVadptGefhMjEhb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)(::UnityEngine::Sprite*)>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::GRICQbELqPxRwOoVadptGefhMjEhb)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818f5ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"GRICQbELqPxRwOoVadptGefhMjEhb", {}, {::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.vcECuudbwWpnRyESCaCanwfcfsBR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)(::StringW)>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::vcECuudbwWpnRyESCaCanwfcfsBR)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1818f6c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"vcECuudbwWpnRyESCaCanwfcfsBR", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.OnInteractionStateTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)(::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*)>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::OnInteractionStateTransition)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1818f63d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"OnInteractionStateTransition", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner.OnVisibilityChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::*)(bool)>(&::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::OnVisibilityChanged)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818f66e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"OnVisibilityChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rewired::ComponentControls::Effects::TouchInteractableTransitioner::__cordl_internal_get__visible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visible;
}
constexpr bool const& Rewired::ComponentControls::Effects::TouchInteractableTransitioner::__cordl_internal_get__visible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visible;
}
constexpr void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::__cordl_internal_set__visible(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____visible = value;
}
constexpr ::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags& Rewired::ComponentControls::Effects::TouchInteractableTransitioner::__cordl_internal_get__transitionType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transitionType;
}
constexpr ::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags const& Rewired::ComponentControls::Effects::TouchInteractableTransitioner::__cordl_internal_get__transitionType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transitionType;
}
constexpr void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::__cordl_internal_set__transitionType(::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transitionType = value;
}
constexpr ::UnityEngine::UI::ColorBlock& Rewired::ComponentControls::Effects::TouchInteractableTransitioner::__cordl_internal_get__transitionColorTint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transitionColorTint;
}
constexpr ::UnityEngine::UI::ColorBlock const& Rewired::ComponentControls::Effects::TouchInteractableTransitioner::__cordl_internal_get__transitionColorTint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transitionColorTint;
}
constexpr void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::__cordl_internal_set__transitionColorTint(::UnityEngine::UI::ColorBlock  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transitionColorTint = value;
}
constexpr ::UnityEngine::UI::SpriteState& Rewired::ComponentControls::Effects::TouchInteractableTransitioner::__cordl_internal_get__transitionSpriteState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transitionSpriteState;
}
constexpr ::UnityEngine::UI::SpriteState const& Rewired::ComponentControls::Effects::TouchInteractableTransitioner::__cordl_internal_get__transitionSpriteState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transitionSpriteState;
}
constexpr void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::__cordl_internal_set__transitionSpriteState(::UnityEngine::UI::SpriteState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transitionSpriteState = value;
}
constexpr ::UnityEngine::UI::AnimationTriggers*& Rewired::ComponentControls::Effects::TouchInteractableTransitioner::__cordl_internal_get__transitionAnimationTriggers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transitionAnimationTriggers;
}
constexpr ::UnityEngine::UI::AnimationTriggers* const& Rewired::ComponentControls::Effects::TouchInteractableTransitioner::__cordl_internal_get__transitionAnimationTriggers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transitionAnimationTriggers;
}
constexpr void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::__cordl_internal_set__transitionAnimationTriggers(::UnityEngine::UI::AnimationTriggers*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transitionAnimationTriggers = value;
}
constexpr ::UnityW<::UnityEngine::UI::Graphic>& Rewired::ComponentControls::Effects::TouchInteractableTransitioner::__cordl_internal_get__targetGraphic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetGraphic;
}
constexpr ::UnityW<::UnityEngine::UI::Graphic> const& Rewired::ComponentControls::Effects::TouchInteractableTransitioner::__cordl_internal_get__targetGraphic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetGraphic;
}
constexpr void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::__cordl_internal_set__targetGraphic(::UnityW<::UnityEngine::UI::Graphic>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetGraphic = value;
}
constexpr bool& Rewired::ComponentControls::Effects::TouchInteractableTransitioner::__cordl_internal_get__syncFadeDurationWithTransitionEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____syncFadeDurationWithTransitionEvent;
}
constexpr bool const& Rewired::ComponentControls::Effects::TouchInteractableTransitioner::__cordl_internal_get__syncFadeDurationWithTransitionEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____syncFadeDurationWithTransitionEvent;
}
constexpr void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::__cordl_internal_set__syncFadeDurationWithTransitionEvent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____syncFadeDurationWithTransitionEvent = value;
}
constexpr bool& Rewired::ComponentControls::Effects::TouchInteractableTransitioner::__cordl_internal_get__syncColorTintWithTransitionEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____syncColorTintWithTransitionEvent;
}
constexpr bool const& Rewired::ComponentControls::Effects::TouchInteractableTransitioner::__cordl_internal_get__syncColorTintWithTransitionEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____syncColorTintWithTransitionEvent;
}
constexpr void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::__cordl_internal_set__syncColorTintWithTransitionEvent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____syncColorTintWithTransitionEvent = value;
}
constexpr ::Rewired::ComponentControls::TouchInteractable_InteractionState& Rewired::ComponentControls::Effects::TouchInteractableTransitioner::__cordl_internal_get_MsZVgjQoLfqoVWalvGRSXWayURFO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MsZVgjQoLfqoVWalvGRSXWayURFO;
}
constexpr ::Rewired::ComponentControls::TouchInteractable_InteractionState const& Rewired::ComponentControls::Effects::TouchInteractableTransitioner::__cordl_internal_get_MsZVgjQoLfqoVWalvGRSXWayURFO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MsZVgjQoLfqoVWalvGRSXWayURFO;
}
constexpr void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::__cordl_internal_set_MsZVgjQoLfqoVWalvGRSXWayURFO(::Rewired::ComponentControls::TouchInteractable_InteractionState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MsZVgjQoLfqoVWalvGRSXWayURFO = value;
}
inline bool Rewired::ComponentControls::Effects::TouchInteractableTransitioner::get_visible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"get_visible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::set_visible(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"set_visible", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags Rewired::ComponentControls::Effects::TouchInteractableTransitioner::get_transitionType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"get_transitionType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::set_transitionType(::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"set_transitionType", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::ColorBlock Rewired::ComponentControls::Effects::TouchInteractableTransitioner::get_transitionColorTint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"get_transitionColorTint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::ColorBlock>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::set_transitionColorTint(::UnityEngine::UI::ColorBlock  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"set_transitionColorTint", {}, {::i2c::type_of<::UnityEngine::UI::ColorBlock>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::SpriteState Rewired::ComponentControls::Effects::TouchInteractableTransitioner::get_transitionSpriteState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"get_transitionSpriteState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::SpriteState>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::set_transitionSpriteState(::UnityEngine::UI::SpriteState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"set_transitionSpriteState", {}, {::i2c::type_of<::UnityEngine::UI::SpriteState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::AnimationTriggers* Rewired::ComponentControls::Effects::TouchInteractableTransitioner::get_transitionAnimationTriggers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"get_transitionAnimationTriggers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::AnimationTriggers*>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::set_transitionAnimationTriggers(::UnityEngine::UI::AnimationTriggers*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"set_transitionAnimationTriggers", {}, {::i2c::type_of<::UnityEngine::UI::AnimationTriggers*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UI::Graphic> Rewired::ComponentControls::Effects::TouchInteractableTransitioner::get_targetGraphic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"get_targetGraphic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Graphic>>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::set_targetGraphic(::UnityEngine::UI::Graphic*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"set_targetGraphic", {}, {::i2c::type_of<::UnityEngine::UI::Graphic*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::Effects::TouchInteractableTransitioner::get_syncFadeDurationWithTransitionEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"get_syncFadeDurationWithTransitionEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::set_syncFadeDurationWithTransitionEvent(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"set_syncFadeDurationWithTransitionEvent", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::Effects::TouchInteractableTransitioner::get_syncColorTintWithTransitionEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"get_syncColorTintWithTransitionEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::set_syncColorTintWithTransitionEvent(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"set_syncColorTintWithTransitionEvent", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UI::Image> Rewired::ComponentControls::Effects::TouchInteractableTransitioner::get_image()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"get_image", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Image>>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::set_image(::UnityEngine::UI::Image*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"set_image", {}, {::i2c::type_of<::UnityEngine::UI::Image*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Animator> Rewired::ComponentControls::Effects::TouchInteractableTransitioner::get_animator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"get_animator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Animator>>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::OnCanvasGroupWasChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"OnCanvasGroupWasChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::OnAnimationPropertiesWereApplied()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"OnAnimationPropertiesWereApplied", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::dtdigwhhqYASDAfUomXZYUeMELgab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"dtdigwhhqYASDAfUomXZYUeMELgab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::XjFsyxyGudEWhLDzGAtBhvkoOIVqA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"XjFsyxyGudEWhLDzGAtBhvkoOIVqA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::GWMpvJkMaHaUFAlhAQYswKtscUCh(bool  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"GWMpvJkMaHaUFAlhAQYswKtscUCh", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::zLqjFnJQnulVDFAjFFywiNmwCePOA(bool  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"zLqjFnJQnulVDFAjFFywiNmwCePOA", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline bool Rewired::ComponentControls::Effects::TouchInteractableTransitioner::pisPnzOSMNfdwEokCLOIEYOXvPqm()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"pisPnzOSMNfdwEokCLOIEYOXvPqm", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::iXGxIDaqwivLSrENRauddWpOlXofA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"iXGxIDaqwivLSrENRauddWpOlXofA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::HfupDvoDugoCkOMttGsSfvYuqDAmA(::Rewired::ComponentControls::TouchInteractable_InteractionState  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"HfupDvoDugoCkOMttGsSfvYuqDAmA", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchInteractable_InteractionState>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::hZSofWtmwzcyAGfxpMUPahHnaFxj(::UnityEngine::Color  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"hZSofWtmwzcyAGfxpMUPahHnaFxj", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::GRICQbELqPxRwOoVadptGefhMjEhb(::UnityEngine::Sprite*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"GRICQbELqPxRwOoVadptGefhMjEhb", {}, {::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::vcECuudbwWpnRyESCaCanwfcfsBR(::StringW  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"vcECuudbwWpnRyESCaCanwfcfsBR", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::OnInteractionStateTransition(::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"OnInteractionStateTransition", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void Rewired::ComponentControls::Effects::TouchInteractableTransitioner::OnVisibilityChanged(bool  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>(),
                        {"OnVisibilityChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner* Rewired::ComponentControls::Effects::TouchInteractableTransitioner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::Effects::TouchInteractableTransitioner*>());
}
/// @brief Convert operator to "::Rewired::UI::IVisibilityChangedHandler"
constexpr  Rewired::ComponentControls::Effects::TouchInteractableTransitioner::operator ::Rewired::UI::IVisibilityChangedHandler*() noexcept {
return static_cast<::Rewired::UI::IVisibilityChangedHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::UI::IVisibilityChangedHandler"
constexpr ::Rewired::UI::IVisibilityChangedHandler* Rewired::ComponentControls::Effects::TouchInteractableTransitioner::i___Rewired__UI__IVisibilityChangedHandler() noexcept {
return static_cast<::Rewired::UI::IVisibilityChangedHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler"
constexpr  Rewired::ComponentControls::Effects::TouchInteractableTransitioner::operator ::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*() noexcept {
return static_cast<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler"
constexpr ::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler* Rewired::ComponentControls::Effects::TouchInteractableTransitioner::i___Rewired__ComponentControls__TouchInteractable_IInteractionStateTransitionHandler() noexcept {
return static_cast<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::Effects::TouchInteractableTransitioner::TouchInteractableTransitioner()   {
}
