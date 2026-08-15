#pragma once
// IWYU pragma private; include "Animancer/AnimancerLayer.hpp"
#include "Animancer/zzzz__AnimancerNode_impl.hpp"
#include "Animancer/zzzz__AnimancerLayer_def.hpp"
#include "Animancer/zzzz__AnimancerPlayable_def.hpp"
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include "Animancer/zzzz__ClipState_def.hpp"
#include "Animancer/zzzz__FadeMode_def.hpp"
#include "Animancer/zzzz__FastEnumerator_1_def.hpp"
#include "Animancer/zzzz__IAnimationClipCollection_def.hpp"
#include "Animancer/zzzz__IPlayableWrapper_def.hpp"
#include "Animancer/zzzz__ITransition_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__AvatarMask_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Animancer::AnimancerLayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerLayer::*)(::Animancer::AnimancerPlayable*, int32_t)>(&::Animancer::AnimancerLayer::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1802e08d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.CreatePlayable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerLayer::*)(::by_ref<::UnityEngine::Playables::Playable>)>(&::Animancer::AnimancerLayer::CreatePlayable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802dec40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                    {::i2c::class_of<::Animancer::AnimancerLayer*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.get_Layer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerLayer* (::Animancer::AnimancerLayer::*)()>(&::Animancer::AnimancerLayer::get_Layer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                    {::i2c::class_of<::Animancer::AnimancerLayer*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.get_Parent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::IPlayableWrapper* (::Animancer::AnimancerLayer::*)()>(&::Animancer::AnimancerLayer::get_Parent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                    {::i2c::class_of<::Animancer::AnimancerLayer*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.get_KeepChildrenConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerLayer::*)()>(&::Animancer::AnimancerLayer::get_KeepChildrenConnected)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802e0b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                    {::i2c::class_of<::Animancer::AnimancerLayer*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.get_CurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerLayer::*)()>(&::Animancer::AnimancerLayer::get_CurrentState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"get_CurrentState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.set_CurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerLayer::*)(::Animancer::AnimancerState*)>(&::Animancer::AnimancerLayer::set_CurrentState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802e0d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"set_CurrentState", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.get_CommandCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::AnimancerLayer::*)()>(&::Animancer::AnimancerLayer::get_CommandCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"get_CommandCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.set_CommandCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerLayer::*)(int32_t)>(&::Animancer::AnimancerLayer::set_CommandCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"set_CommandCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.get_IsAdditive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerLayer::*)()>(&::Animancer::AnimancerLayer::get_IsAdditive)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802e0b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"get_IsAdditive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.set_IsAdditive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerLayer::*)(bool)>(&::Animancer::AnimancerLayer::set_IsAdditive)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802e0d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"set_IsAdditive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.SetMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerLayer::*)(::UnityEngine::AvatarMask*)>(&::Animancer::AnimancerLayer::SetMask)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802e0620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"SetMask", {}, {::i2c::type_of<::UnityEngine::AvatarMask*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.get_AverageVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Animancer::AnimancerLayer::*)()>(&::Animancer::AnimancerLayer::get_AverageVelocity)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1802e09f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"get_AverageVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.get_ChildCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::AnimancerLayer::*)()>(&::Animancer::AnimancerLayer::get_ChildCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802e0b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                    {::i2c::class_of<::Animancer::AnimancerLayer*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.GetChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerLayer::*)(int32_t)>(&::Animancer::AnimancerLayer::GetChild)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802df040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                    {::i2c::class_of<::Animancer::AnimancerLayer*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerLayer::*)(int32_t)>(&::Animancer::AnimancerLayer::get_Item)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802df040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.AddChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerLayer::*)(::Animancer::AnimancerState*)>(&::Animancer::AnimancerLayer::AddChild)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1802de810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"AddChild", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.OnAddChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerLayer::*)(::Animancer::AnimancerState*)>(&::Animancer::AnimancerLayer::OnAddChild)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dfd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                    {::i2c::class_of<::Animancer::AnimancerLayer*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.OnRemoveChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerLayer::*)(::Animancer::AnimancerState*)>(&::Animancer::AnimancerLayer::OnRemoveChild)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1802dfd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                    {::i2c::class_of<::Animancer::AnimancerLayer*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::FastEnumerator_1<::Animancer::AnimancerState*> (::Animancer::AnimancerLayer::*)()>(&::Animancer::AnimancerLayer::GetEnumerator)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802df070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                    {::i2c::class_of<::Animancer::AnimancerLayer*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.CreateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::ClipState* (::Animancer::AnimancerLayer::*)(::UnityEngine::AnimationClip*)>(&::Animancer::AnimancerLayer::CreateState)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1802ded10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"CreateState", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.CreateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::ClipState* (::Animancer::AnimancerLayer::*)(::System::Object*, ::UnityEngine::AnimationClip*)>(&::Animancer::AnimancerLayer::CreateState)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802deca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"CreateState", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.GetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerLayer::*)(::by_ref<::System::Object*>)>(&::Animancer::AnimancerLayer::GetState)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x1802df870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"GetState", {}, {::i2c::type_of<::by_ref<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.CreateIfNew
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerLayer::*)(::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*)>(&::Animancer::AnimancerLayer::CreateIfNew)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802deab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"CreateIfNew", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.CreateIfNew
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerLayer::*)(::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*)>(&::Animancer::AnimancerLayer::CreateIfNew)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802deaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"CreateIfNew", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.CreateIfNew
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerLayer::*)(::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*)>(&::Animancer::AnimancerLayer::CreateIfNew)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802debd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"CreateIfNew", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.CreateIfNew
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerLayer::*)(::ArrayW<::UnityEngine::AnimationClip*>)>(&::Animancer::AnimancerLayer::CreateIfNew)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802deb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"CreateIfNew", {}, {::i2c::type_of<::ArrayW<::UnityEngine::AnimationClip*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.GetOrCreateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerLayer::*)(::UnityEngine::AnimationClip*, bool)>(&::Animancer::AnimancerLayer::GetOrCreateState)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1802df340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"GetOrCreateState", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.GetOrCreateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerLayer::*)(::Animancer::ITransition*)>(&::Animancer::AnimancerLayer::GetOrCreateState)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1802df290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"GetOrCreateState", {}, {::i2c::type_of<::Animancer::ITransition*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.GetOrCreateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerLayer::*)(::System::Object*, ::UnityEngine::AnimationClip*, bool)>(&::Animancer::AnimancerLayer::GetOrCreateState)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1802df0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"GetOrCreateState", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.GetOrCreateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerLayer::*)(::Animancer::AnimancerState*)>(&::Animancer::AnimancerLayer::GetOrCreateState)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1802df180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"GetOrCreateState", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.get_WeightlessThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::Animancer::AnimancerLayer::get_WeightlessThreshold)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802e0bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"get_WeightlessThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.set_WeightlessThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::Animancer::AnimancerLayer::set_WeightlessThreshold)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802e0da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"set_WeightlessThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.get_MaxCloneCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Animancer::AnimancerLayer::get_MaxCloneCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802e0bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"get_MaxCloneCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.set_MaxCloneCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Animancer::AnimancerLayer::set_MaxCloneCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802e0d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"set_MaxCloneCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.GetOrCreateWeightlessState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerLayer::*)(::Animancer::AnimancerState*)>(&::Animancer::AnimancerLayer::GetOrCreateWeightlessState)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x1802df440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"GetOrCreateWeightlessState", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.DestroyStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerLayer::*)()>(&::Animancer::AnimancerLayer::DestroyStates)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1802deda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"DestroyStates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.OnStartFade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerLayer::*)()>(&::Animancer::AnimancerLayer::OnStartFade)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802dfe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                    {::i2c::class_of<::Animancer::AnimancerLayer*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerLayer::*)(::UnityEngine::AnimationClip*)>(&::Animancer::AnimancerLayer::Play)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802dff10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerLayer::*)(::Animancer::AnimancerState*)>(&::Animancer::AnimancerLayer::Play)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1802dff40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"Play", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerLayer::*)(::UnityEngine::AnimationClip*, float_t, ::Animancer::FadeMode)>(&::Animancer::AnimancerLayer::Play)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802e00f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Animancer::FadeMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerLayer::*)(::Animancer::AnimancerState*, float_t, ::Animancer::FadeMode)>(&::Animancer::AnimancerLayer::Play)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1802e0360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"Play", {}, {::i2c::type_of<::Animancer::AnimancerState*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Animancer::FadeMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerLayer::*)(::Animancer::ITransition*)>(&::Animancer::AnimancerLayer::Play)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1802e0240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"Play", {}, {::i2c::type_of<::Animancer::ITransition*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerLayer::*)(::Animancer::ITransition*, float_t, ::Animancer::FadeMode)>(&::Animancer::AnimancerLayer::Play)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1802e0140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"Play", {}, {::i2c::type_of<::Animancer::ITransition*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Animancer::FadeMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.TryPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerLayer::*)(::System::Object*)>(&::Animancer::AnimancerLayer::TryPlay)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802e0810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"TryPlay", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.TryPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerLayer::*)(::System::Object*, float_t, ::Animancer::FadeMode)>(&::Animancer::AnimancerLayer::TryPlay)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1802e0760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"TryPlay", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Animancer::FadeMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.EvaluateFadeMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerLayer::*)(::Animancer::FadeMode, ::by_ref<::Animancer::AnimancerState*>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::Animancer::AnimancerLayer::EvaluateFadeMode)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1802dee50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"EvaluateFadeMode", {}, {::i2c::type_of<::Animancer::FadeMode>(), ::i2c::type_of<::by_ref<::Animancer::AnimancerState*>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerLayer::*)()>(&::Animancer::AnimancerLayer::Stop)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1802e0660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                    {::i2c::class_of<::Animancer::AnimancerLayer*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.IsPlayingClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerLayer::*)(::UnityEngine::AnimationClip*)>(&::Animancer::AnimancerLayer::IsPlayingClip)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1802dfc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"IsPlayingClip", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.IsAnyStatePlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerLayer::*)()>(&::Animancer::AnimancerLayer::IsAnyStatePlaying)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802dfbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"IsAnyStatePlaying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.IsPlayingAndNotEnding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerLayer::*)()>(&::Animancer::AnimancerLayer::IsPlayingAndNotEnding)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802dfc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                    {::i2c::class_of<::Animancer::AnimancerLayer*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.GetTotalWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::AnimancerLayer::*)()>(&::Animancer::AnimancerLayer::GetTotalWeight)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802dfb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"GetTotalWeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.get_ApplyAnimatorIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerLayer::*)()>(&::Animancer::AnimancerLayer::get_ApplyAnimatorIK)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e09d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                    {::i2c::class_of<::Animancer::AnimancerLayer*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.set_ApplyAnimatorIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerLayer::*)(bool)>(&::Animancer::AnimancerLayer::set_ApplyAnimatorIK)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1802e0bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                    {::i2c::class_of<::Animancer::AnimancerLayer*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.get_ApplyFootIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerLayer::*)()>(&::Animancer::AnimancerLayer::get_ApplyFootIK)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e09e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                    {::i2c::class_of<::Animancer::AnimancerLayer*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.set_ApplyFootIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerLayer::*)(bool)>(&::Animancer::AnimancerLayer::set_ApplyFootIK)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1802e0c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                    {::i2c::class_of<::Animancer::AnimancerLayer*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.GatherAnimationClips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerLayer::*)(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*)>(&::Animancer::AnimancerLayer::GatherAnimationClips)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802df020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"GatherAnimationClips", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Animancer::AnimancerLayer::*)()>(&::Animancer::AnimancerLayer::ToString)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802e0730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                    {::i2c::class_of<::Animancer::AnimancerLayer*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerLayer.AppendDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerLayer::*)(::System::Text::StringBuilder*, ::StringW)>(&::Animancer::AnimancerLayer::AppendDetails)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1802de980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                    {::i2c::class_of<::Animancer::AnimancerLayer*>(), 44}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Animancer::AnimancerState*>*& Animancer::AnimancerLayer::__cordl_internal_get_States()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___States;
}
constexpr ::System::Collections::Generic::List_1<::Animancer::AnimancerState*>* const& Animancer::AnimancerLayer::__cordl_internal_get_States() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___States;
}
constexpr void Animancer::AnimancerLayer::__cordl_internal_set_States(::System::Collections::Generic::List_1<::Animancer::AnimancerState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___States = value;
}
constexpr ::Animancer::AnimancerState*& Animancer::AnimancerLayer::__cordl_internal_get__CurrentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentState;
}
constexpr ::Animancer::AnimancerState* const& Animancer::AnimancerLayer::__cordl_internal_get__CurrentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentState;
}
constexpr void Animancer::AnimancerLayer::__cordl_internal_set__CurrentState(::Animancer::AnimancerState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentState = value;
}
constexpr int32_t& Animancer::AnimancerLayer::__cordl_internal_get__CommandCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CommandCount_k__BackingField;
}
constexpr int32_t const& Animancer::AnimancerLayer::__cordl_internal_get__CommandCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CommandCount_k__BackingField;
}
constexpr void Animancer::AnimancerLayer::__cordl_internal_set__CommandCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CommandCount_k__BackingField = value;
}
constexpr bool& Animancer::AnimancerLayer::__cordl_internal_get__ApplyAnimatorIK()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ApplyAnimatorIK;
}
constexpr bool const& Animancer::AnimancerLayer::__cordl_internal_get__ApplyAnimatorIK() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ApplyAnimatorIK;
}
constexpr void Animancer::AnimancerLayer::__cordl_internal_set__ApplyAnimatorIK(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ApplyAnimatorIK = value;
}
constexpr bool& Animancer::AnimancerLayer::__cordl_internal_get__ApplyFootIK()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ApplyFootIK;
}
constexpr bool const& Animancer::AnimancerLayer::__cordl_internal_get__ApplyFootIK() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ApplyFootIK;
}
constexpr void Animancer::AnimancerLayer::__cordl_internal_set__ApplyFootIK(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ApplyFootIK = value;
}
inline void Animancer::AnimancerLayer::setStaticF__WeightlessThreshold_k__BackingField(float_t  value)  {
::cordl_internals::setStaticField<float_t, "<WeightlessThreshold>k__BackingField", ::Animancer::AnimancerLayer*>(std::forward<float_t>(value));
}
inline float_t Animancer::AnimancerLayer::getStaticF__WeightlessThreshold_k__BackingField()  {
return ::cordl_internals::getStaticField<float_t, "<WeightlessThreshold>k__BackingField", ::Animancer::AnimancerLayer*>();
}
inline void Animancer::AnimancerLayer::setStaticF__MaxCloneCount_k__BackingField(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "<MaxCloneCount>k__BackingField", ::Animancer::AnimancerLayer*>(std::forward<int32_t>(value));
}
inline int32_t Animancer::AnimancerLayer::getStaticF__MaxCloneCount_k__BackingField()  {
return ::cordl_internals::getStaticField<int32_t, "<MaxCloneCount>k__BackingField", ::Animancer::AnimancerLayer*>();
}
inline void Animancer::AnimancerLayer::_ctor(::Animancer::AnimancerPlayable*  root, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root, index);
}
inline void Animancer::AnimancerLayer::CreatePlayable(::by_ref<::UnityEngine::Playables::Playable>  playable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerLayer*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable);
}
inline ::Animancer::AnimancerLayer* Animancer::AnimancerLayer::get_Layer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerLayer*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerLayer*>(this, ___internal_method);
}
inline ::Animancer::IPlayableWrapper* Animancer::AnimancerLayer::get_Parent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerLayer*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::IPlayableWrapper*>(this, ___internal_method);
}
inline bool Animancer::AnimancerLayer::get_KeepChildrenConnected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerLayer*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerLayer::get_CurrentState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"get_CurrentState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method);
}
inline void Animancer::AnimancerLayer::set_CurrentState(::Animancer::AnimancerState*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"set_CurrentState", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Animancer::AnimancerLayer::get_CommandCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"get_CommandCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Animancer::AnimancerLayer::set_CommandCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"set_CommandCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Animancer::AnimancerLayer::get_IsAdditive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"get_IsAdditive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::AnimancerLayer::set_IsAdditive(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"set_IsAdditive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::AnimancerLayer::SetMask(::UnityEngine::AvatarMask*  mask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"SetMask", {}, {::i2c::type_of<::UnityEngine::AvatarMask*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mask);
}
inline ::UnityEngine::Vector3 Animancer::AnimancerLayer::get_AverageVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"get_AverageVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline int32_t Animancer::AnimancerLayer::get_ChildCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerLayer*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerLayer::GetChild(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerLayer*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, index);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerLayer::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, index);
}
inline void Animancer::AnimancerLayer::AddChild(::Animancer::AnimancerState*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"AddChild", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void Animancer::AnimancerLayer::OnAddChild(::Animancer::AnimancerState*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerLayer*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void Animancer::AnimancerLayer::OnRemoveChild(::Animancer::AnimancerState*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerLayer*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline ::Animancer::FastEnumerator_1<::Animancer::AnimancerState*> Animancer::AnimancerLayer::GetEnumerator()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerLayer*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::FastEnumerator_1<::Animancer::AnimancerState*>>(this, ___internal_method);
}
inline ::Animancer::ClipState* Animancer::AnimancerLayer::CreateState(::UnityEngine::AnimationClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"CreateState", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::ClipState*>(this, ___internal_method, clip);
}
inline ::Animancer::ClipState* Animancer::AnimancerLayer::CreateState(::System::Object*  key, ::UnityEngine::AnimationClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"CreateState", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::ClipState*>(this, ___internal_method, key, clip);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerLayer::GetState(::by_ref<::System::Object*>  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"GetState", {}, {::i2c::type_of<::by_ref<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, key);
}
inline void Animancer::AnimancerLayer::CreateIfNew(::UnityEngine::AnimationClip*  clip0, ::UnityEngine::AnimationClip*  clip1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"CreateIfNew", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip0, clip1);
}
inline void Animancer::AnimancerLayer::CreateIfNew(::UnityEngine::AnimationClip*  clip0, ::UnityEngine::AnimationClip*  clip1, ::UnityEngine::AnimationClip*  clip2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"CreateIfNew", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip0, clip1, clip2);
}
inline void Animancer::AnimancerLayer::CreateIfNew(::UnityEngine::AnimationClip*  clip0, ::UnityEngine::AnimationClip*  clip1, ::UnityEngine::AnimationClip*  clip2, ::UnityEngine::AnimationClip*  clip3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"CreateIfNew", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip0, clip1, clip2, clip3);
}
inline void Animancer::AnimancerLayer::CreateIfNew(::ArrayW<::UnityEngine::AnimationClip*>  clips)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"CreateIfNew", {}, {::i2c::type_of<::ArrayW<::UnityEngine::AnimationClip*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clips);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerLayer::GetOrCreateState(::UnityEngine::AnimationClip*  clip, bool  allowSetClip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"GetOrCreateState", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, clip, allowSetClip);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerLayer::GetOrCreateState(::Animancer::ITransition*  transition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"GetOrCreateState", {}, {::i2c::type_of<::Animancer::ITransition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, transition);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerLayer::GetOrCreateState(::System::Object*  key, ::UnityEngine::AnimationClip*  clip, bool  allowSetClip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"GetOrCreateState", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, key, clip, allowSetClip);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerLayer::GetOrCreateState(::Animancer::AnimancerState*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"GetOrCreateState", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, state);
}
inline float_t Animancer::AnimancerLayer::get_WeightlessThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"get_WeightlessThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void Animancer::AnimancerLayer::set_WeightlessThreshold(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"set_WeightlessThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t Animancer::AnimancerLayer::get_MaxCloneCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"get_MaxCloneCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void Animancer::AnimancerLayer::set_MaxCloneCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"set_MaxCloneCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerLayer::GetOrCreateWeightlessState(::Animancer::AnimancerState*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"GetOrCreateWeightlessState", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, state);
}
inline void Animancer::AnimancerLayer::DestroyStates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"DestroyStates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::AnimancerLayer::OnStartFade()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerLayer*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerLayer::Play(::UnityEngine::AnimationClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, clip);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerLayer::Play(::Animancer::AnimancerState*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"Play", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, state);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerLayer::Play(::UnityEngine::AnimationClip*  clip, float_t  fadeDuration, ::Animancer::FadeMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Animancer::FadeMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, clip, fadeDuration, mode);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerLayer::Play(::Animancer::AnimancerState*  state, float_t  fadeDuration, ::Animancer::FadeMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"Play", {}, {::i2c::type_of<::Animancer::AnimancerState*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Animancer::FadeMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, state, fadeDuration, mode);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerLayer::Play(::Animancer::ITransition*  transition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"Play", {}, {::i2c::type_of<::Animancer::ITransition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, transition);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerLayer::Play(::Animancer::ITransition*  transition, float_t  fadeDuration, ::Animancer::FadeMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"Play", {}, {::i2c::type_of<::Animancer::ITransition*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Animancer::FadeMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, transition, fadeDuration, mode);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerLayer::TryPlay(::System::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"TryPlay", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, key);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerLayer::TryPlay(::System::Object*  key, float_t  fadeDuration, ::Animancer::FadeMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"TryPlay", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Animancer::FadeMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, key, fadeDuration, mode);
}
inline void Animancer::AnimancerLayer::EvaluateFadeMode(::Animancer::FadeMode  mode, ::by_ref<::Animancer::AnimancerState*>  state, ::by_ref<float_t>  fadeDuration, ::by_ref<float_t>  layerFadeDuration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"EvaluateFadeMode", {}, {::i2c::type_of<::Animancer::FadeMode>(), ::i2c::type_of<::by_ref<::Animancer::AnimancerState*>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode, state, fadeDuration, layerFadeDuration);
}
inline void Animancer::AnimancerLayer::Stop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerLayer*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Animancer::AnimancerLayer::IsPlayingClip(::UnityEngine::AnimationClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"IsPlayingClip", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clip);
}
inline bool Animancer::AnimancerLayer::IsAnyStatePlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"IsAnyStatePlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Animancer::AnimancerLayer::IsPlayingAndNotEnding()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerLayer*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Animancer::AnimancerLayer::GetTotalWeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"GetTotalWeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Animancer::AnimancerLayer::get_ApplyAnimatorIK()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerLayer*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::AnimancerLayer::set_ApplyAnimatorIK(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerLayer*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Animancer::AnimancerLayer::get_ApplyFootIK()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerLayer*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::AnimancerLayer::set_ApplyFootIK(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerLayer*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::AnimancerLayer::GatherAnimationClips(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerLayer*>(),
                        {"GatherAnimationClips", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clips);
}
inline ::StringW Animancer::AnimancerLayer::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerLayer*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Animancer::AnimancerLayer::AppendDetails(::System::Text::StringBuilder*  text, ::StringW  separator)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerLayer*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, separator);
}
inline ::Animancer::AnimancerLayer* Animancer::AnimancerLayer::New_ctor(::Animancer::AnimancerPlayable*  root, int32_t  index)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::AnimancerLayer*>(root, index));
}
/// @brief Convert operator to "::Animancer::IAnimationClipCollection"
constexpr  Animancer::AnimancerLayer::operator ::Animancer::IAnimationClipCollection*() noexcept {
return static_cast<::Animancer::IAnimationClipCollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IAnimationClipCollection"
constexpr ::Animancer::IAnimationClipCollection* Animancer::AnimancerLayer::i___Animancer__IAnimationClipCollection() noexcept {
return static_cast<::Animancer::IAnimationClipCollection*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::AnimancerLayer::AnimancerLayer()   {
}
