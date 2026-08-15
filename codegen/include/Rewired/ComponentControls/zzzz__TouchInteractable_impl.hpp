#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/TouchInteractable.hpp"
#include "Rewired/ComponentControls/zzzz__TouchControl_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/UI/zzzz__ColorBlock_impl.hpp"
#include "UnityEngine/UI/zzzz__SpriteState_impl.hpp"
#include "Rewired/ComponentControls/zzzz__TouchInteractable_def.hpp"
#include "GlobalNamespace/zzzz__QbRVyGVboNvuPJltmYjDksZXeDGJA_def.hpp"
#include "Rewired/ComponentControls/zzzz__TouchInteractable_def.hpp"
#include "Rewired/UI/zzzz__IVisibilityChangedHandler_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventTriggerType_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IBeginDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEndDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerDownHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerExitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerUpHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/UI/zzzz__AnimationTriggers_def.hpp"
#include "UnityEngine/UI/zzzz__ColorBlock_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/UI/zzzz__SpriteState_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ComponentControls::TouchInteractable_InteractionState::TouchInteractable_InteractionState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchInteractable_InteractionState::TouchInteractable_InteractionState()   {
}
constexpr ::Rewired::ComponentControls::TouchInteractable_InteractionState  Rewired::ComponentControls::TouchInteractable_InteractionState::Normal{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ComponentControls::TouchInteractable_InteractionState  Rewired::ComponentControls::TouchInteractable_InteractionState::Highlighted{static_cast<int32_t>(0x1)};
constexpr ::Rewired::ComponentControls::TouchInteractable_InteractionState  Rewired::ComponentControls::TouchInteractable_InteractionState::Pressed{static_cast<int32_t>(0x2)};
constexpr ::Rewired::ComponentControls::TouchInteractable_InteractionState  Rewired::ComponentControls::TouchInteractable_InteractionState::Disabled{static_cast<int32_t>(0x3)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags::TouchInteractable_TransitionTypeFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags::TouchInteractable_TransitionTypeFlags()   {
}
constexpr ::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags  Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags::None{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags  Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags::ColorTint{static_cast<int32_t>(0x1)};
constexpr ::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags  Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags::SpriteSwap{static_cast<int32_t>(0x2)};
constexpr ::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags  Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags::Animation{static_cast<int32_t>(0x4)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags::TouchInteractable_MouseButtonFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags::TouchInteractable_MouseButtonFlags()   {
}
constexpr ::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags  Rewired::ComponentControls::TouchInteractable_MouseButtonFlags::None{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags  Rewired::ComponentControls::TouchInteractable_MouseButtonFlags::LeftButton{static_cast<int32_t>(0x1)};
constexpr ::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags  Rewired::ComponentControls::TouchInteractable_MouseButtonFlags::RightButton{static_cast<int32_t>(0x2)};
constexpr ::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags  Rewired::ComponentControls::TouchInteractable_MouseButtonFlags::MiddleButton{static_cast<int32_t>(0x4)};
constexpr ::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags  Rewired::ComponentControls::TouchInteractable_MouseButtonFlags::AnyButton{static_cast<int32_t>(0xffffffff)};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionEventHandler::*)()>(&::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x8190;
  constexpr static std::size_t addrs = 0x180da3080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionEventHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionEventHandler* Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionEventHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionEventHandler*>());
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionEventHandler::TouchInteractable_InteractionStateTransitionEventHandler()   {
}
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable_VisibilityChangedEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable_VisibilityChangedEventHandler::*)()>(&::Rewired::ComponentControls::TouchInteractable_VisibilityChangedEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x8190;
  constexpr static std::size_t addrs = 0x180da3080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable_VisibilityChangedEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::ComponentControls::TouchInteractable_VisibilityChangedEventHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable_VisibilityChangedEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ComponentControls::TouchInteractable_VisibilityChangedEventHandler* Rewired::ComponentControls::TouchInteractable_VisibilityChangedEventHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::TouchInteractable_VisibilityChangedEventHandler*>());
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchInteractable_VisibilityChangedEventHandler::TouchInteractable_VisibilityChangedEventHandler()   {
}
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs.get_sender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Rewired::ComponentControls::TouchInteractable> (::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs::*)()>(&::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs::get_sender)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>(),
                        {"get_sender", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs.get_state
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ComponentControls::TouchInteractable_InteractionState (::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs::*)()>(&::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs::get_state)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>(),
                        {"get_state", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs.get_duration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs::*)()>(&::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs::get_duration)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f80a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>(),
                        {"get_duration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs::*)()>(&::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs.qybrtWRIKLwpCTsKOELOhIQJikzQA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs::*)(::Rewired::ComponentControls::TouchInteractable*, ::Rewired::ComponentControls::TouchInteractable_InteractionState, float_t)>(&::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs::qybrtWRIKLwpCTsKOELOhIQJikzQA)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818d9b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>(),
                        {"qybrtWRIKLwpCTsKOELOhIQJikzQA", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchInteractable*>(), ::i2c::type_of<::Rewired::ComponentControls::TouchInteractable_InteractionState>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Rewired::ComponentControls::TouchInteractable>& Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs::__cordl_internal_get_NEGupuRLdWSzpNserzbOeTdhTmPB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NEGupuRLdWSzpNserzbOeTdhTmPB;
}
constexpr ::UnityW<::Rewired::ComponentControls::TouchInteractable> const& Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs::__cordl_internal_get_NEGupuRLdWSzpNserzbOeTdhTmPB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NEGupuRLdWSzpNserzbOeTdhTmPB;
}
constexpr void Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs::__cordl_internal_set_NEGupuRLdWSzpNserzbOeTdhTmPB(::UnityW<::Rewired::ComponentControls::TouchInteractable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NEGupuRLdWSzpNserzbOeTdhTmPB = value;
}
constexpr ::Rewired::ComponentControls::TouchInteractable_InteractionState& Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs::__cordl_internal_get_YiHUoLdHFYWhBaVMZrYlDYemkVTB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YiHUoLdHFYWhBaVMZrYlDYemkVTB;
}
constexpr ::Rewired::ComponentControls::TouchInteractable_InteractionState const& Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs::__cordl_internal_get_YiHUoLdHFYWhBaVMZrYlDYemkVTB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YiHUoLdHFYWhBaVMZrYlDYemkVTB;
}
constexpr void Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs::__cordl_internal_set_YiHUoLdHFYWhBaVMZrYlDYemkVTB(::Rewired::ComponentControls::TouchInteractable_InteractionState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___YiHUoLdHFYWhBaVMZrYlDYemkVTB = value;
}
constexpr float_t& Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs::__cordl_internal_get_BGciUKSkBKoLUOJsaQsTZpJEEHFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BGciUKSkBKoLUOJsaQsTZpJEEHFX;
}
constexpr float_t const& Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs::__cordl_internal_get_BGciUKSkBKoLUOJsaQsTZpJEEHFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BGciUKSkBKoLUOJsaQsTZpJEEHFX;
}
constexpr void Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs::__cordl_internal_set_BGciUKSkBKoLUOJsaQsTZpJEEHFX(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BGciUKSkBKoLUOJsaQsTZpJEEHFX = value;
}
inline ::UnityW<::Rewired::ComponentControls::TouchInteractable> Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs::get_sender()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>(),
                        {"get_sender", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Rewired::ComponentControls::TouchInteractable>>(this, ___internal_method);
}
inline ::Rewired::ComponentControls::TouchInteractable_InteractionState Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs::get_state()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>(),
                        {"get_state", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ComponentControls::TouchInteractable_InteractionState>(this, ___internal_method);
}
inline float_t Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs::get_duration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>(),
                        {"get_duration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs::qybrtWRIKLwpCTsKOELOhIQJikzQA(::Rewired::ComponentControls::TouchInteractable*  _cordl_fixed_empty_name_whitespace, ::Rewired::ComponentControls::TouchInteractable_InteractionState  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>(),
                        {"qybrtWRIKLwpCTsKOELOhIQJikzQA", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchInteractable*>(), ::i2c::type_of<::Rewired::ComponentControls::TouchInteractable_InteractionState>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline ::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs* Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>());
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs::TouchInteractable_InteractionStateTransitionArgs()   {
}
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler.OnInteractionStateTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler::*)(::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*)>(&::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler::OnInteractionStateTransition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler::OnInteractionStateTransition(::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI::*)()>(&::Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI.tieQAMjjEthjZsoTBCCVFNpmchCu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI::*)(::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*, ::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*)>(&::Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI::tieQAMjjEthjZsoTBCCVFNpmchCu)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1818ded80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI*>(),
                        {"tieQAMjjEthjZsoTBCCVFNpmchCu", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*>(), ::i2c::type_of<::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI::setStaticF___9(::Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI*  value)  {
::cordl_internals::setStaticField<::Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI*, "<>9", ::Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI*>(std::forward<::Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI*>(value));
}
inline ::Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI* Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI*, "<>9", ::Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI*>();
}
inline void Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI::setStaticF___9__152_0(::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*,::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*,::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>*, "<>9__152_0", ::Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI*>(std::forward<::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*,::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>*>(value));
}
inline ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*,::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>* Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI::getStaticF___9__152_0()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*,::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>*, "<>9__152_0", ::Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI*>();
}
inline void Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI::tieQAMjjEthjZsoTBCCVFNpmchCu(::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*  _cordl_fixed_empty_name_whitespace, ::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI*>(),
                        {"tieQAMjjEthjZsoTBCCVFNpmchCu", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*>(), ::i2c::type_of<::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI* Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI*>());
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI()   {
}
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.add_InteractionStateSetEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::Events::UnityAction_1<::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>*)>(&::Rewired::ComponentControls::TouchInteractable::add_InteractionStateSetEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e7840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"add_InteractionStateSetEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.remove_InteractionStateSetEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::Events::UnityAction_1<::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>*)>(&::Rewired::ComponentControls::TouchInteractable::remove_InteractionStateSetEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e83c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"remove_InteractionStateSetEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.add_VisibilityChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::Events::UnityAction_1<bool>*)>(&::Rewired::ComponentControls::TouchInteractable::add_VisibilityChangedEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e7870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"add_VisibilityChangedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.remove_VisibilityChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::Events::UnityAction_1<bool>*)>(&::Rewired::ComponentControls::TouchInteractable::remove_VisibilityChangedEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e83f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"remove_VisibilityChangedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.add_InteractionStateChangedToNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::Events::UnityAction*)>(&::Rewired::ComponentControls::TouchInteractable::add_InteractionStateChangedToNormal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e77e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"add_InteractionStateChangedToNormal", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.remove_InteractionStateChangedToNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::Events::UnityAction*)>(&::Rewired::ComponentControls::TouchInteractable::remove_InteractionStateChangedToNormal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e8360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"remove_InteractionStateChangedToNormal", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.add_InteractionStateChangedToHighlighted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::Events::UnityAction*)>(&::Rewired::ComponentControls::TouchInteractable::add_InteractionStateChangedToHighlighted)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e77b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"add_InteractionStateChangedToHighlighted", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.remove_InteractionStateChangedToHighlighted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::Events::UnityAction*)>(&::Rewired::ComponentControls::TouchInteractable::remove_InteractionStateChangedToHighlighted)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e8330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"remove_InteractionStateChangedToHighlighted", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.add_InteractionStateChangedToPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::Events::UnityAction*)>(&::Rewired::ComponentControls::TouchInteractable::add_InteractionStateChangedToPressed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e7810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"add_InteractionStateChangedToPressed", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.remove_InteractionStateChangedToPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::Events::UnityAction*)>(&::Rewired::ComponentControls::TouchInteractable::remove_InteractionStateChangedToPressed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e8390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"remove_InteractionStateChangedToPressed", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.add_InteractionStateChangedToDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::Events::UnityAction*)>(&::Rewired::ComponentControls::TouchInteractable::add_InteractionStateChangedToDisabled)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e7780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"add_InteractionStateChangedToDisabled", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.remove_InteractionStateChangedToDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::Events::UnityAction*)>(&::Rewired::ComponentControls::TouchInteractable::remove_InteractionStateChangedToDisabled)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e8300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"remove_InteractionStateChangedToDisabled", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.ultWWmNvByuMUEaPtmnJJmnsxwlo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::UI::IVisibilityChangedHandler*,bool>* (::Rewired::ComponentControls::TouchInteractable::*)()>(&::Rewired::ComponentControls::TouchInteractable::ultWWmNvByuMUEaPtmnJJmnsxwlo)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1818e8920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"ultWWmNvByuMUEaPtmnJJmnsxwlo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.qAFlpwKRFhDPixahWvmlHDQzVODs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*,::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>* (::Rewired::ComponentControls::TouchInteractable::*)()>(&::Rewired::ComponentControls::TouchInteractable::qAFlpwKRFhDPixahWvmlHDQzVODs)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1818e8170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"qAFlpwKRFhDPixahWvmlHDQzVODs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.get_interactable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchInteractable::*)()>(&::Rewired::ComponentControls::TouchInteractable::get_interactable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180391c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"get_interactable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.set_interactable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(bool)>(&::Rewired::ComponentControls::TouchInteractable::set_interactable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818e86a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"set_interactable", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.get_visible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchInteractable::*)()>(&::Rewired::ComponentControls::TouchInteractable::get_visible)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180391c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"get_visible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.set_visible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(bool)>(&::Rewired::ComponentControls::TouchInteractable::set_visible)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818e8800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"set_visible", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.get_hideWhenIdle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchInteractable::*)()>(&::Rewired::ComponentControls::TouchInteractable::get_hideWhenIdle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818e79f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"get_hideWhenIdle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.set_hideWhenIdle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(bool)>(&::Rewired::ComponentControls::TouchInteractable::set_hideWhenIdle)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818e8620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"set_hideWhenIdle", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.get_allowedMouseButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags (::Rewired::ComponentControls::TouchInteractable::*)()>(&::Rewired::ComponentControls::TouchInteractable::get_allowedMouseButtons)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180511540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"get_allowedMouseButtons", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.set_allowedMouseButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags)>(&::Rewired::ComponentControls::TouchInteractable::set_allowedMouseButtons)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818e8600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"set_allowedMouseButtons", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.get_transitionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags (::Rewired::ComponentControls::TouchInteractable::*)()>(&::Rewired::ComponentControls::TouchInteractable::get_transitionType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d4dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"get_transitionType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.set_transitionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags)>(&::Rewired::ComponentControls::TouchInteractable::set_transitionType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818e87e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"set_transitionType", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.get_transitionColorTint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::ColorBlock (::Rewired::ComponentControls::TouchInteractable::*)()>(&::Rewired::ComponentControls::TouchInteractable::get_transitionColorTint)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818e7a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"get_transitionColorTint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.set_transitionColorTint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::UI::ColorBlock)>(&::Rewired::ComponentControls::TouchInteractable::set_transitionColorTint)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818e8710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"set_transitionColorTint", {}, {::i2c::type_of<::UnityEngine::UI::ColorBlock>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.get_transitionSpriteState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::SpriteState (::Rewired::ComponentControls::TouchInteractable::*)()>(&::Rewired::ComponentControls::TouchInteractable::get_transitionSpriteState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818e7aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"get_transitionSpriteState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.set_transitionSpriteState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::UI::SpriteState)>(&::Rewired::ComponentControls::TouchInteractable::set_transitionSpriteState)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818e8760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"set_transitionSpriteState", {}, {::i2c::type_of<::UnityEngine::UI::SpriteState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.get_transitionAnimationTriggers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::AnimationTriggers* (::Rewired::ComponentControls::TouchInteractable::*)()>(&::Rewired::ComponentControls::TouchInteractable::get_transitionAnimationTriggers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803223b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"get_transitionAnimationTriggers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.set_transitionAnimationTriggers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::UI::AnimationTriggers*)>(&::Rewired::ComponentControls::TouchInteractable::set_transitionAnimationTriggers)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818e86c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"set_transitionAnimationTriggers", {}, {::i2c::type_of<::UnityEngine::UI::AnimationTriggers*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.get_targetGraphic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Graphic> (::Rewired::ComponentControls::TouchInteractable::*)()>(&::Rewired::ComponentControls::TouchInteractable::get_targetGraphic)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"get_targetGraphic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.set_targetGraphic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::UI::Graphic*)>(&::Rewired::ComponentControls::TouchInteractable::set_targetGraphic)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818e8640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"set_targetGraphic", {}, {::i2c::type_of<::UnityEngine::UI::Graphic*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.get_image
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Image> (::Rewired::ComponentControls::TouchInteractable::*)()>(&::Rewired::ComponentControls::TouchInteractable::get_image)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818e7a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"get_image", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.set_image
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::UI::Image*)>(&::Rewired::ComponentControls::TouchInteractable::set_image)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818e8640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"set_image", {}, {::i2c::type_of<::UnityEngine::UI::Image*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.get_animator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Animator> (::Rewired::ComponentControls::TouchInteractable::*)()>(&::Rewired::ComponentControls::TouchInteractable::get_animator)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e79c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"get_animator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.get_interactionState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ComponentControls::TouchInteractable_InteractionState (::Rewired::ComponentControls::TouchInteractable::*)()>(&::Rewired::ComponentControls::TouchInteractable::get_interactionState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818e7a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"get_interactionState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)()>(&::Rewired::ComponentControls::TouchInteractable::_ctor)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1818e7550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)()>(&::Rewired::ComponentControls::TouchInteractable::Awake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818e5bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.OnCanvasGroupChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)()>(&::Rewired::ComponentControls::TouchInteractable::OnCanvasGroupChanged)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1818e66c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.OnDidApplyAnimationProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)()>(&::Rewired::ComponentControls::TouchInteractable::OnDidApplyAnimationProperties)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818e68b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)()>(&::Rewired::ComponentControls::TouchInteractable::OnEnable)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1818e69b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)()>(&::Rewired::ComponentControls::TouchInteractable::OnDisable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1818e68c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)()>(&::Rewired::ComponentControls::TouchInteractable::OnValidate)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1818e6de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)()>(&::Rewired::ComponentControls::TouchInteractable::Reset)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818e7000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.OleHBJpGvEHnDsoBIACcFXCOznWJ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)()>(&::Rewired::ComponentControls::TouchInteractable::OleHBJpGvEHnDsoBIACcFXCOznWJ)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1818e65d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.XGmWGTaLhDTHqtlgZCmGsjpPZzpK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)()>(&::Rewired::ComponentControls::TouchInteractable::XGmWGTaLhDTHqtlgZCmGsjpPZzpK)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818e7330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.CBuuCFOHkpLZMsCYubVIvIpeXufT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)()>(&::Rewired::ComponentControls::TouchInteractable::CBuuCFOHkpLZMsCYubVIvIpeXufT)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818e5c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"CBuuCFOHkpLZMsCYubVIvIpeXufT", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.JWReTMSLZmaKifCAODpHjJObDTPiB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::Rewired::ComponentControls::TouchInteractable_InteractionState, bool)>(&::Rewired::ComponentControls::TouchInteractable::JWReTMSLZmaKifCAODpHjJObDTPiB)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x1818e5fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"JWReTMSLZmaKifCAODpHjJObDTPiB", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchInteractable_InteractionState>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.KyBnQvbByCsGDSWCzbHRTzIYymGj
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::Color, bool)>(&::Rewired::ComponentControls::TouchInteractable::KyBnQvbByCsGDSWCzbHRTzIYymGj)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818e63b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"KyBnQvbByCsGDSWCzbHRTzIYymGj", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.RjGorUBnrFeQpMCHqVXaafTENktF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::Sprite*)>(&::Rewired::ComponentControls::TouchInteractable::RjGorUBnrFeQpMCHqVXaafTENktF)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818e7050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"RjGorUBnrFeQpMCHqVXaafTENktF", {}, {::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.hoAeJBInAxINkeqRaGvyOkGLMfYqA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::StringW)>(&::Rewired::ComponentControls::TouchInteractable::hoAeJBInAxINkeqRaGvyOkGLMfYqA)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1818e7bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"hoAeJBInAxINkeqRaGvyOkGLMfYqA", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.MglUtfcHSirIwkBLFifcfDnRkGnIb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(bool)>(&::Rewired::ComponentControls::TouchInteractable::MglUtfcHSirIwkBLFifcfDnRkGnIb)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818e6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"MglUtfcHSirIwkBLFifcfDnRkGnIb", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.IsInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchInteractable::*)()>(&::Rewired::ComponentControls::TouchInteractable::IsInteractable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818e5f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"IsInteractable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.THrdhkLNYiSATDvjdwzTrjvLHZNn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchInteractable::*)()>(&::Rewired::ComponentControls::TouchInteractable::THrdhkLNYiSATDvjdwzTrjvLHZNn)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818e7110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.uawGHGsNDaczyEGtCBhrbrVnMIIYA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::Rewired::ComponentControls::TouchInteractable::uawGHGsNDaczyEGtCBhrbrVnMIIYA)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818e8890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"uawGHGsNDaczyEGtCBhrbrVnMIIYA", {}, {::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.xvteqdEEdOSHHRDfPDsGCHAwMxZXA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::GameObject*)>(&::Rewired::ComponentControls::TouchInteractable::xvteqdEEdOSHHRDfPDsGCHAwMxZXA)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e8ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.kkCclCYOkWZVeTnmHThMaDFHgsOcA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::Rewired::ComponentControls::TouchInteractable::kkCclCYOkWZVeTnmHThMaDFHgsOcA)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1818e7e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"kkCclCYOkWZVeTnmHThMaDFHgsOcA", {}, {::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.CnEVeldVBQIqFbkavkduxxJwKZCN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchInteractable::*)(bool, ::UnityEngine::GameObject*)>(&::Rewired::ComponentControls::TouchInteractable::CnEVeldVBQIqFbkavkduxxJwKZCN)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1818e5cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"CnEVeldVBQIqFbkavkduxxJwKZCN", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.GSupZqWmHsIYQdJrbByAiTJlhsfs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ComponentControls::TouchInteractable_InteractionState (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::Rewired::ComponentControls::TouchInteractable::GSupZqWmHsIYQdJrbByAiTJlhsfs)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818e5e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"GSupZqWmHsIYQdJrbByAiTJlhsfs", {}, {::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.jhwblaxEbkhdqzLJjHdhHiHDcYhCA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchInteractable::*)(::Rewired::ComponentControls::TouchInteractable_InteractionState)>(&::Rewired::ComponentControls::TouchInteractable::jhwblaxEbkhdqzLJjHdhHiHDcYhCA)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e7e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"jhwblaxEbkhdqzLJjHdhHiHDcYhCA", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchInteractable_InteractionState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.VaTEtFbbZbokoDQLZWwzdhCaJxm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)()>(&::Rewired::ComponentControls::TouchInteractable::VaTEtFbbZbokoDQLZWwzdhCaJxm)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818e7230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"VaTEtFbbZbokoDQLZWwzdhCaJxm", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.xCrGfuGCCKcPXQnzMbafEeHmiUuEA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)()>(&::Rewired::ComponentControls::TouchInteractable::xCrGfuGCCKcPXQnzMbafEeHmiUuEA)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1818e8a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"xCrGfuGCCKcPXQnzMbafEeHmiUuEA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.cydDTOonMDdvOaBPfzzgEUQwOGDqA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(bool, bool)>(&::Rewired::ComponentControls::TouchInteractable::cydDTOonMDdvOaBPfzzgEUQwOGDqA)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818e78a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"cydDTOonMDdvOaBPfzzgEUQwOGDqA", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.sYWgVjYVPopMXhNacgbAfnzJKUOAA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)()>(&::Rewired::ComponentControls::TouchInteractable::sYWgVjYVPopMXhNacgbAfnzJKUOAA)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1818e8450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"sYWgVjYVPopMXhNacgbAfnzJKUOAA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.OiCvLuimbMPNPOZQhYVPpnObdKHJ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)()>(&::Rewired::ComponentControls::TouchInteractable::OiCvLuimbMPNPOZQhYVPpnObdKHJ)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818e6550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"OiCvLuimbMPNPOZQhYVPpnObdKHJ", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.hfiNIKZNrCJWGYGGarqccGJOfFzF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)()>(&::Rewired::ComponentControls::TouchInteractable::hfiNIKZNrCJWGYGGarqccGJOfFzF)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1818e7ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"hfiNIKZNrCJWGYGGarqccGJOfFzF", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.dEpudvGMUiTOuSgixfQegEsdHCJR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)()>(&::Rewired::ComponentControls::TouchInteractable::dEpudvGMUiTOuSgixfQegEsdHCJR)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818e7920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"dEpudvGMUiTOuSgixfQegEsdHCJR", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.OnPointerDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchInteractable::OnPointerDown)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1818e6b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.OnPointerUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchInteractable::OnPointerUp)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1818e6d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.OnPointerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchInteractable::OnPointerEnter)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818e6bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.OnPointerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchInteractable::OnPointerExit)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818e6c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.OnBeginDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchInteractable::OnBeginDrag)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818e6670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.OnDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchInteractable::OnDrag)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818e6670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.OnEndDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchInteractable::OnEndDrag)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818e6670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchInteractable::UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818e71b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"UnityEngine.EventSystems.IPointerDownHandler.OnPointerDown", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchInteractable::UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818e7210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"UnityEngine.EventSystems.IPointerUpHandler.OnPointerUp", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.UnityEngine_EventSystems_IPointerEnterHandler_OnPointerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchInteractable::UnityEngine_EventSystems_IPointerEnterHandler_OnPointerEnter)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818e71d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"UnityEngine.EventSystems.IPointerEnterHandler.OnPointerEnter", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchInteractable::UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818e71f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"UnityEngine.EventSystems.IPointerExitHandler.OnPointerExit", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.UnityEngine_EventSystems_IBeginDragHandler_OnBeginDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchInteractable::UnityEngine_EventSystems_IBeginDragHandler_OnBeginDrag)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818e7150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"UnityEngine.EventSystems.IBeginDragHandler.OnBeginDrag", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.UnityEngine_EventSystems_IDragHandler_OnDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchInteractable::UnityEngine_EventSystems_IDragHandler_OnDrag)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818e7170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"UnityEngine.EventSystems.IDragHandler.OnDrag", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.UnityEngine_EventSystems_IEndDragHandler_OnEndDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchInteractable::UnityEngine_EventSystems_IEndDragHandler_OnEndDrag)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818e7190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"UnityEngine.EventSystems.IEndDragHandler.OnEndDrag", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.ZglaseTvoANcWuzhjcxcPMJNdHoT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Rewired::ComponentControls::TouchInteractable::ZglaseTvoANcWuzhjcxcPMJNdHoT)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1818e7340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"ZglaseTvoANcWuzhjcxcPMJNdHoT", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.WDiPBsdQdJomVFuInQBBZOrpthqx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(int32_t)>(&::Rewired::ComponentControls::TouchInteractable::WDiPBsdQdJomVFuInQBBZOrpthqx)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1818e7240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"WDiPBsdQdJomVFuInQBBZOrpthqx", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.GWoGuiTtAIYBKqgmDazMhQihwjdlA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Rewired::ComponentControls::TouchInteractable::GWoGuiTtAIYBKqgmDazMhQihwjdlA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818e5e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"GWoGuiTtAIYBKqgmDazMhQihwjdlA", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.dnZxqHiYPsMEllOLjaAjiPpDIDTI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Rewired::ComponentControls::TouchInteractable::dnZxqHiYPsMEllOLjaAjiPpDIDTI)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818e79a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"dnZxqHiYPsMEllOLjaAjiPpDIDTI", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.IlbTTySBJptmUMCsnhyvlbnpckZg
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Rewired::ComponentControls::TouchInteractable::IlbTTySBJptmUMCsnhyvlbnpckZg)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818e5ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"IlbTTySBJptmUMCsnhyvlbnpckZg", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.NTRgCGnsWjAdPXLpyShrydIwRPTQ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags, int32_t)>(&::Rewired::ComponentControls::TouchInteractable::NTRgCGnsWjAdPXLpyShrydIwRPTQ)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818e64d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"NTRgCGnsWjAdPXLpyShrydIwRPTQ", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.rjbbQJIPyxgONxRsqEviKmujbff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags, int32_t)>(&::Rewired::ComponentControls::TouchInteractable::rjbbQJIPyxgONxRsqEviKmujbff)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e8420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"rjbbQJIPyxgONxRsqEviKmujbff", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.HZqwKPixWhRIYGxGgCMQwHFeQKOn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Rewired::ComponentControls::TouchInteractable::HZqwKPixWhRIYGxGgCMQwHFeQKOn)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818e5e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"HZqwKPixWhRIYGxGgCMQwHFeQKOn", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.unVqhTTcGkoUxjGUDMaVsUSLHzIA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags, ::by_ref<int32_t>)>(&::Rewired::ComponentControls::TouchInteractable::unVqhTTcGkoUxjGUDMaVsUSLHzIA)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818e89d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"unVqhTTcGkoUxjGUDMaVsUSLHzIA", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.ZwZTTHTJJxdhkIcPaGOWhEMjpxXmb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags, ::UnityEngine::EventSystems::EventTriggerType)>(&::Rewired::ComponentControls::TouchInteractable::ZwZTTHTJJxdhkIcPaGOWhEMjpxXmb)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1818e7470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"ZwZTTHTJJxdhkIcPaGOWhEMjpxXmb", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags>(), ::i2c::type_of<::UnityEngine::EventSystems::EventTriggerType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.nMrQXCCUIeVGgANkKgFBGJIYXKxE
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags)>(&::Rewired::ComponentControls::TouchInteractable::nMrQXCCUIeVGgANkKgFBGJIYXKxE)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818e8000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"nMrQXCCUIeVGgANkKgFBGJIYXKxE", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.pCUzRQbpcYNYVJDMkEQOqvHFhjtc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*,::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>* (*)()>(&::Rewired::ComponentControls::TouchInteractable::pCUzRQbpcYNYVJDMkEQOqvHFhjtc)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1818e8050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"pCUzRQbpcYNYVJDMkEQOqvHFhjtc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchInteractable.WJcCRPwiBzPjDJRGUMoDSSCUGhte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchInteractable::*)(bool)>(&::Rewired::ComponentControls::TouchInteractable::WJcCRPwiBzPjDJRGUMoDSSCUGhte)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818e7320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"WJcCRPwiBzPjDJRGUMoDSSCUGhte", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__interactable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactable;
}
constexpr bool const& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__interactable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactable;
}
constexpr void Rewired::ComponentControls::TouchInteractable::__cordl_internal_set__interactable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interactable = value;
}
constexpr bool& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__visible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visible;
}
constexpr bool const& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__visible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visible;
}
constexpr void Rewired::ComponentControls::TouchInteractable::__cordl_internal_set__visible(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____visible = value;
}
constexpr bool& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__hideWhenIdle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hideWhenIdle;
}
constexpr bool const& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__hideWhenIdle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hideWhenIdle;
}
constexpr void Rewired::ComponentControls::TouchInteractable::__cordl_internal_set__hideWhenIdle(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hideWhenIdle = value;
}
constexpr ::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__allowedMouseButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowedMouseButtons;
}
constexpr ::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags const& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__allowedMouseButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowedMouseButtons;
}
constexpr void Rewired::ComponentControls::TouchInteractable::__cordl_internal_set__allowedMouseButtons(::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allowedMouseButtons = value;
}
constexpr ::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__transitionType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transitionType;
}
constexpr ::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags const& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__transitionType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transitionType;
}
constexpr void Rewired::ComponentControls::TouchInteractable::__cordl_internal_set__transitionType(::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transitionType = value;
}
constexpr ::UnityEngine::UI::ColorBlock& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__transitionColorTint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transitionColorTint;
}
constexpr ::UnityEngine::UI::ColorBlock const& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__transitionColorTint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transitionColorTint;
}
constexpr void Rewired::ComponentControls::TouchInteractable::__cordl_internal_set__transitionColorTint(::UnityEngine::UI::ColorBlock  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transitionColorTint = value;
}
constexpr ::UnityEngine::UI::SpriteState& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__transitionSpriteState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transitionSpriteState;
}
constexpr ::UnityEngine::UI::SpriteState const& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__transitionSpriteState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transitionSpriteState;
}
constexpr void Rewired::ComponentControls::TouchInteractable::__cordl_internal_set__transitionSpriteState(::UnityEngine::UI::SpriteState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transitionSpriteState = value;
}
constexpr ::UnityEngine::UI::AnimationTriggers*& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__transitionAnimationTriggers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transitionAnimationTriggers;
}
constexpr ::UnityEngine::UI::AnimationTriggers* const& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__transitionAnimationTriggers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transitionAnimationTriggers;
}
constexpr void Rewired::ComponentControls::TouchInteractable::__cordl_internal_set__transitionAnimationTriggers(::UnityEngine::UI::AnimationTriggers*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transitionAnimationTriggers = value;
}
constexpr ::UnityW<::UnityEngine::UI::Graphic>& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__targetGraphic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetGraphic;
}
constexpr ::UnityW<::UnityEngine::UI::Graphic> const& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__targetGraphic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetGraphic;
}
constexpr void Rewired::ComponentControls::TouchInteractable::__cordl_internal_set__targetGraphic(::UnityW<::UnityEngine::UI::Graphic>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetGraphic = value;
}
constexpr ::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionEventHandler*& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__onInteractionStateTransition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onInteractionStateTransition;
}
constexpr ::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionEventHandler* const& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__onInteractionStateTransition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onInteractionStateTransition;
}
constexpr void Rewired::ComponentControls::TouchInteractable::__cordl_internal_set__onInteractionStateTransition(::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onInteractionStateTransition = value;
}
constexpr ::Rewired::ComponentControls::TouchInteractable_VisibilityChangedEventHandler*& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__onVisibilityChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onVisibilityChanged;
}
constexpr ::Rewired::ComponentControls::TouchInteractable_VisibilityChangedEventHandler* const& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__onVisibilityChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onVisibilityChanged;
}
constexpr void Rewired::ComponentControls::TouchInteractable::__cordl_internal_set__onVisibilityChanged(::Rewired::ComponentControls::TouchInteractable_VisibilityChangedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onVisibilityChanged = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__onInteractionStateChangedToNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onInteractionStateChangedToNormal;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__onInteractionStateChangedToNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onInteractionStateChangedToNormal;
}
constexpr void Rewired::ComponentControls::TouchInteractable::__cordl_internal_set__onInteractionStateChangedToNormal(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onInteractionStateChangedToNormal = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__onInteractionStateChangedToHighlighted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onInteractionStateChangedToHighlighted;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__onInteractionStateChangedToHighlighted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onInteractionStateChangedToHighlighted;
}
constexpr void Rewired::ComponentControls::TouchInteractable::__cordl_internal_set__onInteractionStateChangedToHighlighted(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onInteractionStateChangedToHighlighted = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__onInteractionStateChangedToPressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onInteractionStateChangedToPressed;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__onInteractionStateChangedToPressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onInteractionStateChangedToPressed;
}
constexpr void Rewired::ComponentControls::TouchInteractable::__cordl_internal_set__onInteractionStateChangedToPressed(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onInteractionStateChangedToPressed = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__onInteractionStateChangedToDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onInteractionStateChangedToDisabled;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__onInteractionStateChangedToDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onInteractionStateChangedToDisabled;
}
constexpr void Rewired::ComponentControls::TouchInteractable::__cordl_internal_set__onInteractionStateChangedToDisabled(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onInteractionStateChangedToDisabled = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>*& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__canvasGroupCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canvasGroupCache;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>* const& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__canvasGroupCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canvasGroupCache;
}
constexpr void Rewired::ComponentControls::TouchInteractable::__cordl_internal_set__canvasGroupCache(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____canvasGroupCache = value;
}
constexpr bool& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__groupsAllowInteraction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groupsAllowInteraction;
}
constexpr bool const& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__groupsAllowInteraction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groupsAllowInteraction;
}
constexpr void Rewired::ComponentControls::TouchInteractable::__cordl_internal_set__groupsAllowInteraction(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____groupsAllowInteraction = value;
}
constexpr ::Rewired::ComponentControls::TouchInteractable_InteractionState& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__interactionState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactionState;
}
constexpr ::Rewired::ComponentControls::TouchInteractable_InteractionState const& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__interactionState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactionState;
}
constexpr void Rewired::ComponentControls::TouchInteractable::__cordl_internal_set__interactionState(::Rewired::ComponentControls::TouchInteractable_InteractionState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interactionState = value;
}
constexpr bool& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get_heWJxJgtZAnRpqSlrYVrQHjiCChC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heWJxJgtZAnRpqSlrYVrQHjiCChC;
}
constexpr bool const& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get_heWJxJgtZAnRpqSlrYVrQHjiCChC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heWJxJgtZAnRpqSlrYVrQHjiCChC;
}
constexpr void Rewired::ComponentControls::TouchInteractable::__cordl_internal_set_heWJxJgtZAnRpqSlrYVrQHjiCChC(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heWJxJgtZAnRpqSlrYVrQHjiCChC = value;
}
constexpr bool& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get_lxUrVYijZiqXNKaGDvjGmHxRYniR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lxUrVYijZiqXNKaGDvjGmHxRYniR;
}
constexpr bool const& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get_lxUrVYijZiqXNKaGDvjGmHxRYniR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lxUrVYijZiqXNKaGDvjGmHxRYniR;
}
constexpr void Rewired::ComponentControls::TouchInteractable::__cordl_internal_set_lxUrVYijZiqXNKaGDvjGmHxRYniR(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lxUrVYijZiqXNKaGDvjGmHxRYniR = value;
}
constexpr bool& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__varWatch_visible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____varWatch_visible;
}
constexpr bool const& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__varWatch_visible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____varWatch_visible;
}
constexpr void Rewired::ComponentControls::TouchInteractable::__cordl_internal_set__varWatch_visible(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____varWatch_visible = value;
}
constexpr bool& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__varWatch_interactable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____varWatch_interactable;
}
constexpr bool const& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__varWatch_interactable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____varWatch_interactable;
}
constexpr void Rewired::ComponentControls::TouchInteractable::__cordl_internal_set__varWatch_interactable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____varWatch_interactable = value;
}
constexpr bool& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__allowSendingEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowSendingEvents;
}
constexpr bool const& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get__allowSendingEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowSendingEvents;
}
constexpr void Rewired::ComponentControls::TouchInteractable::__cordl_internal_set__allowSendingEvents(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allowSendingEvents = value;
}
constexpr ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::UI::IVisibilityChangedHandler*,bool>*& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get___hierarchyVisibilityChangedHandlers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____hierarchyVisibilityChangedHandlers;
}
constexpr ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::UI::IVisibilityChangedHandler*,bool>* const& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get___hierarchyVisibilityChangedHandlers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____hierarchyVisibilityChangedHandlers;
}
constexpr void Rewired::ComponentControls::TouchInteractable::__cordl_internal_set___hierarchyVisibilityChangedHandlers(::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::UI::IVisibilityChangedHandler*,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____hierarchyVisibilityChangedHandlers = value;
}
constexpr ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*,::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>*& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get___hierarchyInteractionStateTransitionHandlers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____hierarchyInteractionStateTransitionHandlers;
}
constexpr ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*,::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>* const& Rewired::ComponentControls::TouchInteractable::__cordl_internal_get___hierarchyInteractionStateTransitionHandlers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____hierarchyInteractionStateTransitionHandlers;
}
constexpr void Rewired::ComponentControls::TouchInteractable::__cordl_internal_set___hierarchyInteractionStateTransitionHandlers(::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*,::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____hierarchyInteractionStateTransitionHandlers = value;
}
inline void Rewired::ComponentControls::TouchInteractable::setStaticF__transitionArgs(::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*  value)  {
::cordl_internals::setStaticField<::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*, "_transitionArgs", ::Rewired::ComponentControls::TouchInteractable*>(std::forward<::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>(value));
}
inline ::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs* Rewired::ComponentControls::TouchInteractable::getStaticF__transitionArgs()  {
return ::cordl_internals::getStaticField<::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*, "_transitionArgs", ::Rewired::ComponentControls::TouchInteractable*>();
}
inline void Rewired::ComponentControls::TouchInteractable::setStaticF___interactionStateTransitionHandlerDelegate(::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*,::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*,::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>*, "__interactionStateTransitionHandlerDelegate", ::Rewired::ComponentControls::TouchInteractable*>(std::forward<::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*,::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>*>(value));
}
inline ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*,::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>* Rewired::ComponentControls::TouchInteractable::getStaticF___interactionStateTransitionHandlerDelegate()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*,::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>*, "__interactionStateTransitionHandlerDelegate", ::Rewired::ComponentControls::TouchInteractable*>();
}
inline void Rewired::ComponentControls::TouchInteractable::add_InteractionStateSetEvent(::UnityEngine::Events::UnityAction_1<::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"add_InteractionStateSetEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchInteractable::remove_InteractionStateSetEvent(::UnityEngine::Events::UnityAction_1<::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"remove_InteractionStateSetEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchInteractable::add_VisibilityChangedEvent(::UnityEngine::Events::UnityAction_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"add_VisibilityChangedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchInteractable::remove_VisibilityChangedEvent(::UnityEngine::Events::UnityAction_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"remove_VisibilityChangedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchInteractable::add_InteractionStateChangedToNormal(::UnityEngine::Events::UnityAction*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"add_InteractionStateChangedToNormal", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchInteractable::remove_InteractionStateChangedToNormal(::UnityEngine::Events::UnityAction*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"remove_InteractionStateChangedToNormal", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchInteractable::add_InteractionStateChangedToHighlighted(::UnityEngine::Events::UnityAction*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"add_InteractionStateChangedToHighlighted", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchInteractable::remove_InteractionStateChangedToHighlighted(::UnityEngine::Events::UnityAction*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"remove_InteractionStateChangedToHighlighted", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchInteractable::add_InteractionStateChangedToPressed(::UnityEngine::Events::UnityAction*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"add_InteractionStateChangedToPressed", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchInteractable::remove_InteractionStateChangedToPressed(::UnityEngine::Events::UnityAction*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"remove_InteractionStateChangedToPressed", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchInteractable::add_InteractionStateChangedToDisabled(::UnityEngine::Events::UnityAction*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"add_InteractionStateChangedToDisabled", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchInteractable::remove_InteractionStateChangedToDisabled(::UnityEngine::Events::UnityAction*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"remove_InteractionStateChangedToDisabled", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::UI::IVisibilityChangedHandler*,bool>* Rewired::ComponentControls::TouchInteractable::ultWWmNvByuMUEaPtmnJJmnsxwlo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"ultWWmNvByuMUEaPtmnJJmnsxwlo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::UI::IVisibilityChangedHandler*,bool>*>(this, ___internal_method);
}
inline ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*,::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>* Rewired::ComponentControls::TouchInteractable::qAFlpwKRFhDPixahWvmlHDQzVODs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"qAFlpwKRFhDPixahWvmlHDQzVODs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*,::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>*>(this, ___internal_method);
}
inline bool Rewired::ComponentControls::TouchInteractable::get_interactable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"get_interactable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchInteractable::set_interactable(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"set_interactable", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::TouchInteractable::get_visible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"get_visible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchInteractable::set_visible(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"set_visible", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::TouchInteractable::get_hideWhenIdle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"get_hideWhenIdle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchInteractable::set_hideWhenIdle(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"set_hideWhenIdle", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags Rewired::ComponentControls::TouchInteractable::get_allowedMouseButtons()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"get_allowedMouseButtons", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchInteractable::set_allowedMouseButtons(::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"set_allowedMouseButtons", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags Rewired::ComponentControls::TouchInteractable::get_transitionType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"get_transitionType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchInteractable::set_transitionType(::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"set_transitionType", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::ColorBlock Rewired::ComponentControls::TouchInteractable::get_transitionColorTint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"get_transitionColorTint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::ColorBlock>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchInteractable::set_transitionColorTint(::UnityEngine::UI::ColorBlock  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"set_transitionColorTint", {}, {::i2c::type_of<::UnityEngine::UI::ColorBlock>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::SpriteState Rewired::ComponentControls::TouchInteractable::get_transitionSpriteState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"get_transitionSpriteState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::SpriteState>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchInteractable::set_transitionSpriteState(::UnityEngine::UI::SpriteState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"set_transitionSpriteState", {}, {::i2c::type_of<::UnityEngine::UI::SpriteState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::AnimationTriggers* Rewired::ComponentControls::TouchInteractable::get_transitionAnimationTriggers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"get_transitionAnimationTriggers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::AnimationTriggers*>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchInteractable::set_transitionAnimationTriggers(::UnityEngine::UI::AnimationTriggers*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"set_transitionAnimationTriggers", {}, {::i2c::type_of<::UnityEngine::UI::AnimationTriggers*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UI::Graphic> Rewired::ComponentControls::TouchInteractable::get_targetGraphic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"get_targetGraphic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Graphic>>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchInteractable::set_targetGraphic(::UnityEngine::UI::Graphic*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"set_targetGraphic", {}, {::i2c::type_of<::UnityEngine::UI::Graphic*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UI::Image> Rewired::ComponentControls::TouchInteractable::get_image()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"get_image", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Image>>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchInteractable::set_image(::UnityEngine::UI::Image*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"set_image", {}, {::i2c::type_of<::UnityEngine::UI::Image*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Animator> Rewired::ComponentControls::TouchInteractable::get_animator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"get_animator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Animator>>(this, ___internal_method);
}
inline ::Rewired::ComponentControls::TouchInteractable_InteractionState Rewired::ComponentControls::TouchInteractable::get_interactionState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"get_interactionState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ComponentControls::TouchInteractable_InteractionState>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchInteractable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchInteractable::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchInteractable::OnCanvasGroupChanged()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchInteractable::OnDidApplyAnimationProperties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchInteractable::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchInteractable::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchInteractable::OnValidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchInteractable::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchInteractable::OleHBJpGvEHnDsoBIACcFXCOznWJ()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchInteractable::XGmWGTaLhDTHqtlgZCmGsjpPZzpK()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchInteractable::CBuuCFOHkpLZMsCYubVIvIpeXufT()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"CBuuCFOHkpLZMsCYubVIvIpeXufT", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchInteractable::JWReTMSLZmaKifCAODpHjJObDTPiB(::Rewired::ComponentControls::TouchInteractable_InteractionState  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"JWReTMSLZmaKifCAODpHjJObDTPiB", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchInteractable_InteractionState>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::ComponentControls::TouchInteractable::KyBnQvbByCsGDSWCzbHRTzIYymGj(::UnityEngine::Color  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"KyBnQvbByCsGDSWCzbHRTzIYymGj", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::ComponentControls::TouchInteractable::RjGorUBnrFeQpMCHqVXaafTENktF(::UnityEngine::Sprite*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"RjGorUBnrFeQpMCHqVXaafTENktF", {}, {::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchInteractable::hoAeJBInAxINkeqRaGvyOkGLMfYqA(::StringW  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"hoAeJBInAxINkeqRaGvyOkGLMfYqA", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchInteractable::MglUtfcHSirIwkBLFifcfDnRkGnIb(bool  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"MglUtfcHSirIwkBLFifcfDnRkGnIb", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::ComponentControls::TouchInteractable::IsInteractable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"IsInteractable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::ComponentControls::TouchInteractable::THrdhkLNYiSATDvjdwzTrjvLHZNn()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchInteractable::uawGHGsNDaczyEGtCBhrbrVnMIIYA(::UnityEngine::EventSystems::BaseEventData*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"uawGHGsNDaczyEGtCBhrbrVnMIIYA", {}, {::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::ComponentControls::TouchInteractable::xvteqdEEdOSHHRDfPDsGCHAwMxZXA(::UnityEngine::GameObject*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::ComponentControls::TouchInteractable::kkCclCYOkWZVeTnmHThMaDFHgsOcA(::UnityEngine::EventSystems::BaseEventData*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"kkCclCYOkWZVeTnmHThMaDFHgsOcA", {}, {::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::ComponentControls::TouchInteractable::CnEVeldVBQIqFbkavkduxxJwKZCN(bool  _cordl_fixed_empty_name_whitespace, ::UnityEngine::GameObject*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"CnEVeldVBQIqFbkavkduxxJwKZCN", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::ComponentControls::TouchInteractable_InteractionState Rewired::ComponentControls::TouchInteractable::GSupZqWmHsIYQdJrbByAiTJlhsfs(::UnityEngine::EventSystems::BaseEventData*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"GSupZqWmHsIYQdJrbByAiTJlhsfs", {}, {::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ComponentControls::TouchInteractable_InteractionState>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::ComponentControls::TouchInteractable::jhwblaxEbkhdqzLJjHdhHiHDcYhCA(::Rewired::ComponentControls::TouchInteractable_InteractionState  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"jhwblaxEbkhdqzLJjHdhHiHDcYhCA", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchInteractable_InteractionState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchInteractable::VaTEtFbbZbokoDQLZWwzdhCaJxm()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"VaTEtFbbZbokoDQLZWwzdhCaJxm", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchInteractable::xCrGfuGCCKcPXQnzMbafEeHmiUuEA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"xCrGfuGCCKcPXQnzMbafEeHmiUuEA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchInteractable::cydDTOonMDdvOaBPfzzgEUQwOGDqA(bool  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"cydDTOonMDdvOaBPfzzgEUQwOGDqA", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::ComponentControls::TouchInteractable::sYWgVjYVPopMXhNacgbAfnzJKUOAA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"sYWgVjYVPopMXhNacgbAfnzJKUOAA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchInteractable::OiCvLuimbMPNPOZQhYVPpnObdKHJ()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"OiCvLuimbMPNPOZQhYVPpnObdKHJ", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchInteractable::hfiNIKZNrCJWGYGGarqccGJOfFzF()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"hfiNIKZNrCJWGYGGarqccGJOfFzF", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchInteractable::dEpudvGMUiTOuSgixfQegEsdHCJR()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"dEpudvGMUiTOuSgixfQegEsdHCJR", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchInteractable::OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Rewired::ComponentControls::TouchInteractable::OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Rewired::ComponentControls::TouchInteractable::OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Rewired::ComponentControls::TouchInteractable::OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Rewired::ComponentControls::TouchInteractable::OnBeginDrag(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Rewired::ComponentControls::TouchInteractable::OnDrag(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Rewired::ComponentControls::TouchInteractable::OnEndDrag(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Rewired::ComponentControls::TouchInteractable::UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"UnityEngine.EventSystems.IPointerDownHandler.OnPointerDown", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Rewired::ComponentControls::TouchInteractable::UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"UnityEngine.EventSystems.IPointerUpHandler.OnPointerUp", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Rewired::ComponentControls::TouchInteractable::UnityEngine_EventSystems_IPointerEnterHandler_OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"UnityEngine.EventSystems.IPointerEnterHandler.OnPointerEnter", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Rewired::ComponentControls::TouchInteractable::UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"UnityEngine.EventSystems.IPointerExitHandler.OnPointerExit", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Rewired::ComponentControls::TouchInteractable::UnityEngine_EventSystems_IBeginDragHandler_OnBeginDrag(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"UnityEngine.EventSystems.IBeginDragHandler.OnBeginDrag", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Rewired::ComponentControls::TouchInteractable::UnityEngine_EventSystems_IDragHandler_OnDrag(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"UnityEngine.EventSystems.IDragHandler.OnDrag", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Rewired::ComponentControls::TouchInteractable::UnityEngine_EventSystems_IEndDragHandler_OnEndDrag(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"UnityEngine.EventSystems.IEndDragHandler.OnEndDrag", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline bool Rewired::ComponentControls::TouchInteractable::ZglaseTvoANcWuzhjcxcPMJNdHoT(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"ZglaseTvoANcWuzhjcxcPMJNdHoT", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::Vector3 Rewired::ComponentControls::TouchInteractable::WDiPBsdQdJomVFuInQBBZOrpthqx(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"WDiPBsdQdJomVFuInQBBZOrpthqx", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::ComponentControls::TouchInteractable::GWoGuiTtAIYBKqgmDazMhQihwjdlA(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"GWoGuiTtAIYBKqgmDazMhQihwjdlA", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::ComponentControls::TouchInteractable::dnZxqHiYPsMEllOLjaAjiPpDIDTI(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"dnZxqHiYPsMEllOLjaAjiPpDIDTI", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline int32_t Rewired::ComponentControls::TouchInteractable::IlbTTySBJptmUMCsnhyvlbnpckZg(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"IlbTTySBJptmUMCsnhyvlbnpckZg", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::ComponentControls::TouchInteractable::NTRgCGnsWjAdPXLpyShrydIwRPTQ(::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"NTRgCGnsWjAdPXLpyShrydIwRPTQ", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline bool Rewired::ComponentControls::TouchInteractable::rjbbQJIPyxgONxRsqEviKmujbff(::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"rjbbQJIPyxgONxRsqEviKmujbff", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t Rewired::ComponentControls::TouchInteractable::HZqwKPixWhRIYGxGgCMQwHFeQKOn(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"HZqwKPixWhRIYGxGgCMQwHFeQKOn", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::ComponentControls::TouchInteractable::unVqhTTcGkoUxjGUDMaVsUSLHzIA(::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags  _cordl_fixed_empty_name_whitespace, ::by_ref<int32_t>  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"unVqhTTcGkoUxjGUDMaVsUSLHzIA", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline bool Rewired::ComponentControls::TouchInteractable::ZwZTTHTJJxdhkIcPaGOWhEMjpxXmb(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags  _cordl_fixed_empty_name_whitespace_param_1, ::UnityEngine::EventSystems::EventTriggerType  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"ZwZTTHTJJxdhkIcPaGOWhEMjpxXmb", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags>(), ::i2c::type_of<::UnityEngine::EventSystems::EventTriggerType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline bool Rewired::ComponentControls::TouchInteractable::nMrQXCCUIeVGgANkKgFBGJIYXKxE(::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"nMrQXCCUIeVGgANkKgFBGJIYXKxE", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*,::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>* Rewired::ComponentControls::TouchInteractable::pCUzRQbpcYNYVJDMkEQOqvHFhjtc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"pCUzRQbpcYNYVJDMkEQOqvHFhjtc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*,::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>*>(nullptr, ___internal_method);
}
inline void Rewired::ComponentControls::TouchInteractable::WJcCRPwiBzPjDJRGUMoDSSCUGhte(bool  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchInteractable*>(),
                        {"WJcCRPwiBzPjDJRGUMoDSSCUGhte", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::ComponentControls::TouchInteractable* Rewired::ComponentControls::TouchInteractable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::TouchInteractable*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr  Rewired::ComponentControls::TouchInteractable::operator ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr ::UnityEngine::EventSystems::IPointerDownHandler* Rewired::ComponentControls::TouchInteractable::i___UnityEngine__EventSystems__IPointerDownHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr  Rewired::ComponentControls::TouchInteractable::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* Rewired::ComponentControls::TouchInteractable::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr  Rewired::ComponentControls::TouchInteractable::operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr ::UnityEngine::EventSystems::IPointerUpHandler* Rewired::ComponentControls::TouchInteractable::i___UnityEngine__EventSystems__IPointerUpHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr  Rewired::ComponentControls::TouchInteractable::operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* Rewired::ComponentControls::TouchInteractable::i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr  Rewired::ComponentControls::TouchInteractable::operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr ::UnityEngine::EventSystems::IPointerExitHandler* Rewired::ComponentControls::TouchInteractable::i___UnityEngine__EventSystems__IPointerExitHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IBeginDragHandler"
constexpr  Rewired::ComponentControls::TouchInteractable::operator ::UnityEngine::EventSystems::IBeginDragHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IBeginDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IBeginDragHandler"
constexpr ::UnityEngine::EventSystems::IBeginDragHandler* Rewired::ComponentControls::TouchInteractable::i___UnityEngine__EventSystems__IBeginDragHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IBeginDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
constexpr  Rewired::ComponentControls::TouchInteractable::operator ::UnityEngine::EventSystems::IDragHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IDragHandler"
constexpr ::UnityEngine::EventSystems::IDragHandler* Rewired::ComponentControls::TouchInteractable::i___UnityEngine__EventSystems__IDragHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEndDragHandler"
constexpr  Rewired::ComponentControls::TouchInteractable::operator ::UnityEngine::EventSystems::IEndDragHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEndDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEndDragHandler"
constexpr ::UnityEngine::EventSystems::IEndDragHandler* Rewired::ComponentControls::TouchInteractable::i___UnityEngine__EventSystems__IEndDragHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IEndDragHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchInteractable::TouchInteractable()   {
}
