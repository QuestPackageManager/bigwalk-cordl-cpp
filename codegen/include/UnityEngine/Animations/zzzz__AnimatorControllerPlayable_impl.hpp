#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimatorControllerPlayable.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimatorControllerPlayable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__AnimatorClipInfo_def.hpp"
#include "UnityEngine/zzzz__AnimatorControllerParameter_def.hpp"
#include "UnityEngine/zzzz__AnimatorStateInfo_def.hpp"
#include "UnityEngine/zzzz__AnimatorTransitionInfo_def.hpp"
#include "UnityEngine/zzzz__RuntimeAnimatorController_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Animations::AnimatorControllerPlayable (*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::RuntimeAnimatorController*)>(&::UnityEngine::Animations::AnimatorControllerPlayable::Create)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182231fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.CreateHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableHandle (*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::RuntimeAnimatorController*)>(&::UnityEngine::Animations::AnimatorControllerPlayable::CreateHandle)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182231f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"CreateHandle", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimatorControllerPlayable::*)(::UnityEngine::Playables::PlayableHandle)>(&::UnityEngine::Animations::AnimatorControllerPlayable::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1822338a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableHandle (::UnityEngine::Animations::AnimatorControllerPlayable::*)()>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f6880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.SetHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimatorControllerPlayable::*)(::UnityEngine::Playables::PlayableHandle)>(&::UnityEngine::Animations::AnimatorControllerPlayable::SetHandle)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x182233310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetHandle", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.op_Implicit___UnityEngine__Playables__Playable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (*)(::UnityEngine::Animations::AnimatorControllerPlayable)>(&::UnityEngine::Animations::AnimatorControllerPlayable::op_Implicit___UnityEngine__Playables__Playable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18222f460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Animations::AnimatorControllerPlayable>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animations::AnimatorControllerPlayable::*)(::UnityEngine::Animations::AnimatorControllerPlayable)>(&::UnityEngine::Animations::AnimatorControllerPlayable::Equals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18222f240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Animations::AnimatorControllerPlayable>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Animations::AnimatorControllerPlayable::*)(::StringW)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetFloat)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182232650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetFloat", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Animations::AnimatorControllerPlayable::*)(int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetFloat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182232510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetFloat", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.SetFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimatorControllerPlayable::*)(::StringW, float_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::SetFloat)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822332f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetFloat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.SetFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimatorControllerPlayable::*)(int32_t, float_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::SetFloat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822331b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetFloat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animations::AnimatorControllerPlayable::*)(::StringW)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetBool)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182232330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetBool", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animations::AnimatorControllerPlayable::*)(int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetBool)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822321f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetBool", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.SetBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimatorControllerPlayable::*)(::StringW, bool)>(&::UnityEngine::Animations::AnimatorControllerPlayable::SetBool)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182233190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetBool", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.SetBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimatorControllerPlayable::*)(int32_t, bool)>(&::UnityEngine::Animations::AnimatorControllerPlayable::SetBool)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182233050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetBool", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetInteger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Animations::AnimatorControllerPlayable::*)(::StringW)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetInteger)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822327c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetInteger", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetInteger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Animations::AnimatorControllerPlayable::*)(int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetInteger)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182232670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetInteger", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.SetInteger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimatorControllerPlayable::*)(::StringW, int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::SetInteger)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182233500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetInteger", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.SetInteger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimatorControllerPlayable::*)(int32_t, int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::SetInteger)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822333d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetInteger", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.SetTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimatorControllerPlayable::*)(::StringW)>(&::UnityEngine::Animations::AnimatorControllerPlayable::SetTrigger)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182233660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetTrigger", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.SetTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimatorControllerPlayable::*)(int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::SetTrigger)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182233540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetTrigger", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.ResetTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimatorControllerPlayable::*)(::StringW)>(&::UnityEngine::Animations::AnimatorControllerPlayable::ResetTrigger)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182233030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"ResetTrigger", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.ResetTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimatorControllerPlayable::*)(int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::ResetTrigger)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182232f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"ResetTrigger", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.IsParameterControlledByCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animations::AnimatorControllerPlayable::*)(::StringW)>(&::UnityEngine::Animations::AnimatorControllerPlayable::IsParameterControlledByCurve)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182232de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"IsParameterControlledByCurve", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.IsParameterControlledByCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animations::AnimatorControllerPlayable::*)(int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::IsParameterControlledByCurve)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182232ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"IsParameterControlledByCurve", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetLayerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Animations::AnimatorControllerPlayable::*)()>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetLayerCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822327e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetLayerCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetLayerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Animations::AnimatorControllerPlayable::*)(int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetLayerName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822329f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetLayerName", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetLayerIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Animations::AnimatorControllerPlayable::*)(::StringW)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetLayerIndex)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182232930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetLayerIndex", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetLayerWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Animations::AnimatorControllerPlayable::*)(int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetLayerWeight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182232a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetLayerWeight", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.SetLayerWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimatorControllerPlayable::*)(int32_t, float_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::SetLayerWeight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182233520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetLayerWeight", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetCurrentAnimatorStateInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorStateInfo (::UnityEngine::Animations::AnimatorControllerPlayable::*)(int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetCurrentAnimatorStateInfo)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1822324a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetCurrentAnimatorStateInfo", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetNextAnimatorStateInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorStateInfo (::UnityEngine::Animations::AnimatorControllerPlayable::*)(int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetNextAnimatorStateInfo)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182232b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetNextAnimatorStateInfo", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetAnimatorTransitionInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorTransitionInfo (::UnityEngine::Animations::AnimatorControllerPlayable::*)(int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetAnimatorTransitionInfo)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182232180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetAnimatorTransitionInfo", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetCurrentAnimatorClipInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::AnimatorClipInfo> (::UnityEngine::Animations::AnimatorControllerPlayable::*)(int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetCurrentAnimatorClipInfo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182232470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetCurrentAnimatorClipInfo", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetCurrentAnimatorClipInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimatorControllerPlayable::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetCurrentAnimatorClipInfo)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182232430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetCurrentAnimatorClipInfo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetNextAnimatorClipInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimatorControllerPlayable::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetNextAnimatorClipInfo)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182232b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetNextAnimatorClipInfo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetAnimatorClipInfoInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t, bool, ::System::Object*)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetAnimatorClipInfoInternal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182232160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetAnimatorClipInfoInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetCurrentAnimatorClipInfoCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Animations::AnimatorControllerPlayable::*)(int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetCurrentAnimatorClipInfoCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182232350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetCurrentAnimatorClipInfoCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetNextAnimatorClipInfoCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Animations::AnimatorControllerPlayable::*)(int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetNextAnimatorClipInfoCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182232a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetNextAnimatorClipInfoCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetNextAnimatorClipInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::AnimatorClipInfo> (::UnityEngine::Animations::AnimatorControllerPlayable::*)(int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetNextAnimatorClipInfo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182232b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetNextAnimatorClipInfo", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.IsInTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animations::AnimatorControllerPlayable::*)(int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::IsInTransition)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182232c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"IsInTransition", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetParameterCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Animations::AnimatorControllerPlayable::*)()>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetParameterCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182232bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetParameterCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorControllerParameter* (::UnityEngine::Animations::AnimatorControllerPlayable::*)(int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetParameter)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182232c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetParameter", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.CrossFadeInFixedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimatorControllerPlayable::*)(::StringW, float_t, int32_t, float_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::CrossFadeInFixedTime)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182232060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"CrossFadeInFixedTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.CrossFadeInFixedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimatorControllerPlayable::*)(int32_t, float_t, int32_t, float_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::CrossFadeInFixedTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182232050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"CrossFadeInFixedTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.CrossFade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimatorControllerPlayable::*)(::StringW, float_t, int32_t, float_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::CrossFade)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1822320f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"CrossFade", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.CrossFade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimatorControllerPlayable::*)(int32_t, float_t, int32_t, float_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::CrossFade)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822320d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"CrossFade", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.PlayInFixedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimatorControllerPlayable::*)(::StringW, int32_t, float_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::PlayInFixedTime)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182232e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"PlayInFixedTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.PlayInFixedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimatorControllerPlayable::*)(int32_t, int32_t, float_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::PlayInFixedTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182232e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"PlayInFixedTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimatorControllerPlayable::*)(::StringW, int32_t, float_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::Play)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182232e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"Play", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimatorControllerPlayable::*)(int32_t, int32_t, float_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::Play)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182232e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"Play", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.HasState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animations::AnimatorControllerPlayable::*)(int32_t, int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::HasState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182232c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"HasState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.CreateHandleInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::RuntimeAnimatorController*, ::by_ref<::UnityEngine::Playables::PlayableHandle>)>(&::UnityEngine::Animations::AnimatorControllerPlayable::CreateHandleInternal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182231ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"CreateHandleInternal", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetLayerCountInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetLayerCountInternal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822327e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetLayerCountInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetLayerNameInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetLayerNameInternal)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x182232960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetLayerNameInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetLayerIndexInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, ::StringW)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetLayerIndexInternal)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x182232810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetLayerIndexInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetLayerWeightInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetLayerWeightInternal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182232a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetLayerWeightInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.SetLayerWeightInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t, float_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::SetLayerWeightInternal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182233520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetLayerWeightInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetCurrentAnimatorStateInfoInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorStateInfo (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetCurrentAnimatorStateInfoInternal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1822324a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetCurrentAnimatorStateInfoInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetNextAnimatorStateInfoInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorStateInfo (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetNextAnimatorStateInfoInternal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182232b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetNextAnimatorStateInfoInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetAnimatorTransitionInfoInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorTransitionInfo (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetAnimatorTransitionInfoInternal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182232180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetAnimatorTransitionInfoInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetCurrentAnimatorClipInfoInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::AnimatorClipInfo> (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetCurrentAnimatorClipInfoInternal)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182232380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetCurrentAnimatorClipInfoInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetAnimatorClipInfoCountInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t, bool)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetAnimatorClipInfoCountInternal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182232150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetAnimatorClipInfoCountInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetNextAnimatorClipInfoInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::AnimatorClipInfo> (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetNextAnimatorClipInfoInternal)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182232a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetNextAnimatorClipInfoInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.IsInTransitionInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::IsInTransitionInternal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182232c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"IsInTransitionInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetParameterInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorControllerParameter* (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetParameterInternal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182232c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetParameterInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetParameterCountInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetParameterCountInternal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182232bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetParameterCountInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.StringToHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::UnityEngine::Animations::AnimatorControllerPlayable::StringToHash)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x182233690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"StringToHash", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.CrossFadeInFixedTimeInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t, float_t, int32_t, float_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::CrossFadeInFixedTimeInternal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182232050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"CrossFadeInFixedTimeInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.CrossFadeInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t, float_t, int32_t, float_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::CrossFadeInternal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822320d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"CrossFadeInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.PlayInFixedTimeInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t, int32_t, float_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::PlayInFixedTimeInternal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182232e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"PlayInFixedTimeInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.PlayInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t, int32_t, float_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::PlayInternal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182232e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"PlayInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.HasStateInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t, int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::HasStateInternal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182232c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"HasStateInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.SetFloatString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, ::StringW, float_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::SetFloatString)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1822331d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetFloatString", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.SetFloatID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t, float_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::SetFloatID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822331b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetFloatID", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetFloatString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, ::StringW)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetFloatString)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x182232530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetFloatString", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetFloatID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetFloatID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182232510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetFloatID", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.SetBoolString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, ::StringW, bool)>(&::UnityEngine::Animations::AnimatorControllerPlayable::SetBoolString)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x182233070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetBoolString", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.SetBoolID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t, bool)>(&::UnityEngine::Animations::AnimatorControllerPlayable::SetBoolID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182233050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetBoolID", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetBoolString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, ::StringW)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetBoolString)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x182232210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetBoolString", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetBoolID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetBoolID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822321f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetBoolID", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.SetIntegerString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, ::StringW, int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::SetIntegerString)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1822333f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetIntegerString", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.SetIntegerID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t, int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::SetIntegerID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822333d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetIntegerID", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetIntegerString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, ::StringW)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetIntegerString)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x182232690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetIntegerString", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetIntegerID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetIntegerID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182232670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetIntegerID", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.SetTriggerString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, ::StringW)>(&::UnityEngine::Animations::AnimatorControllerPlayable::SetTriggerString)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x182233560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetTriggerString", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.SetTriggerID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::SetTriggerID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182233540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetTriggerID", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.ResetTriggerString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, ::StringW)>(&::UnityEngine::Animations::AnimatorControllerPlayable::ResetTriggerString)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x182232f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"ResetTriggerString", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.ResetTriggerID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::ResetTriggerID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182232f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"ResetTriggerID", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.IsParameterControlledByCurveString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, ::StringW)>(&::UnityEngine::Animations::AnimatorControllerPlayable::IsParameterControlledByCurveString)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x182232cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"IsParameterControlledByCurveString", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.IsParameterControlledByCurveID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::IsParameterControlledByCurveID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182232ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"IsParameterControlledByCurveID", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.CreateHandleInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Playables::PlayableGraph>, ::System::IntPtr, ::by_ref<::UnityEngine::Playables::PlayableHandle>)>(&::UnityEngine::Animations::AnimatorControllerPlayable::CreateHandleInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182231ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"CreateHandleInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetLayerNameInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetLayerNameInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182232950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetLayerNameInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetLayerIndexInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetLayerIndexInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182232800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetLayerIndexInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetCurrentAnimatorStateInfoInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t, ::by_ref<::UnityEngine::AnimatorStateInfo>)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetCurrentAnimatorStateInfoInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182232490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetCurrentAnimatorStateInfoInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::AnimatorStateInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetNextAnimatorStateInfoInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t, ::by_ref<::UnityEngine::AnimatorStateInfo>)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetNextAnimatorStateInfoInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182232b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetNextAnimatorStateInfoInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::AnimatorStateInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetAnimatorTransitionInfoInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t, ::by_ref<::UnityEngine::AnimatorTransitionInfo>)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetAnimatorTransitionInfoInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182232170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetAnimatorTransitionInfoInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::AnimatorTransitionInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetCurrentAnimatorClipInfoInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetCurrentAnimatorClipInfoInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182232370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetCurrentAnimatorClipInfoInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetNextAnimatorClipInfoInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetNextAnimatorClipInfoInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182232a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetNextAnimatorClipInfoInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.StringToHash_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Animations::AnimatorControllerPlayable::StringToHash_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182233680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"StringToHash_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.SetFloatString_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, float_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::SetFloatString_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822331c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetFloatString_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetFloatString_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetFloatString_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182232520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetFloatString_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.SetBoolString_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, bool)>(&::UnityEngine::Animations::AnimatorControllerPlayable::SetBoolString_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182233060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetBoolString_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetBoolString_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetBoolString_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182232200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetBoolString_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.SetIntegerString_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t)>(&::UnityEngine::Animations::AnimatorControllerPlayable::SetIntegerString_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822333e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetIntegerString_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.GetIntegerString_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Animations::AnimatorControllerPlayable::GetIntegerString_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182232680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetIntegerString_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.SetTriggerString_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Animations::AnimatorControllerPlayable::SetTriggerString_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182233550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetTriggerString_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.ResetTriggerString_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Animations::AnimatorControllerPlayable::ResetTriggerString_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182232f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"ResetTriggerString_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorControllerPlayable.IsParameterControlledByCurveString_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Animations::AnimatorControllerPlayable::IsParameterControlledByCurveString_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182232cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"IsParameterControlledByCurveString_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Animations::AnimatorControllerPlayable::setStaticF_m_NullPlayable(::UnityEngine::Animations::AnimatorControllerPlayable  value)  {
::cordl_internals::setStaticField<::UnityEngine::Animations::AnimatorControllerPlayable, "m_NullPlayable", ::UnityEngine::Animations::AnimatorControllerPlayable>(std::forward<::UnityEngine::Animations::AnimatorControllerPlayable>(value));
}
inline ::UnityEngine::Animations::AnimatorControllerPlayable UnityEngine::Animations::AnimatorControllerPlayable::getStaticF_m_NullPlayable()  {
return ::cordl_internals::getStaticField<::UnityEngine::Animations::AnimatorControllerPlayable, "m_NullPlayable", ::UnityEngine::Animations::AnimatorControllerPlayable>();
}
inline ::UnityEngine::Animations::AnimatorControllerPlayable UnityEngine::Animations::AnimatorControllerPlayable::Create(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::RuntimeAnimatorController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::AnimatorControllerPlayable>(nullptr, ___internal_method, graph, controller);
}
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Animations::AnimatorControllerPlayable::CreateHandle(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::RuntimeAnimatorController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"CreateHandle", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle>(nullptr, ___internal_method, graph, controller);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::_ctor(::UnityEngine::Playables::PlayableHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle);
}
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Animations::AnimatorControllerPlayable::GetHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle>(*this, ___internal_method);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::SetHandle(::UnityEngine::Playables::PlayableHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetHandle", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Animations::AnimatorControllerPlayable::op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Animations::AnimatorControllerPlayable  playable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Animations::AnimatorControllerPlayable>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(nullptr, ___internal_method, playable);
}
inline bool UnityEngine::Animations::AnimatorControllerPlayable::Equals(::UnityEngine::Animations::AnimatorControllerPlayable  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Animations::AnimatorControllerPlayable>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline float_t UnityEngine::Animations::AnimatorControllerPlayable::GetFloat(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetFloat", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, name);
}
inline float_t UnityEngine::Animations::AnimatorControllerPlayable::GetFloat(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetFloat", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, id);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::SetFloat(::StringW  name, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetFloat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, value);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::SetFloat(int32_t  id, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetFloat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, id, value);
}
inline bool UnityEngine::Animations::AnimatorControllerPlayable::GetBool(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetBool", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, name);
}
inline bool UnityEngine::Animations::AnimatorControllerPlayable::GetBool(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetBool", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, id);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::SetBool(::StringW  name, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetBool", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, value);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::SetBool(int32_t  id, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetBool", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, id, value);
}
inline int32_t UnityEngine::Animations::AnimatorControllerPlayable::GetInteger(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetInteger", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, name);
}
inline int32_t UnityEngine::Animations::AnimatorControllerPlayable::GetInteger(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetInteger", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, id);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::SetInteger(::StringW  name, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetInteger", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, value);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::SetInteger(int32_t  id, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetInteger", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, id, value);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::SetTrigger(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetTrigger", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::SetTrigger(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetTrigger", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, id);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::ResetTrigger(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"ResetTrigger", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::ResetTrigger(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"ResetTrigger", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, id);
}
inline bool UnityEngine::Animations::AnimatorControllerPlayable::IsParameterControlledByCurve(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"IsParameterControlledByCurve", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, name);
}
inline bool UnityEngine::Animations::AnimatorControllerPlayable::IsParameterControlledByCurve(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"IsParameterControlledByCurve", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, id);
}
inline int32_t UnityEngine::Animations::AnimatorControllerPlayable::GetLayerCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetLayerCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW UnityEngine::Animations::AnimatorControllerPlayable::GetLayerName(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetLayerName", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, layerIndex);
}
inline int32_t UnityEngine::Animations::AnimatorControllerPlayable::GetLayerIndex(::StringW  layerName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetLayerIndex", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, layerName);
}
inline float_t UnityEngine::Animations::AnimatorControllerPlayable::GetLayerWeight(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetLayerWeight", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, layerIndex);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::SetLayerWeight(int32_t  layerIndex, float_t  weight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetLayerWeight", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, layerIndex, weight);
}
inline ::UnityEngine::AnimatorStateInfo UnityEngine::Animations::AnimatorControllerPlayable::GetCurrentAnimatorStateInfo(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetCurrentAnimatorStateInfo", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorStateInfo>(*this, ___internal_method, layerIndex);
}
inline ::UnityEngine::AnimatorStateInfo UnityEngine::Animations::AnimatorControllerPlayable::GetNextAnimatorStateInfo(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetNextAnimatorStateInfo", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorStateInfo>(*this, ___internal_method, layerIndex);
}
inline ::UnityEngine::AnimatorTransitionInfo UnityEngine::Animations::AnimatorControllerPlayable::GetAnimatorTransitionInfo(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetAnimatorTransitionInfo", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorTransitionInfo>(*this, ___internal_method, layerIndex);
}
inline ::ArrayW<::UnityEngine::AnimatorClipInfo> UnityEngine::Animations::AnimatorControllerPlayable::GetCurrentAnimatorClipInfo(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetCurrentAnimatorClipInfo", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::AnimatorClipInfo>>(*this, ___internal_method, layerIndex);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::GetCurrentAnimatorClipInfo(int32_t  layerIndex, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*  clips)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetCurrentAnimatorClipInfo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, layerIndex, clips);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::GetNextAnimatorClipInfo(int32_t  layerIndex, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*  clips)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetNextAnimatorClipInfo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, layerIndex, clips);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::GetAnimatorClipInfoInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex, bool  isCurrent, ::System::Object*  clips)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetAnimatorClipInfoInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, layerIndex, isCurrent, clips);
}
inline int32_t UnityEngine::Animations::AnimatorControllerPlayable::GetCurrentAnimatorClipInfoCount(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetCurrentAnimatorClipInfoCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, layerIndex);
}
inline int32_t UnityEngine::Animations::AnimatorControllerPlayable::GetNextAnimatorClipInfoCount(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetNextAnimatorClipInfoCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, layerIndex);
}
inline ::ArrayW<::UnityEngine::AnimatorClipInfo> UnityEngine::Animations::AnimatorControllerPlayable::GetNextAnimatorClipInfo(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetNextAnimatorClipInfo", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::AnimatorClipInfo>>(*this, ___internal_method, layerIndex);
}
inline bool UnityEngine::Animations::AnimatorControllerPlayable::IsInTransition(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"IsInTransition", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, layerIndex);
}
inline int32_t UnityEngine::Animations::AnimatorControllerPlayable::GetParameterCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetParameterCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityEngine::AnimatorControllerParameter* UnityEngine::Animations::AnimatorControllerPlayable::GetParameter(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetParameter", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorControllerParameter*>(*this, ___internal_method, index);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::CrossFadeInFixedTime(::StringW  stateName, float_t  transitionDuration, int32_t  layer, float_t  fixedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"CrossFadeInFixedTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateName, transitionDuration, layer, fixedTime);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::CrossFadeInFixedTime(int32_t  stateNameHash, float_t  transitionDuration, int32_t  layer, float_t  fixedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"CrossFadeInFixedTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateNameHash, transitionDuration, layer, fixedTime);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::CrossFade(::StringW  stateName, float_t  transitionDuration, int32_t  layer, float_t  normalizedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"CrossFade", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateName, transitionDuration, layer, normalizedTime);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::CrossFade(int32_t  stateNameHash, float_t  transitionDuration, int32_t  layer, float_t  normalizedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"CrossFade", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateNameHash, transitionDuration, layer, normalizedTime);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::PlayInFixedTime(::StringW  stateName, int32_t  layer, float_t  fixedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"PlayInFixedTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateName, layer, fixedTime);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::PlayInFixedTime(int32_t  stateNameHash, int32_t  layer, float_t  fixedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"PlayInFixedTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateNameHash, layer, fixedTime);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::Play(::StringW  stateName, int32_t  layer, float_t  normalizedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"Play", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateName, layer, normalizedTime);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::Play(int32_t  stateNameHash, int32_t  layer, float_t  normalizedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"Play", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateNameHash, layer, normalizedTime);
}
inline bool UnityEngine::Animations::AnimatorControllerPlayable::HasState(int32_t  layerIndex, int32_t  stateID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"HasState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, layerIndex, stateID);
}
inline bool UnityEngine::Animations::AnimatorControllerPlayable::CreateHandleInternal(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::RuntimeAnimatorController*  controller, ::by_ref<::UnityEngine::Playables::PlayableHandle>  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"CreateHandleInternal", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, graph, controller, handle);
}
inline int32_t UnityEngine::Animations::AnimatorControllerPlayable::GetLayerCountInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetLayerCountInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle);
}
inline ::StringW UnityEngine::Animations::AnimatorControllerPlayable::GetLayerNameInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetLayerNameInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, handle, layerIndex);
}
inline int32_t UnityEngine::Animations::AnimatorControllerPlayable::GetLayerIndexInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::StringW  layerName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetLayerIndexInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle, layerName);
}
inline float_t UnityEngine::Animations::AnimatorControllerPlayable::GetLayerWeightInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetLayerWeightInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, handle, layerIndex);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::SetLayerWeightInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex, float_t  weight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetLayerWeightInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, layerIndex, weight);
}
inline ::UnityEngine::AnimatorStateInfo UnityEngine::Animations::AnimatorControllerPlayable::GetCurrentAnimatorStateInfoInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetCurrentAnimatorStateInfoInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorStateInfo>(nullptr, ___internal_method, handle, layerIndex);
}
inline ::UnityEngine::AnimatorStateInfo UnityEngine::Animations::AnimatorControllerPlayable::GetNextAnimatorStateInfoInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetNextAnimatorStateInfoInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorStateInfo>(nullptr, ___internal_method, handle, layerIndex);
}
inline ::UnityEngine::AnimatorTransitionInfo UnityEngine::Animations::AnimatorControllerPlayable::GetAnimatorTransitionInfoInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetAnimatorTransitionInfoInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorTransitionInfo>(nullptr, ___internal_method, handle, layerIndex);
}
inline ::ArrayW<::UnityEngine::AnimatorClipInfo> UnityEngine::Animations::AnimatorControllerPlayable::GetCurrentAnimatorClipInfoInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetCurrentAnimatorClipInfoInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::AnimatorClipInfo>>(nullptr, ___internal_method, handle, layerIndex);
}
inline int32_t UnityEngine::Animations::AnimatorControllerPlayable::GetAnimatorClipInfoCountInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex, bool  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetAnimatorClipInfoCountInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle, layerIndex, current);
}
inline ::ArrayW<::UnityEngine::AnimatorClipInfo> UnityEngine::Animations::AnimatorControllerPlayable::GetNextAnimatorClipInfoInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetNextAnimatorClipInfoInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::AnimatorClipInfo>>(nullptr, ___internal_method, handle, layerIndex);
}
inline bool UnityEngine::Animations::AnimatorControllerPlayable::IsInTransitionInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"IsInTransitionInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, layerIndex);
}
inline ::UnityEngine::AnimatorControllerParameter* UnityEngine::Animations::AnimatorControllerPlayable::GetParameterInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetParameterInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorControllerParameter*>(nullptr, ___internal_method, handle, index);
}
inline int32_t UnityEngine::Animations::AnimatorControllerPlayable::GetParameterCountInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetParameterCountInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle);
}
inline int32_t UnityEngine::Animations::AnimatorControllerPlayable::StringToHash(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"StringToHash", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, name);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::CrossFadeInFixedTimeInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  stateNameHash, float_t  transitionDuration, int32_t  layer, float_t  fixedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"CrossFadeInFixedTimeInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, stateNameHash, transitionDuration, layer, fixedTime);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::CrossFadeInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  stateNameHash, float_t  transitionDuration, int32_t  layer, float_t  normalizedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"CrossFadeInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, stateNameHash, transitionDuration, layer, normalizedTime);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::PlayInFixedTimeInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  stateNameHash, int32_t  layer, float_t  fixedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"PlayInFixedTimeInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, stateNameHash, layer, fixedTime);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::PlayInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  stateNameHash, int32_t  layer, float_t  normalizedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"PlayInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, stateNameHash, layer, normalizedTime);
}
inline bool UnityEngine::Animations::AnimatorControllerPlayable::HasStateInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex, int32_t  stateID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"HasStateInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, layerIndex, stateID);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::SetFloatString(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::StringW  name, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetFloatString", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, name, value);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::SetFloatID(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  id, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetFloatID", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, id, value);
}
inline float_t UnityEngine::Animations::AnimatorControllerPlayable::GetFloatString(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetFloatString", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, handle, name);
}
inline float_t UnityEngine::Animations::AnimatorControllerPlayable::GetFloatID(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetFloatID", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, handle, id);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::SetBoolString(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::StringW  name, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetBoolString", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, name, value);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::SetBoolID(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  id, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetBoolID", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, id, value);
}
inline bool UnityEngine::Animations::AnimatorControllerPlayable::GetBoolString(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetBoolString", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, name);
}
inline bool UnityEngine::Animations::AnimatorControllerPlayable::GetBoolID(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetBoolID", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, id);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::SetIntegerString(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::StringW  name, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetIntegerString", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, name, value);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::SetIntegerID(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  id, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetIntegerID", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, id, value);
}
inline int32_t UnityEngine::Animations::AnimatorControllerPlayable::GetIntegerString(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetIntegerString", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle, name);
}
inline int32_t UnityEngine::Animations::AnimatorControllerPlayable::GetIntegerID(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetIntegerID", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle, id);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::SetTriggerString(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetTriggerString", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, name);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::SetTriggerID(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetTriggerID", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, id);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::ResetTriggerString(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"ResetTriggerString", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, name);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::ResetTriggerID(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"ResetTriggerID", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, id);
}
inline bool UnityEngine::Animations::AnimatorControllerPlayable::IsParameterControlledByCurveString(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"IsParameterControlledByCurveString", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, name);
}
inline bool UnityEngine::Animations::AnimatorControllerPlayable::IsParameterControlledByCurveID(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"IsParameterControlledByCurveID", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, id);
}
inline bool UnityEngine::Animations::AnimatorControllerPlayable::CreateHandleInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph>  graph, ::System::IntPtr  controller, ::by_ref<::UnityEngine::Playables::PlayableHandle>  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"CreateHandleInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, graph, controller, handle);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::GetLayerNameInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetLayerNameInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, layerIndex, ret);
}
inline int32_t UnityEngine::Animations::AnimatorControllerPlayable::GetLayerIndexInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  layerName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetLayerIndexInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle, layerName);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::GetCurrentAnimatorStateInfoInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex, ::by_ref<::UnityEngine::AnimatorStateInfo>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetCurrentAnimatorStateInfoInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::AnimatorStateInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, layerIndex, ret);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::GetNextAnimatorStateInfoInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex, ::by_ref<::UnityEngine::AnimatorStateInfo>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetNextAnimatorStateInfoInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::AnimatorStateInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, layerIndex, ret);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::GetAnimatorTransitionInfoInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex, ::by_ref<::UnityEngine::AnimatorTransitionInfo>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetAnimatorTransitionInfoInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::AnimatorTransitionInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, layerIndex, ret);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::GetCurrentAnimatorClipInfoInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetCurrentAnimatorClipInfoInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, layerIndex, ret);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::GetNextAnimatorClipInfoInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetNextAnimatorClipInfoInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, layerIndex, ret);
}
inline int32_t UnityEngine::Animations::AnimatorControllerPlayable::StringToHash_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"StringToHash_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, name);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::SetFloatString_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetFloatString_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, name, value);
}
inline float_t UnityEngine::Animations::AnimatorControllerPlayable::GetFloatString_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetFloatString_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, handle, name);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::SetBoolString_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetBoolString_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, name, value);
}
inline bool UnityEngine::Animations::AnimatorControllerPlayable::GetBoolString_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetBoolString_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, name);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::SetIntegerString_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetIntegerString_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, name, value);
}
inline int32_t UnityEngine::Animations::AnimatorControllerPlayable::GetIntegerString_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"GetIntegerString_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle, name);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::SetTriggerString_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"SetTriggerString_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, name);
}
inline void UnityEngine::Animations::AnimatorControllerPlayable::ResetTriggerString_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"ResetTriggerString_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, name);
}
inline bool UnityEngine::Animations::AnimatorControllerPlayable::IsParameterControlledByCurveString_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorControllerPlayable>(),
                        {"IsParameterControlledByCurveString_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, name);
}
/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr  UnityEngine::Animations::AnimatorControllerPlayable::operator ::UnityEngine::Playables::IPlayable*()  {
return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Playables::IPlayable"
constexpr ::UnityEngine::Playables::IPlayable* UnityEngine::Animations::AnimatorControllerPlayable::i___UnityEngine__Playables__IPlayable()  {
return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimatorControllerPlayable>"
constexpr  UnityEngine::Animations::AnimatorControllerPlayable::operator ::System::IEquatable_1<::UnityEngine::Animations::AnimatorControllerPlayable>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Animations::AnimatorControllerPlayable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Animations::AnimatorControllerPlayable>"
constexpr ::System::IEquatable_1<::UnityEngine::Animations::AnimatorControllerPlayable>* UnityEngine::Animations::AnimatorControllerPlayable::i___System__IEquatable_1___UnityEngine__Animations__AnimatorControllerPlayable_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Animations::AnimatorControllerPlayable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Animations::AnimatorControllerPlayable::AnimatorControllerPlayable(::UnityEngine::Playables::PlayableHandle  m_Handle) noexcept  {
this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::AnimatorControllerPlayable::AnimatorControllerPlayable()   {
}
