#pragma once
// IWYU pragma private; include "Animancer/AnimancerPlayable.hpp"
#include "Animancer/zzzz__AnimancerLayer_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimationLayerMixerPlayable_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_impl.hpp"
#include "UnityEngine/Playables/zzzz__Playable_impl.hpp"
#include "Animancer/zzzz__AnimancerPlayable_def.hpp"
#include "Animancer/zzzz__AnimancerLayer_def.hpp"
#include "Animancer/zzzz__AnimancerNode_def.hpp"
#include "Animancer/zzzz__AnimancerPlayable_def.hpp"
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include "Animancer/zzzz__ClipState_def.hpp"
#include "Animancer/zzzz__FadeMode_def.hpp"
#include "Animancer/zzzz__FastEnumerator_1_def.hpp"
#include "Animancer/zzzz__IAnimancerComponent_def.hpp"
#include "Animancer/zzzz__IAnimationClipCollection_def.hpp"
#include "Animancer/zzzz__IHasKey_def.hpp"
#include "Animancer/zzzz__IPlayableWrapper_def.hpp"
#include "Animancer/zzzz__ITransition_def.hpp"
#include "Animancer/zzzz__IUpdatable_def.hpp"
#include "Animancer/zzzz__Key_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationScriptPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__DirectorUpdateMode_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutput_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__AvatarMask_def.hpp"
#include "UnityEngine/zzzz__IAnimationClipSource_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Animancer::AnimancerPlayable_LayerList._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable_LayerList::*)(::Animancer::AnimancerPlayable*)>(&::Animancer::AnimancerPlayable_LayerList::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802f1110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_LayerList._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable_LayerList::*)(::Animancer::AnimancerPlayable*, ::by_ref<::UnityEngine::Playables::Playable>)>(&::Animancer::AnimancerPlayable_LayerList::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1802f1160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::Playable>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_LayerList.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable_LayerList::*)(::Animancer::AnimancerPlayable*)>(&::Animancer::AnimancerPlayable_LayerList::Activate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1802f0b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                    {::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_LayerList.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable_LayerList::*)(::Animancer::AnimancerPlayable*, ::UnityEngine::Playables::Playable)>(&::Animancer::AnimancerPlayable_LayerList::Activate)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1802f0c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"Activate", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>(), ::i2c::type_of<::UnityEngine::Playables::Playable>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_LayerList.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::AnimancerPlayable_LayerList::*)()>(&::Animancer::AnimancerPlayable_LayerList::get_Count)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_LayerList.set_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable_LayerList::*)(int32_t)>(&::Animancer::AnimancerPlayable_LayerList::set_Count)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1802f1500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"set_Count", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_LayerList.SetMinCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable_LayerList::*)(int32_t)>(&::Animancer::AnimancerPlayable_LayerList::SetMinCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"SetMinCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_LayerList.get_DefaultCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Animancer::AnimancerPlayable_LayerList::get_DefaultCapacity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f1420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"get_DefaultCapacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_LayerList.set_DefaultCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Animancer::AnimancerPlayable_LayerList::set_DefaultCapacity)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802f1630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"set_DefaultCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_LayerList.SetMinDefaultCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Animancer::AnimancerPlayable_LayerList::SetMinDefaultCapacity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f1070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"SetMinDefaultCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_LayerList.get_Capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::AnimancerPlayable_LayerList::*)()>(&::Animancer::AnimancerPlayable_LayerList::get_Capacity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f1400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"get_Capacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_LayerList.set_Capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable_LayerList::*)(int32_t)>(&::Animancer::AnimancerPlayable_LayerList::set_Capacity)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802f1480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"set_Capacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_LayerList.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerLayer* (::Animancer::AnimancerPlayable_LayerList::*)()>(&::Animancer::AnimancerPlayable_LayerList::Add)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1802f0d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"Add", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_LayerList.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerLayer* (::Animancer::AnimancerPlayable_LayerList::*)(int32_t)>(&::Animancer::AnimancerPlayable_LayerList::get_Item)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802f1440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_LayerList.GetLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerLayer* (::Animancer::AnimancerPlayable_LayerList::*)(int32_t)>(&::Animancer::AnimancerPlayable_LayerList::GetLayer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f0f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"GetLayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_LayerList.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::FastEnumerator_1<::Animancer::AnimancerLayer*> (::Animancer::AnimancerPlayable_LayerList::*)()>(&::Animancer::AnimancerPlayable_LayerList::GetEnumerator)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802f0f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_LayerList.System_Collections_Generic_IEnumerable_Animancer_AnimancerLayer__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Animancer::AnimancerLayer*>* (::Animancer::AnimancerPlayable_LayerList::*)()>(&::Animancer::AnimancerPlayable_LayerList::System_Collections_Generic_IEnumerable_Animancer_AnimancerLayer__GetEnumerator)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802f1090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"System.Collections.Generic.IEnumerable<Animancer.AnimancerLayer>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_LayerList.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Animancer::AnimancerPlayable_LayerList::*)()>(&::Animancer::AnimancerPlayable_LayerList::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802f1090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_LayerList.GatherAnimationClips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable_LayerList::*)(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*)>(&::Animancer::AnimancerPlayable_LayerList::GatherAnimationClips)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f0ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"GatherAnimationClips", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_LayerList.IsAdditive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerPlayable_LayerList::*)(int32_t)>(&::Animancer::AnimancerPlayable_LayerList::IsAdditive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f0f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                    {::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_LayerList.SetAdditive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable_LayerList::*)(int32_t, bool)>(&::Animancer::AnimancerPlayable_LayerList::SetAdditive)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802f0f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                    {::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_LayerList.SetMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable_LayerList::*)(int32_t, ::UnityEngine::AvatarMask*)>(&::Animancer::AnimancerPlayable_LayerList::SetMask)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1802f0fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                    {::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_LayerList.SetDebugName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable_LayerList::*)(int32_t, ::StringW)>(&::Animancer::AnimancerPlayable_LayerList::SetDebugName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"SetDebugName", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_LayerList.get_AverageVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Animancer::AnimancerPlayable_LayerList::*)()>(&::Animancer::AnimancerPlayable_LayerList::get_AverageVelocity)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1802f1250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"get_AverageVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Animancer::AnimancerPlayable*& Animancer::AnimancerPlayable_LayerList::__cordl_internal_get_Root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Root;
}
constexpr ::Animancer::AnimancerPlayable* const& Animancer::AnimancerPlayable_LayerList::__cordl_internal_get_Root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Root;
}
constexpr void Animancer::AnimancerPlayable_LayerList::__cordl_internal_set_Root(::Animancer::AnimancerPlayable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Root = value;
}
constexpr ::ArrayW<::Animancer::AnimancerLayer*>& Animancer::AnimancerPlayable_LayerList::__cordl_internal_get__Layers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Layers;
}
constexpr ::ArrayW<::Animancer::AnimancerLayer*> const& Animancer::AnimancerPlayable_LayerList::__cordl_internal_get__Layers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Layers;
}
constexpr void Animancer::AnimancerPlayable_LayerList::__cordl_internal_set__Layers(::ArrayW<::Animancer::AnimancerLayer*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Layers = value;
}
constexpr ::UnityEngine::Animations::AnimationLayerMixerPlayable& Animancer::AnimancerPlayable_LayerList::__cordl_internal_get_LayerMixer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LayerMixer;
}
constexpr ::UnityEngine::Animations::AnimationLayerMixerPlayable const& Animancer::AnimancerPlayable_LayerList::__cordl_internal_get_LayerMixer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LayerMixer;
}
constexpr void Animancer::AnimancerPlayable_LayerList::__cordl_internal_set_LayerMixer(::UnityEngine::Animations::AnimationLayerMixerPlayable  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LayerMixer = value;
}
constexpr int32_t& Animancer::AnimancerPlayable_LayerList::__cordl_internal_get__Count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Count;
}
constexpr int32_t const& Animancer::AnimancerPlayable_LayerList::__cordl_internal_get__Count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Count;
}
constexpr void Animancer::AnimancerPlayable_LayerList::__cordl_internal_set__Count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Count = value;
}
inline void Animancer::AnimancerPlayable_LayerList::setStaticF__DefaultCapacity_k__BackingField(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "<DefaultCapacity>k__BackingField", ::Animancer::AnimancerPlayable_LayerList*>(std::forward<int32_t>(value));
}
inline int32_t Animancer::AnimancerPlayable_LayerList::getStaticF__DefaultCapacity_k__BackingField()  {
return ::cordl_internals::getStaticField<int32_t, "<DefaultCapacity>k__BackingField", ::Animancer::AnimancerPlayable_LayerList*>();
}
inline void Animancer::AnimancerPlayable_LayerList::_ctor(::Animancer::AnimancerPlayable*  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root);
}
inline void Animancer::AnimancerPlayable_LayerList::_ctor(::Animancer::AnimancerPlayable*  root, ::by_ref<::UnityEngine::Playables::Playable>  layerMixer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::Playable>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root, layerMixer);
}
inline void Animancer::AnimancerPlayable_LayerList::Activate(::Animancer::AnimancerPlayable*  root)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root);
}
inline void Animancer::AnimancerPlayable_LayerList::Activate(::Animancer::AnimancerPlayable*  root, ::UnityEngine::Playables::Playable  mixer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"Activate", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>(), ::i2c::type_of<::UnityEngine::Playables::Playable>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root, mixer);
}
inline int32_t Animancer::AnimancerPlayable_LayerList::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Animancer::AnimancerPlayable_LayerList::set_Count(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"set_Count", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::AnimancerPlayable_LayerList::SetMinCount(int32_t  min)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"SetMinCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, min);
}
inline int32_t Animancer::AnimancerPlayable_LayerList::get_DefaultCapacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"get_DefaultCapacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void Animancer::AnimancerPlayable_LayerList::set_DefaultCapacity(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"set_DefaultCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Animancer::AnimancerPlayable_LayerList::SetMinDefaultCapacity(int32_t  min)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"SetMinDefaultCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, min);
}
inline int32_t Animancer::AnimancerPlayable_LayerList::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Animancer::AnimancerPlayable_LayerList::set_Capacity(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"set_Capacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Animancer::AnimancerLayer* Animancer::AnimancerPlayable_LayerList::Add()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"Add", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerLayer*>(this, ___internal_method);
}
inline ::Animancer::AnimancerLayer* Animancer::AnimancerPlayable_LayerList::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerLayer*>(this, ___internal_method, index);
}
inline ::Animancer::AnimancerLayer* Animancer::AnimancerPlayable_LayerList::GetLayer(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"GetLayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerLayer*>(this, ___internal_method, index);
}
inline ::Animancer::FastEnumerator_1<::Animancer::AnimancerLayer*> Animancer::AnimancerPlayable_LayerList::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::FastEnumerator_1<::Animancer::AnimancerLayer*>>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Animancer::AnimancerLayer*>* Animancer::AnimancerPlayable_LayerList::System_Collections_Generic_IEnumerable_Animancer_AnimancerLayer__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"System.Collections.Generic.IEnumerable<Animancer.AnimancerLayer>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Animancer::AnimancerLayer*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Animancer::AnimancerPlayable_LayerList::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Animancer::AnimancerPlayable_LayerList::GatherAnimationClips(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"GatherAnimationClips", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clips);
}
inline bool Animancer::AnimancerPlayable_LayerList::IsAdditive(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
inline void Animancer::AnimancerPlayable_LayerList::SetAdditive(int32_t  index, bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void Animancer::AnimancerPlayable_LayerList::SetMask(int32_t  index, ::UnityEngine::AvatarMask*  mask)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, mask);
}
inline void Animancer::AnimancerPlayable_LayerList::SetDebugName(int32_t  index, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"SetDebugName", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, name);
}
inline ::UnityEngine::Vector3 Animancer::AnimancerPlayable_LayerList::get_AverageVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_LayerList*>(),
                        {"get_AverageVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::Animancer::AnimancerPlayable_LayerList* Animancer::AnimancerPlayable_LayerList::New_ctor(::Animancer::AnimancerPlayable*  root)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::AnimancerPlayable_LayerList*>(root));
}
inline ::Animancer::AnimancerPlayable_LayerList* Animancer::AnimancerPlayable_LayerList::New_ctor(::Animancer::AnimancerPlayable*  root, ::by_ref<::UnityEngine::Playables::Playable>  layerMixer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::AnimancerPlayable_LayerList*>(root, layerMixer));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerLayer*>"
constexpr  Animancer::AnimancerPlayable_LayerList::operator ::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerLayer*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerLayer*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerLayer*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerLayer*>* Animancer::AnimancerPlayable_LayerList::i___System__Collections__Generic__IEnumerable_1___Animancer__AnimancerLayer__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerLayer*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Animancer::AnimancerPlayable_LayerList::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Animancer::AnimancerPlayable_LayerList::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IAnimationClipCollection"
constexpr  Animancer::AnimancerPlayable_LayerList::operator ::Animancer::IAnimationClipCollection*() noexcept {
return static_cast<::Animancer::IAnimationClipCollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IAnimationClipCollection"
constexpr ::Animancer::IAnimationClipCollection* Animancer::AnimancerPlayable_LayerList::i___Animancer__IAnimationClipCollection() noexcept {
return static_cast<::Animancer::IAnimationClipCollection*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::AnimancerPlayable_LayerList::AnimancerPlayable_LayerList()   {
}
//  Writing Method size for method: ::Animancer::AnimancerPlayable_StateDictionary.get_EqualityComparer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEqualityComparer_1<::System::Object*>* (*)()>(&::Animancer::AnimancerPlayable_StateDictionary::get_EqualityComparer)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802f5b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"get_EqualityComparer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_StateDictionary.set_EqualityComparer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::IEqualityComparer_1<::System::Object*>*)>(&::Animancer::AnimancerPlayable_StateDictionary::set_EqualityComparer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802f5c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"set_EqualityComparer", {}, {::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_StateDictionary._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable_StateDictionary::*)(::Animancer::AnimancerPlayable*)>(&::Animancer::AnimancerPlayable_StateDictionary::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1802f5a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_StateDictionary.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::AnimancerPlayable_StateDictionary::*)()>(&::Animancer::AnimancerPlayable_StateDictionary::get_Count)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f5ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_StateDictionary.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::ClipState* (::Animancer::AnimancerPlayable_StateDictionary::*)(::UnityEngine::AnimationClip*)>(&::Animancer::AnimancerPlayable_StateDictionary::Create)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802f4c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_StateDictionary.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::ClipState* (::Animancer::AnimancerPlayable_StateDictionary::*)(::System::Object*, ::UnityEngine::AnimationClip*)>(&::Animancer::AnimancerPlayable_StateDictionary::Create)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1802f4c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"Create", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_StateDictionary.CreateIfNew
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable_StateDictionary::*)(::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*)>(&::Animancer::AnimancerPlayable_StateDictionary::CreateIfNew)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802f4b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"CreateIfNew", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_StateDictionary.CreateIfNew
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable_StateDictionary::*)(::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*)>(&::Animancer::AnimancerPlayable_StateDictionary::CreateIfNew)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802f4af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"CreateIfNew", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_StateDictionary.CreateIfNew
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable_StateDictionary::*)(::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*)>(&::Animancer::AnimancerPlayable_StateDictionary::CreateIfNew)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802f4a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"CreateIfNew", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_StateDictionary.CreateIfNew
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable_StateDictionary::*)(::ArrayW<::UnityEngine::AnimationClip*>)>(&::Animancer::AnimancerPlayable_StateDictionary::CreateIfNew)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802f4b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"CreateIfNew", {}, {::i2c::type_of<::ArrayW<::UnityEngine::AnimationClip*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_StateDictionary.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerPlayable_StateDictionary::*)()>(&::Animancer::AnimancerPlayable_StateDictionary::get_Current)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802f5ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_StateDictionary.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerPlayable_StateDictionary::*)(::UnityEngine::AnimationClip*)>(&::Animancer::AnimancerPlayable_StateDictionary::get_Item)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802f5bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"get_Item", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_StateDictionary.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerPlayable_StateDictionary::*)(::Animancer::IHasKey*)>(&::Animancer::AnimancerPlayable_StateDictionary::get_Item)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802f5ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"get_Item", {}, {::i2c::type_of<::Animancer::IHasKey*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_StateDictionary.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerPlayable_StateDictionary::*)(::System::Object*)>(&::Animancer::AnimancerPlayable_StateDictionary::get_Item)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802f5b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"get_Item", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_StateDictionary.TryGet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerPlayable_StateDictionary::*)(::UnityEngine::AnimationClip*, ::by_ref<::Animancer::AnimancerState*>)>(&::Animancer::AnimancerPlayable_StateDictionary::TryGet)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1802f5820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"TryGet", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::by_ref<::Animancer::AnimancerState*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_StateDictionary.TryGet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerPlayable_StateDictionary::*)(::Animancer::IHasKey*, ::by_ref<::Animancer::AnimancerState*>)>(&::Animancer::AnimancerPlayable_StateDictionary::TryGet)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802f58c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"TryGet", {}, {::i2c::type_of<::Animancer::IHasKey*>(), ::i2c::type_of<::by_ref<::Animancer::AnimancerState*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_StateDictionary.TryGet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerPlayable_StateDictionary::*)(::System::Object*, ::by_ref<::Animancer::AnimancerState*>)>(&::Animancer::AnimancerPlayable_StateDictionary::TryGet)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802f5940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"TryGet", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::Animancer::AnimancerState*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_StateDictionary.GetOrCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerPlayable_StateDictionary::*)(::UnityEngine::AnimationClip*, bool)>(&::Animancer::AnimancerPlayable_StateDictionary::GetOrCreate)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1802f5530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"GetOrCreate", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_StateDictionary.GetOrCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerPlayable_StateDictionary::*)(::Animancer::ITransition*)>(&::Animancer::AnimancerPlayable_StateDictionary::GetOrCreate)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1802f5670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"GetOrCreate", {}, {::i2c::type_of<::Animancer::ITransition*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_StateDictionary.GetOrCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerPlayable_StateDictionary::*)(::System::Object*, ::UnityEngine::AnimationClip*, bool)>(&::Animancer::AnimancerPlayable_StateDictionary::GetOrCreate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1802f5410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"GetOrCreate", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_StateDictionary.GetClipMismatchError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*)>(&::Animancer::AnimancerPlayable_StateDictionary::GetClipMismatchError)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802f5350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"GetClipMismatchError", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_StateDictionary.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable_StateDictionary::*)(::Animancer::AnimancerState*)>(&::Animancer::AnimancerPlayable_StateDictionary::Register)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802f5780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"Register", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_StateDictionary.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable_StateDictionary::*)(::Animancer::AnimancerState*)>(&::Animancer::AnimancerPlayable_StateDictionary::Unregister)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802f5980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"Unregister", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_StateDictionary.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::ValueCollection_Dictionary_2_Enumerator<::System::Object*,::Animancer::AnimancerState*> (::Animancer::AnimancerPlayable_StateDictionary::*)()>(&::Animancer::AnimancerPlayable_StateDictionary::GetEnumerator)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802f53d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_StateDictionary.System_Collections_Generic_IEnumerable_Animancer_AnimancerState__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Animancer::AnimancerState*>* (::Animancer::AnimancerPlayable_StateDictionary::*)()>(&::Animancer::AnimancerPlayable_StateDictionary::System_Collections_Generic_IEnumerable_Animancer_AnimancerState__GetEnumerator)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802f57c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"System.Collections.Generic.IEnumerable<Animancer.AnimancerState>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_StateDictionary.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Animancer::AnimancerPlayable_StateDictionary::*)()>(&::Animancer::AnimancerPlayable_StateDictionary::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802f57c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_StateDictionary.GatherAnimationClips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable_StateDictionary::*)(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*)>(&::Animancer::AnimancerPlayable_StateDictionary::GatherAnimationClips)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1802f52b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"GatherAnimationClips", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_StateDictionary.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerPlayable_StateDictionary::*)(::UnityEngine::AnimationClip*)>(&::Animancer::AnimancerPlayable_StateDictionary::Destroy)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1802f50f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"Destroy", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_StateDictionary.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerPlayable_StateDictionary::*)(::Animancer::IHasKey*)>(&::Animancer::AnimancerPlayable_StateDictionary::Destroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1802f51b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"Destroy", {}, {::i2c::type_of<::Animancer::IHasKey*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_StateDictionary.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerPlayable_StateDictionary::*)(::System::Object*)>(&::Animancer::AnimancerPlayable_StateDictionary::Destroy)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802f5240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"Destroy", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_StateDictionary.DestroyAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable_StateDictionary::*)(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::AnimationClip>>*)>(&::Animancer::AnimancerPlayable_StateDictionary::DestroyAll)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1802f4d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"DestroyAll", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::AnimationClip>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_StateDictionary.DestroyAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable_StateDictionary::*)(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::AnimationClip>>*)>(&::Animancer::AnimancerPlayable_StateDictionary::DestroyAll)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1802f4de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"DestroyAll", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::AnimationClip>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_StateDictionary.DestroyAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable_StateDictionary::*)(::UnityEngine::IAnimationClipSource*)>(&::Animancer::AnimancerPlayable_StateDictionary::DestroyAll)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1802f4fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"DestroyAll", {}, {::i2c::type_of<::UnityEngine::IAnimationClipSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_StateDictionary.DestroyAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable_StateDictionary::*)(::Animancer::IAnimationClipCollection*)>(&::Animancer::AnimancerPlayable_StateDictionary::DestroyAll)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802f4f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"DestroyAll", {}, {::i2c::type_of<::Animancer::IAnimationClipCollection*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Animancer::AnimancerPlayable*& Animancer::AnimancerPlayable_StateDictionary::__cordl_internal_get_Root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Root;
}
constexpr ::Animancer::AnimancerPlayable* const& Animancer::AnimancerPlayable_StateDictionary::__cordl_internal_get_Root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Root;
}
constexpr void Animancer::AnimancerPlayable_StateDictionary::__cordl_internal_set_Root(::Animancer::AnimancerPlayable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Root = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*,::Animancer::AnimancerState*>*& Animancer::AnimancerPlayable_StateDictionary::__cordl_internal_get_States()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___States;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*,::Animancer::AnimancerState*>* const& Animancer::AnimancerPlayable_StateDictionary::__cordl_internal_get_States() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___States;
}
constexpr void Animancer::AnimancerPlayable_StateDictionary::__cordl_internal_set_States(::System::Collections::Generic::Dictionary_2<::System::Object*,::Animancer::AnimancerState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___States = value;
}
inline void Animancer::AnimancerPlayable_StateDictionary::setStaticF__EqualityComparer_k__BackingField(::System::Collections::Generic::IEqualityComparer_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IEqualityComparer_1<::System::Object*>*, "<EqualityComparer>k__BackingField", ::Animancer::AnimancerPlayable_StateDictionary*>(std::forward<::System::Collections::Generic::IEqualityComparer_1<::System::Object*>*>(value));
}
inline ::System::Collections::Generic::IEqualityComparer_1<::System::Object*>* Animancer::AnimancerPlayable_StateDictionary::getStaticF__EqualityComparer_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IEqualityComparer_1<::System::Object*>*, "<EqualityComparer>k__BackingField", ::Animancer::AnimancerPlayable_StateDictionary*>();
}
inline ::System::Collections::Generic::IEqualityComparer_1<::System::Object*>* Animancer::AnimancerPlayable_StateDictionary::get_EqualityComparer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"get_EqualityComparer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEqualityComparer_1<::System::Object*>*>(nullptr, ___internal_method);
}
inline void Animancer::AnimancerPlayable_StateDictionary::set_EqualityComparer(::System::Collections::Generic::IEqualityComparer_1<::System::Object*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"set_EqualityComparer", {}, {::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Animancer::AnimancerPlayable_StateDictionary::_ctor(::Animancer::AnimancerPlayable*  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root);
}
inline int32_t Animancer::AnimancerPlayable_StateDictionary::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Animancer::ClipState* Animancer::AnimancerPlayable_StateDictionary::Create(::UnityEngine::AnimationClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::ClipState*>(this, ___internal_method, clip);
}
inline ::Animancer::ClipState* Animancer::AnimancerPlayable_StateDictionary::Create(::System::Object*  key, ::UnityEngine::AnimationClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"Create", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::ClipState*>(this, ___internal_method, key, clip);
}
inline void Animancer::AnimancerPlayable_StateDictionary::CreateIfNew(::UnityEngine::AnimationClip*  clip0, ::UnityEngine::AnimationClip*  clip1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"CreateIfNew", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip0, clip1);
}
inline void Animancer::AnimancerPlayable_StateDictionary::CreateIfNew(::UnityEngine::AnimationClip*  clip0, ::UnityEngine::AnimationClip*  clip1, ::UnityEngine::AnimationClip*  clip2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"CreateIfNew", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip0, clip1, clip2);
}
inline void Animancer::AnimancerPlayable_StateDictionary::CreateIfNew(::UnityEngine::AnimationClip*  clip0, ::UnityEngine::AnimationClip*  clip1, ::UnityEngine::AnimationClip*  clip2, ::UnityEngine::AnimationClip*  clip3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"CreateIfNew", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip0, clip1, clip2, clip3);
}
inline void Animancer::AnimancerPlayable_StateDictionary::CreateIfNew(::ArrayW<::UnityEngine::AnimationClip*>  clips)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"CreateIfNew", {}, {::i2c::type_of<::ArrayW<::UnityEngine::AnimationClip*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clips);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerPlayable_StateDictionary::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerPlayable_StateDictionary::get_Item(::UnityEngine::AnimationClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"get_Item", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, clip);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerPlayable_StateDictionary::get_Item(::Animancer::IHasKey*  hasKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"get_Item", {}, {::i2c::type_of<::Animancer::IHasKey*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, hasKey);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerPlayable_StateDictionary::get_Item(::System::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"get_Item", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, key);
}
inline bool Animancer::AnimancerPlayable_StateDictionary::TryGet(::UnityEngine::AnimationClip*  clip, ::by_ref<::Animancer::AnimancerState*>  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"TryGet", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::by_ref<::Animancer::AnimancerState*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clip, state);
}
inline bool Animancer::AnimancerPlayable_StateDictionary::TryGet(::Animancer::IHasKey*  hasKey, ::by_ref<::Animancer::AnimancerState*>  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"TryGet", {}, {::i2c::type_of<::Animancer::IHasKey*>(), ::i2c::type_of<::by_ref<::Animancer::AnimancerState*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hasKey, state);
}
inline bool Animancer::AnimancerPlayable_StateDictionary::TryGet(::System::Object*  key, ::by_ref<::Animancer::AnimancerState*>  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"TryGet", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::Animancer::AnimancerState*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, state);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerPlayable_StateDictionary::GetOrCreate(::UnityEngine::AnimationClip*  clip, bool  allowSetClip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"GetOrCreate", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, clip, allowSetClip);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerPlayable_StateDictionary::GetOrCreate(::Animancer::ITransition*  transition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"GetOrCreate", {}, {::i2c::type_of<::Animancer::ITransition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, transition);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerPlayable_StateDictionary::GetOrCreate(::System::Object*  key, ::UnityEngine::AnimationClip*  clip, bool  allowSetClip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"GetOrCreate", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, key, clip, allowSetClip);
}
inline ::StringW Animancer::AnimancerPlayable_StateDictionary::GetClipMismatchError(::System::Object*  key, ::UnityEngine::AnimationClip*  oldClip, ::UnityEngine::AnimationClip*  newClip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"GetClipMismatchError", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, key, oldClip, newClip);
}
inline void Animancer::AnimancerPlayable_StateDictionary::Register(::Animancer::AnimancerState*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"Register", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void Animancer::AnimancerPlayable_StateDictionary::Unregister(::Animancer::AnimancerState*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"Unregister", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline ::System::Collections::Generic::ValueCollection_Dictionary_2_Enumerator<::System::Object*,::Animancer::AnimancerState*> Animancer::AnimancerPlayable_StateDictionary::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ValueCollection_Dictionary_2_Enumerator<::System::Object*,::Animancer::AnimancerState*>>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Animancer::AnimancerState*>* Animancer::AnimancerPlayable_StateDictionary::System_Collections_Generic_IEnumerable_Animancer_AnimancerState__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"System.Collections.Generic.IEnumerable<Animancer.AnimancerState>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Animancer::AnimancerState*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Animancer::AnimancerPlayable_StateDictionary::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Animancer::AnimancerPlayable_StateDictionary::GatherAnimationClips(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"GatherAnimationClips", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clips);
}
inline bool Animancer::AnimancerPlayable_StateDictionary::Destroy(::UnityEngine::AnimationClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"Destroy", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clip);
}
inline bool Animancer::AnimancerPlayable_StateDictionary::Destroy(::Animancer::IHasKey*  hasKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"Destroy", {}, {::i2c::type_of<::Animancer::IHasKey*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hasKey);
}
inline bool Animancer::AnimancerPlayable_StateDictionary::Destroy(::System::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"Destroy", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline void Animancer::AnimancerPlayable_StateDictionary::DestroyAll(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::AnimationClip>>*  clips)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"DestroyAll", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::AnimationClip>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clips);
}
inline void Animancer::AnimancerPlayable_StateDictionary::DestroyAll(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::AnimationClip>>*  clips)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"DestroyAll", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::AnimationClip>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clips);
}
inline void Animancer::AnimancerPlayable_StateDictionary::DestroyAll(::UnityEngine::IAnimationClipSource*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"DestroyAll", {}, {::i2c::type_of<::UnityEngine::IAnimationClipSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void Animancer::AnimancerPlayable_StateDictionary::DestroyAll(::Animancer::IAnimationClipCollection*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_StateDictionary*>(),
                        {"DestroyAll", {}, {::i2c::type_of<::Animancer::IAnimationClipCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline ::Animancer::AnimancerPlayable_StateDictionary* Animancer::AnimancerPlayable_StateDictionary::New_ctor(::Animancer::AnimancerPlayable*  root)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::AnimancerPlayable_StateDictionary*>(root));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerState*>"
constexpr  Animancer::AnimancerPlayable_StateDictionary::operator ::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerState*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerState*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerState*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerState*>* Animancer::AnimancerPlayable_StateDictionary::i___System__Collections__Generic__IEnumerable_1___Animancer__AnimancerState__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerState*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Animancer::AnimancerPlayable_StateDictionary::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Animancer::AnimancerPlayable_StateDictionary::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IAnimationClipCollection"
constexpr  Animancer::AnimancerPlayable_StateDictionary::operator ::Animancer::IAnimationClipCollection*() noexcept {
return static_cast<::Animancer::IAnimationClipCollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IAnimationClipCollection"
constexpr ::Animancer::IAnimationClipCollection* Animancer::AnimancerPlayable_StateDictionary::i___Animancer__IAnimationClipCollection() noexcept {
return static_cast<::Animancer::IAnimationClipCollection*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::AnimancerPlayable_StateDictionary::AnimancerPlayable_StateDictionary()   {
}
//  Writing Method size for method: ::Animancer::AnimancerPlayable_PostUpdate.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerPlayable_PostUpdate* (*)(::Animancer::AnimancerPlayable*)>(&::Animancer::AnimancerPlayable_PostUpdate::Create)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1802f1a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_PostUpdate*>(),
                        {"Create", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_PostUpdate.OnPlayableCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable_PostUpdate::*)(::UnityEngine::Playables::Playable)>(&::Animancer::AnimancerPlayable_PostUpdate::OnPlayableCreate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerPlayable_PostUpdate*>(),
                    {::i2c::class_of<::Animancer::AnimancerPlayable_PostUpdate*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_PostUpdate.get_IsConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerPlayable_PostUpdate::*)()>(&::Animancer::AnimancerPlayable_PostUpdate::get_IsConnected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_PostUpdate*>(),
                        {"get_IsConnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_PostUpdate.set_IsConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable_PostUpdate::*)(bool)>(&::Animancer::AnimancerPlayable_PostUpdate::set_IsConnected)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1802f1bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_PostUpdate*>(),
                        {"set_IsConnected", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_PostUpdate.PrepareFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable_PostUpdate::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&::Animancer::AnimancerPlayable_PostUpdate::PrepareFrame)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802f1b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerPlayable_PostUpdate*>(),
                    {::i2c::class_of<::Animancer::AnimancerPlayable_PostUpdate*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable_PostUpdate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable_PostUpdate::*)()>(&::Animancer::AnimancerPlayable_PostUpdate::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_PostUpdate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Animancer::AnimancerPlayable*& Animancer::AnimancerPlayable_PostUpdate::__cordl_internal_get__Root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Root;
}
constexpr ::Animancer::AnimancerPlayable* const& Animancer::AnimancerPlayable_PostUpdate::__cordl_internal_get__Root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Root;
}
constexpr void Animancer::AnimancerPlayable_PostUpdate::__cordl_internal_set__Root(::Animancer::AnimancerPlayable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Root = value;
}
constexpr ::UnityEngine::Playables::Playable& Animancer::AnimancerPlayable_PostUpdate::__cordl_internal_get__Playable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Playable;
}
constexpr ::UnityEngine::Playables::Playable const& Animancer::AnimancerPlayable_PostUpdate::__cordl_internal_get__Playable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Playable;
}
constexpr void Animancer::AnimancerPlayable_PostUpdate::__cordl_internal_set__Playable(::UnityEngine::Playables::Playable  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Playable = value;
}
constexpr bool& Animancer::AnimancerPlayable_PostUpdate::__cordl_internal_get__IsConnected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsConnected;
}
constexpr bool const& Animancer::AnimancerPlayable_PostUpdate::__cordl_internal_get__IsConnected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsConnected;
}
constexpr void Animancer::AnimancerPlayable_PostUpdate::__cordl_internal_set__IsConnected(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsConnected = value;
}
inline void Animancer::AnimancerPlayable_PostUpdate::setStaticF_Template(::Animancer::AnimancerPlayable_PostUpdate*  value)  {
::cordl_internals::setStaticField<::Animancer::AnimancerPlayable_PostUpdate*, "Template", ::Animancer::AnimancerPlayable_PostUpdate*>(std::forward<::Animancer::AnimancerPlayable_PostUpdate*>(value));
}
inline ::Animancer::AnimancerPlayable_PostUpdate* Animancer::AnimancerPlayable_PostUpdate::getStaticF_Template()  {
return ::cordl_internals::getStaticField<::Animancer::AnimancerPlayable_PostUpdate*, "Template", ::Animancer::AnimancerPlayable_PostUpdate*>();
}
inline ::Animancer::AnimancerPlayable_PostUpdate* Animancer::AnimancerPlayable_PostUpdate::Create(::Animancer::AnimancerPlayable*  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_PostUpdate*>(),
                        {"Create", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerPlayable_PostUpdate*>(nullptr, ___internal_method, root);
}
inline void Animancer::AnimancerPlayable_PostUpdate::OnPlayableCreate(::UnityEngine::Playables::Playable  playable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerPlayable_PostUpdate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable);
}
inline bool Animancer::AnimancerPlayable_PostUpdate::get_IsConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_PostUpdate*>(),
                        {"get_IsConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::AnimancerPlayable_PostUpdate::set_IsConnected(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_PostUpdate*>(),
                        {"set_IsConnected", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::AnimancerPlayable_PostUpdate::PrepareFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerPlayable_PostUpdate*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, info);
}
inline void Animancer::AnimancerPlayable_PostUpdate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable_PostUpdate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::AnimancerPlayable_PostUpdate* Animancer::AnimancerPlayable_PostUpdate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::AnimancerPlayable_PostUpdate*>());
}
// Ctor Parameters []
constexpr ::Animancer::AnimancerPlayable_PostUpdate::AnimancerPlayable_PostUpdate()   {
}
//  Writing Method size for method: ::Animancer::AnimancerPlayable.get_DefaultFadeDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::Animancer::AnimancerPlayable::get_DefaultFadeDuration)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802e5760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_DefaultFadeDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.set_DefaultFadeDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::Animancer::AnimancerPlayable::set_DefaultFadeDuration)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802e5a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"set_DefaultFadeDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.get_Graph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableGraph (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::get_Graph)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_Graph", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.Animancer_IPlayableWrapper_get_Playable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::Animancer_IPlayableWrapper_get_Playable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e30e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Animancer.IPlayableWrapper.get_Playable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.Animancer_IPlayableWrapper_get_Parent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::IPlayableWrapper* (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::Animancer_IPlayableWrapper_get_Parent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Animancer.IPlayableWrapper.get_Parent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.Animancer_IPlayableWrapper_get_Weight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::Animancer_IPlayableWrapper_get_Weight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e30f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Animancer.IPlayableWrapper.get_Weight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.Animancer_IPlayableWrapper_get_ChildCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::Animancer_IPlayableWrapper_get_ChildCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802e30c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Animancer.IPlayableWrapper.get_ChildCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.Animancer_IPlayableWrapper_GetChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerNode* (::Animancer::AnimancerPlayable::*)(int32_t)>(&::Animancer::AnimancerPlayable::Animancer_IPlayableWrapper_GetChild)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802e3070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Animancer.IPlayableWrapper.GetChild", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.get_Layers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerPlayable_LayerList* (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::get_Layers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_Layers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.set_Layers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)(::Animancer::AnimancerPlayable_LayerList*)>(&::Animancer::AnimancerPlayable::set_Layers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"set_Layers", {}, {::i2c::type_of<::Animancer::AnimancerPlayable_LayerList*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.get_States
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerPlayable_StateDictionary* (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::get_States)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_States", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.set_States
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)(::Animancer::AnimancerPlayable_StateDictionary*)>(&::Animancer::AnimancerPlayable::set_States)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"set_States", {}, {::i2c::type_of<::Animancer::AnimancerPlayable_StateDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.get_Component
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::IAnimancerComponent* (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::get_Component)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_Component", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.set_Component
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)(::Animancer::IAnimancerComponent*)>(&::Animancer::AnimancerPlayable::set_Component)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"set_Component", {}, {::i2c::type_of<::Animancer::IAnimancerComponent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.get_CommandCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::get_CommandCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802e56c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_CommandCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.get_UpdateMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::DirectorUpdateMode (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::get_UpdateMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_UpdateMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.set_UpdateMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)(::UnityEngine::Playables::DirectorUpdateMode)>(&::Animancer::AnimancerPlayable::set_UpdateMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"set_UpdateMode", {}, {::i2c::type_of<::UnityEngine::Playables::DirectorUpdateMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.get_Speed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::get_Speed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_Speed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.set_Speed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)(float_t)>(&::Animancer::AnimancerPlayable::set_Speed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802e5e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"set_Speed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.get_KeepChildrenConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::get_KeepChildrenConnected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_KeepChildrenConnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.set_KeepChildrenConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)(bool)>(&::Animancer::AnimancerPlayable::set_KeepChildrenConnected)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1802e5bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"set_KeepChildrenConnected", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.get_SkipFirstFade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::get_SkipFirstFade)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_SkipFirstFade", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.set_SkipFirstFade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)(bool)>(&::Animancer::AnimancerPlayable::set_SkipFirstFade)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802e5da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"set_SkipFirstFade", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerPlayable* (*)()>(&::Animancer::AnimancerPlayable::Create)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802e39f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Create", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerPlayable* (*)(::UnityEngine::Playables::PlayableGraph)>(&::Animancer::AnimancerPlayable::Create)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802e3990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.OnPlayableCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)(::UnityEngine::Playables::Playable)>(&::Animancer::AnimancerPlayable::OnPlayableCreate)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x1802e4420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                    {::i2c::class_of<::Animancer::AnimancerPlayable*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.SetNextGraphName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Animancer::AnimancerPlayable::SetNextGraphName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"SetNextGraphName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.TryGetOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerPlayable::*)(::by_ref<::UnityEngine::Playables::PlayableOutput>)>(&::Animancer::AnimancerPlayable::TryGetOutput)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1802e5000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"TryGetOutput", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutput>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.CreateOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)(::Animancer::IAnimancerComponent*)>(&::Animancer::AnimancerPlayable::CreateOutput)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1802e38d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"CreateOutput", {}, {::i2c::type_of<::Animancer::IAnimancerComponent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.CreateOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)(::UnityEngine::Animator*, ::Animancer::IAnimancerComponent*)>(&::Animancer::AnimancerPlayable::CreateOutput)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1802e37d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"CreateOutput", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::Animancer::IAnimancerComponent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.InsertOutputPlayable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)(::UnityEngine::Playables::Playable)>(&::Animancer::AnimancerPlayable::InsertOutputPlayable)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1802e4000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"InsertOutputPlayable", {}, {::i2c::type_of<::UnityEngine::Playables::Playable>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::get_IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.DestroyGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::DestroyGraph)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802e3a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"DestroyGraph", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.DestroyOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::DestroyOutput)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1802e3a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"DestroyOutput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.OnPlayableDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)(::UnityEngine::Playables::Playable)>(&::Animancer::AnimancerPlayable::OnPlayableDestroy)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1802e4730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                    {::i2c::class_of<::Animancer::AnimancerPlayable*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.get_Disposables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::IDisposable*>* (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::get_Disposables)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802e57a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_Disposables", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::Finalize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e3d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                    {::i2c::class_of<::Animancer::AnimancerPlayable*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.DisposeAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::DisposeAll)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1802e3b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"DisposeAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.get_ApplyAnimatorIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::get_ApplyAnimatorIK)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e56a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_ApplyAnimatorIK", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.set_ApplyAnimatorIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)(bool)>(&::Animancer::AnimancerPlayable::set_ApplyAnimatorIK)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1802e58e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"set_ApplyAnimatorIK", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.get_ApplyFootIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::get_ApplyFootIK)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e56b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_ApplyFootIK", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.set_ApplyFootIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)(bool)>(&::Animancer::AnimancerPlayable::set_ApplyFootIK)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1802e5980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"set_ApplyFootIK", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.GetKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Animancer::AnimancerPlayable::*)(::UnityEngine::AnimationClip*)>(&::Animancer::AnimancerPlayable::GetKey)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1802e3df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"GetKey", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerPlayable::*)(::UnityEngine::AnimationClip*)>(&::Animancer::AnimancerPlayable::Play)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1802e4ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerPlayable::*)(::Animancer::AnimancerState*)>(&::Animancer::AnimancerPlayable::Play)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1802e4c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Play", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerPlayable::*)(::UnityEngine::AnimationClip*, float_t, ::Animancer::FadeMode)>(&::Animancer::AnimancerPlayable::Play)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802e4860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Animancer::FadeMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerPlayable::*)(::Animancer::AnimancerState*, float_t, ::Animancer::FadeMode)>(&::Animancer::AnimancerPlayable::Play)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1802e4b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Play", {}, {::i2c::type_of<::Animancer::AnimancerState*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Animancer::FadeMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerPlayable::*)(::Animancer::ITransition*)>(&::Animancer::AnimancerPlayable::Play)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802e48c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Play", {}, {::i2c::type_of<::Animancer::ITransition*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerPlayable::*)(::Animancer::ITransition*, float_t, ::Animancer::FadeMode)>(&::Animancer::AnimancerPlayable::Play)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1802e4940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Play", {}, {::i2c::type_of<::Animancer::ITransition*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Animancer::FadeMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.TryPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerPlayable::*)(::System::Object*)>(&::Animancer::AnimancerPlayable::TryPlay)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1802e51e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"TryPlay", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.TryPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerPlayable::*)(::System::Object*, float_t, ::Animancer::FadeMode)>(&::Animancer::AnimancerPlayable::TryPlay)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1802e50d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"TryPlay", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Animancer::FadeMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.GetLocalLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerLayer* (::Animancer::AnimancerPlayable::*)(::Animancer::AnimancerState*)>(&::Animancer::AnimancerPlayable::GetLocalLayer)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802e3ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"GetLocalLayer", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerPlayable::*)(::Animancer::IHasKey*)>(&::Animancer::AnimancerPlayable::Stop)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1802e4eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Stop", {}, {::i2c::type_of<::Animancer::IHasKey*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerPlayable::*)(::System::Object*)>(&::Animancer::AnimancerPlayable::Stop)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802e4e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Stop", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::Stop)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802e4db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.IsPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerPlayable::*)(::Animancer::IHasKey*)>(&::Animancer::AnimancerPlayable::IsPlaying)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1802e4200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"IsPlaying", {}, {::i2c::type_of<::Animancer::IHasKey*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.IsPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerPlayable::*)(::System::Object*)>(&::Animancer::AnimancerPlayable::IsPlaying)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802e4290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"IsPlaying", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.IsPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::IsPlaying)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1802e4300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"IsPlaying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.IsPlayingClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerPlayable::*)(::UnityEngine::AnimationClip*)>(&::Animancer::AnimancerPlayable::IsPlayingClip)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1802e40d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"IsPlayingClip", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.GetTotalWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::GetTotalWeight)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1802e3f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"GetTotalWeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.GatherAnimationClips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*)>(&::Animancer::AnimancerPlayable::GatherAnimationClips)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802e3d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"GatherAnimationClips", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.System_Collections_IEnumerator_MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::System_Collections_IEnumerator_MoveNext)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1802e4f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"System.Collections.IEnumerator.MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.get_IsGraphPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::get_IsGraphPlaying)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_IsGraphPlaying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.set_IsGraphPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)(bool)>(&::Animancer::AnimancerPlayable::set_IsGraphPlaying)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802e5b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"set_IsGraphPlaying", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.UnpauseGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::UnpauseGraph)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802e52d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"UnpauseGraph", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.PauseGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::PauseGraph)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802e4830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"PauseGraph", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.Evaluate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::Evaluate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e3ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Evaluate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.Evaluate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)(float_t)>(&::Animancer::AnimancerPlayable::Evaluate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e3cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Evaluate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.GetDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::GetDescription)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1802e3d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"GetDescription", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.AppendDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)(::System::Text::StringBuilder*)>(&::Animancer::AnimancerPlayable::AppendDescription)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1802e3360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"AppendDescription", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.AppendInternalDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)(::System::Text::StringBuilder*, ::StringW, ::StringW)>(&::Animancer::AnimancerPlayable::AppendInternalDetails)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1802e3570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"AppendInternalDetails", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.AppendAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::StringW, ::StringW, ::System::Collections::ICollection*, ::StringW)>(&::Animancer::AnimancerPlayable::AppendAll)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1802e3100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"AppendAll", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::ICollection*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.RequirePreUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)(::Animancer::IUpdatable*)>(&::Animancer::AnimancerPlayable::RequirePreUpdate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802e4d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"RequirePreUpdate", {}, {::i2c::type_of<::Animancer::IUpdatable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.RequirePostUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)(::Animancer::IUpdatable*)>(&::Animancer::AnimancerPlayable::RequirePostUpdate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802e4d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"RequirePostUpdate", {}, {::i2c::type_of<::Animancer::IUpdatable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.CancelUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)(::Animancer::Key_KeyedList_1<::Animancer::IUpdatable*>*, ::Animancer::IUpdatable*)>(&::Animancer::AnimancerPlayable::CancelUpdate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1802e3740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"CancelUpdate", {}, {::i2c::type_of<::Animancer::Key_KeyedList_1<::Animancer::IUpdatable*>*>(), ::i2c::type_of<::Animancer::IUpdatable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.CancelPreUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)(::Animancer::IUpdatable*)>(&::Animancer::AnimancerPlayable::CancelPreUpdate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802e36c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"CancelPreUpdate", {}, {::i2c::type_of<::Animancer::IUpdatable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.CancelPostUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)(::Animancer::IUpdatable*)>(&::Animancer::AnimancerPlayable::CancelPostUpdate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802e3640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"CancelPostUpdate", {}, {::i2c::type_of<::Animancer::IUpdatable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.get_PreUpdatableCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::get_PreUpdatableCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802e5880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_PreUpdatableCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.get_PostUpdatableCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::get_PostUpdatableCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802e5860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_PostUpdatableCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.GetPreUpdatable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::IUpdatable* (::Animancer::AnimancerPlayable::*)(int32_t)>(&::Animancer::AnimancerPlayable::GetPreUpdatable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802e3f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"GetPreUpdatable", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.GetPostUpdatable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::IUpdatable* (::Animancer::AnimancerPlayable::*)(int32_t)>(&::Animancer::AnimancerPlayable::GetPostUpdatable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802e3f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"GetPostUpdatable", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerPlayable* (*)()>(&::Animancer::AnimancerPlayable::get_Current)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802e5720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.set_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Animancer::AnimancerPlayable*)>(&::Animancer::AnimancerPlayable::set_Current)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802e5a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"set_Current", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.get_DeltaTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::Animancer::AnimancerPlayable::get_DeltaTime)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802dc400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_DeltaTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.set_DeltaTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::Animancer::AnimancerPlayable::set_DeltaTime)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802e5af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"set_DeltaTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.get_FrameID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::get_FrameID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_FrameID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.set_FrameID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)(uint64_t)>(&::Animancer::AnimancerPlayable::set_FrameID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"set_FrameID", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.PrepareFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&::Animancer::AnimancerPlayable::PrepareFrame)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1802e4ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                    {::i2c::class_of<::Animancer::AnimancerPlayable*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.UpdateAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)(::Animancer::Key_KeyedList_1<::Animancer::IUpdatable*>*, float_t)>(&::Animancer::AnimancerPlayable::UpdateAll)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x1802e5300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"UpdateAll", {}, {::i2c::type_of<::Animancer::Key_KeyedList_1<::Animancer::IUpdatable*>*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable.IsRunningPostUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Animancer::AnimancerPlayable*)>(&::Animancer::AnimancerPlayable::IsRunningPostUpdate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802e43d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"IsRunningPostUpdate", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerPlayable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerPlayable::*)()>(&::Animancer::AnimancerPlayable::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Playables::PlayableGraph& Animancer::AnimancerPlayable::__cordl_internal_get__Graph()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Graph;
}
constexpr ::UnityEngine::Playables::PlayableGraph const& Animancer::AnimancerPlayable::__cordl_internal_get__Graph() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Graph;
}
constexpr void Animancer::AnimancerPlayable::__cordl_internal_set__Graph(::UnityEngine::Playables::PlayableGraph  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Graph = value;
}
constexpr ::UnityEngine::Playables::Playable& Animancer::AnimancerPlayable::__cordl_internal_get__RootPlayable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RootPlayable;
}
constexpr ::UnityEngine::Playables::Playable const& Animancer::AnimancerPlayable::__cordl_internal_get__RootPlayable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RootPlayable;
}
constexpr void Animancer::AnimancerPlayable::__cordl_internal_set__RootPlayable(::UnityEngine::Playables::Playable  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RootPlayable = value;
}
constexpr ::UnityEngine::Playables::Playable& Animancer::AnimancerPlayable::__cordl_internal_get__LayerMixer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LayerMixer;
}
constexpr ::UnityEngine::Playables::Playable const& Animancer::AnimancerPlayable::__cordl_internal_get__LayerMixer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LayerMixer;
}
constexpr void Animancer::AnimancerPlayable::__cordl_internal_set__LayerMixer(::UnityEngine::Playables::Playable  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LayerMixer = value;
}
constexpr ::Animancer::AnimancerPlayable_LayerList*& Animancer::AnimancerPlayable::__cordl_internal_get__Layers_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Layers_k__BackingField;
}
constexpr ::Animancer::AnimancerPlayable_LayerList* const& Animancer::AnimancerPlayable::__cordl_internal_get__Layers_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Layers_k__BackingField;
}
constexpr void Animancer::AnimancerPlayable::__cordl_internal_set__Layers_k__BackingField(::Animancer::AnimancerPlayable_LayerList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Layers_k__BackingField = value;
}
constexpr ::Animancer::AnimancerPlayable_StateDictionary*& Animancer::AnimancerPlayable::__cordl_internal_get__States_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____States_k__BackingField;
}
constexpr ::Animancer::AnimancerPlayable_StateDictionary* const& Animancer::AnimancerPlayable::__cordl_internal_get__States_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____States_k__BackingField;
}
constexpr void Animancer::AnimancerPlayable::__cordl_internal_set__States_k__BackingField(::Animancer::AnimancerPlayable_StateDictionary*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____States_k__BackingField = value;
}
constexpr ::Animancer::Key_KeyedList_1<::Animancer::IUpdatable*>*& Animancer::AnimancerPlayable::__cordl_internal_get__PreUpdatables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PreUpdatables;
}
constexpr ::Animancer::Key_KeyedList_1<::Animancer::IUpdatable*>* const& Animancer::AnimancerPlayable::__cordl_internal_get__PreUpdatables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PreUpdatables;
}
constexpr void Animancer::AnimancerPlayable::__cordl_internal_set__PreUpdatables(::Animancer::Key_KeyedList_1<::Animancer::IUpdatable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PreUpdatables = value;
}
constexpr ::Animancer::Key_KeyedList_1<::Animancer::IUpdatable*>*& Animancer::AnimancerPlayable::__cordl_internal_get__PostUpdatables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PostUpdatables;
}
constexpr ::Animancer::Key_KeyedList_1<::Animancer::IUpdatable*>* const& Animancer::AnimancerPlayable::__cordl_internal_get__PostUpdatables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PostUpdatables;
}
constexpr void Animancer::AnimancerPlayable::__cordl_internal_set__PostUpdatables(::Animancer::Key_KeyedList_1<::Animancer::IUpdatable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PostUpdatables = value;
}
constexpr ::Animancer::AnimancerPlayable_PostUpdate*& Animancer::AnimancerPlayable::__cordl_internal_get__PostUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PostUpdate;
}
constexpr ::Animancer::AnimancerPlayable_PostUpdate* const& Animancer::AnimancerPlayable::__cordl_internal_get__PostUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PostUpdate;
}
constexpr void Animancer::AnimancerPlayable::__cordl_internal_set__PostUpdate(::Animancer::AnimancerPlayable_PostUpdate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PostUpdate = value;
}
constexpr ::Animancer::IAnimancerComponent*& Animancer::AnimancerPlayable::__cordl_internal_get__Component_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Component_k__BackingField;
}
constexpr ::Animancer::IAnimancerComponent* const& Animancer::AnimancerPlayable::__cordl_internal_get__Component_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Component_k__BackingField;
}
constexpr void Animancer::AnimancerPlayable::__cordl_internal_set__Component_k__BackingField(::Animancer::IAnimancerComponent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Component_k__BackingField = value;
}
constexpr float_t& Animancer::AnimancerPlayable::__cordl_internal_get__Speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Speed;
}
constexpr float_t const& Animancer::AnimancerPlayable::__cordl_internal_get__Speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Speed;
}
constexpr void Animancer::AnimancerPlayable::__cordl_internal_set__Speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Speed = value;
}
constexpr bool& Animancer::AnimancerPlayable::__cordl_internal_get__KeepChildrenConnected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____KeepChildrenConnected;
}
constexpr bool const& Animancer::AnimancerPlayable::__cordl_internal_get__KeepChildrenConnected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____KeepChildrenConnected;
}
constexpr void Animancer::AnimancerPlayable::__cordl_internal_set__KeepChildrenConnected(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____KeepChildrenConnected = value;
}
constexpr bool& Animancer::AnimancerPlayable::__cordl_internal_get__SkipFirstFade()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SkipFirstFade;
}
constexpr bool const& Animancer::AnimancerPlayable::__cordl_internal_get__SkipFirstFade() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SkipFirstFade;
}
constexpr void Animancer::AnimancerPlayable::__cordl_internal_set__SkipFirstFade(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SkipFirstFade = value;
}
constexpr ::System::Collections::Generic::List_1<::System::IDisposable*>*& Animancer::AnimancerPlayable::__cordl_internal_get__Disposables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Disposables;
}
constexpr ::System::Collections::Generic::List_1<::System::IDisposable*>* const& Animancer::AnimancerPlayable::__cordl_internal_get__Disposables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Disposables;
}
constexpr void Animancer::AnimancerPlayable::__cordl_internal_set__Disposables(::System::Collections::Generic::List_1<::System::IDisposable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Disposables = value;
}
constexpr bool& Animancer::AnimancerPlayable::__cordl_internal_get__ApplyAnimatorIK()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ApplyAnimatorIK;
}
constexpr bool const& Animancer::AnimancerPlayable::__cordl_internal_get__ApplyAnimatorIK() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ApplyAnimatorIK;
}
constexpr void Animancer::AnimancerPlayable::__cordl_internal_set__ApplyAnimatorIK(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ApplyAnimatorIK = value;
}
constexpr bool& Animancer::AnimancerPlayable::__cordl_internal_get__ApplyFootIK()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ApplyFootIK;
}
constexpr bool const& Animancer::AnimancerPlayable::__cordl_internal_get__ApplyFootIK() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ApplyFootIK;
}
constexpr void Animancer::AnimancerPlayable::__cordl_internal_set__ApplyFootIK(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ApplyFootIK = value;
}
constexpr bool& Animancer::AnimancerPlayable::__cordl_internal_get__IsGraphPlaying()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsGraphPlaying;
}
constexpr bool const& Animancer::AnimancerPlayable::__cordl_internal_get__IsGraphPlaying() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsGraphPlaying;
}
constexpr void Animancer::AnimancerPlayable::__cordl_internal_set__IsGraphPlaying(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsGraphPlaying = value;
}
constexpr uint64_t& Animancer::AnimancerPlayable::__cordl_internal_get__FrameID_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FrameID_k__BackingField;
}
constexpr uint64_t const& Animancer::AnimancerPlayable::__cordl_internal_get__FrameID_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FrameID_k__BackingField;
}
constexpr void Animancer::AnimancerPlayable::__cordl_internal_set__FrameID_k__BackingField(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FrameID_k__BackingField = value;
}
inline void Animancer::AnimancerPlayable::setStaticF__DefaultFadeDuration(float_t  value)  {
::cordl_internals::setStaticField<float_t, "_DefaultFadeDuration", ::Animancer::AnimancerPlayable*>(std::forward<float_t>(value));
}
inline float_t Animancer::AnimancerPlayable::getStaticF__DefaultFadeDuration()  {
return ::cordl_internals::getStaticField<float_t, "_DefaultFadeDuration", ::Animancer::AnimancerPlayable*>();
}
inline void Animancer::AnimancerPlayable::setStaticF_Template(::Animancer::AnimancerPlayable*  value)  {
::cordl_internals::setStaticField<::Animancer::AnimancerPlayable*, "Template", ::Animancer::AnimancerPlayable*>(std::forward<::Animancer::AnimancerPlayable*>(value));
}
inline ::Animancer::AnimancerPlayable* Animancer::AnimancerPlayable::getStaticF_Template()  {
return ::cordl_internals::getStaticField<::Animancer::AnimancerPlayable*, "Template", ::Animancer::AnimancerPlayable*>();
}
inline void Animancer::AnimancerPlayable::setStaticF__Current_k__BackingField(::Animancer::AnimancerPlayable*  value)  {
::cordl_internals::setStaticField<::Animancer::AnimancerPlayable*, "<Current>k__BackingField", ::Animancer::AnimancerPlayable*>(std::forward<::Animancer::AnimancerPlayable*>(value));
}
inline ::Animancer::AnimancerPlayable* Animancer::AnimancerPlayable::getStaticF__Current_k__BackingField()  {
return ::cordl_internals::getStaticField<::Animancer::AnimancerPlayable*, "<Current>k__BackingField", ::Animancer::AnimancerPlayable*>();
}
inline void Animancer::AnimancerPlayable::setStaticF__DeltaTime_k__BackingField(float_t  value)  {
::cordl_internals::setStaticField<float_t, "<DeltaTime>k__BackingField", ::Animancer::AnimancerPlayable*>(std::forward<float_t>(value));
}
inline float_t Animancer::AnimancerPlayable::getStaticF__DeltaTime_k__BackingField()  {
return ::cordl_internals::getStaticField<float_t, "<DeltaTime>k__BackingField", ::Animancer::AnimancerPlayable*>();
}
inline void Animancer::AnimancerPlayable::setStaticF__CurrentUpdatables(::Animancer::Key_KeyedList_1<::Animancer::IUpdatable*>*  value)  {
::cordl_internals::setStaticField<::Animancer::Key_KeyedList_1<::Animancer::IUpdatable*>*, "_CurrentUpdatables", ::Animancer::AnimancerPlayable*>(std::forward<::Animancer::Key_KeyedList_1<::Animancer::IUpdatable*>*>(value));
}
inline ::Animancer::Key_KeyedList_1<::Animancer::IUpdatable*>* Animancer::AnimancerPlayable::getStaticF__CurrentUpdatables()  {
return ::cordl_internals::getStaticField<::Animancer::Key_KeyedList_1<::Animancer::IUpdatable*>*, "_CurrentUpdatables", ::Animancer::AnimancerPlayable*>();
}
inline void Animancer::AnimancerPlayable::setStaticF__CurrentUpdatable(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CurrentUpdatable", ::Animancer::AnimancerPlayable*>(std::forward<int32_t>(value));
}
inline int32_t Animancer::AnimancerPlayable::getStaticF__CurrentUpdatable()  {
return ::cordl_internals::getStaticField<int32_t, "_CurrentUpdatable", ::Animancer::AnimancerPlayable*>();
}
inline float_t Animancer::AnimancerPlayable::get_DefaultFadeDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_DefaultFadeDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void Animancer::AnimancerPlayable::set_DefaultFadeDuration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"set_DefaultFadeDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Playables::PlayableGraph Animancer::AnimancerPlayable::get_Graph()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_Graph", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableGraph>(this, ___internal_method);
}
inline ::UnityEngine::Playables::Playable Animancer::AnimancerPlayable::Animancer_IPlayableWrapper_get_Playable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Animancer.IPlayableWrapper.get_Playable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(this, ___internal_method);
}
inline ::Animancer::IPlayableWrapper* Animancer::AnimancerPlayable::Animancer_IPlayableWrapper_get_Parent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Animancer.IPlayableWrapper.get_Parent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::IPlayableWrapper*>(this, ___internal_method);
}
inline float_t Animancer::AnimancerPlayable::Animancer_IPlayableWrapper_get_Weight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Animancer.IPlayableWrapper.get_Weight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t Animancer::AnimancerPlayable::Animancer_IPlayableWrapper_get_ChildCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Animancer.IPlayableWrapper.get_ChildCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Animancer::AnimancerNode* Animancer::AnimancerPlayable::Animancer_IPlayableWrapper_GetChild(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Animancer.IPlayableWrapper.GetChild", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerNode*>(this, ___internal_method, index);
}
inline ::Animancer::AnimancerPlayable_LayerList* Animancer::AnimancerPlayable::get_Layers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_Layers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerPlayable_LayerList*>(this, ___internal_method);
}
inline void Animancer::AnimancerPlayable::set_Layers(::Animancer::AnimancerPlayable_LayerList*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"set_Layers", {}, {::i2c::type_of<::Animancer::AnimancerPlayable_LayerList*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Animancer::AnimancerPlayable_StateDictionary* Animancer::AnimancerPlayable::get_States()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_States", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerPlayable_StateDictionary*>(this, ___internal_method);
}
inline void Animancer::AnimancerPlayable::set_States(::Animancer::AnimancerPlayable_StateDictionary*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"set_States", {}, {::i2c::type_of<::Animancer::AnimancerPlayable_StateDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Animancer::IAnimancerComponent* Animancer::AnimancerPlayable::get_Component()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_Component", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::IAnimancerComponent*>(this, ___internal_method);
}
inline void Animancer::AnimancerPlayable::set_Component(::Animancer::IAnimancerComponent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"set_Component", {}, {::i2c::type_of<::Animancer::IAnimancerComponent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Animancer::AnimancerPlayable::get_CommandCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_CommandCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Playables::DirectorUpdateMode Animancer::AnimancerPlayable::get_UpdateMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_UpdateMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::DirectorUpdateMode>(this, ___internal_method);
}
inline void Animancer::AnimancerPlayable::set_UpdateMode(::UnityEngine::Playables::DirectorUpdateMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"set_UpdateMode", {}, {::i2c::type_of<::UnityEngine::Playables::DirectorUpdateMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Animancer::AnimancerPlayable::get_Speed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_Speed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::AnimancerPlayable::set_Speed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"set_Speed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Animancer::AnimancerPlayable::get_KeepChildrenConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_KeepChildrenConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::AnimancerPlayable::set_KeepChildrenConnected(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"set_KeepChildrenConnected", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Animancer::AnimancerPlayable::get_SkipFirstFade()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_SkipFirstFade", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::AnimancerPlayable::set_SkipFirstFade(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"set_SkipFirstFade", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Animancer::AnimancerPlayable* Animancer::AnimancerPlayable::Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerPlayable*>(nullptr, ___internal_method);
}
inline ::Animancer::AnimancerPlayable* Animancer::AnimancerPlayable::Create(::UnityEngine::Playables::PlayableGraph  graph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerPlayable*>(nullptr, ___internal_method, graph);
}
template<typename T>
inline T Animancer::AnimancerPlayable::Create(::UnityEngine::Playables::PlayableGraph  graph, T  _cordl_template)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                    {"Create", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, graph, _cordl_template);
}
inline void Animancer::AnimancerPlayable::OnPlayableCreate(::UnityEngine::Playables::Playable  playable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerPlayable*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable);
}
inline void Animancer::AnimancerPlayable::SetNextGraphName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"SetNextGraphName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name);
}
inline bool Animancer::AnimancerPlayable::TryGetOutput(::by_ref<::UnityEngine::Playables::PlayableOutput>  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"TryGetOutput", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutput>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, output);
}
inline void Animancer::AnimancerPlayable::CreateOutput(::Animancer::IAnimancerComponent*  animancer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"CreateOutput", {}, {::i2c::type_of<::Animancer::IAnimancerComponent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animancer);
}
inline void Animancer::AnimancerPlayable::CreateOutput(::UnityEngine::Animator*  animator, ::Animancer::IAnimancerComponent*  animancer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"CreateOutput", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::Animancer::IAnimancerComponent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animator, animancer);
}
inline void Animancer::AnimancerPlayable::InsertOutputPlayable(::UnityEngine::Playables::Playable  playable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"InsertOutputPlayable", {}, {::i2c::type_of<::UnityEngine::Playables::Playable>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable);
}
template<typename T>
inline ::UnityEngine::Animations::AnimationScriptPlayable Animancer::AnimancerPlayable::InsertOutputJob(T  data)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                    {"InsertOutputJob", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::AnimationScriptPlayable>(this, ___internal_method, data);
}
inline bool Animancer::AnimancerPlayable::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::AnimancerPlayable::DestroyGraph()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"DestroyGraph", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Animancer::AnimancerPlayable::DestroyOutput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"DestroyOutput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::AnimancerPlayable::OnPlayableDestroy(::UnityEngine::Playables::Playable  playable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerPlayable*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable);
}
inline ::System::Collections::Generic::List_1<::System::IDisposable*>* Animancer::AnimancerPlayable::get_Disposables()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_Disposables", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::IDisposable*>*>(this, ___internal_method);
}
inline void Animancer::AnimancerPlayable::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerPlayable*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::AnimancerPlayable::DisposeAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"DisposeAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Animancer::AnimancerPlayable::get_ApplyAnimatorIK()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_ApplyAnimatorIK", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::AnimancerPlayable::set_ApplyAnimatorIK(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"set_ApplyAnimatorIK", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Animancer::AnimancerPlayable::get_ApplyFootIK()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_ApplyFootIK", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::AnimancerPlayable::set_ApplyFootIK(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"set_ApplyFootIK", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* Animancer::AnimancerPlayable::GetKey(::UnityEngine::AnimationClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"GetKey", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, clip);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerPlayable::Play(::UnityEngine::AnimationClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, clip);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerPlayable::Play(::Animancer::AnimancerState*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Play", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, state);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerPlayable::Play(::UnityEngine::AnimationClip*  clip, float_t  fadeDuration, ::Animancer::FadeMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Animancer::FadeMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, clip, fadeDuration, mode);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerPlayable::Play(::Animancer::AnimancerState*  state, float_t  fadeDuration, ::Animancer::FadeMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Play", {}, {::i2c::type_of<::Animancer::AnimancerState*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Animancer::FadeMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, state, fadeDuration, mode);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerPlayable::Play(::Animancer::ITransition*  transition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Play", {}, {::i2c::type_of<::Animancer::ITransition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, transition);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerPlayable::Play(::Animancer::ITransition*  transition, float_t  fadeDuration, ::Animancer::FadeMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Play", {}, {::i2c::type_of<::Animancer::ITransition*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Animancer::FadeMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, transition, fadeDuration, mode);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerPlayable::TryPlay(::System::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"TryPlay", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, key);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerPlayable::TryPlay(::System::Object*  key, float_t  fadeDuration, ::Animancer::FadeMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"TryPlay", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Animancer::FadeMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, key, fadeDuration, mode);
}
inline ::Animancer::AnimancerLayer* Animancer::AnimancerPlayable::GetLocalLayer(::Animancer::AnimancerState*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"GetLocalLayer", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerLayer*>(this, ___internal_method, state);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerPlayable::Stop(::Animancer::IHasKey*  hasKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Stop", {}, {::i2c::type_of<::Animancer::IHasKey*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, hasKey);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerPlayable::Stop(::System::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Stop", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, key);
}
inline void Animancer::AnimancerPlayable::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Animancer::AnimancerPlayable::IsPlaying(::Animancer::IHasKey*  hasKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"IsPlaying", {}, {::i2c::type_of<::Animancer::IHasKey*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hasKey);
}
inline bool Animancer::AnimancerPlayable::IsPlaying(::System::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"IsPlaying", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline bool Animancer::AnimancerPlayable::IsPlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"IsPlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Animancer::AnimancerPlayable::IsPlayingClip(::UnityEngine::AnimationClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"IsPlayingClip", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clip);
}
inline float_t Animancer::AnimancerPlayable::GetTotalWeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"GetTotalWeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::AnimancerPlayable::GatherAnimationClips(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"GatherAnimationClips", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clips);
}
inline bool Animancer::AnimancerPlayable::System_Collections_IEnumerator_MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"System.Collections.IEnumerator.MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Animancer::AnimancerPlayable::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Animancer::AnimancerPlayable::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Animancer::AnimancerPlayable::get_IsGraphPlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_IsGraphPlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::AnimancerPlayable::set_IsGraphPlaying(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"set_IsGraphPlaying", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::AnimancerPlayable::UnpauseGraph()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"UnpauseGraph", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::AnimancerPlayable::PauseGraph()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"PauseGraph", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::AnimancerPlayable::Evaluate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Evaluate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::AnimancerPlayable::Evaluate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"Evaluate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline ::StringW Animancer::AnimancerPlayable::GetDescription()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"GetDescription", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Animancer::AnimancerPlayable::AppendDescription(::System::Text::StringBuilder*  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"AppendDescription", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void Animancer::AnimancerPlayable::AppendInternalDetails(::System::Text::StringBuilder*  text, ::StringW  sectionPrefix, ::StringW  itemPrefix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"AppendInternalDetails", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, sectionPrefix, itemPrefix);
}
inline void Animancer::AnimancerPlayable::AppendAll(::System::Text::StringBuilder*  text, ::StringW  sectionPrefix, ::StringW  itemPrefix, ::System::Collections::ICollection*  collection, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"AppendAll", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::ICollection*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, text, sectionPrefix, itemPrefix, collection, name);
}
inline void Animancer::AnimancerPlayable::RequirePreUpdate(::Animancer::IUpdatable*  updatable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"RequirePreUpdate", {}, {::i2c::type_of<::Animancer::IUpdatable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatable);
}
inline void Animancer::AnimancerPlayable::RequirePostUpdate(::Animancer::IUpdatable*  updatable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"RequirePostUpdate", {}, {::i2c::type_of<::Animancer::IUpdatable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatable);
}
inline void Animancer::AnimancerPlayable::CancelUpdate(::Animancer::Key_KeyedList_1<::Animancer::IUpdatable*>*  updatables, ::Animancer::IUpdatable*  updatable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"CancelUpdate", {}, {::i2c::type_of<::Animancer::Key_KeyedList_1<::Animancer::IUpdatable*>*>(), ::i2c::type_of<::Animancer::IUpdatable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatables, updatable);
}
inline void Animancer::AnimancerPlayable::CancelPreUpdate(::Animancer::IUpdatable*  updatable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"CancelPreUpdate", {}, {::i2c::type_of<::Animancer::IUpdatable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatable);
}
inline void Animancer::AnimancerPlayable::CancelPostUpdate(::Animancer::IUpdatable*  updatable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"CancelPostUpdate", {}, {::i2c::type_of<::Animancer::IUpdatable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatable);
}
inline int32_t Animancer::AnimancerPlayable::get_PreUpdatableCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_PreUpdatableCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Animancer::AnimancerPlayable::get_PostUpdatableCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_PostUpdatableCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Animancer::IUpdatable* Animancer::AnimancerPlayable::GetPreUpdatable(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"GetPreUpdatable", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::IUpdatable*>(this, ___internal_method, index);
}
inline ::Animancer::IUpdatable* Animancer::AnimancerPlayable::GetPostUpdatable(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"GetPostUpdatable", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::IUpdatable*>(this, ___internal_method, index);
}
inline ::Animancer::AnimancerPlayable* Animancer::AnimancerPlayable::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerPlayable*>(nullptr, ___internal_method);
}
inline void Animancer::AnimancerPlayable::set_Current(::Animancer::AnimancerPlayable*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"set_Current", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline float_t Animancer::AnimancerPlayable::get_DeltaTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_DeltaTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void Animancer::AnimancerPlayable::set_DeltaTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"set_DeltaTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline uint64_t Animancer::AnimancerPlayable::get_FrameID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"get_FrameID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline void Animancer::AnimancerPlayable::set_FrameID(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"set_FrameID", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::AnimancerPlayable::PrepareFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerPlayable*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, info);
}
inline void Animancer::AnimancerPlayable::UpdateAll(::Animancer::Key_KeyedList_1<::Animancer::IUpdatable*>*  updatables, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"UpdateAll", {}, {::i2c::type_of<::Animancer::Key_KeyedList_1<::Animancer::IUpdatable*>*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatables, deltaTime);
}
inline bool Animancer::AnimancerPlayable::IsRunningPostUpdate(::Animancer::AnimancerPlayable*  animancer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {"IsRunningPostUpdate", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, animancer);
}
inline void Animancer::AnimancerPlayable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerPlayable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::AnimancerPlayable* Animancer::AnimancerPlayable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::AnimancerPlayable*>());
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Animancer::AnimancerPlayable::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Animancer::AnimancerPlayable::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IPlayableWrapper"
constexpr  Animancer::AnimancerPlayable::operator ::Animancer::IPlayableWrapper*() noexcept {
return static_cast<::Animancer::IPlayableWrapper*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IPlayableWrapper"
constexpr ::Animancer::IPlayableWrapper* Animancer::AnimancerPlayable::i___Animancer__IPlayableWrapper() noexcept {
return static_cast<::Animancer::IPlayableWrapper*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IAnimationClipCollection"
constexpr  Animancer::AnimancerPlayable::operator ::Animancer::IAnimationClipCollection*() noexcept {
return static_cast<::Animancer::IAnimationClipCollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IAnimationClipCollection"
constexpr ::Animancer::IAnimationClipCollection* Animancer::AnimancerPlayable::i___Animancer__IAnimationClipCollection() noexcept {
return static_cast<::Animancer::IAnimationClipCollection*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::AnimancerPlayable::AnimancerPlayable()   {
}
