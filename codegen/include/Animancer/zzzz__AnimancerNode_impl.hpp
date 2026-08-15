#pragma once
// IWYU pragma private; include "Animancer/AnimancerNode.hpp"
#include "Animancer/zzzz__Key_impl.hpp"
#include "UnityEngine/Playables/zzzz__Playable_impl.hpp"
#include "Animancer/zzzz__AnimancerNode_def.hpp"
#include "Animancer/zzzz__AnimancerLayer_def.hpp"
#include "Animancer/zzzz__AnimancerPlayable_def.hpp"
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include "Animancer/zzzz__FastEnumerator_1_def.hpp"
#include "Animancer/zzzz__ICopyable_1_def.hpp"
#include "Animancer/zzzz__IPlayableWrapper_def.hpp"
#include "Animancer/zzzz__IUpdatable_def.hpp"
#include "Animancer/zzzz__Key_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
//  Writing Method size for method: ::Animancer::AnimancerNode.get_Playable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::get_Playable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"get_Playable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::get_IsValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802e2bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.CreatePlayable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::CreatePlayable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1802e1aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerNode*>(),
                    {::i2c::class_of<::Animancer::AnimancerNode*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.CreatePlayable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)(::by_ref<::UnityEngine::Playables::Playable>)>(&::Animancer::AnimancerNode::CreatePlayable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerNode*>(),
                    {::i2c::class_of<::Animancer::AnimancerNode*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.DestroyPlayable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::DestroyPlayable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802e1b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"DestroyPlayable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.RecreatePlayable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::RecreatePlayable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802e21f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerNode*>(),
                    {::i2c::class_of<::Animancer::AnimancerNode*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.RecreatePlayableRecursive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::RecreatePlayableRecursive)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802e2170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"RecreatePlayableRecursive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.Animancer_ICopyable_Animancer_AnimancerNode__CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)(::Animancer::AnimancerNode*)>(&::Animancer::AnimancerNode::Animancer_ICopyable_Animancer_AnimancerNode__CopyFrom)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1802e0dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"Animancer.ICopyable<Animancer.AnimancerNode>.CopyFrom", {}, {::i2c::type_of<::Animancer::AnimancerNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.get_Root
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerPlayable* (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::get_Root)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"get_Root", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.set_Root
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)(::Animancer::AnimancerPlayable*)>(&::Animancer::AnimancerNode::set_Root)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"set_Root", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.get_Layer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerLayer* (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::get_Layer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerNode*>(),
                    {::i2c::class_of<::Animancer::AnimancerNode*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.get_Parent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::IPlayableWrapper* (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::get_Parent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerNode*>(),
                    {::i2c::class_of<::Animancer::AnimancerNode*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.get_Index
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::get_Index)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"get_Index", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.set_Index
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)(int32_t)>(&::Animancer::AnimancerNode::set_Index)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"set_Index", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802e2880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.ConnectToGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::ConnectToGraph)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1802e1890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"ConnectToGraph", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.DisconnectFromGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::DisconnectFromGraph)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1802e1be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"DisconnectFromGraph", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.ApplyConnectedState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)(::Animancer::IPlayableWrapper*)>(&::Animancer::AnimancerNode::ApplyConnectedState)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802e1590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"ApplyConnectedState", {}, {::i2c::type_of<::Animancer::IPlayableWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.RequireUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::RequireUpdate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802e2260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"RequireUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.Animancer_IUpdatable_Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::Animancer_IUpdatable_Update)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802e0e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"Animancer.IUpdatable.Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)(::by_ref<bool>)>(&::Animancer::AnimancerNode::Update)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1802e2640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerNode*>(),
                    {::i2c::class_of<::Animancer::AnimancerNode*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.IsPlayingAndNotEnding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::IsPlayingAndNotEnding)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerNode*>(),
                    {::i2c::class_of<::Animancer::AnimancerNode*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.System_Collections_IEnumerator_MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::System_Collections_IEnumerator_MoveNext)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802e2500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"System.Collections.IEnumerator.MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.get_ChildCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::get_ChildCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerNode*>(),
                    {::i2c::class_of<::Animancer::AnimancerNode*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.Animancer_IPlayableWrapper_GetChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerNode* (::Animancer::AnimancerNode::*)(int32_t)>(&::Animancer::AnimancerNode::Animancer_IPlayableWrapper_GetChild)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802e0e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"Animancer.IPlayableWrapper.GetChild", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.GetChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerNode::*)(int32_t)>(&::Animancer::AnimancerNode::GetChild)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802e1d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerNode*>(),
                    {::i2c::class_of<::Animancer::AnimancerNode*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.OnAddChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)(::Animancer::AnimancerState*)>(&::Animancer::AnimancerNode::OnAddChild)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802e1ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerNode*>(),
                    {::i2c::class_of<::Animancer::AnimancerNode*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.OnRemoveChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)(::Animancer::AnimancerState*)>(&::Animancer::AnimancerNode::OnRemoveChild)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802e1ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerNode*>(),
                    {::i2c::class_of<::Animancer::AnimancerNode*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.OnAddChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)(::System::Collections::Generic::IList_1<::Animancer::AnimancerState*>*, ::Animancer::AnimancerState*)>(&::Animancer::AnimancerNode::OnAddChild)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1802e1f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"OnAddChild", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::Animancer::AnimancerState*>*>(), ::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.get_KeepChildrenConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::get_KeepChildrenConnected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerNode*>(),
                    {::i2c::class_of<::Animancer::AnimancerNode*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.ConnectAllChildrenToGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::ConnectAllChildrenToGraph)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1802e1740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"ConnectAllChildrenToGraph", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.DisconnectWeightlessChildrenFromGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::DisconnectWeightlessChildrenFromGraph)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802e1d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"DisconnectWeightlessChildrenFromGraph", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::FastEnumerator_1<::Animancer::AnimancerState*> (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::GetEnumerator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e1e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerNode*>(),
                    {::i2c::class_of<::Animancer::AnimancerNode*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.System_Collections_Generic_IEnumerable_Animancer_AnimancerState__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Animancer::AnimancerState*>* (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::System_Collections_Generic_IEnumerable_Animancer_AnimancerState__GetEnumerator)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802e24c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"System.Collections.Generic.IEnumerable<Animancer.AnimancerState>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802e24c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.get_Weight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::get_Weight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"get_Weight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.set_Weight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)(float_t)>(&::Animancer::AnimancerNode::set_Weight)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802e3000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"set_Weight", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.SetWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)(float_t)>(&::Animancer::AnimancerNode::SetWeight)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802e22e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"SetWeight", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.SetWeightDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::SetWeightDirty)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802e22a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"SetWeightDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.ApplyWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::ApplyWeight)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1802e1610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"ApplyWeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.get_EffectiveWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::get_EffectiveWeight)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1802e2a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"get_EffectiveWeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.get_TargetWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::get_TargetWeight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"get_TargetWeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.set_TargetWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)(float_t)>(&::Animancer::AnimancerNode::set_TargetWeight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"set_TargetWeight", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.get_FadeSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::get_FadeSpeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"get_FadeSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.set_FadeSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)(float_t)>(&::Animancer::AnimancerNode::set_FadeSpeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"set_FadeSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.StartFade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)(float_t)>(&::Animancer::AnimancerNode::StartFade)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802e2400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"StartFade", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.StartFade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)(float_t, float_t)>(&::Animancer::AnimancerNode::StartFade)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1802e2330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"StartFade", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.OnStartFade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::OnStartFade)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerNode*>(),
                    {::i2c::class_of<::Animancer::AnimancerNode*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::Stop)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802e2460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerNode*>(),
                    {::i2c::class_of<::Animancer::AnimancerNode*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.UpdateFade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)(::by_ref<bool>)>(&::Animancer::AnimancerNode::UpdateFade)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1802e2530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"UpdateFade", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.get_Speed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::get_Speed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"get_Speed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.set_Speed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)(float_t)>(&::Animancer::AnimancerNode::set_Speed)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802e2f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"set_Speed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.get_ParentEffectiveSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::get_ParentEffectiveSpeed)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1802e2be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"get_ParentEffectiveSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.get_EffectiveSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::get_EffectiveSpeed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802e2a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"get_EffectiveSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.set_EffectiveSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)(float_t)>(&::Animancer::AnimancerNode::set_EffectiveSpeed)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802e2ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"set_EffectiveSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.get_ApplyParentAnimatorIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Animancer::AnimancerNode::get_ApplyParentAnimatorIK)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802e29c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"get_ApplyParentAnimatorIK", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.set_ApplyParentAnimatorIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Animancer::AnimancerNode::set_ApplyParentAnimatorIK)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802e2eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"set_ApplyParentAnimatorIK", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.get_ApplyParentFootIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Animancer::AnimancerNode::get_ApplyParentFootIK)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802e29e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"get_ApplyParentFootIK", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.set_ApplyParentFootIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Animancer::AnimancerNode::set_ApplyParentFootIK)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802e2ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"set_ApplyParentFootIK", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.CopyIKFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)(::Animancer::AnimancerNode*)>(&::Animancer::AnimancerNode::CopyIKFlags)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1802e19d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerNode*>(),
                    {::i2c::class_of<::Animancer::AnimancerNode*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.get_ApplyAnimatorIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::get_ApplyAnimatorIK)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1802e28a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerNode*>(),
                    {::i2c::class_of<::Animancer::AnimancerNode*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.set_ApplyAnimatorIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)(bool)>(&::Animancer::AnimancerNode::set_ApplyAnimatorIK)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802e2db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerNode*>(),
                    {::i2c::class_of<::Animancer::AnimancerNode*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.get_ApplyFootIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::get_ApplyFootIK)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1802e2930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerNode*>(),
                    {::i2c::class_of<::Animancer::AnimancerNode*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.set_ApplyFootIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)(bool)>(&::Animancer::AnimancerNode::set_ApplyFootIK)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802e2e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerNode*>(),
                    {::i2c::class_of<::Animancer::AnimancerNode*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Animancer::AnimancerNode::*)()>(&::Animancer::AnimancerNode::ToString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerNode*>(),
                    {::i2c::class_of<::Animancer::AnimancerNode*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.SetDebugName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)(::StringW)>(&::Animancer::AnimancerNode::SetDebugName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"SetDebugName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.GetDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Animancer::AnimancerNode::*)(::StringW)>(&::Animancer::AnimancerNode::GetDescription)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1802e1dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"GetDescription", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.AppendDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)(::System::Text::StringBuilder*, ::StringW)>(&::Animancer::AnimancerNode::AppendDescription)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1802e0f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"AppendDescription", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.AppendDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerNode::*)(::System::Text::StringBuilder*, ::StringW)>(&::Animancer::AnimancerNode::AppendDetails)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x1802e1110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerNode*>(),
                    {::i2c::class_of<::Animancer::AnimancerNode*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerNode.AppendIKDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::StringW, ::Animancer::IPlayableWrapper*)>(&::Animancer::AnimancerNode::AppendIKDetails)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1802e1400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"AppendIKDetails", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Animancer::IPlayableWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Playables::Playable& Animancer::AnimancerNode::__cordl_internal_get__Playable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Playable;
}
constexpr ::UnityEngine::Playables::Playable const& Animancer::AnimancerNode::__cordl_internal_get__Playable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Playable;
}
constexpr void Animancer::AnimancerNode::__cordl_internal_set__Playable(::UnityEngine::Playables::Playable  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Playable = value;
}
constexpr ::Animancer::AnimancerPlayable*& Animancer::AnimancerNode::__cordl_internal_get__Root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Root;
}
constexpr ::Animancer::AnimancerPlayable* const& Animancer::AnimancerNode::__cordl_internal_get__Root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Root;
}
constexpr void Animancer::AnimancerNode::__cordl_internal_set__Root(::Animancer::AnimancerPlayable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Root = value;
}
constexpr int32_t& Animancer::AnimancerNode::__cordl_internal_get__Index_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Index_k__BackingField;
}
constexpr int32_t const& Animancer::AnimancerNode::__cordl_internal_get__Index_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Index_k__BackingField;
}
constexpr void Animancer::AnimancerNode::__cordl_internal_set__Index_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Index_k__BackingField = value;
}
constexpr float_t& Animancer::AnimancerNode::__cordl_internal_get__Weight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Weight;
}
constexpr float_t const& Animancer::AnimancerNode::__cordl_internal_get__Weight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Weight;
}
constexpr void Animancer::AnimancerNode::__cordl_internal_set__Weight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Weight = value;
}
constexpr bool& Animancer::AnimancerNode::__cordl_internal_get__IsWeightDirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsWeightDirty;
}
constexpr bool const& Animancer::AnimancerNode::__cordl_internal_get__IsWeightDirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsWeightDirty;
}
constexpr void Animancer::AnimancerNode::__cordl_internal_set__IsWeightDirty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsWeightDirty = value;
}
constexpr float_t& Animancer::AnimancerNode::__cordl_internal_get__TargetWeight_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TargetWeight_k__BackingField;
}
constexpr float_t const& Animancer::AnimancerNode::__cordl_internal_get__TargetWeight_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TargetWeight_k__BackingField;
}
constexpr void Animancer::AnimancerNode::__cordl_internal_set__TargetWeight_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TargetWeight_k__BackingField = value;
}
constexpr float_t& Animancer::AnimancerNode::__cordl_internal_get__FadeSpeed_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FadeSpeed_k__BackingField;
}
constexpr float_t const& Animancer::AnimancerNode::__cordl_internal_get__FadeSpeed_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FadeSpeed_k__BackingField;
}
constexpr void Animancer::AnimancerNode::__cordl_internal_set__FadeSpeed_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FadeSpeed_k__BackingField = value;
}
constexpr float_t& Animancer::AnimancerNode::__cordl_internal_get__Speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Speed;
}
constexpr float_t const& Animancer::AnimancerNode::__cordl_internal_get__Speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Speed;
}
constexpr void Animancer::AnimancerNode::__cordl_internal_set__Speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Speed = value;
}
inline void Animancer::AnimancerNode::setStaticF__ApplyParentAnimatorIK_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<ApplyParentAnimatorIK>k__BackingField", ::Animancer::AnimancerNode*>(std::forward<bool>(value));
}
inline bool Animancer::AnimancerNode::getStaticF__ApplyParentAnimatorIK_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<ApplyParentAnimatorIK>k__BackingField", ::Animancer::AnimancerNode*>();
}
inline void Animancer::AnimancerNode::setStaticF__ApplyParentFootIK_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<ApplyParentFootIK>k__BackingField", ::Animancer::AnimancerNode*>(std::forward<bool>(value));
}
inline bool Animancer::AnimancerNode::getStaticF__ApplyParentFootIK_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<ApplyParentFootIK>k__BackingField", ::Animancer::AnimancerNode*>();
}
inline ::UnityEngine::Playables::Playable Animancer::AnimancerNode::get_Playable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"get_Playable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(this, ___internal_method);
}
inline bool Animancer::AnimancerNode::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::AnimancerNode::CreatePlayable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerNode*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::AnimancerNode::CreatePlayable(::by_ref<::UnityEngine::Playables::Playable>  playable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerNode*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable);
}
inline void Animancer::AnimancerNode::DestroyPlayable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"DestroyPlayable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::AnimancerNode::RecreatePlayable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerNode*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::AnimancerNode::RecreatePlayableRecursive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"RecreatePlayableRecursive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::AnimancerNode::Animancer_ICopyable_Animancer_AnimancerNode__CopyFrom(::Animancer::AnimancerNode*  copyFrom)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"Animancer.ICopyable<Animancer.AnimancerNode>.CopyFrom", {}, {::i2c::type_of<::Animancer::AnimancerNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, copyFrom);
}
inline ::Animancer::AnimancerPlayable* Animancer::AnimancerNode::get_Root()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"get_Root", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerPlayable*>(this, ___internal_method);
}
inline void Animancer::AnimancerNode::set_Root(::Animancer::AnimancerPlayable*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"set_Root", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Animancer::AnimancerLayer* Animancer::AnimancerNode::get_Layer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerNode*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerLayer*>(this, ___internal_method);
}
inline ::Animancer::IPlayableWrapper* Animancer::AnimancerNode::get_Parent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerNode*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::IPlayableWrapper*>(this, ___internal_method);
}
inline int32_t Animancer::AnimancerNode::get_Index()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"get_Index", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Animancer::AnimancerNode::set_Index(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"set_Index", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::AnimancerNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::AnimancerNode::ConnectToGraph()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"ConnectToGraph", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::AnimancerNode::DisconnectFromGraph()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"DisconnectFromGraph", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::AnimancerNode::ApplyConnectedState(::Animancer::IPlayableWrapper*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"ApplyConnectedState", {}, {::i2c::type_of<::Animancer::IPlayableWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent);
}
inline void Animancer::AnimancerNode::RequireUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"RequireUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::AnimancerNode::Animancer_IUpdatable_Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"Animancer.IUpdatable.Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::AnimancerNode::Update(::by_ref<bool>  needsMoreUpdates)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerNode*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, needsMoreUpdates);
}
inline bool Animancer::AnimancerNode::IsPlayingAndNotEnding()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerNode*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Animancer::AnimancerNode::System_Collections_IEnumerator_MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"System.Collections.IEnumerator.MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Animancer::AnimancerNode::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Animancer::AnimancerNode::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Animancer::AnimancerNode::get_ChildCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerNode*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Animancer::AnimancerNode* Animancer::AnimancerNode::Animancer_IPlayableWrapper_GetChild(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"Animancer.IPlayableWrapper.GetChild", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerNode*>(this, ___internal_method, index);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerNode::GetChild(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerNode*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, index);
}
inline void Animancer::AnimancerNode::OnAddChild(::Animancer::AnimancerState*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerNode*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void Animancer::AnimancerNode::OnRemoveChild(::Animancer::AnimancerState*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerNode*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void Animancer::AnimancerNode::OnAddChild(::System::Collections::Generic::IList_1<::Animancer::AnimancerState*>*  states, ::Animancer::AnimancerState*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"OnAddChild", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::Animancer::AnimancerState*>*>(), ::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, states, state);
}
inline bool Animancer::AnimancerNode::get_KeepChildrenConnected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerNode*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::AnimancerNode::ConnectAllChildrenToGraph()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"ConnectAllChildrenToGraph", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::AnimancerNode::DisconnectWeightlessChildrenFromGraph()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"DisconnectWeightlessChildrenFromGraph", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::FastEnumerator_1<::Animancer::AnimancerState*> Animancer::AnimancerNode::GetEnumerator()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerNode*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::FastEnumerator_1<::Animancer::AnimancerState*>>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Animancer::AnimancerState*>* Animancer::AnimancerNode::System_Collections_Generic_IEnumerable_Animancer_AnimancerState__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"System.Collections.Generic.IEnumerable<Animancer.AnimancerState>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Animancer::AnimancerState*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Animancer::AnimancerNode::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline float_t Animancer::AnimancerNode::get_Weight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"get_Weight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::AnimancerNode::set_Weight(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"set_Weight", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::AnimancerNode::SetWeight(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"SetWeight", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::AnimancerNode::SetWeightDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"SetWeightDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::AnimancerNode::ApplyWeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"ApplyWeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Animancer::AnimancerNode::get_EffectiveWeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"get_EffectiveWeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Animancer::AnimancerNode::get_TargetWeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"get_TargetWeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::AnimancerNode::set_TargetWeight(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"set_TargetWeight", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Animancer::AnimancerNode::get_FadeSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"get_FadeSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::AnimancerNode::set_FadeSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"set_FadeSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::AnimancerNode::StartFade(float_t  targetWeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"StartFade", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetWeight);
}
inline void Animancer::AnimancerNode::StartFade(float_t  targetWeight, float_t  fadeDuration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"StartFade", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetWeight, fadeDuration);
}
inline void Animancer::AnimancerNode::OnStartFade()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerNode*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::AnimancerNode::Stop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerNode*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::AnimancerNode::UpdateFade(::by_ref<bool>  needsMoreUpdates)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"UpdateFade", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, needsMoreUpdates);
}
inline float_t Animancer::AnimancerNode::get_Speed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"get_Speed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::AnimancerNode::set_Speed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"set_Speed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Animancer::AnimancerNode::get_ParentEffectiveSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"get_ParentEffectiveSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Animancer::AnimancerNode::get_EffectiveSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"get_EffectiveSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::AnimancerNode::set_EffectiveSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"set_EffectiveSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Animancer::AnimancerNode::get_ApplyParentAnimatorIK()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"get_ApplyParentAnimatorIK", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Animancer::AnimancerNode::set_ApplyParentAnimatorIK(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"set_ApplyParentAnimatorIK", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool Animancer::AnimancerNode::get_ApplyParentFootIK()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"get_ApplyParentFootIK", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Animancer::AnimancerNode::set_ApplyParentFootIK(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"set_ApplyParentFootIK", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Animancer::AnimancerNode::CopyIKFlags(::Animancer::AnimancerNode*  copyFrom)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerNode*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, copyFrom);
}
inline bool Animancer::AnimancerNode::get_ApplyAnimatorIK()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerNode*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::AnimancerNode::set_ApplyAnimatorIK(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerNode*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Animancer::AnimancerNode::get_ApplyFootIK()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerNode*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::AnimancerNode::set_ApplyFootIK(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerNode*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Animancer::AnimancerNode::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerNode*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Animancer::AnimancerNode::SetDebugName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"SetDebugName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::StringW Animancer::AnimancerNode::GetDescription(::StringW  separator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"GetDescription", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, separator);
}
inline void Animancer::AnimancerNode::AppendDescription(::System::Text::StringBuilder*  text, ::StringW  separator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"AppendDescription", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, separator);
}
inline void Animancer::AnimancerNode::AppendDetails(::System::Text::StringBuilder*  text, ::StringW  separator)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerNode*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, separator);
}
inline void Animancer::AnimancerNode::AppendIKDetails(::System::Text::StringBuilder*  text, ::StringW  separator, ::Animancer::IPlayableWrapper*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerNode*>(),
                        {"AppendIKDetails", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Animancer::IPlayableWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, text, separator, node);
}
inline ::Animancer::AnimancerNode* Animancer::AnimancerNode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::AnimancerNode*>());
}
/// @brief Convert operator to "::Animancer::IUpdatable"
constexpr  Animancer::AnimancerNode::operator ::Animancer::IUpdatable*() noexcept {
return static_cast<::Animancer::IUpdatable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IUpdatable"
constexpr ::Animancer::IUpdatable* Animancer::AnimancerNode::i___Animancer__IUpdatable() noexcept {
return static_cast<::Animancer::IUpdatable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::Key_IListItem"
constexpr  Animancer::AnimancerNode::operator ::Animancer::Key_IListItem*() noexcept {
return static_cast<::Animancer::Key_IListItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::Key_IListItem"
constexpr ::Animancer::Key_IListItem* Animancer::AnimancerNode::i___Animancer__Key_IListItem() noexcept {
return static_cast<::Animancer::Key_IListItem*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerState*>"
constexpr  Animancer::AnimancerNode::operator ::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerState*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerState*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerState*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerState*>* Animancer::AnimancerNode::i___System__Collections__Generic__IEnumerable_1___Animancer__AnimancerState__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerState*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Animancer::AnimancerNode::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Animancer::AnimancerNode::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Animancer::AnimancerNode::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Animancer::AnimancerNode::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IPlayableWrapper"
constexpr  Animancer::AnimancerNode::operator ::Animancer::IPlayableWrapper*() noexcept {
return static_cast<::Animancer::IPlayableWrapper*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IPlayableWrapper"
constexpr ::Animancer::IPlayableWrapper* Animancer::AnimancerNode::i___Animancer__IPlayableWrapper() noexcept {
return static_cast<::Animancer::IPlayableWrapper*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::AnimancerNode*>"
constexpr  Animancer::AnimancerNode::operator ::Animancer::ICopyable_1<::Animancer::AnimancerNode*>*() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::AnimancerNode*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::AnimancerNode*>"
constexpr ::Animancer::ICopyable_1<::Animancer::AnimancerNode*>* Animancer::AnimancerNode::i___Animancer__ICopyable_1___Animancer__AnimancerNode__() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::AnimancerNode*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::AnimancerNode::AnimancerNode()   {
}
