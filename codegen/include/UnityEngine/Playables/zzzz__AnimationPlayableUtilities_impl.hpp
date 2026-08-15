#pragma once
// IWYU pragma private; include "UnityEngine/Playables/AnimationPlayableUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Playables/zzzz__AnimationPlayableUtilities_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationClipPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::UnityEngine::Playables::AnimationPlayableUtilities.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Animator*, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::PlayableGraph)>(&::UnityEngine::Playables::AnimationPlayableUtilities::Play)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182231470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::AnimationPlayableUtilities*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Playables::Playable>(), ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::AnimationPlayableUtilities.PlayClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Animations::AnimationClipPlayable (*)(::UnityEngine::Animator*, ::UnityEngine::AnimationClip*, ::by_ref<::UnityEngine::Playables::PlayableGraph>)>(&::UnityEngine::Playables::AnimationPlayableUtilities::PlayClip)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x182231290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::AnimationPlayableUtilities*>(),
                        {"PlayClip", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Playables::AnimationPlayableUtilities::Play(::UnityEngine::Animator*  animator, ::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::PlayableGraph  graph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::AnimationPlayableUtilities*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Playables::Playable>(), ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, animator, playable, graph);
}
inline ::UnityEngine::Animations::AnimationClipPlayable UnityEngine::Playables::AnimationPlayableUtilities::PlayClip(::UnityEngine::Animator*  animator, ::UnityEngine::AnimationClip*  clip, ::by_ref<::UnityEngine::Playables::PlayableGraph>  graph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::AnimationPlayableUtilities*>(),
                        {"PlayClip", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::AnimationClipPlayable>(nullptr, ___internal_method, animator, clip, graph);
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::AnimationPlayableUtilities::AnimationPlayableUtilities()   {
}
