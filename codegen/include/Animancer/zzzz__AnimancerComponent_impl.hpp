#pragma once
// IWYU pragma private; include "Animancer/AnimancerComponent.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/zzzz__AnimancerComponent_def.hpp"
#include "Animancer/zzzz__AnimancerComponent_def.hpp"
#include "Animancer/zzzz__AnimancerLayer_def.hpp"
#include "Animancer/zzzz__AnimancerPlayable_def.hpp"
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include "Animancer/zzzz__FadeMode_def.hpp"
#include "Animancer/zzzz__IAnimancerComponent_def.hpp"
#include "Animancer/zzzz__IAnimationClipCollection_def.hpp"
#include "Animancer/zzzz__IHasKey_def.hpp"
#include "Animancer/zzzz__ITransition_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__AnimatorUpdateMode_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__IAnimationClipSource_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Animancer::AnimancerComponent_DisableAction::AnimancerComponent_DisableAction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Animancer::AnimancerComponent_DisableAction::AnimancerComponent_DisableAction()   {
}
constexpr ::Animancer::AnimancerComponent_DisableAction  Animancer::AnimancerComponent_DisableAction::Stop{static_cast<int32_t>(0x0)};
constexpr ::Animancer::AnimancerComponent_DisableAction  Animancer::AnimancerComponent_DisableAction::Pause{static_cast<int32_t>(0x1)};
constexpr ::Animancer::AnimancerComponent_DisableAction  Animancer::AnimancerComponent_DisableAction::Continue{static_cast<int32_t>(0x2)};
constexpr ::Animancer::AnimancerComponent_DisableAction  Animancer::AnimancerComponent_DisableAction::Reset{static_cast<int32_t>(0x3)};
constexpr ::Animancer::AnimancerComponent_DisableAction  Animancer::AnimancerComponent_DisableAction::Destroy{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::Animancer::AnimancerComponent.get_Animator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Animator> (::Animancer::AnimancerComponent::*)()>(&::Animancer::AnimancerComponent::get_Animator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"get_Animator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.set_Animator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerComponent::*)(::UnityEngine::Animator*)>(&::Animancer::AnimancerComponent::set_Animator)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1802dd9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"set_Animator", {}, {::i2c::type_of<::UnityEngine::Animator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.get_Playable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerPlayable* (::Animancer::AnimancerComponent::*)()>(&::Animancer::AnimancerComponent::get_Playable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1802dd820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"get_Playable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.get_IsPlayableInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerComponent::*)()>(&::Animancer::AnimancerComponent::get_IsPlayableInitialized)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802dd7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"get_IsPlayableInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.get_States
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerPlayable_StateDictionary* (::Animancer::AnimancerComponent::*)()>(&::Animancer::AnimancerComponent::get_States)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802dd920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"get_States", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.get_Layers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerPlayable_LayerList* (::Animancer::AnimancerComponent::*)()>(&::Animancer::AnimancerComponent::get_Layers)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802dd800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"get_Layers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.op_Implicit___Animancer__AnimancerPlayable_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerPlayable* (*)(::Animancer::AnimancerComponent*)>(&::Animancer::AnimancerComponent::op_Implicit___Animancer__AnimancerPlayable_)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802dd960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Animancer::AnimancerComponent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.op_Implicit___Animancer__AnimancerLayer_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerLayer* (*)(::Animancer::AnimancerComponent*)>(&::Animancer::AnimancerComponent::op_Implicit___Animancer__AnimancerLayer_)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802dd980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Animancer::AnimancerComponent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.get_ActionOnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Animancer::AnimancerComponent_DisableAction> (::Animancer::AnimancerComponent::*)()>(&::Animancer::AnimancerComponent::get_ActionOnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"get_ActionOnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.Animancer_IAnimancerComponent_get_ResetOnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerComponent::*)()>(&::Animancer::AnimancerComponent::Animancer_IAnimancerComponent_get_ResetOnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dc4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"Animancer.IAnimancerComponent.get_ResetOnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.get_UpdateMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorUpdateMode (::Animancer::AnimancerComponent::*)()>(&::Animancer::AnimancerComponent::get_UpdateMode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802dd940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"get_UpdateMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.set_UpdateMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerComponent::*)(::UnityEngine::AnimatorUpdateMode)>(&::Animancer::AnimancerComponent::set_UpdateMode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802ddb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"set_UpdateMode", {}, {::i2c::type_of<::UnityEngine::AnimatorUpdateMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerComponent::*)()>(&::Animancer::AnimancerComponent::OnEnable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802dce70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                    {::i2c::class_of<::Animancer::AnimancerComponent*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerComponent::*)()>(&::Animancer::AnimancerComponent::OnDisable)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1802dcd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                    {::i2c::class_of<::Animancer::AnimancerComponent*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.InitializePlayable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerComponent::*)()>(&::Animancer::AnimancerComponent::InitializePlayable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1802dc690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"InitializePlayable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.InitializePlayable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerComponent::*)(::Animancer::AnimancerPlayable*)>(&::Animancer::AnimancerComponent::InitializePlayable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1802dc790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"InitializePlayable", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.OnInitializePlayable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerComponent::*)()>(&::Animancer::AnimancerComponent::OnInitializePlayable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                    {::i2c::class_of<::Animancer::AnimancerComponent*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.TryGetAnimator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerComponent::*)()>(&::Animancer::AnimancerComponent::TryGetAnimator)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802dd530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"TryGetAnimator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerComponent::*)()>(&::Animancer::AnimancerComponent::OnDestroy)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802dccf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                    {::i2c::class_of<::Animancer::AnimancerComponent*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.GetKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Animancer::AnimancerComponent::*)(::UnityEngine::AnimationClip*)>(&::Animancer::AnimancerComponent::GetKey)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dc680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                    {::i2c::class_of<::Animancer::AnimancerComponent*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerComponent::*)(::UnityEngine::AnimationClip*)>(&::Animancer::AnimancerComponent::Play)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1802dcfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerComponent::*)(::Animancer::AnimancerState*)>(&::Animancer::AnimancerComponent::Play)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1802dd190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"Play", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerComponent::*)(::UnityEngine::AnimationClip*, float_t, ::Animancer::FadeMode)>(&::Animancer::AnimancerComponent::Play)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1802dd090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Animancer::FadeMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerComponent::*)(::Animancer::AnimancerState*, float_t, ::Animancer::FadeMode)>(&::Animancer::AnimancerComponent::Play)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802dced0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"Play", {}, {::i2c::type_of<::Animancer::AnimancerState*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Animancer::FadeMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerComponent::*)(::Animancer::ITransition*)>(&::Animancer::AnimancerComponent::Play)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1802dcf30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"Play", {}, {::i2c::type_of<::Animancer::ITransition*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerComponent::*)(::Animancer::ITransition*, float_t, ::Animancer::FadeMode)>(&::Animancer::AnimancerComponent::Play)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802dd130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"Play", {}, {::i2c::type_of<::Animancer::ITransition*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Animancer::FadeMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.TryPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerComponent::*)(::System::Object*)>(&::Animancer::AnimancerComponent::TryPlay)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1802dd570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"TryPlay", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.TryPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerComponent::*)(::System::Object*, float_t, ::Animancer::FadeMode)>(&::Animancer::AnimancerComponent::TryPlay)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1802dd690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"TryPlay", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Animancer::FadeMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerComponent::*)(::UnityEngine::AnimationClip*)>(&::Animancer::AnimancerComponent::Stop)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1802dd230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"Stop", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerComponent::*)(::Animancer::IHasKey*)>(&::Animancer::AnimancerComponent::Stop)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1802dd360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"Stop", {}, {::i2c::type_of<::Animancer::IHasKey*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerComponent::*)(::System::Object*)>(&::Animancer::AnimancerComponent::Stop)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1802dd2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"Stop", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerComponent::*)()>(&::Animancer::AnimancerComponent::Stop)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1802dd420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.IsPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerComponent::*)(::UnityEngine::AnimationClip*)>(&::Animancer::AnimancerComponent::IsPlaying)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1802dcc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"IsPlaying", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.IsPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerComponent::*)(::Animancer::IHasKey*)>(&::Animancer::AnimancerComponent::IsPlaying)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1802dc9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"IsPlaying", {}, {::i2c::type_of<::Animancer::IHasKey*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.IsPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerComponent::*)(::System::Object*)>(&::Animancer::AnimancerComponent::IsPlaying)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1802dcb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"IsPlaying", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.IsPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerComponent::*)()>(&::Animancer::AnimancerComponent::IsPlaying)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1802dca90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"IsPlaying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.IsPlayingClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerComponent::*)(::UnityEngine::AnimationClip*)>(&::Animancer::AnimancerComponent::IsPlayingClip)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1802dc840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"IsPlayingClip", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.Evaluate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerComponent::*)()>(&::Animancer::AnimancerComponent::Evaluate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802dc4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"Evaluate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.Evaluate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerComponent::*)(float_t)>(&::Animancer::AnimancerComponent::Evaluate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802dc520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"Evaluate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.System_Collections_IEnumerator_MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerComponent::*)()>(&::Animancer::AnimancerComponent::System_Collections_IEnumerator_MoveNext)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802dd4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"System.Collections.IEnumerator.MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Animancer::AnimancerComponent::*)()>(&::Animancer::AnimancerComponent::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerComponent::*)()>(&::Animancer::AnimancerComponent::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.GetAnimationClips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerComponent::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AnimationClip>>*)>(&::Animancer::AnimancerComponent::GetAnimationClips)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1802dc5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"GetAnimationClips", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AnimationClip>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.GatherAnimationClips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerComponent::*)(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*)>(&::Animancer::AnimancerComponent::GatherAnimationClips)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802dc560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                    {::i2c::class_of<::Animancer::AnimancerComponent*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerComponent::*)()>(&::Animancer::AnimancerComponent::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.Animancer_IAnimancerComponent_get_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerComponent::*)()>(&::Animancer::AnimancerComponent::Animancer_IAnimancerComponent_get_enabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dc4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"Animancer.IAnimancerComponent.get_enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerComponent.Animancer_IAnimancerComponent_get_gameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Animancer::AnimancerComponent::*)()>(&::Animancer::AnimancerComponent::Animancer_IAnimancerComponent_get_gameObject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dc4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"Animancer.IAnimancerComponent.get_gameObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Animator>& Animancer::AnimancerComponent::__cordl_internal_get__Animator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& Animancer::AnimancerComponent::__cordl_internal_get__Animator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animator;
}
constexpr void Animancer::AnimancerComponent::__cordl_internal_set__Animator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animator = value;
}
constexpr ::Animancer::AnimancerPlayable*& Animancer::AnimancerComponent::__cordl_internal_get__Playable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Playable;
}
constexpr ::Animancer::AnimancerPlayable* const& Animancer::AnimancerComponent::__cordl_internal_get__Playable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Playable;
}
constexpr void Animancer::AnimancerComponent::__cordl_internal_set__Playable(::Animancer::AnimancerPlayable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Playable = value;
}
constexpr ::Animancer::AnimancerComponent_DisableAction& Animancer::AnimancerComponent::__cordl_internal_get__ActionOnDisable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActionOnDisable;
}
constexpr ::Animancer::AnimancerComponent_DisableAction const& Animancer::AnimancerComponent::__cordl_internal_get__ActionOnDisable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActionOnDisable;
}
constexpr void Animancer::AnimancerComponent::__cordl_internal_set__ActionOnDisable(::Animancer::AnimancerComponent_DisableAction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ActionOnDisable = value;
}
inline ::UnityW<::UnityEngine::Animator> Animancer::AnimancerComponent::get_Animator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"get_Animator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Animator>>(this, ___internal_method);
}
inline void Animancer::AnimancerComponent::set_Animator(::UnityEngine::Animator*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"set_Animator", {}, {::i2c::type_of<::UnityEngine::Animator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Animancer::AnimancerPlayable* Animancer::AnimancerComponent::get_Playable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"get_Playable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerPlayable*>(this, ___internal_method);
}
inline bool Animancer::AnimancerComponent::get_IsPlayableInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"get_IsPlayableInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Animancer::AnimancerPlayable_StateDictionary* Animancer::AnimancerComponent::get_States()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"get_States", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerPlayable_StateDictionary*>(this, ___internal_method);
}
inline ::Animancer::AnimancerPlayable_LayerList* Animancer::AnimancerComponent::get_Layers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"get_Layers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerPlayable_LayerList*>(this, ___internal_method);
}
inline ::Animancer::AnimancerPlayable* Animancer::AnimancerComponent::op_Implicit___Animancer__AnimancerPlayable_(::Animancer::AnimancerComponent*  animancer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Animancer::AnimancerComponent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerPlayable*>(nullptr, ___internal_method, animancer);
}
inline ::Animancer::AnimancerLayer* Animancer::AnimancerComponent::op_Implicit___Animancer__AnimancerLayer_(::Animancer::AnimancerComponent*  animancer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Animancer::AnimancerComponent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerLayer*>(nullptr, ___internal_method, animancer);
}
inline ::by_ref<::Animancer::AnimancerComponent_DisableAction> Animancer::AnimancerComponent::get_ActionOnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"get_ActionOnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Animancer::AnimancerComponent_DisableAction>>(this, ___internal_method);
}
inline bool Animancer::AnimancerComponent::Animancer_IAnimancerComponent_get_ResetOnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"Animancer.IAnimancerComponent.get_ResetOnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::AnimatorUpdateMode Animancer::AnimancerComponent::get_UpdateMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"get_UpdateMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorUpdateMode>(this, ___internal_method);
}
inline void Animancer::AnimancerComponent::set_UpdateMode(::UnityEngine::AnimatorUpdateMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"set_UpdateMode", {}, {::i2c::type_of<::UnityEngine::AnimatorUpdateMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::AnimancerComponent::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerComponent*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::AnimancerComponent::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerComponent*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::AnimancerComponent::InitializePlayable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"InitializePlayable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::AnimancerComponent::InitializePlayable(::Animancer::AnimancerPlayable*  playable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"InitializePlayable", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable);
}
inline void Animancer::AnimancerComponent::OnInitializePlayable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerComponent*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Animancer::AnimancerComponent::TryGetAnimator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"TryGetAnimator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::AnimancerComponent::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerComponent*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Animancer::AnimancerComponent::GetKey(::UnityEngine::AnimationClip*  clip)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerComponent*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, clip);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerComponent::Play(::UnityEngine::AnimationClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, clip);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerComponent::Play(::Animancer::AnimancerState*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"Play", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, state);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerComponent::Play(::UnityEngine::AnimationClip*  clip, float_t  fadeDuration, ::Animancer::FadeMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Animancer::FadeMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, clip, fadeDuration, mode);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerComponent::Play(::Animancer::AnimancerState*  state, float_t  fadeDuration, ::Animancer::FadeMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"Play", {}, {::i2c::type_of<::Animancer::AnimancerState*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Animancer::FadeMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, state, fadeDuration, mode);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerComponent::Play(::Animancer::ITransition*  transition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"Play", {}, {::i2c::type_of<::Animancer::ITransition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, transition);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerComponent::Play(::Animancer::ITransition*  transition, float_t  fadeDuration, ::Animancer::FadeMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"Play", {}, {::i2c::type_of<::Animancer::ITransition*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Animancer::FadeMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, transition, fadeDuration, mode);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerComponent::TryPlay(::System::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"TryPlay", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, key);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerComponent::TryPlay(::System::Object*  key, float_t  fadeDuration, ::Animancer::FadeMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"TryPlay", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Animancer::FadeMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, key, fadeDuration, mode);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerComponent::Stop(::UnityEngine::AnimationClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"Stop", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, clip);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerComponent::Stop(::Animancer::IHasKey*  hasKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"Stop", {}, {::i2c::type_of<::Animancer::IHasKey*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, hasKey);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerComponent::Stop(::System::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"Stop", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, key);
}
inline void Animancer::AnimancerComponent::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Animancer::AnimancerComponent::IsPlaying(::UnityEngine::AnimationClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"IsPlaying", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clip);
}
inline bool Animancer::AnimancerComponent::IsPlaying(::Animancer::IHasKey*  hasKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"IsPlaying", {}, {::i2c::type_of<::Animancer::IHasKey*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hasKey);
}
inline bool Animancer::AnimancerComponent::IsPlaying(::System::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"IsPlaying", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline bool Animancer::AnimancerComponent::IsPlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"IsPlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Animancer::AnimancerComponent::IsPlayingClip(::UnityEngine::AnimationClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"IsPlayingClip", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clip);
}
inline void Animancer::AnimancerComponent::Evaluate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"Evaluate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::AnimancerComponent::Evaluate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"Evaluate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline bool Animancer::AnimancerComponent::System_Collections_IEnumerator_MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"System.Collections.IEnumerator.MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Animancer::AnimancerComponent::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Animancer::AnimancerComponent::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::AnimancerComponent::GetAnimationClips(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AnimationClip>>*  clips)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"GetAnimationClips", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AnimationClip>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clips);
}
inline void Animancer::AnimancerComponent::GatherAnimationClips(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerComponent*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clips);
}
inline void Animancer::AnimancerComponent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Animancer::AnimancerComponent::Animancer_IAnimancerComponent_get_enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"Animancer.IAnimancerComponent.get_enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> Animancer::AnimancerComponent::Animancer_IAnimancerComponent_get_gameObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerComponent*>(),
                        {"Animancer.IAnimancerComponent.get_gameObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline ::Animancer::AnimancerComponent* Animancer::AnimancerComponent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::AnimancerComponent*>());
}
/// @brief Convert operator to "::Animancer::IAnimancerComponent"
constexpr  Animancer::AnimancerComponent::operator ::Animancer::IAnimancerComponent*() noexcept {
return static_cast<::Animancer::IAnimancerComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IAnimancerComponent"
constexpr ::Animancer::IAnimancerComponent* Animancer::AnimancerComponent::i___Animancer__IAnimancerComponent() noexcept {
return static_cast<::Animancer::IAnimancerComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Animancer::AnimancerComponent::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Animancer::AnimancerComponent::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::IAnimationClipSource"
constexpr  Animancer::AnimancerComponent::operator ::UnityEngine::IAnimationClipSource*() noexcept {
return static_cast<::UnityEngine::IAnimationClipSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::IAnimationClipSource"
constexpr ::UnityEngine::IAnimationClipSource* Animancer::AnimancerComponent::i___UnityEngine__IAnimationClipSource() noexcept {
return static_cast<::UnityEngine::IAnimationClipSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IAnimationClipCollection"
constexpr  Animancer::AnimancerComponent::operator ::Animancer::IAnimationClipCollection*() noexcept {
return static_cast<::Animancer::IAnimationClipCollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IAnimationClipCollection"
constexpr ::Animancer::IAnimationClipCollection* Animancer::AnimancerComponent::i___Animancer__IAnimationClipCollection() noexcept {
return static_cast<::Animancer::IAnimationClipCollection*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::AnimancerComponent::AnimancerComponent()   {
}
