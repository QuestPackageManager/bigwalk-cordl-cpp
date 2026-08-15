#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationPlayableGraphExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimationPlayableGraphExtensions_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPlayableGraphExtensions.SyncUpdateAndTimeMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*)>(&::UnityEngine::Animations::AnimationPlayableGraphExtensions::SyncUpdateAndTimeMode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182230f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationPlayableGraphExtensions*>(),
                        {"SyncUpdateAndTimeMode", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Animator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPlayableGraphExtensions.InternalCreateAnimationOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Playables::PlayableGraph>, ::StringW, ::by_ref<::UnityEngine::Playables::PlayableOutputHandle>)>(&::UnityEngine::Animations::AnimationPlayableGraphExtensions::InternalCreateAnimationOutput)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x182230d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationPlayableGraphExtensions*>(),
                        {"InternalCreateAnimationOutput", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPlayableGraphExtensions.InternalSyncUpdateAndTimeMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableGraph>, ::UnityEngine::Animator*)>(&::UnityEngine::Animations::AnimationPlayableGraphExtensions::InternalSyncUpdateAndTimeMode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182230eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationPlayableGraphExtensions*>(),
                        {"InternalSyncUpdateAndTimeMode", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::UnityEngine::Animator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPlayableGraphExtensions.InternalCreateAnimationOutput_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Playables::PlayableGraph>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Playables::PlayableOutputHandle>)>(&::UnityEngine::Animations::AnimationPlayableGraphExtensions::InternalCreateAnimationOutput_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182230d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationPlayableGraphExtensions*>(),
                        {"InternalCreateAnimationOutput_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPlayableGraphExtensions.InternalSyncUpdateAndTimeMode_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableGraph>, ::System::IntPtr)>(&::UnityEngine::Animations::AnimationPlayableGraphExtensions::InternalSyncUpdateAndTimeMode_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182230ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationPlayableGraphExtensions*>(),
                        {"InternalSyncUpdateAndTimeMode_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Animations::AnimationPlayableGraphExtensions::SyncUpdateAndTimeMode(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::Animator*  animator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationPlayableGraphExtensions*>(),
                        {"SyncUpdateAndTimeMode", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Animator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, graph, animator);
}
inline bool UnityEngine::Animations::AnimationPlayableGraphExtensions::InternalCreateAnimationOutput(::by_ref<::UnityEngine::Playables::PlayableGraph>  graph, ::StringW  name, ::by_ref<::UnityEngine::Playables::PlayableOutputHandle>  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationPlayableGraphExtensions*>(),
                        {"InternalCreateAnimationOutput", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, graph, name, handle);
}
inline void UnityEngine::Animations::AnimationPlayableGraphExtensions::InternalSyncUpdateAndTimeMode(::by_ref<::UnityEngine::Playables::PlayableGraph>  graph, ::UnityEngine::Animator*  animator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationPlayableGraphExtensions*>(),
                        {"InternalSyncUpdateAndTimeMode", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::UnityEngine::Animator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, graph, animator);
}
inline bool UnityEngine::Animations::AnimationPlayableGraphExtensions::InternalCreateAnimationOutput_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph>  graph, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::by_ref<::UnityEngine::Playables::PlayableOutputHandle>  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationPlayableGraphExtensions*>(),
                        {"InternalCreateAnimationOutput_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, graph, name, handle);
}
inline void UnityEngine::Animations::AnimationPlayableGraphExtensions::InternalSyncUpdateAndTimeMode_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph>  graph, ::System::IntPtr  animator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationPlayableGraphExtensions*>(),
                        {"InternalSyncUpdateAndTimeMode_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, graph, animator);
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::AnimationPlayableGraphExtensions::AnimationPlayableGraphExtensions()   {
}
