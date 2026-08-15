#pragma once
// IWYU pragma private; include "Animancer/AnimancerUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Animancer/zzzz__AnimancerUtilities_def.hpp"
#include "Animancer/zzzz__AnimancerNode_def.hpp"
#include "Animancer/zzzz__AnimancerPlayable_def.hpp"
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include "Animancer/zzzz__IAnimationClipCollection_def.hpp"
#include "Animancer/zzzz__ITransitionDetailed_def.hpp"
#include "Animancer/zzzz__ITransition_def.hpp"
#include "Animancer/zzzz__MixerState_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__ArgumentException_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimatorControllerPlayable_def.hpp"
#include "UnityEngine/Animations/zzzz__TransformStreamHandle_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__AnimatorControllerParameter_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__IAnimationClipSource_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Animancer::AnimancerUtilities.Wrap01
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::AnimancerUtilities::Wrap01)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802ea740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"Wrap01", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.Wrap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::Animancer::AnimancerUtilities::Wrap)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1802ea780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"Wrap", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.Round
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::AnimancerUtilities::Round)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802e9cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"Round", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.Round
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::Animancer::AnimancerUtilities::Round)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802e9c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"Round", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.IsFinite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t)>(&::Animancer::AnimancerUtilities::IsFinite)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802e99c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"IsFinite", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.IsFinite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(double_t)>(&::Animancer::AnimancerUtilities::IsFinite)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802e9920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"IsFinite", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.IsFinite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector2)>(&::Animancer::AnimancerUtilities::IsFinite)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802e9960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"IsFinite", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.ToStringOrNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*)>(&::Animancer::AnimancerUtilities::ToStringOrNull)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1802ea180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"ToStringOrNull", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Animancer::AnimancerNode*)>(&::Animancer::AnimancerUtilities::IsValid)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802e9a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"IsValid", {}, {::i2c::type_of<::Animancer::AnimancerNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Animancer::ITransitionDetailed*)>(&::Animancer::AnimancerUtilities::IsValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802e99f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"IsValid", {}, {::i2c::type_of<::Animancer::ITransitionDetailed*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.CreateStateAndApply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (*)(::Animancer::ITransition*, ::Animancer::AnimancerPlayable*)>(&::Animancer::AnimancerUtilities::CreateStateAndApply)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1802e8620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"CreateStateAndApply", {}, {::i2c::type_of<::Animancer::ITransition*>(), ::i2c::type_of<::Animancer::AnimancerPlayable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.RemovePlayable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Playables::Playable, bool)>(&::Animancer::AnimancerUtilities::RemovePlayable)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1802e9aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"RemovePlayable", {}, {::i2c::type_of<::UnityEngine::Playables::Playable>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.HasEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Animancer::IAnimationClipCollection*, ::StringW)>(&::Animancer::AnimancerUtilities::HasEvent)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1802e9750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"HasEvent", {}, {::i2c::type_of<::Animancer::IAnimationClipCollection*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.HasEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::AnimationClip*, ::StringW)>(&::Animancer::AnimancerUtilities::HasEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1802e9890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"HasEvent", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.CalculateThresholdsFromAverageVelocityXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Animancer::MixerState_1<::UnityEngine::Vector2>*)>(&::Animancer::AnimancerUtilities::CalculateThresholdsFromAverageVelocityXZ)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1802e8150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"CalculateThresholdsFromAverageVelocityXZ", {}, {::i2c::type_of<::Animancer::MixerState_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.CopyParameterValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Animator*, ::UnityEngine::Animator*, ::UnityEngine::AnimatorControllerParameter*)>(&::Animancer::AnimancerUtilities::CopyParameterValue)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1802e8350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"CopyParameterValue", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::AnimatorControllerParameter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.CopyParameterValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Animations::AnimatorControllerPlayable, ::UnityEngine::Animations::AnimatorControllerPlayable, ::UnityEngine::AnimatorControllerParameter*)>(&::Animancer::AnimancerUtilities::CopyParameterValue)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1802e84d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"CopyParameterValue", {}, {::i2c::type_of<::UnityEngine::Animations::AnimatorControllerPlayable>(), ::i2c::type_of<::UnityEngine::Animations::AnimatorControllerPlayable>(), ::i2c::type_of<::UnityEngine::AnimatorControllerParameter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.GetParameterValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorControllerParameter*)>(&::Animancer::AnimancerUtilities::GetParameterValue)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1802e9520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"GetParameterValue", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::AnimatorControllerParameter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.GetParameterValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::UnityEngine::Animations::AnimatorControllerPlayable, ::UnityEngine::AnimatorControllerParameter*)>(&::Animancer::AnimancerUtilities::GetParameterValue)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1802e93f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"GetParameterValue", {}, {::i2c::type_of<::UnityEngine::Animations::AnimatorControllerPlayable>(), ::i2c::type_of<::UnityEngine::AnimatorControllerParameter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.SetParameterValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorControllerParameter*, ::System::Object*)>(&::Animancer::AnimancerUtilities::SetParameterValue)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1802e9d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"SetParameterValue", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::AnimatorControllerParameter*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.SetParameterValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Animations::AnimatorControllerPlayable, ::UnityEngine::AnimatorControllerParameter*, ::System::Object*)>(&::Animancer::AnimancerUtilities::SetParameterValue)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1802e9f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"SetParameterValue", {}, {::i2c::type_of<::UnityEngine::Animations::AnimatorControllerPlayable>(), ::i2c::type_of<::UnityEngine::AnimatorControllerParameter*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.ConvertToTransformStreamHandles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformStreamHandle> (*)(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Transform>>*, ::UnityEngine::Animator*)>(&::Animancer::AnimancerUtilities::ConvertToTransformStreamHandles)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1802e8200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"ConvertToTransformStreamHandles", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Transform>>*>(), ::i2c::type_of<::UnityEngine::Animator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities._cordl_Assert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::System::Object*)>(&::Animancer::AnimancerUtilities::_cordl_Assert)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"Assert", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.SetDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*)>(&::Animancer::AnimancerUtilities::SetDirty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"SetDirty", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.EditModeSampleAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AnimationClip*, ::UnityEngine::Component*, float_t)>(&::Animancer::AnimancerUtilities::EditModeSampleAnimation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"EditModeSampleAnimation", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.EditModePlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AnimationClip*, ::UnityEngine::Component*)>(&::Animancer::AnimancerUtilities::EditModePlay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"EditModePlay", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.Gather
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*, ::UnityEngine::AnimationClip*)>(&::Animancer::AnimancerUtilities::Gather)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1802e9040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"Gather", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.Gather
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::AnimationClip>>*)>(&::Animancer::AnimancerUtilities::Gather)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1802e9310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"Gather", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::AnimationClip>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.Gather
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::AnimationClip>>*)>(&::Animancer::AnimancerUtilities::Gather)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1802e9190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"Gather", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::AnimationClip>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.GatherFromAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*, ::UnityEngine::Playables::PlayableAsset*)>(&::Animancer::AnimancerUtilities::GatherFromAsset)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1802e86b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"GatherFromAsset", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*>(), ::i2c::type_of<::UnityEngine::Playables::PlayableAsset*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.GatherFromTracks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*, ::System::Collections::IEnumerable*)>(&::Animancer::AnimancerUtilities::GatherFromTracks)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x1802e8b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"GatherFromTracks", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*>(), ::i2c::type_of<::System::Collections::IEnumerable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.GatherFromSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*, ::UnityEngine::IAnimationClipSource*)>(&::Animancer::AnimancerUtilities::GatherFromSource)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802e8ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"GatherFromSource", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*>(), ::i2c::type_of<::UnityEngine::IAnimationClipSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.GatherFromSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*, ::System::Collections::IEnumerable*)>(&::Animancer::AnimancerUtilities::GatherFromSource)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1802e8960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"GatherFromSource", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*>(), ::i2c::type_of<::System::Collections::IEnumerable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.GatherFromSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*, ::System::Object*)>(&::Animancer::AnimancerUtilities::GatherFromSource)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1802e87f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"GatherFromSource", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.TryGetFrameRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, ::by_ref<float_t>)>(&::Animancer::AnimancerUtilities::TryGetFrameRate)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1802ea410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"TryGetFrameRate", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.TryGetAverageAngularSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, ::by_ref<float_t>)>(&::Animancer::AnimancerUtilities::TryGetAverageAngularSpeed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1802ea220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"TryGetAverageAngularSpeed", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.TryGetAverageVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, ::by_ref<::UnityEngine::Vector3>)>(&::Animancer::AnimancerUtilities::TryGetAverageVelocity)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1802ea2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"TryGetAverageVelocity", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Animancer::ITransition*)>(&::Animancer::AnimancerUtilities::IsValid)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802e9a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"IsValid", {}, {::i2c::type_of<::Animancer::ITransition*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.TryGetIsLooping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, ::by_ref<bool>)>(&::Animancer::AnimancerUtilities::TryGetIsLooping)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1802ea600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"TryGetIsLooping", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.TryGetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, ::by_ref<float_t>)>(&::Animancer::AnimancerUtilities::TryGetLength)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1802ea6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"TryGetLength", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerUtilities.GetWrappedObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Object*)>(&::Animancer::AnimancerUtilities::GetWrappedObject)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1802e9680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"GetWrappedObject", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t Animancer::AnimancerUtilities::Wrap01(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"Wrap01", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::AnimancerUtilities::Wrap(float_t  value, float_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"Wrap", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, length);
}
inline float_t Animancer::AnimancerUtilities::Round(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"Round", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::AnimancerUtilities::Round(float_t  value, float_t  multiple)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"Round", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, multiple);
}
inline bool Animancer::AnimancerUtilities::IsFinite(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"IsFinite", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool Animancer::AnimancerUtilities::IsFinite(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"IsFinite", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool Animancer::AnimancerUtilities::IsFinite(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"IsFinite", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline ::StringW Animancer::AnimancerUtilities::ToStringOrNull(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"ToStringOrNull", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, obj);
}
template<typename T>
inline void Animancer::AnimancerUtilities::CopyExactArray(::ArrayW<T>  copyFrom, ::by_ref<::ArrayW<T>>  copyTo)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                    {"CopyExactArray", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::by_ref<::ArrayW<T>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, copyFrom, copyTo);
}
template<typename T>
inline void Animancer::AnimancerUtilities::Swap(::ArrayW<T>  array, int32_t  a, int32_t  b)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                    {"Swap", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, a, b);
}
template<typename T>
inline bool Animancer::AnimancerUtilities::IsNullOrEmpty(::ArrayW<T>  array)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                    {"IsNullOrEmpty", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, array);
}
template<typename T>
inline bool Animancer::AnimancerUtilities::SetLength(::by_ref<::ArrayW<T>>  array, int32_t  length)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                    {"SetLength", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, array, length);
}
inline bool Animancer::AnimancerUtilities::IsValid(::Animancer::AnimancerNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"IsValid", {}, {::i2c::type_of<::Animancer::AnimancerNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, node);
}
inline bool Animancer::AnimancerUtilities::IsValid(::Animancer::ITransitionDetailed*  transition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"IsValid", {}, {::i2c::type_of<::Animancer::ITransitionDetailed*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, transition);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerUtilities::CreateStateAndApply(::Animancer::ITransition*  transition, ::Animancer::AnimancerPlayable*  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"CreateStateAndApply", {}, {::i2c::type_of<::Animancer::ITransition*>(), ::i2c::type_of<::Animancer::AnimancerPlayable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(nullptr, ___internal_method, transition, root);
}
inline void Animancer::AnimancerUtilities::RemovePlayable(::UnityEngine::Playables::Playable  playable, bool  destroy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"RemovePlayable", {}, {::i2c::type_of<::UnityEngine::Playables::Playable>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playable, destroy);
}
inline bool Animancer::AnimancerUtilities::HasEvent(::Animancer::IAnimationClipCollection*  source, ::StringW  functionName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"HasEvent", {}, {::i2c::type_of<::Animancer::IAnimationClipCollection*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, functionName);
}
inline bool Animancer::AnimancerUtilities::HasEvent(::UnityEngine::AnimationClip*  clip, ::StringW  functionName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"HasEvent", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, clip, functionName);
}
inline void Animancer::AnimancerUtilities::CalculateThresholdsFromAverageVelocityXZ(::Animancer::MixerState_1<::UnityEngine::Vector2>*  mixer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"CalculateThresholdsFromAverageVelocityXZ", {}, {::i2c::type_of<::Animancer::MixerState_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mixer);
}
inline void Animancer::AnimancerUtilities::CopyParameterValue(::UnityEngine::Animator*  copyFrom, ::UnityEngine::Animator*  copyTo, ::UnityEngine::AnimatorControllerParameter*  parameter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"CopyParameterValue", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::AnimatorControllerParameter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, copyFrom, copyTo, parameter);
}
inline void Animancer::AnimancerUtilities::CopyParameterValue(::UnityEngine::Animations::AnimatorControllerPlayable  copyFrom, ::UnityEngine::Animations::AnimatorControllerPlayable  copyTo, ::UnityEngine::AnimatorControllerParameter*  parameter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"CopyParameterValue", {}, {::i2c::type_of<::UnityEngine::Animations::AnimatorControllerPlayable>(), ::i2c::type_of<::UnityEngine::Animations::AnimatorControllerPlayable>(), ::i2c::type_of<::UnityEngine::AnimatorControllerParameter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, copyFrom, copyTo, parameter);
}
inline ::System::Object* Animancer::AnimancerUtilities::GetParameterValue(::UnityEngine::Animator*  animator, ::UnityEngine::AnimatorControllerParameter*  parameter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"GetParameterValue", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::AnimatorControllerParameter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, animator, parameter);
}
inline ::System::Object* Animancer::AnimancerUtilities::GetParameterValue(::UnityEngine::Animations::AnimatorControllerPlayable  playable, ::UnityEngine::AnimatorControllerParameter*  parameter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"GetParameterValue", {}, {::i2c::type_of<::UnityEngine::Animations::AnimatorControllerPlayable>(), ::i2c::type_of<::UnityEngine::AnimatorControllerParameter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, playable, parameter);
}
inline void Animancer::AnimancerUtilities::SetParameterValue(::UnityEngine::Animator*  animator, ::UnityEngine::AnimatorControllerParameter*  parameter, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"SetParameterValue", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::AnimatorControllerParameter*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, animator, parameter, value);
}
inline void Animancer::AnimancerUtilities::SetParameterValue(::UnityEngine::Animations::AnimatorControllerPlayable  playable, ::UnityEngine::AnimatorControllerParameter*  parameter, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"SetParameterValue", {}, {::i2c::type_of<::UnityEngine::Animations::AnimatorControllerPlayable>(), ::i2c::type_of<::UnityEngine::AnimatorControllerParameter*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playable, parameter, value);
}
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> Animancer::AnimancerUtilities::CreateNativeReference()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                    {"CreateNativeReference", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(nullptr, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformStreamHandle> Animancer::AnimancerUtilities::ConvertToTransformStreamHandles(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Transform>>*  transforms, ::UnityEngine::Animator*  animator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"ConvertToTransformStreamHandles", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Transform>>*>(), ::i2c::type_of<::UnityEngine::Animator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformStreamHandle>>(nullptr, ___internal_method, transforms, animator);
}
template<typename T>
inline ::StringW Animancer::AnimancerUtilities::GetUnsupportedMessage(T  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                    {"GetUnsupportedMessage", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
template<typename T>
inline ::System::ArgumentException* Animancer::AnimancerUtilities::CreateUnsupportedArgumentException(T  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                    {"CreateUnsupportedArgumentException", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::ArgumentException*>(nullptr, ___internal_method, value);
}
template<typename T>
inline T Animancer::AnimancerUtilities::AddAnimancerComponent(::UnityEngine::Animator*  animator)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                    {"AddAnimancerComponent", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Animator*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, animator);
}
template<typename T>
inline T Animancer::AnimancerUtilities::GetOrAddAnimancerComponent(::UnityEngine::Animator*  animator)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                    {"GetOrAddAnimancerComponent", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Animator*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, animator);
}
template<typename T>
inline T Animancer::AnimancerUtilities::GetComponentInParentOrChildren(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                    {"GetComponentInParentOrChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, gameObject);
}
template<typename T>
inline bool Animancer::AnimancerUtilities::GetComponentInParentOrChildren(::UnityEngine::GameObject*  gameObject, ::by_ref<T>  component)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                    {"GetComponentInParentOrChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, gameObject, component);
}
inline void Animancer::AnimancerUtilities::_cordl_Assert(bool  condition, ::System::Object*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"Assert", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition, message);
}
inline void Animancer::AnimancerUtilities::SetDirty(::UnityEngine::Object*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"SetDirty", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target);
}
inline void Animancer::AnimancerUtilities::EditModeSampleAnimation(::UnityEngine::AnimationClip*  clip, ::UnityEngine::Component*  component, float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"EditModeSampleAnimation", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clip, component, time);
}
inline void Animancer::AnimancerUtilities::EditModePlay(::UnityEngine::AnimationClip*  clip, ::UnityEngine::Component*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"EditModePlay", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clip, component);
}
inline void Animancer::AnimancerUtilities::Gather(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips, ::UnityEngine::AnimationClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"Gather", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clips, clip);
}
inline void Animancer::AnimancerUtilities::Gather(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::AnimationClip>>*  gatherFrom)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"Gather", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::AnimationClip>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clips, gatherFrom);
}
inline void Animancer::AnimancerUtilities::Gather(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::AnimationClip>>*  gatherFrom)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"Gather", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::AnimationClip>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clips, gatherFrom);
}
inline void Animancer::AnimancerUtilities::GatherFromAsset(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips, ::UnityEngine::Playables::PlayableAsset*  asset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"GatherFromAsset", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*>(), ::i2c::type_of<::UnityEngine::Playables::PlayableAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clips, asset);
}
inline void Animancer::AnimancerUtilities::GatherFromTracks(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips, ::System::Collections::IEnumerable*  tracks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"GatherFromTracks", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*>(), ::i2c::type_of<::System::Collections::IEnumerable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clips, tracks);
}
inline void Animancer::AnimancerUtilities::GatherFromSource(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips, ::UnityEngine::IAnimationClipSource*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"GatherFromSource", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*>(), ::i2c::type_of<::UnityEngine::IAnimationClipSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clips, source);
}
inline void Animancer::AnimancerUtilities::GatherFromSource(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips, ::System::Collections::IEnumerable*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"GatherFromSource", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*>(), ::i2c::type_of<::System::Collections::IEnumerable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clips, source);
}
inline bool Animancer::AnimancerUtilities::GatherFromSource(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips, ::System::Object*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"GatherFromSource", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, clips, source);
}
inline bool Animancer::AnimancerUtilities::TryGetFrameRate(::System::Object*  clipSource, ::by_ref<float_t>  frameRate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"TryGetFrameRate", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, clipSource, frameRate);
}
template<typename T>
inline T Animancer::AnimancerUtilities::Clone(T  original)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                    {"Clone", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, original);
}
inline bool Animancer::AnimancerUtilities::TryGetAverageAngularSpeed(::System::Object*  motion, ::by_ref<float_t>  averageAngularSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"TryGetAverageAngularSpeed", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, motion, averageAngularSpeed);
}
inline bool Animancer::AnimancerUtilities::TryGetAverageVelocity(::System::Object*  motion, ::by_ref<::UnityEngine::Vector3>  averageVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"TryGetAverageVelocity", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, motion, averageVelocity);
}
inline bool Animancer::AnimancerUtilities::IsValid(::Animancer::ITransition*  transition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"IsValid", {}, {::i2c::type_of<::Animancer::ITransition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, transition);
}
inline bool Animancer::AnimancerUtilities::TryGetIsLooping(::System::Object*  motionOrTransition, ::by_ref<bool>  isLooping)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"TryGetIsLooping", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, motionOrTransition, isLooping);
}
inline bool Animancer::AnimancerUtilities::TryGetLength(::System::Object*  motionOrTransition, ::by_ref<float_t>  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"TryGetLength", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, motionOrTransition, length);
}
inline ::System::Object* Animancer::AnimancerUtilities::GetWrappedObject(::System::Object*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                        {"GetWrappedObject", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, wrapper);
}
template<typename T>
inline bool Animancer::AnimancerUtilities::TryGetWrappedObject(::System::Object*  wrapper, ::by_ref<T>  wrapped)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerUtilities*>(),
                    {"TryGetWrappedObject", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, wrapper, wrapped);
}
// Ctor Parameters []
constexpr ::Animancer::AnimancerUtilities::AnimancerUtilities()   {
}
